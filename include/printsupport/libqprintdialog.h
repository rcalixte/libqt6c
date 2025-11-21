#pragma once
#ifndef SRC_PRINTSUPPORT_QT6C_LIBQPRINTDIALOG_H
#define SRC_PRINTSUPPORT_QT6C_LIBQPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qprintdialog.html

/// q_printdialog_new constructs a new QPrintDialog object.
///
/// @param parent QWidget*
QPrintDialog* q_printdialog_new(void* parent);

/// q_printdialog_new2 constructs a new QPrintDialog object.
///
/// @param printer QPrinter*
QPrintDialog* q_printdialog_new2(void* printer);

/// q_printdialog_new3 constructs a new QPrintDialog object.
///
QPrintDialog* q_printdialog_new3();

/// q_printdialog_new4 constructs a new QPrintDialog object.
///
/// @param printer QPrinter*
/// @param parent QWidget*
QPrintDialog* q_printdialog_new4(void* printer, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPrintDialog*
const QMetaObject* q_printdialog_meta_object(void* self);

/// @param self QPrintDialog*
/// @param param1 const char*
void* q_printdialog_metacast(void* self, const char* param1);

/// @param self QPrintDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_printdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPrintDialog*
/// @param callback int32_t func(QPrintDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_printdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPrintDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_printdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_printdialog_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#exec)
///
/// @param self QPrintDialog*
int32_t q_printdialog_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#exec)
///
/// Allows for overriding the related default method
///
/// @param self QPrintDialog*
/// @param callback int32_t func()
void q_printdialog_on_exec(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#exec)
///
/// Base class method implementation
///
/// @param self QPrintDialog*
int32_t q_printdialog_qbase_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accept)
///
/// @param self QPrintDialog*
void q_printdialog_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accept)
///
/// Allows for overriding the related default method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_accept(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accept)
///
/// Base class method implementation
///
/// @param self QPrintDialog*
void q_printdialog_qbase_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#done)
///
/// @param self QPrintDialog*
/// @param result int
void q_printdialog_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#done)
///
/// Allows for overriding the related default method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, int result)
void q_printdialog_on_done(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#done)
///
/// Base class method implementation
///
/// @param self QPrintDialog*
/// @param result int
void q_printdialog_qbase_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOption)
///
/// @param self QPrintDialog*
/// @param option enum QAbstractPrintDialog__PrintDialogOption
void q_printdialog_set_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#testOption)
///
/// @param self QPrintDialog*
/// @param option enum QAbstractPrintDialog__PrintDialogOption
bool q_printdialog_test_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOptions)
///
/// @param self QPrintDialog*
/// @param options flag of enum QAbstractPrintDialog__PrintDialogOption
void q_printdialog_set_options(void* self, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#options)
///
/// @param self QPrintDialog*
///
/// @return flag of enum QAbstractPrintDialog__PrintDialogOption
int32_t q_printdialog_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setVisible)
///
/// @param self QPrintDialog*
/// @param visible bool
void q_printdialog_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, bool visible)
void q_printdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setVisible)
///
/// Base class method implementation
///
/// @param self QPrintDialog*
/// @param visible bool
void q_printdialog_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#accepted)
///
/// @param self QPrintDialog*
/// @param printer QPrinter*
void q_printdialog_accepted(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_printdialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_printdialog_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#setOption)
///
/// @param self QPrintDialog*
/// @param option enum QAbstractPrintDialog__PrintDialogOption
/// @param on bool
void q_printdialog_set_option2(void* self, int32_t option, bool on);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setOptionTabs)
///
/// @param self QPrintDialog*
/// @param tabs libqt_list /* of QWidget* */
void q_printdialog_set_option_tabs(void* self, libqt_list tabs);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setPrintRange)
///
/// @param self QPrintDialog*
/// @param range enum QAbstractPrintDialog__PrintRange
void q_printdialog_set_print_range(void* self, int32_t range);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printRange)
///
/// @param self QPrintDialog*
///
/// @return enum QAbstractPrintDialog__PrintRange
int32_t q_printdialog_print_range(void* self);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setMinMax)
///
/// @param self QPrintDialog*
/// @param min int
/// @param max int
void q_printdialog_set_min_max(void* self, int min, int max);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#minPage)
///
/// @param self QPrintDialog*
int32_t q_printdialog_min_page(void* self);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#maxPage)
///
/// @param self QPrintDialog*
int32_t q_printdialog_max_page(void* self);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setFromTo)
///
/// @param self QPrintDialog*
/// @param fromPage int
/// @param toPage int
void q_printdialog_set_from_to(void* self, int fromPage, int toPage);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#fromPage)
///
/// @param self QPrintDialog*
int32_t q_printdialog_from_page(void* self);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#toPage)
///
/// @param self QPrintDialog*
int32_t q_printdialog_to_page(void* self);

