#pragma once
#ifndef EXTRAS_SONNET_LIBDIALOG_H
#define EXTRAS_SONNET_LIBDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html)

/// k_sonnet__dialog_new constructs a new Sonnet::Dialog object.
///
/// @param checker Sonnet__BackgroundChecker*
/// @param parent QWidget*
///
Sonnet__Dialog* k_sonnet__dialog_new(void* checker, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Sonnet__Dialog*
///
const QMetaObject* k_sonnet__dialog_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const Sonnet__Dialog*
/// @param callback const QMetaObject* func(const Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Sonnet__Dialog*
///
const QMetaObject* k_sonnet__dialog_super_meta_object(const void* self);

/// @param self Sonnet__Dialog*
/// @param param1 const char*
///
void* k_sonnet__dialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Sonnet__Dialog*
/// @param callback void* func(Sonnet__Dialog* self, const char* param1)
///
void k_sonnet__dialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Sonnet__Dialog*
/// @param param1 const char*
///
void* k_sonnet__dialog_super_metacast(void* self, const char* param1);

/// @param self Sonnet__Dialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__dialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_sonnet__dialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Sonnet__Dialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__dialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_sonnet__dialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#originalBuffer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_original_buffer(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#buffer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_buffer(const void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#show)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#activeAutoCorrect)
///
/// @param self Sonnet__Dialog*
/// @param _active bool
///
void k_sonnet__dialog_active_auto_correct(void* self, bool _active);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#showProgressDialog)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_progress_dialog(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#showSpellCheckCompletionMessage)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_spell_check_completion_message(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#setSpellCheckContinuedAfterReplacement)
///
/// @param self Sonnet__Dialog*
/// @param b bool
///
void k_sonnet__dialog_set_spell_check_continued_after_replacement(void* self, bool b);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#setBuffer)
///
/// @param self Sonnet__Dialog*
/// @param buffer const char*
///
void k_sonnet__dialog_set_buffer(void* self, const char* buffer);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#spellCheckDone)
///
/// @param self Sonnet__Dialog*
/// @param newBuffer const char*
///
void k_sonnet__dialog_spell_check_done(void* self, const char* newBuffer);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#spellCheckDone)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* newBuffer)
///
void k_sonnet__dialog_on_spell_check_done(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#misspelling)
///
/// @param self Sonnet__Dialog*
/// @param word const char*
/// @param start int
///
void k_sonnet__dialog_misspelling(void* self, const char* word, int start);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#misspelling)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* word, int start)
///
void k_sonnet__dialog_on_misspelling(void* self, void (*callback)(void*, const char*, int));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#replace)
///
/// @param self Sonnet__Dialog*
/// @param oldWord const char*
/// @param start int
/// @param newWord const char*
///
void k_sonnet__dialog_replace(void* self, const char* oldWord, int start, const char* newWord);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#replace)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* oldWord, int start, const char* newWord)
///
void k_sonnet__dialog_on_replace(void* self, void (*callback)(void*, const char*, int, const char*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#stop)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_stop(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#stop)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_stop(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#cancel)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_cancel(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#cancel)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_cancel(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#autoCorrect)
///
/// @param self Sonnet__Dialog*
/// @param currentWord const char*
/// @param replaceWord const char*
///
void k_sonnet__dialog_auto_correct(void* self, const char* currentWord, const char* replaceWord);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#autoCorrect)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* currentWord, const char* replaceWord)
///
void k_sonnet__dialog_on_auto_correct(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#spellCheckStatus)
///
/// @param self Sonnet__Dialog*
/// @param param1 const char*
///
void k_sonnet__dialog_spell_check_status(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#spellCheckStatus)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* param1)
///
void k_sonnet__dialog_on_spell_check_status(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#languageChanged)
///
/// @param self Sonnet__Dialog*
/// @param language const char*
///
void k_sonnet__dialog_language_changed(void* self, const char* language);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#languageChanged)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* language)
///
void k_sonnet__dialog_on_language_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_sonnet__dialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_sonnet__dialog_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#showProgressDialog)
///
/// @param self Sonnet__Dialog*
/// @param timeout int
///
void k_sonnet__dialog_show_progress_dialog1(void* self, int timeout);

/// [Upstream resources](https://api.kde.org/sonnet-dialog.html#showSpellCheckCompletionMessage)
///
/// @param self Sonnet__Dialog*
/// @param b bool
///
void k_sonnet__dialog_show_spell_check_completion_message1(void* self, bool b);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_result(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self Sonnet__Dialog*
/// @param sizeGripEnabled bool
///
void k_sonnet__dialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_size_grip_enabled(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self Sonnet__Dialog*
/// @param modal bool
///
void k_sonnet__dialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self Sonnet__Dialog*
/// @param r int
///
void k_sonnet__dialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self Sonnet__Dialog*
/// @param result int
///
void k_sonnet__dialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, int result)
///
void k_sonnet__dialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self Sonnet__Dialog*
///
QPaintDevice* k_sonnet__dialog_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a Sonnet__Dialog object
///
/// @param _qpaintdevice QPaintDevice*
///
Sonnet__Dialog* k_sonnet__dialog_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const Sonnet__Dialog*
///
uintptr_t k_sonnet__dialog_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const Sonnet__Dialog*
///
uintptr_t k_sonnet__dialog_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const Sonnet__Dialog*
///
uintptr_t k_sonnet__dialog_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const Sonnet__Dialog*
///
QStyle* k_sonnet__dialog_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self Sonnet__Dialog*
/// @param style QStyle*
///
void k_sonnet__dialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_sonnet__dialog_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self Sonnet__Dialog*
/// @param windowModality enum Qt__WindowModality
///
void k_sonnet__dialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
///
bool k_sonnet__dialog_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self Sonnet__Dialog*
/// @param enabled bool
///
void k_sonnet__dialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self Sonnet__Dialog*
/// @param disabled bool
///
void k_sonnet__dialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self Sonnet__Dialog*
/// @param windowModified bool
///
void k_sonnet__dialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const Sonnet__Dialog*
///
QRect* k_sonnet__dialog_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const Sonnet__Dialog*
///
const QRect* k_sonnet__dialog_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const Sonnet__Dialog*
///
QRect* k_sonnet__dialog_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const Sonnet__Dialog*
///
QPoint* k_sonnet__dialog_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const Sonnet__Dialog*
///
QRect* k_sonnet__dialog_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const Sonnet__Dialog*
///
QRect* k_sonnet__dialog_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const Sonnet__Dialog*
///
QRegion* k_sonnet__dialog_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self Sonnet__Dialog*
/// @param minimumSize QSize*
///
void k_sonnet__dialog_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self Sonnet__Dialog*
/// @param minw int
/// @param minh int
///
void k_sonnet__dialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self Sonnet__Dialog*
/// @param maximumSize QSize*
///
void k_sonnet__dialog_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self Sonnet__Dialog*
/// @param maxw int
/// @param maxh int
///
void k_sonnet__dialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self Sonnet__Dialog*
/// @param minw int
///
void k_sonnet__dialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self Sonnet__Dialog*
/// @param minh int
///
void k_sonnet__dialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self Sonnet__Dialog*
/// @param maxw int
///
void k_sonnet__dialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self Sonnet__Dialog*
/// @param maxh int
///
void k_sonnet__dialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self Sonnet__Dialog*
/// @param sizeIncrement QSize*
///
void k_sonnet__dialog_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self Sonnet__Dialog*
/// @param w int
/// @param h int
///
void k_sonnet__dialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self Sonnet__Dialog*
/// @param baseSize QSize*
///
void k_sonnet__dialog_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self Sonnet__Dialog*
/// @param basew int
/// @param baseh int
///
void k_sonnet__dialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self Sonnet__Dialog*
/// @param fixedSize QSize*
///
void k_sonnet__dialog_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self Sonnet__Dialog*
/// @param w int
/// @param h int
///
void k_sonnet__dialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self Sonnet__Dialog*
/// @param w int
///
void k_sonnet__dialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self Sonnet__Dialog*
/// @param h int
///
void k_sonnet__dialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dialog_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dialog_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dialog_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dialog_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dialog_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dialog_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dialog_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dialog_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sonnet__dialog_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sonnet__dialog_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sonnet__dialog_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sonnet__dialog_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const Sonnet__Dialog*
///
const QPalette* k_sonnet__dialog_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self Sonnet__Dialog*
/// @param palette QPalette*
///
void k_sonnet__dialog_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self Sonnet__Dialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_sonnet__dialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sonnet__dialog_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self Sonnet__Dialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_sonnet__dialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sonnet__dialog_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const Sonnet__Dialog*
///
const QFont* k_sonnet__dialog_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self Sonnet__Dialog*
/// @param font QFont*
///
void k_sonnet__dialog_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const Sonnet__Dialog*
///
QFontMetrics* k_sonnet__dialog_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const Sonnet__Dialog*
///
QFontInfo* k_sonnet__dialog_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const Sonnet__Dialog*
///
QCursor* k_sonnet__dialog_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self Sonnet__Dialog*
/// @param cursor QCursor*
///
void k_sonnet__dialog_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self Sonnet__Dialog*
/// @param enable bool
///
void k_sonnet__dialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self Sonnet__Dialog*
/// @param enable bool
///
void k_sonnet__dialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self Sonnet__Dialog*
/// @param mask QBitmap*
///
void k_sonnet__dialog_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self Sonnet__Dialog*
/// @param mask QRegion*
///
void k_sonnet__dialog_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const Sonnet__Dialog*
///
QRegion* k_sonnet__dialog_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param target QPaintDevice*
///
void k_sonnet__dialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param painter QPainter*
///
void k_sonnet__dialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self Sonnet__Dialog*
///
QPixmap* k_sonnet__dialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const Sonnet__Dialog*
///
QGraphicsEffect* k_sonnet__dialog_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self Sonnet__Dialog*
/// @param effect QGraphicsEffect*
///
void k_sonnet__dialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self Sonnet__Dialog*
/// @param type enum Qt__GestureType
///
void k_sonnet__dialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self Sonnet__Dialog*
/// @param type enum Qt__GestureType
///
void k_sonnet__dialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self Sonnet__Dialog*
/// @param windowTitle const char*
///
void k_sonnet__dialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self Sonnet__Dialog*
/// @param styleSheet const char*
///
void k_sonnet__dialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self Sonnet__Dialog*
/// @param icon QIcon*
///
void k_sonnet__dialog_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const Sonnet__Dialog*
///
QIcon* k_sonnet__dialog_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self Sonnet__Dialog*
/// @param windowIconText const char*
///
void k_sonnet__dialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self Sonnet__Dialog*
/// @param windowRole const char*
///
void k_sonnet__dialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self Sonnet__Dialog*
/// @param filePath const char*
///
void k_sonnet__dialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self Sonnet__Dialog*
/// @param level double
///
void k_sonnet__dialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const Sonnet__Dialog*
///
double k_sonnet__dialog_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self Sonnet__Dialog*
/// @param toolTip const char*
///
void k_sonnet__dialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self Sonnet__Dialog*
/// @param msec int
///
void k_sonnet__dialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self Sonnet__Dialog*
/// @param statusTip const char*
///
void k_sonnet__dialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self Sonnet__Dialog*
/// @param whatsThis const char*
///
void k_sonnet__dialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self Sonnet__Dialog*
/// @param name const char*
///
void k_sonnet__dialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self Sonnet__Dialog*
/// @param description const char*
///
void k_sonnet__dialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self Sonnet__Dialog*
/// @param direction enum Qt__LayoutDirection
///
void k_sonnet__dialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_sonnet__dialog_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self Sonnet__Dialog*
/// @param locale QLocale*
///
void k_sonnet__dialog_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const Sonnet__Dialog*
///
QLocale* k_sonnet__dialog_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self Sonnet__Dialog*
/// @param reason enum Qt__FocusReason
///
void k_sonnet__dialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_sonnet__dialog_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self Sonnet__Dialog*
/// @param policy enum Qt__FocusPolicy
///
void k_sonnet__dialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_sonnet__dialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self Sonnet__Dialog*
/// @param focusProxy QWidget*
///
void k_sonnet__dialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_sonnet__dialog_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self Sonnet__Dialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_sonnet__dialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self Sonnet__Dialog*
/// @param param1 QCursor*
///
void k_sonnet__dialog_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self Sonnet__Dialog*
/// @param key QKeySequence*
///
int32_t k_sonnet__dialog_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self Sonnet__Dialog*
/// @param id int
///
void k_sonnet__dialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self Sonnet__Dialog*
/// @param id int
///
void k_sonnet__dialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self Sonnet__Dialog*
/// @param id int
///
void k_sonnet__dialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_sonnet__dialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_sonnet__dialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self Sonnet__Dialog*
/// @param enable bool
///
void k_sonnet__dialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const Sonnet__Dialog*
///
QGraphicsProxyWidget* k_sonnet__dialog_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__Dialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__Dialog*
/// @param param1 QRect*
///
void k_sonnet__dialog_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__Dialog*
/// @param param1 QRegion*
///
void k_sonnet__dialog_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__Dialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__Dialog*
/// @param param1 QRect*
///
void k_sonnet__dialog_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__Dialog*
/// @param param1 QRegion*
///
void k_sonnet__dialog_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self Sonnet__Dialog*
/// @param hidden bool
///
void k_sonnet__dialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self Sonnet__Dialog*
///
bool k_sonnet__dialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self Sonnet__Dialog*
/// @param param1 QWidget*
///
void k_sonnet__dialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self Sonnet__Dialog*
/// @param x int
/// @param y int
///
void k_sonnet__dialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self Sonnet__Dialog*
/// @param param1 QPoint*
///
void k_sonnet__dialog_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self Sonnet__Dialog*
/// @param w int
/// @param h int
///
void k_sonnet__dialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self Sonnet__Dialog*
/// @param param1 QSize*
///
void k_sonnet__dialog_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self Sonnet__Dialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self Sonnet__Dialog*
/// @param geometry QRect*
///
void k_sonnet__dialog_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Dialog*
///
char* k_sonnet__dialog_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self Sonnet__Dialog*
/// @param geometry char*
///
bool k_sonnet__dialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const Sonnet__Dialog*
/// @param param1 QWidget*
///
bool k_sonnet__dialog_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const Sonnet__Dialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_sonnet__dialog_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self Sonnet__Dialog*
/// @param state flag of enum Qt__WindowState
///
void k_sonnet__dialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self Sonnet__Dialog*
/// @param state flag of enum Qt__WindowState
///
void k_sonnet__dialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const Sonnet__Dialog*
///
QSizePolicy* k_sonnet__dialog_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self Sonnet__Dialog*
/// @param sizePolicy QSizePolicy*
///
void k_sonnet__dialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self Sonnet__Dialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_sonnet__dialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const Sonnet__Dialog*
///
QRegion* k_sonnet__dialog_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self Sonnet__Dialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_sonnet__dialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self Sonnet__Dialog*
/// @param margins QMargins*
///
void k_sonnet__dialog_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const Sonnet__Dialog*
///
QMargins* k_sonnet__dialog_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const Sonnet__Dialog*
///
QRect* k_sonnet__dialog_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const Sonnet__Dialog*
///
QLayout* k_sonnet__dialog_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self Sonnet__Dialog*
/// @param layout QLayout*
///
void k_sonnet__dialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self Sonnet__Dialog*
/// @param parent QWidget*
///
void k_sonnet__dialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self Sonnet__Dialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_sonnet__dialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self Sonnet__Dialog*
/// @param dx int
/// @param dy int
///
void k_sonnet__dialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self Sonnet__Dialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_sonnet__dialog_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self Sonnet__Dialog*
/// @param on bool
///
void k_sonnet__dialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__Dialog*
/// @param action QAction*
///
void k_sonnet__dialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self Sonnet__Dialog*
/// @param actions libqt_list of QAction*
///
void k_sonnet__dialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self Sonnet__Dialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_sonnet__dialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self Sonnet__Dialog*
/// @param before QAction*
/// @param action QAction*
///
void k_sonnet__dialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self Sonnet__Dialog*
/// @param action QAction*
///
void k_sonnet__dialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const Sonnet__Dialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_sonnet__dialog_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__Dialog*
/// @param text const char*
///
QAction* k_sonnet__dialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__Dialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_sonnet__dialog_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__Dialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sonnet__dialog_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__Dialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sonnet__dialog_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const Sonnet__Dialog*
///
QWidget* k_sonnet__dialog_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self Sonnet__Dialog*
/// @param type flag of enum Qt__WindowType
///
void k_sonnet__dialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const Sonnet__Dialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_sonnet__dialog_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self Sonnet__Dialog*
/// @param param1 enum Qt__WindowType
///
void k_sonnet__dialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self Sonnet__Dialog*
/// @param type flag of enum Qt__WindowType
///
void k_sonnet__dialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const Sonnet__Dialog*
///
/// @return enum Qt__WindowType
///
int32_t k_sonnet__dialog_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_sonnet__dialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const Sonnet__Dialog*
/// @param x int
/// @param y int
///
QWidget* k_sonnet__dialog_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const Sonnet__Dialog*
/// @param p QPoint*
///
QWidget* k_sonnet__dialog_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const Sonnet__Dialog*
/// @param p QPointF*
///
QWidget* k_sonnet__dialog_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self Sonnet__Dialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_sonnet__dialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const Sonnet__Dialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_sonnet__dialog_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const Sonnet__Dialog*
///
void k_sonnet__dialog_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const Sonnet__Dialog*
/// @param child QWidget*
///
bool k_sonnet__dialog_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self Sonnet__Dialog*
/// @param enabled bool
///
void k_sonnet__dialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const Sonnet__Dialog*
///
QBackingStore* k_sonnet__dialog_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const Sonnet__Dialog*
///
QWindow* k_sonnet__dialog_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const Sonnet__Dialog*
///
QScreen* k_sonnet__dialog_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self Sonnet__Dialog*
/// @param screen QScreen*
///
void k_sonnet__dialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_sonnet__dialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self Sonnet__Dialog*
/// @param title const char*
///
void k_sonnet__dialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* title)
///
void k_sonnet__dialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self Sonnet__Dialog*
/// @param icon QIcon*
///
void k_sonnet__dialog_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QIcon* icon)
///
void k_sonnet__dialog_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self Sonnet__Dialog*
/// @param iconText const char*
///
void k_sonnet__dialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* iconText)
///
void k_sonnet__dialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self Sonnet__Dialog*
/// @param pos QPoint*
///
void k_sonnet__dialog_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QPoint* pos)
///
void k_sonnet__dialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const Sonnet__Dialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_sonnet__dialog_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self Sonnet__Dialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_sonnet__dialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_sonnet__dialog_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sonnet__dialog_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sonnet__dialog_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_sonnet__dialog_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sonnet__dialog_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__Dialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sonnet__dialog_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self Sonnet__Dialog*
/// @param rectangle QRect*
///
QPixmap* k_sonnet__dialog_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self Sonnet__Dialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_sonnet__dialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self Sonnet__Dialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_sonnet__dialog_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self Sonnet__Dialog*
/// @param id int
/// @param enable bool
///
void k_sonnet__dialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self Sonnet__Dialog*
/// @param id int
/// @param enable bool
///
void k_sonnet__dialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self Sonnet__Dialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_sonnet__dialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self Sonnet__Dialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_sonnet__dialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_sonnet__dialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_sonnet__dialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Sonnet__Dialog*
///
const char* k_sonnet__dialog_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Sonnet__Dialog*
/// @param name const char*
///
void k_sonnet__dialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Sonnet__Dialog*
/// @param b bool
///
bool k_sonnet__dialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Sonnet__Dialog*
///
QThread* k_sonnet__dialog_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__Dialog*
/// @param thread QThread*
///
bool k_sonnet__dialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Dialog*
/// @param interval int
///
int32_t k_sonnet__dialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Dialog*
/// @param time int64_t of nanoseconds
///
int32_t k_sonnet__dialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Dialog*
/// @param id int
///
void k_sonnet__dialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Dialog*
/// @param id enum Qt__TimerId
///
void k_sonnet__dialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Sonnet__Dialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_sonnet__dialog_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Sonnet__Dialog*
/// @param filterObj QObject*
///
void k_sonnet__dialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Sonnet__Dialog*
/// @param obj QObject*
///
void k_sonnet__dialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_sonnet__dialog_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sonnet__dialog_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Sonnet__Dialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sonnet__dialog_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sonnet__dialog_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sonnet__dialog_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
/// @param receiver QObject*
///
bool k_sonnet__dialog_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sonnet__dialog_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Sonnet__Dialog*
///
void k_sonnet__dialog_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Sonnet__Dialog*
///
void k_sonnet__dialog_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Sonnet__Dialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_sonnet__dialog_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Sonnet__Dialog*
/// @param name const char*
///
QVariant* k_sonnet__dialog_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Sonnet__Dialog*
///
const char** k_sonnet__dialog_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__Dialog*
///
QBindingStorage* k_sonnet__dialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Sonnet__Dialog*
///
const QBindingStorage* k_sonnet__dialog_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Sonnet__Dialog*
///
QObject* k_sonnet__dialog_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Sonnet__Dialog*
/// @param classname const char*
///
bool k_sonnet__dialog_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Dialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_sonnet__dialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Dialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_sonnet__dialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_sonnet__dialog_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_sonnet__dialog_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Sonnet__Dialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sonnet__dialog_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
/// @param signal const char*
///
bool k_sonnet__dialog_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_sonnet__dialog_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sonnet__dialog_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Sonnet__Dialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sonnet__dialog_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Dialog*
/// @param param1 QObject*
///
void k_sonnet__dialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QObject* param1)
///
void k_sonnet__dialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const Sonnet__Dialog*
///
double k_sonnet__dialog_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const Sonnet__Dialog*
///
double k_sonnet__dialog_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_sonnet__dialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_sonnet__dialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param visible bool
///
void k_sonnet__dialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param visible bool
///
void k_sonnet__dialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, bool visible)
///
void k_sonnet__dialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_super_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QSize* func(Sonnet__Dialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_sonnet__dialog_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QSize* k_sonnet__dialog_super_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QSize* func(Sonnet__Dialog* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_sonnet__dialog_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_open(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
int32_t k_sonnet__dialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
int32_t k_sonnet__dialog_super_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_exec(void* self, int32_t (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 int
///
void k_sonnet__dialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 int
///
void k_sonnet__dialog_super_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, int param1)
///
void k_sonnet__dialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_accept(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_reject(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QKeyEvent*
///
void k_sonnet__dialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QKeyEvent*
///
void k_sonnet__dialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QKeyEvent* param1)
///
void k_sonnet__dialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QCloseEvent*
///
void k_sonnet__dialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QCloseEvent*
///
void k_sonnet__dialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QCloseEvent* param1)
///
void k_sonnet__dialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QShowEvent*
///
void k_sonnet__dialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QShowEvent*
///
void k_sonnet__dialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QShowEvent* param1)
///
void k_sonnet__dialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QResizeEvent*
///
void k_sonnet__dialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QResizeEvent*
///
void k_sonnet__dialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QResizeEvent* param1)
///
void k_sonnet__dialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QContextMenuEvent*
///
void k_sonnet__dialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QContextMenuEvent*
///
void k_sonnet__dialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QContextMenuEvent* param1)
///
void k_sonnet__dialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_sonnet__dialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_sonnet__dialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self, QObject* param1, QEvent* param2)
///
void k_sonnet__dialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 int
///
int32_t k_sonnet__dialog_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 int
///
int32_t k_sonnet__dialog_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self, int param1)
///
void k_sonnet__dialog_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
bool k_sonnet__dialog_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QPaintEngine* k_sonnet__dialog_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QPaintEngine* k_sonnet__dialog_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QPaintEngine* func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
bool k_sonnet__dialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
bool k_sonnet__dialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self, QEvent* event)
///
void k_sonnet__dialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMouseEvent* event)
///
void k_sonnet__dialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMouseEvent* event)
///
void k_sonnet__dialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMouseEvent* event)
///
void k_sonnet__dialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMouseEvent*
///
void k_sonnet__dialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMouseEvent* event)
///
void k_sonnet__dialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QWheelEvent*
///
void k_sonnet__dialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QWheelEvent*
///
void k_sonnet__dialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QWheelEvent* event)
///
void k_sonnet__dialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QKeyEvent*
///
void k_sonnet__dialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QKeyEvent*
///
void k_sonnet__dialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QKeyEvent* event)
///
void k_sonnet__dialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QFocusEvent*
///
void k_sonnet__dialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QFocusEvent*
///
void k_sonnet__dialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QFocusEvent* event)
///
void k_sonnet__dialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QFocusEvent*
///
void k_sonnet__dialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QFocusEvent*
///
void k_sonnet__dialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QFocusEvent* event)
///
void k_sonnet__dialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEnterEvent*
///
void k_sonnet__dialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEnterEvent*
///
void k_sonnet__dialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QEnterEvent* event)
///
void k_sonnet__dialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
void k_sonnet__dialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
void k_sonnet__dialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QEvent* event)
///
void k_sonnet__dialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QPaintEvent*
///
void k_sonnet__dialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QPaintEvent*
///
void k_sonnet__dialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QPaintEvent* event)
///
void k_sonnet__dialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMoveEvent*
///
void k_sonnet__dialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QMoveEvent*
///
void k_sonnet__dialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMoveEvent* event)
///
void k_sonnet__dialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QTabletEvent*
///
void k_sonnet__dialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QTabletEvent*
///
void k_sonnet__dialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QTabletEvent* event)
///
void k_sonnet__dialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QActionEvent*
///
void k_sonnet__dialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QActionEvent*
///
void k_sonnet__dialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QActionEvent* event)
///
void k_sonnet__dialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragEnterEvent*
///
void k_sonnet__dialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragEnterEvent*
///
void k_sonnet__dialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QDragEnterEvent* event)
///
void k_sonnet__dialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragMoveEvent*
///
void k_sonnet__dialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragMoveEvent*
///
void k_sonnet__dialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QDragMoveEvent* event)
///
void k_sonnet__dialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragLeaveEvent*
///
void k_sonnet__dialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDragLeaveEvent*
///
void k_sonnet__dialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QDragLeaveEvent* event)
///
void k_sonnet__dialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDropEvent*
///
void k_sonnet__dialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QDropEvent*
///
void k_sonnet__dialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QDropEvent* event)
///
void k_sonnet__dialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QHideEvent*
///
void k_sonnet__dialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QHideEvent*
///
void k_sonnet__dialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QHideEvent* event)
///
void k_sonnet__dialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sonnet__dialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sonnet__dialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_sonnet__dialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QEvent*
///
void k_sonnet__dialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QEvent*
///
void k_sonnet__dialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QEvent* param1)
///
void k_sonnet__dialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sonnet__dialog_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sonnet__dialog_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_sonnet__dialog_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param painter QPainter*
///
void k_sonnet__dialog_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param painter QPainter*
///
void k_sonnet__dialog_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QPainter* painter)
///
void k_sonnet__dialog_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param offset QPoint*
///
QPaintDevice* k_sonnet__dialog_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param offset QPoint*
///
QPaintDevice* k_sonnet__dialog_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QPaintDevice* func(Sonnet__Dialog* self, QPoint* offset)
///
void k_sonnet__dialog_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QPainter* k_sonnet__dialog_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QPainter* k_sonnet__dialog_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QPainter* func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QInputMethodEvent*
///
void k_sonnet__dialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QInputMethodEvent*
///
void k_sonnet__dialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QInputMethodEvent* param1)
///
void k_sonnet__dialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sonnet__dialog_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sonnet__dialog_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QVariant* func(Sonnet__Dialog* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_sonnet__dialog_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param next bool
///
bool k_sonnet__dialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param next bool
///
bool k_sonnet__dialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self, bool next)
///
void k_sonnet__dialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QTimerEvent*
///
void k_sonnet__dialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QTimerEvent*
///
void k_sonnet__dialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QTimerEvent* event)
///
void k_sonnet__dialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QChildEvent*
///
void k_sonnet__dialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QChildEvent*
///
void k_sonnet__dialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QChildEvent* event)
///
void k_sonnet__dialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
void k_sonnet__dialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param event QEvent*
///
void k_sonnet__dialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QEvent* event)
///
void k_sonnet__dialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param signal QMetaMethod*
///
void k_sonnet__dialog_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param signal QMetaMethod*
///
void k_sonnet__dialog_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMetaMethod* signal)
///
void k_sonnet__dialog_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param signal QMetaMethod*
///
void k_sonnet__dialog_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param signal QMetaMethod*
///
void k_sonnet__dialog_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QMetaMethod* signal)
///
void k_sonnet__dialog_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QWidget*
///
void k_sonnet__dialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param param1 QWidget*
///
void k_sonnet__dialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, QWidget* param1)
///
void k_sonnet__dialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
bool k_sonnet__dialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
bool k_sonnet__dialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Dialog*
///
bool k_sonnet__dialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Dialog*
///
bool k_sonnet__dialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QObject* k_sonnet__dialog_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
QObject* k_sonnet__dialog_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback QObject* func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
///
int32_t k_sonnet__dialog_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self)
///
void k_sonnet__dialog_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param signal const char*
///
int32_t k_sonnet__dialog_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param signal const char*
///
int32_t k_sonnet__dialog_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback int32_t func(Sonnet__Dialog* self, const char* signal)
///
void k_sonnet__dialog_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param signal QMetaMethod*
///
bool k_sonnet__dialog_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param signal QMetaMethod*
///
bool k_sonnet__dialog_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback bool func(Sonnet__Dialog* self, QMetaMethod* signal)
///
void k_sonnet__dialog_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sonnet__dialog_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sonnet__dialog_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Sonnet__Dialog*
/// @param callback double func(Sonnet__Dialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_sonnet__dialog_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Sonnet__Dialog*
/// @param callback void func(Sonnet__Dialog* self, const char* objectName)
///
void k_sonnet__dialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Sonnet__Dialog*
///
void k_sonnet__dialog_delete(void* self);

#endif
