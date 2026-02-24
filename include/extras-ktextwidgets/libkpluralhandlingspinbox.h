#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKPLURALHANDLINGSPINBOX_H
#define SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKPLURALHANDLINGSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KPluralHandlingSpinBox*
///
const QMetaObject* k_pluralhandlingspinbox_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback const QMetaObject* func()
///
void k_pluralhandlingspinbox_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_meta_object` instead
///
#define k_pluralhandlingspinbox_qbase_meta_object k_pluralhandlingspinbox_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KPluralHandlingSpinBox*
///
const QMetaObject* k_pluralhandlingspinbox_super_meta_object(void* self);

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_metacast` instead
///
#define k_pluralhandlingspinbox_qbase_metacast k_pluralhandlingspinbox_super_metacast

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_metacall` instead
///
#define k_pluralhandlingspinbox_qbase_metacall k_pluralhandlingspinbox_super_metacall

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
void k_pluralhandlingspinbox_set_suffix(void* self, void* suffix);

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
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_value(void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_prefix(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_suffix(void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_clean_text(void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_single_step(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__StepType
///
int32_t k_pluralhandlingspinbox_step_type(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_display_integer_base(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t k_pluralhandlingspinbox_button_symbols(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t k_pluralhandlingspinbox_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_special_value_text(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_wrapping(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_read_only(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_keyboard_tracking(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_pluralhandlingspinbox_alignment(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_frame(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_accelerated(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_group_separator_shown(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_win_id(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KPluralHandlingSpinBox*
///
QStyle* k_pluralhandlingspinbox_style(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KPluralHandlingSpinBox*
///
/// @return enum Qt__WindowModality
///
int32_t k_pluralhandlingspinbox_window_modality(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
///
bool k_pluralhandlingspinbox_is_enabled_to(void* self, void* param1);

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
/// @param self KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KPluralHandlingSpinBox*
///
const QRect* k_pluralhandlingspinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KPluralHandlingSpinBox*
///
QPoint* k_pluralhandlingspinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param minimumSize QSize*
///
void k_pluralhandlingspinbox_set_minimum_size(void* self, void* minimumSize);

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
void k_pluralhandlingspinbox_set_maximum_size(void* self, void* maximumSize);

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
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPluralHandlingSpinBox*
/// @param sizeIncrement QSize*
///
void k_pluralhandlingspinbox_set_size_increment(void* self, void* sizeIncrement);

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
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param baseSize QSize*
///
void k_pluralhandlingspinbox_set_base_size(void* self, void* baseSize);

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
void k_pluralhandlingspinbox_set_fixed_size(void* self, void* fixedSize);

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
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KPluralHandlingSpinBox*
///
const QPalette* k_pluralhandlingspinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPluralHandlingSpinBox*
/// @param palette QPalette*
///
void k_pluralhandlingspinbox_set_palette(void* self, void* palette);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pluralhandlingspinbox_background_role(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pluralhandlingspinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KPluralHandlingSpinBox*
///
const QFont* k_pluralhandlingspinbox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPluralHandlingSpinBox*
/// @param font QFont*
///
void k_pluralhandlingspinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KPluralHandlingSpinBox*
///
QFontMetrics* k_pluralhandlingspinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KPluralHandlingSpinBox*
///
QFontInfo* k_pluralhandlingspinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KPluralHandlingSpinBox*
///
QCursor* k_pluralhandlingspinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPluralHandlingSpinBox*
/// @param cursor QCursor*
///
void k_pluralhandlingspinbox_set_cursor(void* self, void* cursor);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_under_mouse(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPluralHandlingSpinBox*
/// @param mask QBitmap*
///
void k_pluralhandlingspinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPluralHandlingSpinBox*
/// @param mask QRegion*
///
void k_pluralhandlingspinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_mask(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QGraphicsEffect* k_pluralhandlingspinbox_graphics_effect(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
///
void k_pluralhandlingspinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KPluralHandlingSpinBox*
///
QIcon* k_pluralhandlingspinbox_window_icon(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_icon_text(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_role(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_file_path(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window_modified(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_tool_tip(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_tool_tip_duration(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_status_tip(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_accessible_name(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_accessible_description(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_pluralhandlingspinbox_layout_direction(void* self);

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
void k_pluralhandlingspinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KPluralHandlingSpinBox*
///
QLocale* k_pluralhandlingspinbox_locale(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_left_to_right(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_active_window(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_pluralhandlingspinbox_focus_policy(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_focus(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KPluralHandlingSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_pluralhandlingspinbox_context_menu_policy(void* self);

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
void k_pluralhandlingspinbox_grab_mouse2(void* self, void* param1);

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
int32_t k_pluralhandlingspinbox_grab_shortcut(void* self, void* key);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_updates_enabled(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QGraphicsProxyWidget* k_pluralhandlingspinbox_graphics_proxy_widget(void* self);

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
void k_pluralhandlingspinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRegion*
///
void k_pluralhandlingspinbox_update4(void* self, void* param1);

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
void k_pluralhandlingspinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRegion*
///
void k_pluralhandlingspinbox_repaint4(void* self, void* param1);

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
void k_pluralhandlingspinbox_move2(void* self, void* param1);

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
void k_pluralhandlingspinbox_resize2(void* self, void* param1);

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
void k_pluralhandlingspinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPluralHandlingSpinBox*
///
char* k_pluralhandlingspinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPluralHandlingSpinBox*
/// @param geometry char*
///
bool k_pluralhandlingspinbox_restore_geometry(void* self, char* geometry);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
///
bool k_pluralhandlingspinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_pluralhandlingspinbox_window_state(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QSizePolicy* k_pluralhandlingspinbox_size_policy(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_visible_region(void* self);

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
void k_pluralhandlingspinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KPluralHandlingSpinBox*
///
QMargins* k_pluralhandlingspinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KPluralHandlingSpinBox*
///
QLayout* k_pluralhandlingspinbox_layout(void* self);

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
void k_pluralhandlingspinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_accept_drops(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return libqt_list of QAction*
///
libqt_list k_pluralhandlingspinbox_actions(void* self);

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
QAction* k_pluralhandlingspinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pluralhandlingspinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pluralhandlingspinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_parent_widget(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_pluralhandlingspinbox_window_flags(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return enum Qt__WindowType
///
int32_t k_pluralhandlingspinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_pluralhandlingspinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPluralHandlingSpinBox*
/// @param x int
/// @param y int
///
QWidget* k_pluralhandlingspinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPluralHandlingSpinBox*
/// @param p QPoint*
///
QWidget* k_pluralhandlingspinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPluralHandlingSpinBox*
/// @param p QPointF*
///
QWidget* k_pluralhandlingspinbox_child_at3(void* self, void* p);

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
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_pluralhandlingspinbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KPluralHandlingSpinBox*
/// @param child QWidget*
///
bool k_pluralhandlingspinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_auto_fill_background(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QBackingStore* k_pluralhandlingspinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KPluralHandlingSpinBox*
///
QWindow* k_pluralhandlingspinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KPluralHandlingSpinBox*
///
QScreen* k_pluralhandlingspinbox_screen(void* self);

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
void k_pluralhandlingspinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QIcon* icon)
///
void k_pluralhandlingspinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

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
void k_pluralhandlingspinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QPoint* pos)
///
void k_pluralhandlingspinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_pluralhandlingspinbox_input_method_hints(void* self);

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
void k_pluralhandlingspinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pluralhandlingspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

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
void k_pluralhandlingspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_pluralhandlingspinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pluralhandlingspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

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
void k_pluralhandlingspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPluralHandlingSpinBox*
/// @param rectangle QRect*
///
QPixmap* k_pluralhandlingspinbox_grab1(void* self, void* rectangle);

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
int32_t k_pluralhandlingspinbox_grab_shortcut2(void* self, void* key, int32_t context);

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
/// @param self KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_object_name(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_signals_blocked(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QThread* k_pluralhandlingspinbox_thread(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
/// @return libqt_list of QObject*
///
libqt_list k_pluralhandlingspinbox_children(void* self);

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
QMetaObject__Connection* k_pluralhandlingspinbox_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPluralHandlingSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_pluralhandlingspinbox_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
/// @param receiver QObject*
///
bool k_pluralhandlingspinbox_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_pluralhandlingspinbox_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPluralHandlingSpinBox*
/// @param name const char*
/// @param value QVariant*
///
bool k_pluralhandlingspinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPluralHandlingSpinBox*
/// @param name const char*
///
QVariant* k_pluralhandlingspinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPluralHandlingSpinBox*
///
const char** k_pluralhandlingspinbox_dynamic_property_names(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
const QBindingStorage* k_pluralhandlingspinbox_binding_storage2(void* self);

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
/// @param self KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPluralHandlingSpinBox*
/// @param classname const char*
///
bool k_pluralhandlingspinbox_inherits(void* self, const char* classname);

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
QMetaObject__Connection* k_pluralhandlingspinbox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_pluralhandlingspinbox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPluralHandlingSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
/// @param signal const char*
///
bool k_pluralhandlingspinbox_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_pluralhandlingspinbox_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KPluralHandlingSpinBox*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect23(void* self, void* receiver, const char* member);

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
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_depth(void* self);

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_event` instead
///
#define k_pluralhandlingspinbox_qbase_event k_pluralhandlingspinbox_super_event

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
/// @param self KPluralHandlingSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_pluralhandlingspinbox_validate(void* self, const char* input, int* pos);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_validate` instead
///
#define k_pluralhandlingspinbox_qbase_validate k_pluralhandlingspinbox_super_validate

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_pluralhandlingspinbox_super_validate(void* self, const char* input, int* pos);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* input, int* pos)
///
void k_pluralhandlingspinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param text const char*
///
int32_t k_pluralhandlingspinbox_value_from_text(void* self, const char* text);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_value_from_text` instead
///
#define k_pluralhandlingspinbox_qbase_value_from_text k_pluralhandlingspinbox_super_value_from_text

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param text const char*
///
int32_t k_pluralhandlingspinbox_super_value_from_text(void* self, const char* text);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* text)
///
void k_pluralhandlingspinbox_on_value_from_text(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param val int
///
const char* k_pluralhandlingspinbox_text_from_value(void* self, int val);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_text_from_value` instead
///
#define k_pluralhandlingspinbox_qbase_text_from_value k_pluralhandlingspinbox_super_text_from_value

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param val int
///
const char* k_pluralhandlingspinbox_super_text_from_value(void* self, int val);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback const char* func(KPluralHandlingSpinBox* self, int val)
///
void k_pluralhandlingspinbox_on_text_from_value(void* self, const char* (*callback)(void*, int));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param str const char*
///
void k_pluralhandlingspinbox_fixup(void* self, const char* str);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_fixup` instead
///
#define k_pluralhandlingspinbox_qbase_fixup k_pluralhandlingspinbox_super_fixup

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param str const char*
///
void k_pluralhandlingspinbox_super_fixup(void* self, const char* str);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* str)
///
void k_pluralhandlingspinbox_on_fixup(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size_hint(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_size_hint` instead
///
#define k_pluralhandlingspinbox_qbase_size_hint k_pluralhandlingspinbox_super_size_hint

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_super_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QSize* func()
///
void k_pluralhandlingspinbox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_minimum_size_hint` instead
///
#define k_pluralhandlingspinbox_qbase_minimum_size_hint k_pluralhandlingspinbox_super_minimum_size_hint

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_super_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QSize* func()
///
void k_pluralhandlingspinbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pluralhandlingspinbox_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_input_method_query` instead
///
#define k_pluralhandlingspinbox_qbase_input_method_query k_pluralhandlingspinbox_super_input_method_query

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pluralhandlingspinbox_super_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QVariant* func(KPluralHandlingSpinBox* self, enum Qt__InputMethodQuery param1)
///
void k_pluralhandlingspinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_step_by` instead
///
#define k_pluralhandlingspinbox_qbase_step_by k_pluralhandlingspinbox_super_step_by

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_clear` instead
///
#define k_pluralhandlingspinbox_qbase_clear k_pluralhandlingspinbox_super_clear

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
/// @param callback void func()
///
void k_pluralhandlingspinbox_on_clear(void* self, void (*callback)());

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_resize_event` instead
///
#define k_pluralhandlingspinbox_qbase_resize_event k_pluralhandlingspinbox_super_resize_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_key_press_event` instead
///
#define k_pluralhandlingspinbox_qbase_key_press_event k_pluralhandlingspinbox_super_key_press_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_key_release_event` instead
///
#define k_pluralhandlingspinbox_qbase_key_release_event k_pluralhandlingspinbox_super_key_release_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_wheel_event` instead
///
#define k_pluralhandlingspinbox_qbase_wheel_event k_pluralhandlingspinbox_super_wheel_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_focus_in_event` instead
///
#define k_pluralhandlingspinbox_qbase_focus_in_event k_pluralhandlingspinbox_super_focus_in_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_focus_out_event` instead
///
#define k_pluralhandlingspinbox_qbase_focus_out_event k_pluralhandlingspinbox_super_focus_out_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_context_menu_event` instead
///
#define k_pluralhandlingspinbox_qbase_context_menu_event k_pluralhandlingspinbox_super_context_menu_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_change_event` instead
///
#define k_pluralhandlingspinbox_qbase_change_event k_pluralhandlingspinbox_super_change_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_close_event` instead
///
#define k_pluralhandlingspinbox_qbase_close_event k_pluralhandlingspinbox_super_close_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_hide_event` instead
///
#define k_pluralhandlingspinbox_qbase_hide_event k_pluralhandlingspinbox_super_hide_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_mouse_press_event` instead
///
#define k_pluralhandlingspinbox_qbase_mouse_press_event k_pluralhandlingspinbox_super_mouse_press_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_mouse_release_event` instead
///
#define k_pluralhandlingspinbox_qbase_mouse_release_event k_pluralhandlingspinbox_super_mouse_release_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_mouse_move_event` instead
///
#define k_pluralhandlingspinbox_qbase_mouse_move_event k_pluralhandlingspinbox_super_mouse_move_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_timer_event` instead
///
#define k_pluralhandlingspinbox_qbase_timer_event k_pluralhandlingspinbox_super_timer_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_paint_event` instead
///
#define k_pluralhandlingspinbox_qbase_paint_event k_pluralhandlingspinbox_super_paint_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_show_event` instead
///
#define k_pluralhandlingspinbox_qbase_show_event k_pluralhandlingspinbox_super_show_event

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
/// @param self KPluralHandlingSpinBox*
/// @param option QStyleOptionSpinBox*
///
void k_pluralhandlingspinbox_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_init_style_option` instead
///
#define k_pluralhandlingspinbox_qbase_init_style_option k_pluralhandlingspinbox_super_init_style_option

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param option QStyleOptionSpinBox*
///
void k_pluralhandlingspinbox_super_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option)
///
void k_pluralhandlingspinbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t k_pluralhandlingspinbox_step_enabled(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_step_enabled` instead
///
#define k_pluralhandlingspinbox_qbase_step_enabled k_pluralhandlingspinbox_super_step_enabled

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t k_pluralhandlingspinbox_super_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func()
///
void k_pluralhandlingspinbox_on_step_enabled(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_dev_type(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_dev_type` instead
///
#define k_pluralhandlingspinbox_qbase_dev_type k_pluralhandlingspinbox_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func()
///
void k_pluralhandlingspinbox_on_dev_type(void* self, int32_t (*callback)());

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_set_visible` instead
///
#define k_pluralhandlingspinbox_qbase_set_visible k_pluralhandlingspinbox_super_set_visible

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
/// @param self KPluralHandlingSpinBox*
/// @param param1 int
///
int32_t k_pluralhandlingspinbox_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_height_for_width` instead
///
#define k_pluralhandlingspinbox_qbase_height_for_width k_pluralhandlingspinbox_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 int
///
int32_t k_pluralhandlingspinbox_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, int param1)
///
void k_pluralhandlingspinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_has_height_for_width` instead
///
#define k_pluralhandlingspinbox_qbase_has_height_for_width k_pluralhandlingspinbox_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func()
///
void k_pluralhandlingspinbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QPaintEngine* k_pluralhandlingspinbox_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_paint_engine` instead
///
#define k_pluralhandlingspinbox_qbase_paint_engine k_pluralhandlingspinbox_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QPaintEngine* k_pluralhandlingspinbox_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPaintEngine* func()
///
void k_pluralhandlingspinbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_mouse_double_click_event` instead
///
#define k_pluralhandlingspinbox_qbase_mouse_double_click_event k_pluralhandlingspinbox_super_mouse_double_click_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_enter_event` instead
///
#define k_pluralhandlingspinbox_qbase_enter_event k_pluralhandlingspinbox_super_enter_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_leave_event` instead
///
#define k_pluralhandlingspinbox_qbase_leave_event k_pluralhandlingspinbox_super_leave_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_move_event` instead
///
#define k_pluralhandlingspinbox_qbase_move_event k_pluralhandlingspinbox_super_move_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_tablet_event` instead
///
#define k_pluralhandlingspinbox_qbase_tablet_event k_pluralhandlingspinbox_super_tablet_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_action_event` instead
///
#define k_pluralhandlingspinbox_qbase_action_event k_pluralhandlingspinbox_super_action_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_drag_enter_event` instead
///
#define k_pluralhandlingspinbox_qbase_drag_enter_event k_pluralhandlingspinbox_super_drag_enter_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_drag_move_event` instead
///
#define k_pluralhandlingspinbox_qbase_drag_move_event k_pluralhandlingspinbox_super_drag_move_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_drag_leave_event` instead
///
#define k_pluralhandlingspinbox_qbase_drag_leave_event k_pluralhandlingspinbox_super_drag_leave_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_drop_event` instead
///
#define k_pluralhandlingspinbox_qbase_drop_event k_pluralhandlingspinbox_super_drop_event

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
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pluralhandlingspinbox_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_native_event` instead
///
#define k_pluralhandlingspinbox_qbase_native_event k_pluralhandlingspinbox_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pluralhandlingspinbox_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

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
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pluralhandlingspinbox_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_metric` instead
///
#define k_pluralhandlingspinbox_qbase_metric k_pluralhandlingspinbox_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pluralhandlingspinbox_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_pluralhandlingspinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
///
void k_pluralhandlingspinbox_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_init_painter` instead
///
#define k_pluralhandlingspinbox_qbase_init_painter k_pluralhandlingspinbox_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
///
void k_pluralhandlingspinbox_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QPainter* painter)
///
void k_pluralhandlingspinbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param offset QPoint*
///
QPaintDevice* k_pluralhandlingspinbox_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_redirected` instead
///
#define k_pluralhandlingspinbox_qbase_redirected k_pluralhandlingspinbox_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param offset QPoint*
///
QPaintDevice* k_pluralhandlingspinbox_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPaintDevice* func(KPluralHandlingSpinBox* self, QPoint* offset)
///
void k_pluralhandlingspinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QPainter* k_pluralhandlingspinbox_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_shared_painter` instead
///
#define k_pluralhandlingspinbox_qbase_shared_painter k_pluralhandlingspinbox_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QPainter* k_pluralhandlingspinbox_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPainter* func()
///
void k_pluralhandlingspinbox_on_shared_painter(void* self, QPainter* (*callback)());

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_input_method_event` instead
///
#define k_pluralhandlingspinbox_qbase_input_method_event k_pluralhandlingspinbox_super_input_method_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_focus_next_prev_child` instead
///
#define k_pluralhandlingspinbox_qbase_focus_next_prev_child k_pluralhandlingspinbox_super_focus_next_prev_child

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_event_filter` instead
///
#define k_pluralhandlingspinbox_qbase_event_filter k_pluralhandlingspinbox_super_event_filter

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_child_event` instead
///
#define k_pluralhandlingspinbox_qbase_child_event k_pluralhandlingspinbox_super_child_event

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_custom_event` instead
///
#define k_pluralhandlingspinbox_qbase_custom_event k_pluralhandlingspinbox_super_custom_event

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
void k_pluralhandlingspinbox_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_connect_notify` instead
///
#define k_pluralhandlingspinbox_qbase_connect_notify k_pluralhandlingspinbox_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_disconnect_notify` instead
///
#define k_pluralhandlingspinbox_qbase_disconnect_notify k_pluralhandlingspinbox_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QLineEdit* k_pluralhandlingspinbox_line_edit(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_line_edit` instead
///
#define k_pluralhandlingspinbox_qbase_line_edit k_pluralhandlingspinbox_super_line_edit

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QLineEdit* k_pluralhandlingspinbox_super_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QLineEdit* func()
///
void k_pluralhandlingspinbox_on_line_edit(void* self, QLineEdit* (*callback)());

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_set_line_edit` instead
///
#define k_pluralhandlingspinbox_qbase_set_line_edit k_pluralhandlingspinbox_super_set_line_edit

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

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_update_micro_focus` instead
///
#define k_pluralhandlingspinbox_qbase_update_micro_focus k_pluralhandlingspinbox_super_update_micro_focus

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
/// @param callback void func()
///
void k_pluralhandlingspinbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_create(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_create` instead
///
#define k_pluralhandlingspinbox_qbase_create k_pluralhandlingspinbox_super_create

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
/// @param callback void func()
///
void k_pluralhandlingspinbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_destroy(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_destroy` instead
///
#define k_pluralhandlingspinbox_qbase_destroy k_pluralhandlingspinbox_super_destroy

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
/// @param callback void func()
///
void k_pluralhandlingspinbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_focus_next_child` instead
///
#define k_pluralhandlingspinbox_qbase_focus_next_child k_pluralhandlingspinbox_super_focus_next_child

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
/// @param callback bool func()
///
void k_pluralhandlingspinbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_focus_previous_child` instead
///
#define k_pluralhandlingspinbox_qbase_focus_previous_child k_pluralhandlingspinbox_super_focus_previous_child

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
/// @param callback bool func()
///
void k_pluralhandlingspinbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_sender(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_sender` instead
///
#define k_pluralhandlingspinbox_qbase_sender k_pluralhandlingspinbox_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QObject* func()
///
void k_pluralhandlingspinbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_sender_signal_index` instead
///
#define k_pluralhandlingspinbox_qbase_sender_signal_index k_pluralhandlingspinbox_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func()
///
void k_pluralhandlingspinbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal const char*
///
int32_t k_pluralhandlingspinbox_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_receivers` instead
///
#define k_pluralhandlingspinbox_qbase_receivers k_pluralhandlingspinbox_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal const char*
///
int32_t k_pluralhandlingspinbox_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* signal)
///
void k_pluralhandlingspinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
bool k_pluralhandlingspinbox_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_is_signal_connected` instead
///
#define k_pluralhandlingspinbox_qbase_is_signal_connected k_pluralhandlingspinbox_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
bool k_pluralhandlingspinbox_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pluralhandlingspinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_pluralhandlingspinbox_super_get_decoded_metric_f` instead
///
#define k_pluralhandlingspinbox_qbase_get_decoded_metric_f k_pluralhandlingspinbox_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pluralhandlingspinbox_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback double func(KPluralHandlingSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_pluralhandlingspinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

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
