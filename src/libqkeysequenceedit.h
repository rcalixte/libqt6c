#pragma once
#ifndef SRC_QT6C_LIBQKEYSEQUENCEEDIT_H
#define SRC_QT6C_LIBQKEYSEQUENCEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html)

/// q_keysequenceedit_new constructs a new QKeySequenceEdit object.
///
/// @param parent QWidget*
///
QKeySequenceEdit* q_keysequenceedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html)

/// q_keysequenceedit_new2 constructs a new QKeySequenceEdit object.
///
QKeySequenceEdit* q_keysequenceedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html)

/// q_keysequenceedit_new3 constructs a new QKeySequenceEdit object.
///
/// @param keySequence QKeySequence*
///
QKeySequenceEdit* q_keysequenceedit_new3(void* keySequence);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html)

/// q_keysequenceedit_new4 constructs a new QKeySequenceEdit object.
///
/// @param keySequence QKeySequence*
/// @param parent QWidget*
///
QKeySequenceEdit* q_keysequenceedit_new4(void* keySequence, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeySequenceEdit*
///
const QMetaObject* q_keysequenceedit_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback const QMetaObject* func()
///
void q_keysequenceedit_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_keysequenceedit_super_meta_object` instead
///
#define q_keysequenceedit_qbase_meta_object q_keysequenceedit_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
///
const QMetaObject* q_keysequenceedit_super_meta_object(void* self);

/// @param self QKeySequenceEdit*
/// @param param1 const char*
///
void* q_keysequenceedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback void* func(QKeySequenceEdit* self, const char* param1)
///
void q_keysequenceedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_metacast` instead
///
#define q_keysequenceedit_qbase_metacast q_keysequenceedit_super_metacast

/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 const char*
///
void* q_keysequenceedit_super_metacast(void* self, const char* param1);

/// @param self QKeySequenceEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keysequenceedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func(QKeySequenceEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_keysequenceedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_metacall` instead
///
#define q_keysequenceedit_qbase_metacall q_keysequenceedit_super_metacall

/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keysequenceedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keysequenceedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keySequence)
///
/// @param self QKeySequenceEdit*
///
QKeySequence* q_keysequenceedit_key_sequence(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#maximumSequenceLength)
///
/// @param self QKeySequenceEdit*
///
int64_t q_keysequenceedit_maximum_sequence_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#setClearButtonEnabled)
///
/// @param self QKeySequenceEdit*
/// @param enable bool
///
void q_keysequenceedit_set_clear_button_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#isClearButtonEnabled)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_clear_button_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#setFinishingKeyCombinations)
///
/// @param self QKeySequenceEdit*
/// @param finishingKeyCombinations libqt_list of QKeyCombination*
///
void q_keysequenceedit_set_finishing_key_combinations(void* self, libqt_list finishingKeyCombinations);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#finishingKeyCombinations)
///
/// @param self QKeySequenceEdit*
///
/// @return libqt_list of QKeyCombination*
///
libqt_list q_keysequenceedit_finishing_key_combinations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#setKeySequence)
///
/// @param self QKeySequenceEdit*
/// @param keySequence QKeySequence*
///
void q_keysequenceedit_set_key_sequence(void* self, void* keySequence);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#clear)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#setMaximumSequenceLength)
///
/// @param self QKeySequenceEdit*
/// @param count int64_t
///
void q_keysequenceedit_set_maximum_sequence_length(void* self, int64_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#editingFinished)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_editing_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#editingFinished)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self)
///
void q_keysequenceedit_on_editing_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keySequenceChanged)
///
/// @param self QKeySequenceEdit*
/// @param keySequence QKeySequence*
///
void q_keysequenceedit_key_sequence_changed(void* self, void* keySequence);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keySequenceChanged)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QKeySequence* keySequence)
///
void q_keysequenceedit_on_key_sequence_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#event)
///
/// @param self QKeySequenceEdit*
/// @param param1 QEvent*
///
bool q_keysequenceedit_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func(QKeySequenceEdit* self, QEvent* param1)
///
void q_keysequenceedit_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_event` instead
///
#define q_keysequenceedit_qbase_event q_keysequenceedit_super_event

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#event)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 QEvent*
///
bool q_keysequenceedit_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyPressEvent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QKeyEvent*
///
void q_keysequenceedit_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QKeyEvent* param1)
///
void q_keysequenceedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_key_press_event` instead
///
#define q_keysequenceedit_qbase_key_press_event q_keysequenceedit_super_key_press_event

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 QKeyEvent*
///
void q_keysequenceedit_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyReleaseEvent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QKeyEvent*
///
void q_keysequenceedit_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QKeyEvent* param1)
///
void q_keysequenceedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_key_release_event` instead
///
#define q_keysequenceedit_qbase_key_release_event q_keysequenceedit_super_key_release_event

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 QKeyEvent*
///
void q_keysequenceedit_super_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#timerEvent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QTimerEvent*
///
void q_keysequenceedit_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QTimerEvent* param1)
///
void q_keysequenceedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_timer_event` instead
///
#define q_keysequenceedit_qbase_timer_event q_keysequenceedit_super_timer_event

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 QTimerEvent*
///
void q_keysequenceedit_super_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#focusOutEvent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QFocusEvent*
///
void q_keysequenceedit_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QFocusEvent* param1)
///
void q_keysequenceedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keysequenceedit_super_focus_out_event` instead
///
#define q_keysequenceedit_qbase_focus_out_event q_keysequenceedit_super_focus_out_event

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QKeySequenceEdit*
/// @param param1 QFocusEvent*
///
void q_keysequenceedit_super_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keysequenceedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keysequenceedit_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QKeySequenceEdit*
///
uintptr_t q_keysequenceedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QKeySequenceEdit*
///
uintptr_t q_keysequenceedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QKeySequenceEdit*
///
uintptr_t q_keysequenceedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QKeySequenceEdit*
///
QStyle* q_keysequenceedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QKeySequenceEdit*
/// @param style QStyle*
///
void q_keysequenceedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QKeySequenceEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_keysequenceedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QKeySequenceEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_keysequenceedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
///
bool q_keysequenceedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QKeySequenceEdit*
/// @param enabled bool
///
void q_keysequenceedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QKeySequenceEdit*
/// @param disabled bool
///
void q_keysequenceedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QKeySequenceEdit*
/// @param windowModified bool
///
void q_keysequenceedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QKeySequenceEdit*
///
QRect* q_keysequenceedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QKeySequenceEdit*
///
const QRect* q_keysequenceedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QKeySequenceEdit*
///
QRect* q_keysequenceedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QKeySequenceEdit*
///
QPoint* q_keysequenceedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QKeySequenceEdit*
///
QRect* q_keysequenceedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QKeySequenceEdit*
///
QRect* q_keysequenceedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QKeySequenceEdit*
///
QRegion* q_keysequenceedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QKeySequenceEdit*
/// @param minimumSize QSize*
///
void q_keysequenceedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QKeySequenceEdit*
/// @param minw int
/// @param minh int
///
void q_keysequenceedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QKeySequenceEdit*
/// @param maximumSize QSize*
///
void q_keysequenceedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QKeySequenceEdit*
/// @param maxw int
/// @param maxh int
///
void q_keysequenceedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QKeySequenceEdit*
/// @param minw int
///
void q_keysequenceedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QKeySequenceEdit*
/// @param minh int
///
void q_keysequenceedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QKeySequenceEdit*
/// @param maxw int
///
void q_keysequenceedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QKeySequenceEdit*
/// @param maxh int
///
void q_keysequenceedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QKeySequenceEdit*
/// @param sizeIncrement QSize*
///
void q_keysequenceedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QKeySequenceEdit*
/// @param w int
/// @param h int
///
void q_keysequenceedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QKeySequenceEdit*
/// @param baseSize QSize*
///
void q_keysequenceedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QKeySequenceEdit*
/// @param basew int
/// @param baseh int
///
void q_keysequenceedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QKeySequenceEdit*
/// @param fixedSize QSize*
///
void q_keysequenceedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QKeySequenceEdit*
/// @param w int
/// @param h int
///
void q_keysequenceedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QKeySequenceEdit*
/// @param w int
///
void q_keysequenceedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QKeySequenceEdit*
/// @param h int
///
void q_keysequenceedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPointF*
///
QPointF* q_keysequenceedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPoint*
///
QPoint* q_keysequenceedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPointF*
///
QPointF* q_keysequenceedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPoint*
///
QPoint* q_keysequenceedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPointF*
///
QPointF* q_keysequenceedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPoint*
///
QPoint* q_keysequenceedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPointF*
///
QPointF* q_keysequenceedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPoint*
///
QPoint* q_keysequenceedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_keysequenceedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_keysequenceedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_keysequenceedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_keysequenceedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QKeySequenceEdit*
///
const QPalette* q_keysequenceedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QKeySequenceEdit*
/// @param palette QPalette*
///
void q_keysequenceedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QKeySequenceEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_keysequenceedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QKeySequenceEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_keysequenceedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QKeySequenceEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_keysequenceedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QKeySequenceEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_keysequenceedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QKeySequenceEdit*
///
const QFont* q_keysequenceedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QKeySequenceEdit*
/// @param font QFont*
///
void q_keysequenceedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QKeySequenceEdit*
///
QFontMetrics* q_keysequenceedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QKeySequenceEdit*
///
QFontInfo* q_keysequenceedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QKeySequenceEdit*
///
QCursor* q_keysequenceedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QKeySequenceEdit*
/// @param cursor QCursor*
///
void q_keysequenceedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QKeySequenceEdit*
/// @param enable bool
///
void q_keysequenceedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QKeySequenceEdit*
/// @param enable bool
///
void q_keysequenceedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QKeySequenceEdit*
/// @param mask QBitmap*
///
void q_keysequenceedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QKeySequenceEdit*
/// @param mask QRegion*
///
void q_keysequenceedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QKeySequenceEdit*
///
QRegion* q_keysequenceedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param target QPaintDevice*
///
void q_keysequenceedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
///
void q_keysequenceedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QKeySequenceEdit*
///
QPixmap* q_keysequenceedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QKeySequenceEdit*
///
QGraphicsEffect* q_keysequenceedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QKeySequenceEdit*
/// @param effect QGraphicsEffect*
///
void q_keysequenceedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QKeySequenceEdit*
/// @param type enum Qt__GestureType
///
void q_keysequenceedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QKeySequenceEdit*
/// @param type enum Qt__GestureType
///
void q_keysequenceedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QKeySequenceEdit*
/// @param windowTitle const char*
///
void q_keysequenceedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QKeySequenceEdit*
/// @param styleSheet const char*
///
void q_keysequenceedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QKeySequenceEdit*
/// @param icon QIcon*
///
void q_keysequenceedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QKeySequenceEdit*
///
QIcon* q_keysequenceedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QKeySequenceEdit*
/// @param windowIconText const char*
///
void q_keysequenceedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QKeySequenceEdit*
/// @param windowRole const char*
///
void q_keysequenceedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QKeySequenceEdit*
/// @param filePath const char*
///
void q_keysequenceedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QKeySequenceEdit*
/// @param level double
///
void q_keysequenceedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QKeySequenceEdit*
///
double q_keysequenceedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QKeySequenceEdit*
/// @param toolTip const char*
///
void q_keysequenceedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QKeySequenceEdit*
/// @param msec int
///
void q_keysequenceedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QKeySequenceEdit*
/// @param statusTip const char*
///
void q_keysequenceedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QKeySequenceEdit*
/// @param whatsThis const char*
///
void q_keysequenceedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QKeySequenceEdit*
/// @param name const char*
///
void q_keysequenceedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QKeySequenceEdit*
/// @param description const char*
///
void q_keysequenceedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QKeySequenceEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_keysequenceedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QKeySequenceEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_keysequenceedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QKeySequenceEdit*
/// @param locale QLocale*
///
void q_keysequenceedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QKeySequenceEdit*
///
QLocale* q_keysequenceedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QKeySequenceEdit*
/// @param reason enum Qt__FocusReason
///
void q_keysequenceedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QKeySequenceEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_keysequenceedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QKeySequenceEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_keysequenceedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_keysequenceedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QKeySequenceEdit*
/// @param focusProxy QWidget*
///
void q_keysequenceedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QKeySequenceEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_keysequenceedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QKeySequenceEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_keysequenceedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QKeySequenceEdit*
/// @param param1 QCursor*
///
void q_keysequenceedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QKeySequenceEdit*
/// @param key QKeySequence*
///
int32_t q_keysequenceedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QKeySequenceEdit*
/// @param id int
///
void q_keysequenceedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QKeySequenceEdit*
/// @param id int
///
void q_keysequenceedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QKeySequenceEdit*
/// @param id int
///
void q_keysequenceedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_keysequenceedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_keysequenceedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QKeySequenceEdit*
/// @param enable bool
///
void q_keysequenceedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QKeySequenceEdit*
///
QGraphicsProxyWidget* q_keysequenceedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QKeySequenceEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_keysequenceedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QKeySequenceEdit*
/// @param param1 QRect*
///
void q_keysequenceedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QKeySequenceEdit*
/// @param param1 QRegion*
///
void q_keysequenceedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QKeySequenceEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_keysequenceedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QKeySequenceEdit*
/// @param param1 QRect*
///
void q_keysequenceedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QKeySequenceEdit*
/// @param param1 QRegion*
///
void q_keysequenceedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QKeySequenceEdit*
/// @param hidden bool
///
void q_keysequenceedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
///
void q_keysequenceedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QKeySequenceEdit*
/// @param x int
/// @param y int
///
void q_keysequenceedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QKeySequenceEdit*
/// @param param1 QPoint*
///
void q_keysequenceedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QKeySequenceEdit*
/// @param w int
/// @param h int
///
void q_keysequenceedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QKeySequenceEdit*
/// @param param1 QSize*
///
void q_keysequenceedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QKeySequenceEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_keysequenceedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QKeySequenceEdit*
/// @param geometry QRect*
///
void q_keysequenceedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeySequenceEdit*
///
char* q_keysequenceedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QKeySequenceEdit*
/// @param geometry char*
///
bool q_keysequenceedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QKeySequenceEdit*
/// @param param1 QWidget*
///
bool q_keysequenceedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QKeySequenceEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_keysequenceedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QKeySequenceEdit*
/// @param state flag of enum Qt__WindowState
///
void q_keysequenceedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QKeySequenceEdit*
/// @param state flag of enum Qt__WindowState
///
void q_keysequenceedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QKeySequenceEdit*
///
QSizePolicy* q_keysequenceedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QKeySequenceEdit*
/// @param sizePolicy QSizePolicy*
///
void q_keysequenceedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QKeySequenceEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_keysequenceedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QKeySequenceEdit*
///
QRegion* q_keysequenceedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QKeySequenceEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_keysequenceedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QKeySequenceEdit*
/// @param margins QMargins*
///
void q_keysequenceedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QKeySequenceEdit*
///
QMargins* q_keysequenceedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QKeySequenceEdit*
///
QRect* q_keysequenceedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QKeySequenceEdit*
///
QLayout* q_keysequenceedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QKeySequenceEdit*
/// @param layout QLayout*
///
void q_keysequenceedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QKeySequenceEdit*
/// @param parent QWidget*
///
void q_keysequenceedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QKeySequenceEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_keysequenceedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QKeySequenceEdit*
/// @param dx int
/// @param dy int
///
void q_keysequenceedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QKeySequenceEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_keysequenceedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QKeySequenceEdit*
/// @param on bool
///
void q_keysequenceedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QKeySequenceEdit*
/// @param action QAction*
///
void q_keysequenceedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QKeySequenceEdit*
/// @param actions libqt_list of QAction*
///
void q_keysequenceedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QKeySequenceEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_keysequenceedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QKeySequenceEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_keysequenceedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QKeySequenceEdit*
/// @param action QAction*
///
void q_keysequenceedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QKeySequenceEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_keysequenceedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QKeySequenceEdit*
/// @param text const char*
///
QAction* q_keysequenceedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QKeySequenceEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_keysequenceedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QKeySequenceEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_keysequenceedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QKeySequenceEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_keysequenceedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QKeySequenceEdit*
///
QWidget* q_keysequenceedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QKeySequenceEdit*
/// @param type flag of enum Qt__WindowType
///
void q_keysequenceedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QKeySequenceEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_keysequenceedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__WindowType
///
void q_keysequenceedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QKeySequenceEdit*
/// @param type flag of enum Qt__WindowType
///
void q_keysequenceedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QKeySequenceEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_keysequenceedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_keysequenceedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QKeySequenceEdit*
/// @param x int
/// @param y int
///
QWidget* q_keysequenceedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QKeySequenceEdit*
/// @param p QPoint*
///
QWidget* q_keysequenceedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QKeySequenceEdit*
/// @param p QPointF*
///
QWidget* q_keysequenceedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_keysequenceedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_keysequenceedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QKeySequenceEdit*
/// @param child QWidget*
///
bool q_keysequenceedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QKeySequenceEdit*
/// @param enabled bool
///
void q_keysequenceedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QKeySequenceEdit*
///
QBackingStore* q_keysequenceedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QKeySequenceEdit*
///
QWindow* q_keysequenceedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QKeySequenceEdit*
///
QScreen* q_keysequenceedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QKeySequenceEdit*
/// @param screen QScreen*
///
void q_keysequenceedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_keysequenceedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QKeySequenceEdit*
/// @param title const char*
///
void q_keysequenceedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, const char* title)
///
void q_keysequenceedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QKeySequenceEdit*
/// @param icon QIcon*
///
void q_keysequenceedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QIcon* icon)
///
void q_keysequenceedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QKeySequenceEdit*
/// @param iconText const char*
///
void q_keysequenceedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, const char* iconText)
///
void q_keysequenceedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QKeySequenceEdit*
/// @param pos QPoint*
///
void q_keysequenceedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QPoint* pos)
///
void q_keysequenceedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QKeySequenceEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_keysequenceedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QKeySequenceEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_keysequenceedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_keysequenceedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_keysequenceedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_keysequenceedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_keysequenceedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_keysequenceedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_keysequenceedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QKeySequenceEdit*
/// @param rectangle QRect*
///
QPixmap* q_keysequenceedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QKeySequenceEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_keysequenceedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QKeySequenceEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_keysequenceedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QKeySequenceEdit*
/// @param id int
/// @param enable bool
///
void q_keysequenceedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QKeySequenceEdit*
/// @param id int
/// @param enable bool
///
void q_keysequenceedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_keysequenceedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_keysequenceedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_keysequenceedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_keysequenceedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeySequenceEdit*
///
const char* q_keysequenceedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeySequenceEdit*
/// @param name const char*
///
void q_keysequenceedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeySequenceEdit*
/// @param b bool
///
bool q_keysequenceedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeySequenceEdit*
///
QThread* q_keysequenceedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeySequenceEdit*
/// @param thread QThread*
///
bool q_keysequenceedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeySequenceEdit*
/// @param interval int
///
int32_t q_keysequenceedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeySequenceEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_keysequenceedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeySequenceEdit*
/// @param id int
///
void q_keysequenceedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeySequenceEdit*
/// @param id enum Qt__TimerId
///
void q_keysequenceedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeySequenceEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_keysequenceedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeySequenceEdit*
/// @param filterObj QObject*
///
void q_keysequenceedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeySequenceEdit*
/// @param obj QObject*
///
void q_keysequenceedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keysequenceedit_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keysequenceedit_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeySequenceEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keysequenceedit_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keysequenceedit_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keysequenceedit_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
/// @param receiver QObject*
///
bool q_keysequenceedit_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keysequenceedit_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeySequenceEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_keysequenceedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeySequenceEdit*
/// @param name const char*
///
QVariant* q_keysequenceedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeySequenceEdit*
///
const char** q_keysequenceedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeySequenceEdit*
///
QBindingStorage* q_keysequenceedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeySequenceEdit*
///
const QBindingStorage* q_keysequenceedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self)
///
void q_keysequenceedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeySequenceEdit*
///
QObject* q_keysequenceedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeySequenceEdit*
/// @param classname const char*
///
bool q_keysequenceedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeySequenceEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keysequenceedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeySequenceEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keysequenceedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keysequenceedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keysequenceedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeySequenceEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keysequenceedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
/// @param signal const char*
///
bool q_keysequenceedit_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keysequenceedit_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keysequenceedit_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeySequenceEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keysequenceedit_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeySequenceEdit*
/// @param param1 QObject*
///
void q_keysequenceedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QObject* param1)
///
void q_keysequenceedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QKeySequenceEdit*
///
double q_keysequenceedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QKeySequenceEdit*
///
double q_keysequenceedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_keysequenceedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_keysequenceedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_dev_type(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_dev_type` instead
///
#define q_keysequenceedit_qbase_dev_type q_keysequenceedit_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func()
///
void q_keysequenceedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param visible bool
///
void q_keysequenceedit_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_set_visible` instead
///
#define q_keysequenceedit_qbase_set_visible q_keysequenceedit_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param visible bool
///
void q_keysequenceedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, bool visible)
///
void q_keysequenceedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_size_hint(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_size_hint` instead
///
#define q_keysequenceedit_qbase_size_hint q_keysequenceedit_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QSize* func()
///
void q_keysequenceedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_minimum_size_hint` instead
///
#define q_keysequenceedit_qbase_minimum_size_hint q_keysequenceedit_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QSize* q_keysequenceedit_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QSize* func()
///
void q_keysequenceedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 int
///
int32_t q_keysequenceedit_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_height_for_width` instead
///
#define q_keysequenceedit_qbase_height_for_width q_keysequenceedit_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 int
///
int32_t q_keysequenceedit_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func(QKeySequenceEdit* self, int param1)
///
void q_keysequenceedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_has_height_for_width` instead
///
#define q_keysequenceedit_qbase_has_height_for_width q_keysequenceedit_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func()
///
void q_keysequenceedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QPaintEngine* q_keysequenceedit_paint_engine(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_paint_engine` instead
///
#define q_keysequenceedit_qbase_paint_engine q_keysequenceedit_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QPaintEngine* q_keysequenceedit_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QPaintEngine* func()
///
void q_keysequenceedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_mouse_press_event` instead
///
#define q_keysequenceedit_qbase_mouse_press_event q_keysequenceedit_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMouseEvent* event)
///
void q_keysequenceedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_mouse_release_event` instead
///
#define q_keysequenceedit_qbase_mouse_release_event q_keysequenceedit_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMouseEvent* event)
///
void q_keysequenceedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_mouse_double_click_event` instead
///
#define q_keysequenceedit_qbase_mouse_double_click_event q_keysequenceedit_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMouseEvent* event)
///
void q_keysequenceedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_mouse_move_event` instead
///
#define q_keysequenceedit_qbase_mouse_move_event q_keysequenceedit_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMouseEvent*
///
void q_keysequenceedit_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMouseEvent* event)
///
void q_keysequenceedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QWheelEvent*
///
void q_keysequenceedit_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_wheel_event` instead
///
#define q_keysequenceedit_qbase_wheel_event q_keysequenceedit_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QWheelEvent*
///
void q_keysequenceedit_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QWheelEvent* event)
///
void q_keysequenceedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QFocusEvent*
///
void q_keysequenceedit_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_focus_in_event` instead
///
#define q_keysequenceedit_qbase_focus_in_event q_keysequenceedit_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QFocusEvent*
///
void q_keysequenceedit_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QFocusEvent* event)
///
void q_keysequenceedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEnterEvent*
///
void q_keysequenceedit_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_enter_event` instead
///
#define q_keysequenceedit_qbase_enter_event q_keysequenceedit_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEnterEvent*
///
void q_keysequenceedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QEnterEvent* event)
///
void q_keysequenceedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEvent*
///
void q_keysequenceedit_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_leave_event` instead
///
#define q_keysequenceedit_qbase_leave_event q_keysequenceedit_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEvent*
///
void q_keysequenceedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QEvent* event)
///
void q_keysequenceedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QPaintEvent*
///
void q_keysequenceedit_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_paint_event` instead
///
#define q_keysequenceedit_qbase_paint_event q_keysequenceedit_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QPaintEvent*
///
void q_keysequenceedit_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QPaintEvent* event)
///
void q_keysequenceedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMoveEvent*
///
void q_keysequenceedit_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_move_event` instead
///
#define q_keysequenceedit_qbase_move_event q_keysequenceedit_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QMoveEvent*
///
void q_keysequenceedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMoveEvent* event)
///
void q_keysequenceedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QResizeEvent*
///
void q_keysequenceedit_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_resize_event` instead
///
#define q_keysequenceedit_qbase_resize_event q_keysequenceedit_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QResizeEvent*
///
void q_keysequenceedit_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QResizeEvent* event)
///
void q_keysequenceedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QCloseEvent*
///
void q_keysequenceedit_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_close_event` instead
///
#define q_keysequenceedit_qbase_close_event q_keysequenceedit_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QCloseEvent*
///
void q_keysequenceedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QCloseEvent* event)
///
void q_keysequenceedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QContextMenuEvent*
///
void q_keysequenceedit_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_context_menu_event` instead
///
#define q_keysequenceedit_qbase_context_menu_event q_keysequenceedit_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QContextMenuEvent*
///
void q_keysequenceedit_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QContextMenuEvent* event)
///
void q_keysequenceedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QTabletEvent*
///
void q_keysequenceedit_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_tablet_event` instead
///
#define q_keysequenceedit_qbase_tablet_event q_keysequenceedit_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QTabletEvent*
///
void q_keysequenceedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QTabletEvent* event)
///
void q_keysequenceedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QActionEvent*
///
void q_keysequenceedit_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_action_event` instead
///
#define q_keysequenceedit_qbase_action_event q_keysequenceedit_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QActionEvent*
///
void q_keysequenceedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QActionEvent* event)
///
void q_keysequenceedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragEnterEvent*
///
void q_keysequenceedit_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_drag_enter_event` instead
///
#define q_keysequenceedit_qbase_drag_enter_event q_keysequenceedit_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragEnterEvent*
///
void q_keysequenceedit_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QDragEnterEvent* event)
///
void q_keysequenceedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragMoveEvent*
///
void q_keysequenceedit_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_drag_move_event` instead
///
#define q_keysequenceedit_qbase_drag_move_event q_keysequenceedit_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragMoveEvent*
///
void q_keysequenceedit_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QDragMoveEvent* event)
///
void q_keysequenceedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragLeaveEvent*
///
void q_keysequenceedit_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_drag_leave_event` instead
///
#define q_keysequenceedit_qbase_drag_leave_event q_keysequenceedit_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDragLeaveEvent*
///
void q_keysequenceedit_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QDragLeaveEvent* event)
///
void q_keysequenceedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDropEvent*
///
void q_keysequenceedit_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_drop_event` instead
///
#define q_keysequenceedit_qbase_drop_event q_keysequenceedit_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QDropEvent*
///
void q_keysequenceedit_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QDropEvent* event)
///
void q_keysequenceedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QShowEvent*
///
void q_keysequenceedit_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_show_event` instead
///
#define q_keysequenceedit_qbase_show_event q_keysequenceedit_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QShowEvent*
///
void q_keysequenceedit_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QShowEvent* event)
///
void q_keysequenceedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QHideEvent*
///
void q_keysequenceedit_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_hide_event` instead
///
#define q_keysequenceedit_qbase_hide_event q_keysequenceedit_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QHideEvent*
///
void q_keysequenceedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QHideEvent* event)
///
void q_keysequenceedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_keysequenceedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_native_event` instead
///
#define q_keysequenceedit_qbase_native_event q_keysequenceedit_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_keysequenceedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func(QKeySequenceEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_keysequenceedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 QEvent*
///
void q_keysequenceedit_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_change_event` instead
///
#define q_keysequenceedit_qbase_change_event q_keysequenceedit_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 QEvent*
///
void q_keysequenceedit_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QEvent* param1)
///
void q_keysequenceedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_keysequenceedit_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_metric` instead
///
#define q_keysequenceedit_qbase_metric q_keysequenceedit_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_keysequenceedit_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func(QKeySequenceEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_keysequenceedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
///
void q_keysequenceedit_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_init_painter` instead
///
#define q_keysequenceedit_qbase_init_painter q_keysequenceedit_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param painter QPainter*
///
void q_keysequenceedit_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QPainter* painter)
///
void q_keysequenceedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param offset QPoint*
///
QPaintDevice* q_keysequenceedit_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_redirected` instead
///
#define q_keysequenceedit_qbase_redirected q_keysequenceedit_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param offset QPoint*
///
QPaintDevice* q_keysequenceedit_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QPaintDevice* func(QKeySequenceEdit* self, QPoint* offset)
///
void q_keysequenceedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QPainter* q_keysequenceedit_shared_painter(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_shared_painter` instead
///
#define q_keysequenceedit_qbase_shared_painter q_keysequenceedit_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QPainter* q_keysequenceedit_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QPainter* func()
///
void q_keysequenceedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 QInputMethodEvent*
///
void q_keysequenceedit_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_input_method_event` instead
///
#define q_keysequenceedit_qbase_input_method_event q_keysequenceedit_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 QInputMethodEvent*
///
void q_keysequenceedit_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QInputMethodEvent* param1)
///
void q_keysequenceedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_keysequenceedit_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_input_method_query` instead
///
#define q_keysequenceedit_qbase_input_method_query q_keysequenceedit_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_keysequenceedit_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QVariant* func(QKeySequenceEdit* self, enum Qt__InputMethodQuery param1)
///
void q_keysequenceedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param next bool
///
bool q_keysequenceedit_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_focus_next_prev_child` instead
///
#define q_keysequenceedit_qbase_focus_next_prev_child q_keysequenceedit_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param next bool
///
bool q_keysequenceedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func(QKeySequenceEdit* self, bool next)
///
void q_keysequenceedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keysequenceedit_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_event_filter` instead
///
#define q_keysequenceedit_qbase_event_filter q_keysequenceedit_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keysequenceedit_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func(QKeySequenceEdit* self, QObject* watched, QEvent* event)
///
void q_keysequenceedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QChildEvent*
///
void q_keysequenceedit_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_child_event` instead
///
#define q_keysequenceedit_qbase_child_event q_keysequenceedit_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QChildEvent*
///
void q_keysequenceedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QChildEvent* event)
///
void q_keysequenceedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEvent*
///
void q_keysequenceedit_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_custom_event` instead
///
#define q_keysequenceedit_qbase_custom_event q_keysequenceedit_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param event QEvent*
///
void q_keysequenceedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QEvent* event)
///
void q_keysequenceedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
void q_keysequenceedit_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_connect_notify` instead
///
#define q_keysequenceedit_qbase_connect_notify q_keysequenceedit_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
void q_keysequenceedit_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMetaMethod* signal)
///
void q_keysequenceedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
void q_keysequenceedit_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_disconnect_notify` instead
///
#define q_keysequenceedit_qbase_disconnect_notify q_keysequenceedit_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
void q_keysequenceedit_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, QMetaMethod* signal)
///
void q_keysequenceedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_update_micro_focus` instead
///
#define q_keysequenceedit_qbase_update_micro_focus q_keysequenceedit_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func()
///
void q_keysequenceedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_create(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_create` instead
///
#define q_keysequenceedit_qbase_create q_keysequenceedit_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func()
///
void q_keysequenceedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_destroy(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_destroy` instead
///
#define q_keysequenceedit_qbase_destroy q_keysequenceedit_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback void func()
///
void q_keysequenceedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_focus_next_child(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_focus_next_child` instead
///
#define q_keysequenceedit_qbase_focus_next_child q_keysequenceedit_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func()
///
void q_keysequenceedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_focus_previous_child` instead
///
#define q_keysequenceedit_qbase_focus_previous_child q_keysequenceedit_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
bool q_keysequenceedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func()
///
void q_keysequenceedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QObject* q_keysequenceedit_sender(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_sender` instead
///
#define q_keysequenceedit_qbase_sender q_keysequenceedit_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
QObject* q_keysequenceedit_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback QObject* func()
///
void q_keysequenceedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_sender_signal_index` instead
///
#define q_keysequenceedit_qbase_sender_signal_index q_keysequenceedit_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
///
int32_t q_keysequenceedit_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func()
///
void q_keysequenceedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal const char*
///
int32_t q_keysequenceedit_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_receivers` instead
///
#define q_keysequenceedit_qbase_receivers q_keysequenceedit_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal const char*
///
int32_t q_keysequenceedit_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback int32_t func(QKeySequenceEdit* self, const char* signal)
///
void q_keysequenceedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
bool q_keysequenceedit_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_is_signal_connected` instead
///
#define q_keysequenceedit_qbase_is_signal_connected q_keysequenceedit_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param signal QMetaMethod*
///
bool q_keysequenceedit_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback bool func(QKeySequenceEdit* self, QMetaMethod* signal)
///
void q_keysequenceedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_keysequenceedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `q_keysequenceedit_super_get_decoded_metric_f` instead
///
#define q_keysequenceedit_qbase_get_decoded_metric_f q_keysequenceedit_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_keysequenceedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeySequenceEdit*
/// @param callback double func(QKeySequenceEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_keysequenceedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeySequenceEdit*
/// @param callback void func(QKeySequenceEdit* self, const char* objectName)
///
void q_keysequenceedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequenceedit.html#dtor.QKeySequenceEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QKeySequenceEdit*
///
void q_keysequenceedit_delete(void* self);

#endif
