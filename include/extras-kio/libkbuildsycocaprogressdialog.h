#pragma once
#ifndef EXTRAS_KIO_LIBKBUILDSYCOCAPROGRESSDIALOG_H
#define EXTRAS_KIO_LIBKBUILDSYCOCAPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbuildsycocaprogressdialog.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KBuildSycocaProgressDialog*
///
const QMetaObject* k_buildsycocaprogressdialog_meta_object(const void* self);

/// @param self KBuildSycocaProgressDialog*
/// @param param1 const char*
///
void* k_buildsycocaprogressdialog_metacast(void* self, const char* param1);

/// @param self KBuildSycocaProgressDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_buildsycocaprogressdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_buildsycocaprogressdialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kbuildsycocaprogressdialog.html#rebuildKSycoca)
///
/// @param parent QWidget*
///
void k_buildsycocaprogressdialog_rebuild_k_sycoca(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_buildsycocaprogressdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_buildsycocaprogressdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setLabel)
///
/// @param self KBuildSycocaProgressDialog*
/// @param label QLabel*
///
void k_buildsycocaprogressdialog_set_label(void* self, void* label);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setCancelButton)
///
/// @param self KBuildSycocaProgressDialog*
/// @param button QPushButton*
///
void k_buildsycocaprogressdialog_set_cancel_button(void* self, void* button);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setBar)
///
/// @param self KBuildSycocaProgressDialog*
/// @param bar QProgressBar*
///
void k_buildsycocaprogressdialog_set_bar(void* self, void* bar);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#wasCanceled)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_was_canceled(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#minimum)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_minimum(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#maximum)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_maximum(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#value)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_value(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#sizeHint)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_size_hint(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#labelText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_label_text(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#minimumDuration)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_minimum_duration(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setAutoReset)
///
/// @param self KBuildSycocaProgressDialog*
/// @param reset bool
///
void k_buildsycocaprogressdialog_set_auto_reset(void* self, bool reset);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#autoReset)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_auto_reset(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setAutoClose)
///
/// @param self KBuildSycocaProgressDialog*
/// @param close bool
///
void k_buildsycocaprogressdialog_set_auto_close(void* self, bool close);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#autoClose)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_auto_close(const void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#cancel)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_cancel(void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#reset)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_reset(void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setMaximum)
///
/// @param self KBuildSycocaProgressDialog*
/// @param maximum int
///
void k_buildsycocaprogressdialog_set_maximum(void* self, int maximum);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setMinimum)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minimum int
///
void k_buildsycocaprogressdialog_set_minimum(void* self, int minimum);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setRange)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minimum int
/// @param maximum int
///
void k_buildsycocaprogressdialog_set_range(void* self, int minimum, int maximum);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setValue)
///
/// @param self KBuildSycocaProgressDialog*
/// @param progress int
///
void k_buildsycocaprogressdialog_set_value(void* self, int progress);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setLabelText)
///
/// @param self KBuildSycocaProgressDialog*
/// @param text const char*
///
void k_buildsycocaprogressdialog_set_label_text(void* self, const char* text);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setCancelButtonText)
///
/// @param self KBuildSycocaProgressDialog*
/// @param text const char*
///
void k_buildsycocaprogressdialog_set_cancel_button_text(void* self, const char* text);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#setMinimumDuration)
///
/// @param self KBuildSycocaProgressDialog*
/// @param ms int
///
void k_buildsycocaprogressdialog_set_minimum_duration(void* self, int ms);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#canceled)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_canceled(void* self);