/// Inherited from QAbstractPrintDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printer)
///
/// @param self QPrintDialog*
QPrinter* q_printdialog_printer(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self QPrintDialog*
int32_t q_printdialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QPrintDialog*
/// @param sizeGripEnabled bool
void q_printdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self QPrintDialog*
bool q_printdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QPrintDialog*
/// @param modal bool
void q_printdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QPrintDialog*
/// @param r int
void q_printdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QPrintDialog*
/// @param result int
void q_printdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, int result)
void q_printdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QPrintDialog*
void q_printdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self)
void q_printdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QPrintDialog*
uintptr_t q_printdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPrintDialog*
void q_printdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QPrintDialog*
uintptr_t q_printdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QPrintDialog*
uintptr_t q_printdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QPrintDialog*
QStyle* q_printdialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPrintDialog*
/// @param style QStyle*
void q_printdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QPrintDialog*
bool q_printdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QPrintDialog*
bool q_printdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QPrintDialog*
bool q_printdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QPrintDialog*
///
/// @return enum Qt__WindowModality
int32_t q_printdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPrintDialog*
/// @param windowModality enum Qt__WindowModality
void q_printdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QPrintDialog*
bool q_printdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
bool q_printdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPrintDialog*
/// @param enabled bool
void q_printdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPrintDialog*
/// @param disabled bool
void q_printdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPrintDialog*
/// @param windowModified bool
void q_printdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QPrintDialog*
QRect* q_printdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QPrintDialog*
const QRect* q_printdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QPrintDialog*
QRect* q_printdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QPrintDialog*
int32_t q_printdialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QPrintDialog*
int32_t q_printdialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QPrintDialog*
QPoint* q_printdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QPrintDialog*
QSize* q_printdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QPrintDialog*
QSize* q_printdialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QPrintDialog*
int32_t q_printdialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QPrintDialog*
int32_t q_printdialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QPrintDialog*
QRect* q_printdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QPrintDialog*
QRect* q_printdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QPrintDialog*
QRegion* q_printdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QPrintDialog*
QSize* q_printdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QPrintDialog*
QSize* q_printdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QPrintDialog*
int32_t q_printdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QPrintDialog*
int32_t q_printdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QPrintDialog*
int32_t q_printdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QPrintDialog*
int32_t q_printdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPrintDialog*
/// @param minimumSize QSize*
void q_printdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPrintDialog*
/// @param minw int
/// @param minh int
void q_printdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPrintDialog*
/// @param maximumSize QSize*
void q_printdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPrintDialog*
/// @param maxw int
/// @param maxh int
void q_printdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPrintDialog*
/// @param minw int
void q_printdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPrintDialog*
/// @param minh int
void q_printdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPrintDialog*
/// @param maxw int
void q_printdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPrintDialog*
/// @param maxh int
void q_printdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QPrintDialog*
QSize* q_printdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPrintDialog*
/// @param sizeIncrement QSize*
void q_printdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPrintDialog*
/// @param w int
/// @param h int
void q_printdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QPrintDialog*
QSize* q_printdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPrintDialog*
/// @param baseSize QSize*
void q_printdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPrintDialog*
/// @param basew int
/// @param baseh int
void q_printdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPrintDialog*
/// @param fixedSize QSize*
void q_printdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPrintDialog*
/// @param w int
/// @param h int
void q_printdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPrintDialog*
/// @param w int
void q_printdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPrintDialog*
/// @param h int
void q_printdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPrintDialog*
/// @param param1 QPointF*
QPointF* q_printdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPrintDialog*
/// @param param1 QPoint*
QPoint* q_printdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPrintDialog*
/// @param param1 QPointF*
QPointF* q_printdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPrintDialog*
/// @param param1 QPoint*
QPoint* q_printdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPrintDialog*
/// @param param1 QPointF*
QPointF* q_printdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPrintDialog*
/// @param param1 QPoint*
QPoint* q_printdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPrintDialog*
/// @param param1 QPointF*
QPointF* q_printdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPrintDialog*
/// @param param1 QPoint*
QPoint* q_printdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_printdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_printdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_printdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_printdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QPrintDialog*
const QPalette* q_printdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPrintDialog*
/// @param palette QPalette*
void q_printdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPrintDialog*
/// @param backgroundRole enum QPalette__ColorRole
void q_printdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QPrintDialog*
///
/// @return enum QPalette__ColorRole
int32_t q_printdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPrintDialog*
/// @param foregroundRole enum QPalette__ColorRole
void q_printdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QPrintDialog*
///
/// @return enum QPalette__ColorRole
int32_t q_printdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QPrintDialog*
const QFont* q_printdialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPrintDialog*
/// @param font QFont*
void q_printdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QPrintDialog*
QFontMetrics* q_printdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QPrintDialog*
QFontInfo* q_printdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QPrintDialog*
QCursor* q_printdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPrintDialog*
/// @param cursor QCursor*
void q_printdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPrintDialog*
void q_printdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPrintDialog*
/// @param enable bool
void q_printdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QPrintDialog*
bool q_printdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QPrintDialog*
bool q_printdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPrintDialog*
/// @param enable bool
void q_printdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QPrintDialog*
bool q_printdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPrintDialog*
/// @param mask QBitmap*
void q_printdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPrintDialog*
/// @param mask QRegion*
void q_printdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QPrintDialog*
QRegion* q_printdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPrintDialog*
void q_printdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param target QPaintDevice*
void q_printdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param painter QPainter*
void q_printdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPrintDialog*
QPixmap* q_printdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QPrintDialog*
QGraphicsEffect* q_printdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPrintDialog*
/// @param effect QGraphicsEffect*
void q_printdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPrintDialog*
/// @param type enum Qt__GestureType
void q_printdialog_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPrintDialog*
/// @param type enum Qt__GestureType
void q_printdialog_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPrintDialog*
/// @param windowTitle const char*
void q_printdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPrintDialog*
/// @param styleSheet const char*
void q_printdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPrintDialog*
/// @param icon QIcon*
void q_printdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QPrintDialog*
QIcon* q_printdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPrintDialog*
/// @param windowIconText const char*
void q_printdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPrintDialog*
/// @param windowRole const char*
void q_printdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPrintDialog*
/// @param filePath const char*
void q_printdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPrintDialog*
/// @param level double
void q_printdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QPrintDialog*
double q_printdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QPrintDialog*
bool q_printdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPrintDialog*
/// @param toolTip const char*
void q_printdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPrintDialog*
/// @param msec int
void q_printdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QPrintDialog*
int32_t q_printdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPrintDialog*
/// @param statusTip const char*
void q_printdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPrintDialog*
/// @param whatsThis const char*
void q_printdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPrintDialog*
/// @param name const char*
void q_printdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPrintDialog*
/// @param description const char*
void q_printdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPrintDialog*
/// @param direction enum Qt__LayoutDirection
void q_printdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QPrintDialog*
///
/// @return enum Qt__LayoutDirection
int32_t q_printdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPrintDialog*
void q_printdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPrintDialog*
/// @param locale QLocale*
void q_printdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QPrintDialog*
QLocale* q_printdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPrintDialog*
void q_printdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QPrintDialog*
bool q_printdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QPrintDialog*
bool q_printdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPrintDialog*
void q_printdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QPrintDialog*
bool q_printdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPrintDialog*
void q_printdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPrintDialog*
void q_printdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPrintDialog*
/// @param reason enum Qt__FocusReason
void q_printdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QPrintDialog*
///
/// @return enum Qt__FocusPolicy
int32_t q_printdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPrintDialog*
/// @param policy enum Qt__FocusPolicy
void q_printdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QPrintDialog*
bool q_printdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_printdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPrintDialog*
/// @param focusProxy QWidget*
void q_printdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QPrintDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_printdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPrintDialog*
/// @param policy enum Qt__ContextMenuPolicy
void q_printdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPrintDialog*
void q_printdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPrintDialog*
/// @param param1 QCursor*
void q_printdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPrintDialog*
void q_printdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPrintDialog*
void q_printdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPrintDialog*
void q_printdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPrintDialog*
/// @param key QKeySequence*
int32_t q_printdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPrintDialog*
/// @param id int
void q_printdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPrintDialog*
/// @param id int
void q_printdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPrintDialog*
/// @param id int
void q_printdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_printdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_printdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QPrintDialog*
bool q_printdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPrintDialog*
/// @param enable bool
void q_printdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QPrintDialog*
QGraphicsProxyWidget* q_printdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintDialog*
void q_printdialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintDialog*
void q_printdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_printdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintDialog*
/// @param param1 QRect*
void q_printdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPrintDialog*
/// @param param1 QRegion*
void q_printdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_printdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintDialog*
/// @param param1 QRect*
void q_printdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPrintDialog*
/// @param param1 QRegion*
void q_printdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPrintDialog*
/// @param hidden bool
void q_printdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPrintDialog*
void q_printdialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPrintDialog*
void q_printdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPrintDialog*
void q_printdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPrintDialog*
void q_printdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPrintDialog*
void q_printdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPrintDialog*
void q_printdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPrintDialog*
bool q_printdialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPrintDialog*
void q_printdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPrintDialog*
void q_printdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
void q_printdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPrintDialog*
/// @param x int
/// @param y int
void q_printdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPrintDialog*
/// @param param1 QPoint*
void q_printdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPrintDialog*
/// @param w int
/// @param h int
void q_printdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPrintDialog*
/// @param param1 QSize*
void q_printdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPrintDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_printdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPrintDialog*
/// @param geometry QRect*
void q_printdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
char* q_printdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPrintDialog*
/// @param geometry const char*
bool q_printdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPrintDialog*
void q_printdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QPrintDialog*
bool q_printdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
bool q_printdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QPrintDialog*
bool q_printdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QPrintDialog*
bool q_printdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QPrintDialog*
bool q_printdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QPrintDialog*
bool q_printdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QPrintDialog*
///
/// @return flag of enum Qt__WindowState
int32_t q_printdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPrintDialog*
/// @param state flag of enum Qt__WindowState
void q_printdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPrintDialog*
/// @param state flag of enum Qt__WindowState
void q_printdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QPrintDialog*
QSizePolicy* q_printdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPrintDialog*
/// @param sizePolicy QSizePolicy*
void q_printdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPrintDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_printdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QPrintDialog*
QRegion* q_printdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPrintDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_printdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPrintDialog*
/// @param margins QMargins*
void q_printdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QPrintDialog*
QMargins* q_printdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QPrintDialog*
QRect* q_printdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QPrintDialog*
QLayout* q_printdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPrintDialog*
/// @param layout QLayout*
void q_printdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPrintDialog*
void q_printdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPrintDialog*
/// @param parent QWidget*
void q_printdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPrintDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_printdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPrintDialog*
/// @param dx int
/// @param dy int
void q_printdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPrintDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_printdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QPrintDialog*
bool q_printdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPrintDialog*
/// @param on bool
void q_printdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintDialog*
/// @param action QAction*
void q_printdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPrintDialog*
/// @param actions libqt_list /* of QAction* */
void q_printdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPrintDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_printdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPrintDialog*
/// @param before QAction*
/// @param action QAction*
void q_printdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPrintDialog*
/// @param action QAction*
void q_printdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QPrintDialog*
libqt_list /* of QAction* */ q_printdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintDialog*
/// @param text const char*
QAction* q_printdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* q_printdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_printdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPrintDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_printdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QPrintDialog*
QWidget* q_printdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPrintDialog*
/// @param type flag of enum Qt__WindowType
void q_printdialog_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QPrintDialog*
///
/// @return flag of enum Qt__WindowType
int64_t q_printdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__WindowType
void q_printdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPrintDialog*
/// @param type flag of enum Qt__WindowType
void q_printdialog_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QPrintDialog*
///
/// @return enum Qt__WindowType
int64_t q_printdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_printdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintDialog*
/// @param x int
/// @param y int
QWidget* q_printdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintDialog*
/// @param p QPoint*
QWidget* q_printdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPrintDialog*
/// @param p QPointF*
QWidget* q_printdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__WidgetAttribute
void q_printdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__WidgetAttribute
bool q_printdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QPrintDialog*
void q_printdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QPrintDialog*
/// @param child QWidget*
bool q_printdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QPrintDialog*
bool q_printdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPrintDialog*
/// @param enabled bool
void q_printdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QPrintDialog*
QBackingStore* q_printdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QPrintDialog*
QWindow* q_printdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QPrintDialog*
QScreen* q_printdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPrintDialog*
/// @param screen QScreen*
void q_printdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_printdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPrintDialog*
/// @param title const char*
void q_printdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, const char* title)
void q_printdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPrintDialog*
/// @param icon QIcon*
void q_printdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QIcon* icon)
void q_printdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPrintDialog*
/// @param iconText const char*
void q_printdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, const char* iconText)
void q_printdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPrintDialog*
/// @param pos QPoint*
void q_printdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QPoint* pos)
void q_printdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QPrintDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_printdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPrintDialog*
/// @param hints flag of enum Qt__InputMethodHint
void q_printdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_printdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_printdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_printdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_printdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_printdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPrintDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_printdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPrintDialog*
/// @param rectangle QRect*
QPixmap* q_printdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPrintDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_printdialog_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPrintDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_printdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPrintDialog*
/// @param id int
/// @param enable bool
void q_printdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPrintDialog*
/// @param id int
/// @param enable bool
void q_printdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_printdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_printdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_printdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_printdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char* q_printdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPrintDialog*
/// @param name char*
void q_printdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPrintDialog*
bool q_printdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPrintDialog*
bool q_printdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPrintDialog*
bool q_printdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPrintDialog*
bool q_printdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPrintDialog*
/// @param b bool
bool q_printdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPrintDialog*
QThread* q_printdialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPrintDialog*
/// @param thread QThread*
bool q_printdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintDialog*
/// @param interval int
int32_t q_printdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPrintDialog*
/// @param id int
void q_printdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPrintDialog*
/// @param id enum Qt__TimerId
void q_printdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPrintDialog*
libqt_list /* of QObject* */ q_printdialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPrintDialog*
/// @param filterObj QObject*
void q_printdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPrintDialog*
/// @param obj QObject*
void q_printdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_printdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPrintDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_printdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_printdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_printdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPrintDialog*
void q_printdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPrintDialog*
void q_printdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPrintDialog*
/// @param name const char*
/// @param value QVariant*
bool q_printdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPrintDialog*
/// @param name const char*
QVariant* q_printdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrintDialog*
const char** q_printdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPrintDialog*
QBindingStorage* q_printdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPrintDialog*
const QBindingStorage* q_printdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintDialog*
void q_printdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self)
void q_printdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPrintDialog*
QObject* q_printdialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPrintDialog*
/// @param classname const char*
bool q_printdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPrintDialog*
void q_printdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPrintDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_printdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPrintDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_printdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_printdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPrintDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_printdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintDialog*
/// @param param1 QObject*
void q_printdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QObject* param1)
void q_printdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPrintDialog*
bool q_printdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPrintDialog*
int32_t q_printdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPrintDialog*
int32_t q_printdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPrintDialog*
int32_t q_printdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPrintDialog*
int32_t q_printdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPrintDialog*
int32_t q_printdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPrintDialog*
int32_t q_printdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPrintDialog*
double q_printdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPrintDialog*
double q_printdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPrintDialog*
int32_t q_printdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPrintDialog*
int32_t q_printdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_printdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_printdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
QSize* q_printdialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
QSize* q_printdialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QSize* func()
void q_printdialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
QSize* q_printdialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
QSize* q_printdialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QSize* func()
void q_printdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QKeyEvent*
void q_printdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QKeyEvent*
void q_printdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QKeyEvent* param1)
void q_printdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QCloseEvent*
void q_printdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QCloseEvent*
void q_printdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QCloseEvent* param1)
void q_printdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QShowEvent*
void q_printdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QShowEvent*
void q_printdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QShowEvent* param1)
void q_printdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QResizeEvent*
void q_printdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QResizeEvent*
void q_printdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QResizeEvent* param1)
void q_printdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QContextMenuEvent*
void q_printdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QContextMenuEvent*
void q_printdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QContextMenuEvent* param1)
void q_printdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_printdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_printdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func(QPrintDialog* self, QObject* param1, QEvent* param2)
void q_printdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
int32_t q_printdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
int32_t q_printdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback int32_t func()
void q_printdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 int
int32_t q_printdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 int
int32_t q_printdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback int32_t func(QPrintDialog* self, int param1)
void q_printdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func()
void q_printdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
QPaintEngine* q_printdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
QPaintEngine* q_printdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QPaintEngine* func()
void q_printdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
bool q_printdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
bool q_printdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func(QPrintDialog* self, QEvent* event)
void q_printdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMouseEvent* event)
void q_printdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMouseEvent* event)
void q_printdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMouseEvent* event)
void q_printdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMouseEvent*
void q_printdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMouseEvent* event)
void q_printdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QWheelEvent*
void q_printdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QWheelEvent*
void q_printdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QWheelEvent* event)
void q_printdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QKeyEvent*
void q_printdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QKeyEvent*
void q_printdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QKeyEvent* event)
void q_printdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QFocusEvent*
void q_printdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QFocusEvent*
void q_printdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QFocusEvent* event)
void q_printdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QFocusEvent*
void q_printdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QFocusEvent*
void q_printdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QFocusEvent* event)
void q_printdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEnterEvent*
void q_printdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEnterEvent*
void q_printdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QEnterEvent* event)
void q_printdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
void q_printdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
void q_printdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QEvent* event)
void q_printdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QPaintEvent*
void q_printdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QPaintEvent*
void q_printdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QPaintEvent* event)
void q_printdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMoveEvent*
void q_printdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QMoveEvent*
void q_printdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMoveEvent* event)
void q_printdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QTabletEvent*
void q_printdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QTabletEvent*
void q_printdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QTabletEvent* event)
void q_printdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QActionEvent*
void q_printdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QActionEvent*
void q_printdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QActionEvent* event)
void q_printdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragEnterEvent*
void q_printdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragEnterEvent*
void q_printdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QDragEnterEvent* event)
void q_printdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragMoveEvent*
void q_printdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragMoveEvent*
void q_printdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QDragMoveEvent* event)
void q_printdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragLeaveEvent*
void q_printdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDragLeaveEvent*
void q_printdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QDragLeaveEvent* event)
void q_printdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDropEvent*
void q_printdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QDropEvent*
void q_printdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QDropEvent* event)
void q_printdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QHideEvent*
void q_printdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QHideEvent*
void q_printdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QHideEvent* event)
void q_printdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_printdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_printdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func(QPrintDialog* self, const char* eventType, void* message, intptr_t* result)
void q_printdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QEvent*
void q_printdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QEvent*
void q_printdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QEvent* param1)
void q_printdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_printdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_printdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback int32_t func(QPrintDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_printdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param painter QPainter*
void q_printdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param painter QPainter*
void q_printdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QPainter* painter)
void q_printdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param offset QPoint*
QPaintDevice* q_printdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param offset QPoint*
QPaintDevice* q_printdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QPaintDevice* func(QPrintDialog* self, QPoint* offset)
void q_printdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
QPainter* q_printdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
QPainter* q_printdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QPainter* func()
void q_printdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QInputMethodEvent*
void q_printdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QInputMethodEvent*
void q_printdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QInputMethodEvent* param1)
void q_printdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_printdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_printdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QVariant* func(QPrintDialog* self, enum Qt__InputMethodQuery param1)
void q_printdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param next bool
bool q_printdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param next bool
bool q_printdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func(QPrintDialog* self, bool next)
void q_printdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QTimerEvent*
void q_printdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QTimerEvent*
void q_printdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QTimerEvent* event)
void q_printdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QChildEvent*
void q_printdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QChildEvent*
void q_printdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QChildEvent* event)
void q_printdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
void q_printdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param event QEvent*
void q_printdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QEvent* event)
void q_printdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
void q_printdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
void q_printdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMetaMethod* signal)
void q_printdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
void q_printdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
void q_printdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QMetaMethod* signal)
void q_printdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
void q_printdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param param1 QWidget*
void q_printdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, QWidget* param1)
void q_printdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
void q_printdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback void func()
void q_printdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func()
void q_printdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
bool q_printdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func()
void q_printdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
QObject* q_printdialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
QObject* q_printdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback QObject* func()
void q_printdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
int32_t q_printdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
int32_t q_printdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback int32_t func()
void q_printdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal const char*
int32_t q_printdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal const char*
int32_t q_printdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback int32_t func(QPrintDialog* self, const char* signal)
void q_printdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
bool q_printdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param signal QMetaMethod*
bool q_printdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback bool func(QPrintDialog* self, QMetaMethod* signal)
void q_printdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrintDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_printdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_printdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrintDialog*
/// @param callback double func(QPrintDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_printdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPrintDialog*
/// @param callback void func(QPrintDialog* self, const char* objectName)
void q_printdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprintdialog.html#dtor.QPrintDialog)
///
/// Delete this object from C++ memory.
///
/// @param self QPrintDialog*
void q_printdialog_delete(void* self);

#endif