/// Inherited from QProgressDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprogressdialog.html#canceled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self)
///
void k_buildsycocaprogressdialog_on_canceled(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_result(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// @param self KBuildSycocaProgressDialog*
/// @param visible bool
///
void k_buildsycocaprogressdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_minimum_size_hint(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param sizeGripEnabled bool
///
void k_buildsycocaprogressdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_size_grip_enabled(const void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KBuildSycocaProgressDialog*
/// @param modal bool
///
void k_buildsycocaprogressdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KBuildSycocaProgressDialog*
/// @param r int
///
void k_buildsycocaprogressdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KBuildSycocaProgressDialog*
/// @param result int
///
void k_buildsycocaprogressdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, int result)
///
void k_buildsycocaprogressdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self)
///
void k_buildsycocaprogressdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self)
///
void k_buildsycocaprogressdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// @param self KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 int
///
void k_buildsycocaprogressdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_reject(void* self);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KBuildSycocaProgressDialog*
///
QPaintDevice* k_buildsycocaprogressdialog_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KBuildSycocaProgressDialog object
///
/// @param _qpaintdevice QPaintDevice*
///
KBuildSycocaProgressDialog* k_buildsycocaprogressdialog_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KBuildSycocaProgressDialog*
///
uintptr_t k_buildsycocaprogressdialog_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KBuildSycocaProgressDialog*
///
uintptr_t k_buildsycocaprogressdialog_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KBuildSycocaProgressDialog*
///
uintptr_t k_buildsycocaprogressdialog_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KBuildSycocaProgressDialog*
///
QStyle* k_buildsycocaprogressdialog_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KBuildSycocaProgressDialog*
/// @param style QStyle*
///
void k_buildsycocaprogressdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_buildsycocaprogressdialog_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KBuildSycocaProgressDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_buildsycocaprogressdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
///
bool k_buildsycocaprogressdialog_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param enabled bool
///
void k_buildsycocaprogressdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param disabled bool
///
void k_buildsycocaprogressdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KBuildSycocaProgressDialog*
/// @param windowModified bool
///
void k_buildsycocaprogressdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRect* k_buildsycocaprogressdialog_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KBuildSycocaProgressDialog*
///
const QRect* k_buildsycocaprogressdialog_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRect* k_buildsycocaprogressdialog_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KBuildSycocaProgressDialog*
///
QPoint* k_buildsycocaprogressdialog_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRect* k_buildsycocaprogressdialog_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRect* k_buildsycocaprogressdialog_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRegion* k_buildsycocaprogressdialog_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minimumSize QSize*
///
void k_buildsycocaprogressdialog_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minw int
/// @param minh int
///
void k_buildsycocaprogressdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param maximumSize QSize*
///
void k_buildsycocaprogressdialog_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param maxw int
/// @param maxh int
///
void k_buildsycocaprogressdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minw int
///
void k_buildsycocaprogressdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KBuildSycocaProgressDialog*
/// @param minh int
///
void k_buildsycocaprogressdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KBuildSycocaProgressDialog*
/// @param maxw int
///
void k_buildsycocaprogressdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KBuildSycocaProgressDialog*
/// @param maxh int
///
void k_buildsycocaprogressdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBuildSycocaProgressDialog*
/// @param sizeIncrement QSize*
///
void k_buildsycocaprogressdialog_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBuildSycocaProgressDialog*
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSize* k_buildsycocaprogressdialog_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param baseSize QSize*
///
void k_buildsycocaprogressdialog_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param basew int
/// @param baseh int
///
void k_buildsycocaprogressdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param fixedSize QSize*
///
void k_buildsycocaprogressdialog_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KBuildSycocaProgressDialog*
/// @param w int
///
void k_buildsycocaprogressdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KBuildSycocaProgressDialog*
/// @param h int
///
void k_buildsycocaprogressdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_buildsycocaprogressdialog_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_buildsycocaprogressdialog_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KBuildSycocaProgressDialog*
///
const QPalette* k_buildsycocaprogressdialog_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KBuildSycocaProgressDialog*
/// @param palette QPalette*
///
void k_buildsycocaprogressdialog_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KBuildSycocaProgressDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_buildsycocaprogressdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_buildsycocaprogressdialog_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KBuildSycocaProgressDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_buildsycocaprogressdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_buildsycocaprogressdialog_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KBuildSycocaProgressDialog*
///
const QFont* k_buildsycocaprogressdialog_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KBuildSycocaProgressDialog*
/// @param font QFont*
///
void k_buildsycocaprogressdialog_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KBuildSycocaProgressDialog*
///
QFontMetrics* k_buildsycocaprogressdialog_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KBuildSycocaProgressDialog*
///
QFontInfo* k_buildsycocaprogressdialog_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KBuildSycocaProgressDialog*
///
QCursor* k_buildsycocaprogressdialog_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KBuildSycocaProgressDialog*
/// @param cursor QCursor*
///
void k_buildsycocaprogressdialog_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KBuildSycocaProgressDialog*
/// @param enable bool
///
void k_buildsycocaprogressdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KBuildSycocaProgressDialog*
/// @param enable bool
///
void k_buildsycocaprogressdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBuildSycocaProgressDialog*
/// @param mask QBitmap*
///
void k_buildsycocaprogressdialog_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBuildSycocaProgressDialog*
/// @param mask QRegion*
///
void k_buildsycocaprogressdialog_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRegion* k_buildsycocaprogressdialog_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param target QPaintDevice*
///
void k_buildsycocaprogressdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param painter QPainter*
///
void k_buildsycocaprogressdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBuildSycocaProgressDialog*
///
QPixmap* k_buildsycocaprogressdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KBuildSycocaProgressDialog*
///
QGraphicsEffect* k_buildsycocaprogressdialog_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KBuildSycocaProgressDialog*
/// @param effect QGraphicsEffect*
///
void k_buildsycocaprogressdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBuildSycocaProgressDialog*
/// @param type enum Qt__GestureType
///
void k_buildsycocaprogressdialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KBuildSycocaProgressDialog*
/// @param type enum Qt__GestureType
///
void k_buildsycocaprogressdialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KBuildSycocaProgressDialog*
/// @param windowTitle const char*
///
void k_buildsycocaprogressdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KBuildSycocaProgressDialog*
/// @param styleSheet const char*
///
void k_buildsycocaprogressdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KBuildSycocaProgressDialog*
/// @param icon QIcon*
///
void k_buildsycocaprogressdialog_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KBuildSycocaProgressDialog*
///
QIcon* k_buildsycocaprogressdialog_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KBuildSycocaProgressDialog*
/// @param windowIconText const char*
///
void k_buildsycocaprogressdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KBuildSycocaProgressDialog*
/// @param windowRole const char*
///
void k_buildsycocaprogressdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KBuildSycocaProgressDialog*
/// @param filePath const char*
///
void k_buildsycocaprogressdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KBuildSycocaProgressDialog*
/// @param level double
///
void k_buildsycocaprogressdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KBuildSycocaProgressDialog*
///
double k_buildsycocaprogressdialog_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KBuildSycocaProgressDialog*
/// @param toolTip const char*
///
void k_buildsycocaprogressdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KBuildSycocaProgressDialog*
/// @param msec int
///
void k_buildsycocaprogressdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KBuildSycocaProgressDialog*
/// @param statusTip const char*
///
void k_buildsycocaprogressdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KBuildSycocaProgressDialog*
/// @param whatsThis const char*
///
void k_buildsycocaprogressdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KBuildSycocaProgressDialog*
/// @param name const char*
///
void k_buildsycocaprogressdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KBuildSycocaProgressDialog*
/// @param description const char*
///
void k_buildsycocaprogressdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KBuildSycocaProgressDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_buildsycocaprogressdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_buildsycocaprogressdialog_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KBuildSycocaProgressDialog*
/// @param locale QLocale*
///
void k_buildsycocaprogressdialog_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KBuildSycocaProgressDialog*
///
QLocale* k_buildsycocaprogressdialog_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBuildSycocaProgressDialog*
/// @param reason enum Qt__FocusReason
///
void k_buildsycocaprogressdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_buildsycocaprogressdialog_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KBuildSycocaProgressDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_buildsycocaprogressdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_buildsycocaprogressdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KBuildSycocaProgressDialog*
/// @param focusProxy QWidget*
///
void k_buildsycocaprogressdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_buildsycocaprogressdialog_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KBuildSycocaProgressDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_buildsycocaprogressdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QCursor*
///
void k_buildsycocaprogressdialog_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBuildSycocaProgressDialog*
/// @param key QKeySequence*
///
int32_t k_buildsycocaprogressdialog_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
///
void k_buildsycocaprogressdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
///
void k_buildsycocaprogressdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
///
void k_buildsycocaprogressdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_buildsycocaprogressdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_buildsycocaprogressdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param enable bool
///
void k_buildsycocaprogressdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KBuildSycocaProgressDialog*
///
QGraphicsProxyWidget* k_buildsycocaprogressdialog_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBuildSycocaProgressDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QRect*
///
void k_buildsycocaprogressdialog_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QRegion*
///
void k_buildsycocaprogressdialog_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBuildSycocaProgressDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QRect*
///
void k_buildsycocaprogressdialog_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QRegion*
///
void k_buildsycocaprogressdialog_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KBuildSycocaProgressDialog*
/// @param hidden bool
///
void k_buildsycocaprogressdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QWidget*
///
void k_buildsycocaprogressdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBuildSycocaProgressDialog*
/// @param x int
/// @param y int
///
void k_buildsycocaprogressdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QPoint*
///
void k_buildsycocaprogressdialog_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QSize*
///
void k_buildsycocaprogressdialog_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBuildSycocaProgressDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_buildsycocaprogressdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBuildSycocaProgressDialog*
/// @param geometry QRect*
///
void k_buildsycocaprogressdialog_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KBuildSycocaProgressDialog*
/// @param geometry const char*
///
bool k_buildsycocaprogressdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 QWidget*
///
bool k_buildsycocaprogressdialog_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_buildsycocaprogressdialog_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KBuildSycocaProgressDialog*
/// @param state flag of enum Qt__WindowState
///
void k_buildsycocaprogressdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KBuildSycocaProgressDialog*
/// @param state flag of enum Qt__WindowState
///
void k_buildsycocaprogressdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KBuildSycocaProgressDialog*
///
QSizePolicy* k_buildsycocaprogressdialog_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBuildSycocaProgressDialog*
/// @param sizePolicy QSizePolicy*
///
void k_buildsycocaprogressdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBuildSycocaProgressDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_buildsycocaprogressdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 int
///
int32_t k_buildsycocaprogressdialog_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRegion* k_buildsycocaprogressdialog_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBuildSycocaProgressDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_buildsycocaprogressdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBuildSycocaProgressDialog*
/// @param margins QMargins*
///
void k_buildsycocaprogressdialog_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KBuildSycocaProgressDialog*
///
QMargins* k_buildsycocaprogressdialog_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KBuildSycocaProgressDialog*
///
QRect* k_buildsycocaprogressdialog_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KBuildSycocaProgressDialog*
///
QLayout* k_buildsycocaprogressdialog_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KBuildSycocaProgressDialog*
/// @param layout QLayout*
///
void k_buildsycocaprogressdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBuildSycocaProgressDialog*
/// @param parent QWidget*
///
void k_buildsycocaprogressdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBuildSycocaProgressDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_buildsycocaprogressdialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBuildSycocaProgressDialog*
/// @param dx int
/// @param dy int
///
void k_buildsycocaprogressdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBuildSycocaProgressDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_buildsycocaprogressdialog_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KBuildSycocaProgressDialog*
/// @param on bool
///
void k_buildsycocaprogressdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param action QAction*
///
void k_buildsycocaprogressdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KBuildSycocaProgressDialog*
/// @param actions libqt_list of QAction*
///
void k_buildsycocaprogressdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KBuildSycocaProgressDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_buildsycocaprogressdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_buildsycocaprogressdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param action QAction*
///
void k_buildsycocaprogressdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_buildsycocaprogressdialog_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param text const char*
///
QAction* k_buildsycocaprogressdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_buildsycocaprogressdialog_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_buildsycocaprogressdialog_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBuildSycocaProgressDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_buildsycocaprogressdialog_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWidget* k_buildsycocaprogressdialog_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KBuildSycocaProgressDialog*
/// @param type flag of enum Qt__WindowType
///
void k_buildsycocaprogressdialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_buildsycocaprogressdialog_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 enum Qt__WindowType
///
void k_buildsycocaprogressdialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KBuildSycocaProgressDialog*
/// @param type flag of enum Qt__WindowType
///
void k_buildsycocaprogressdialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return enum Qt__WindowType
///
int32_t k_buildsycocaprogressdialog_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_buildsycocaprogressdialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param x int
/// @param y int
///
QWidget* k_buildsycocaprogressdialog_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param p QPoint*
///
QWidget* k_buildsycocaprogressdialog_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param p QPointF*
///
QWidget* k_buildsycocaprogressdialog_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_buildsycocaprogressdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_buildsycocaprogressdialog_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self const KBuildSycocaProgressDialog*
///
QPaintEngine* k_buildsycocaprogressdialog_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param child QWidget*
///
bool k_buildsycocaprogressdialog_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KBuildSycocaProgressDialog*
/// @param enabled bool
///
void k_buildsycocaprogressdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KBuildSycocaProgressDialog*
///
QBackingStore* k_buildsycocaprogressdialog_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KBuildSycocaProgressDialog*
///
QWindow* k_buildsycocaprogressdialog_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KBuildSycocaProgressDialog*
///
QScreen* k_buildsycocaprogressdialog_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KBuildSycocaProgressDialog*
/// @param screen QScreen*
///
void k_buildsycocaprogressdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_buildsycocaprogressdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param title const char*
///
void k_buildsycocaprogressdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, const char* title)
///
void k_buildsycocaprogressdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param icon QIcon*
///
void k_buildsycocaprogressdialog_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, QIcon* icon)
///
void k_buildsycocaprogressdialog_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param iconText const char*
///
void k_buildsycocaprogressdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, const char* iconText)
///
void k_buildsycocaprogressdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBuildSycocaProgressDialog*
/// @param pos QPoint*
///
void k_buildsycocaprogressdialog_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, QPoint* pos)
///
void k_buildsycocaprogressdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_buildsycocaprogressdialog_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_buildsycocaprogressdialog_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KBuildSycocaProgressDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_buildsycocaprogressdialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_buildsycocaprogressdialog_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_buildsycocaprogressdialog_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_buildsycocaprogressdialog_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_buildsycocaprogressdialog_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_buildsycocaprogressdialog_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBuildSycocaProgressDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_buildsycocaprogressdialog_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBuildSycocaProgressDialog*
/// @param rectangle QRect*
///
QPixmap* k_buildsycocaprogressdialog_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBuildSycocaProgressDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_buildsycocaprogressdialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBuildSycocaProgressDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_buildsycocaprogressdialog_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
/// @param enable bool
///
void k_buildsycocaprogressdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
/// @param enable bool
///
void k_buildsycocaprogressdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_buildsycocaprogressdialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_buildsycocaprogressdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_buildsycocaprogressdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_buildsycocaprogressdialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char* k_buildsycocaprogressdialog_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBuildSycocaProgressDialog*
/// @param name const char*
///
void k_buildsycocaprogressdialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBuildSycocaProgressDialog*
/// @param b bool
///
bool k_buildsycocaprogressdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KBuildSycocaProgressDialog*
///
QThread* k_buildsycocaprogressdialog_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBuildSycocaProgressDialog*
/// @param thread QThread*
///
bool k_buildsycocaprogressdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param interval int
///
int32_t k_buildsycocaprogressdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param time int64_t of nanoseconds
///
int32_t k_buildsycocaprogressdialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id int
///
void k_buildsycocaprogressdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param id enum Qt__TimerId
///
void k_buildsycocaprogressdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KBuildSycocaProgressDialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_buildsycocaprogressdialog_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBuildSycocaProgressDialog*
/// @param filterObj QObject*
///
void k_buildsycocaprogressdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBuildSycocaProgressDialog*
/// @param obj QObject*
///
void k_buildsycocaprogressdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_buildsycocaprogressdialog_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_buildsycocaprogressdialog_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_buildsycocaprogressdialog_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_buildsycocaprogressdialog_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_buildsycocaprogressdialog_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param receiver QObject*
///
bool k_buildsycocaprogressdialog_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_buildsycocaprogressdialog_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBuildSycocaProgressDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_buildsycocaprogressdialog_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param name const char*
///
QVariant* k_buildsycocaprogressdialog_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KBuildSycocaProgressDialog*
///
const char** k_buildsycocaprogressdialog_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBuildSycocaProgressDialog*
///
QBindingStorage* k_buildsycocaprogressdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KBuildSycocaProgressDialog*
///
const QBindingStorage* k_buildsycocaprogressdialog_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self)
///
void k_buildsycocaprogressdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KBuildSycocaProgressDialog*
///
QObject* k_buildsycocaprogressdialog_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param classname const char*
///
bool k_buildsycocaprogressdialog_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBuildSycocaProgressDialog*
///
void k_buildsycocaprogressdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_buildsycocaprogressdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBuildSycocaProgressDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_buildsycocaprogressdialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_buildsycocaprogressdialog_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_buildsycocaprogressdialog_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_buildsycocaprogressdialog_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param signal const char*
///
bool k_buildsycocaprogressdialog_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_buildsycocaprogressdialog_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_buildsycocaprogressdialog_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBuildSycocaProgressDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_buildsycocaprogressdialog_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBuildSycocaProgressDialog*
/// @param param1 QObject*
///
void k_buildsycocaprogressdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, QObject* param1)
///
void k_buildsycocaprogressdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KBuildSycocaProgressDialog*
///
bool k_buildsycocaprogressdialog_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KBuildSycocaProgressDialog*
///
double k_buildsycocaprogressdialog_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KBuildSycocaProgressDialog*
///
double k_buildsycocaprogressdialog_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KBuildSycocaProgressDialog*
///
int32_t k_buildsycocaprogressdialog_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_buildsycocaprogressdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_buildsycocaprogressdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBuildSycocaProgressDialog*
/// @param callback void func(KBuildSycocaProgressDialog* self, const char* objectName)
///
void k_buildsycocaprogressdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
