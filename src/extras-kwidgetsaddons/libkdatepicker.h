#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDATEPICKER_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDATEPICKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdatepicker.html)

/// k_datepicker_new constructs a new KDatePicker object.
///
/// @param parent QWidget*
///
KDatePicker* k_datepicker_new(void* parent);

/// [Upstream resources](https://api.kde.org/kdatepicker.html)

/// k_datepicker_new2 constructs a new KDatePicker object.
///
KDatePicker* k_datepicker_new2();

/// [Upstream resources](https://api.kde.org/kdatepicker.html)

/// k_datepicker_new3 constructs a new KDatePicker object.
///
/// @param dt QDate*
///
KDatePicker* k_datepicker_new3(void* dt);

/// [Upstream resources](https://api.kde.org/kdatepicker.html)

/// k_datepicker_new4 constructs a new KDatePicker object.
///
/// @param dt QDate*
/// @param parent QWidget*
///
KDatePicker* k_datepicker_new4(void* dt, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDatePicker*
///
const QMetaObject* k_datepicker_meta_object(void* self);

/// @param self KDatePicker*
/// @param param1 const char*
///
void* k_datepicker_metacast(void* self, const char* param1);

/// @param self KDatePicker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_datepicker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback int32_t func(KDatePicker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_datepicker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDatePicker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_datepicker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_datepicker_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#sizeHint)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback QSize* func()
///
void k_datepicker_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
QSize* k_datepicker_qbase_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#setDate)
///
/// @param self KDatePicker*
/// @param date QDate*
///
bool k_datepicker_set_date(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#date)
///
/// @param self KDatePicker*
///
const QDate* k_datepicker_date(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#setFontSize)
///
/// @param self KDatePicker*
/// @param fontSize int
///
void k_datepicker_set_font_size(void* self, int fontSize);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#fontSize)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_font_size(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#setCloseButton)
///
/// @param self KDatePicker*
/// @param enable bool
///
void k_datepicker_set_close_button(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#hasCloseButton)
///
/// @param self KDatePicker*
///
bool k_datepicker_has_close_button(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#setDateRange)
///
/// @param self KDatePicker*
/// @param minDate QDate*
///
void k_datepicker_set_date_range(void* self, void* minDate);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#eventFilter)
///
/// @param self KDatePicker*
/// @param o QObject*
/// @param e QEvent*
///
bool k_datepicker_event_filter(void* self, void* o, void* e);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback bool func(KDatePicker* self, QObject* o, QEvent* e)
///
void k_datepicker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KDatePicker*
/// @param o QObject*
/// @param e QEvent*
///
bool k_datepicker_qbase_event_filter(void* self, void* o, void* e);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#resizeEvent)
///
/// @param self KDatePicker*
/// @param param1 QResizeEvent*
///
void k_datepicker_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QResizeEvent* param1)
///
void k_datepicker_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KDatePicker*
/// @param param1 QResizeEvent*
///
void k_datepicker_qbase_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#changeEvent)
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_change_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QEvent* event)
///
void k_datepicker_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#changeEvent)
///
/// Base class method implementation
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_qbase_change_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateChangedSlot)
///
/// @param self KDatePicker*
/// @param date QDate*
///
void k_datepicker_date_changed_slot(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateChangedSlot)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDate* date)
///
void k_datepicker_on_date_changed_slot(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateChangedSlot)
///
/// Base class method implementation
///
/// @param self KDatePicker*
/// @param date QDate*
///
void k_datepicker_qbase_date_changed_slot(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#tableClickedSlot)
///
/// @param self KDatePicker*
///
void k_datepicker_table_clicked_slot(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#tableClickedSlot)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_table_clicked_slot(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#tableClickedSlot)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_table_clicked_slot(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthForwardClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_month_forward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthForwardClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_month_forward_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthForwardClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_month_forward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthBackwardClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_month_backward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthBackwardClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_month_backward_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#monthBackwardClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_month_backward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearForwardClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_year_forward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearForwardClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_year_forward_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearForwardClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_year_forward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearBackwardClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_year_backward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearBackwardClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_year_backward_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#yearBackwardClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_year_backward_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectMonthClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_select_month_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectMonthClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_select_month_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectMonthClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_select_month_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectYearClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_select_year_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectYearClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_select_year_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#selectYearClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_select_year_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#uncheckYearSelector)
///
/// @param self KDatePicker*
///
void k_datepicker_uncheck_year_selector(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#uncheckYearSelector)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_uncheck_year_selector(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#uncheckYearSelector)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_uncheck_year_selector(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#lineEnterPressed)
///
/// @param self KDatePicker*
///
void k_datepicker_line_enter_pressed(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#lineEnterPressed)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_line_enter_pressed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#lineEnterPressed)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_line_enter_pressed(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#todayButtonClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_today_button_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#todayButtonClicked)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_today_button_clicked(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kdatepicker.html#todayButtonClicked)
///
/// Base class method implementation
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_today_button_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#weekSelected)
///
/// @param self KDatePicker*
/// @param param1 int
///
void k_datepicker_week_selected(void* self, int param1);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#weekSelected)
///
/// Allows for overriding the related default method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, int param1)
///
void k_datepicker_on_week_selected(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#weekSelected)
///
/// Base class method implementation
///
/// @param self KDatePicker*
/// @param param1 int
///
void k_datepicker_qbase_week_selected(void* self, int param1);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateChanged)
///
/// @param self KDatePicker*
/// @param date QDate*
///
void k_datepicker_date_changed(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateChanged)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDate* date)
///
void k_datepicker_on_date_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateSelected)
///
/// @param self KDatePicker*
/// @param date QDate*
///
void k_datepicker_date_selected(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateSelected)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDate* date)
///
void k_datepicker_on_date_selected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateEntered)
///
/// @param self KDatePicker*
/// @param date QDate*
///
void k_datepicker_date_entered(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dateEntered)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDate* date)
///
void k_datepicker_on_date_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#tableClicked)
///
/// @param self KDatePicker*
///
void k_datepicker_table_clicked(void* self);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#tableClicked)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self)
///
void k_datepicker_on_table_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_datepicker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_datepicker_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kdatepicker.html#setDateRange)
///
/// @param self KDatePicker*
/// @param minDate QDate*
/// @param maxDate QDate*
///
void k_datepicker_set_date_range2(void* self, void* minDate, void* maxDate);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KDatePicker*
/// @param frameStyle int
///
void k_datepicker_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KDatePicker*
///
/// @return enum QFrame__Shape
///
int32_t k_datepicker_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KDatePicker*
/// @param frameShape enum QFrame__Shape
///
void k_datepicker_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KDatePicker*
///
/// @return enum QFrame__Shadow
///
int32_t k_datepicker_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KDatePicker*
/// @param frameShadow enum QFrame__Shadow
///
void k_datepicker_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KDatePicker*
/// @param lineWidth int
///
void k_datepicker_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KDatePicker*
/// @param midLineWidth int
///
void k_datepicker_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KDatePicker*
/// @param frameRect QRect*
///
void k_datepicker_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KDatePicker*
///
uintptr_t k_datepicker_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KDatePicker*
///
void k_datepicker_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KDatePicker*
///
uintptr_t k_datepicker_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KDatePicker*
///
uintptr_t k_datepicker_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KDatePicker*
///
QStyle* k_datepicker_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KDatePicker*
/// @param style QStyle*
///
void k_datepicker_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KDatePicker*
///
/// @return enum Qt__WindowModality
///
int32_t k_datepicker_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KDatePicker*
/// @param windowModality enum Qt__WindowModality
///
void k_datepicker_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
///
bool k_datepicker_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KDatePicker*
/// @param enabled bool
///
void k_datepicker_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KDatePicker*
/// @param disabled bool
///
void k_datepicker_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KDatePicker*
/// @param windowModified bool
///
void k_datepicker_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KDatePicker*
///
const QRect* k_datepicker_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KDatePicker*
///
QPoint* k_datepicker_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KDatePicker*
///
QRegion* k_datepicker_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDatePicker*
/// @param minimumSize QSize*
///
void k_datepicker_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDatePicker*
/// @param minw int
/// @param minh int
///
void k_datepicker_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDatePicker*
/// @param maximumSize QSize*
///
void k_datepicker_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDatePicker*
/// @param maxw int
/// @param maxh int
///
void k_datepicker_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KDatePicker*
/// @param minw int
///
void k_datepicker_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KDatePicker*
/// @param minh int
///
void k_datepicker_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KDatePicker*
/// @param maxw int
///
void k_datepicker_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KDatePicker*
/// @param maxh int
///
void k_datepicker_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDatePicker*
/// @param sizeIncrement QSize*
///
void k_datepicker_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDatePicker*
/// @param w int
/// @param h int
///
void k_datepicker_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KDatePicker*
///
QSize* k_datepicker_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDatePicker*
/// @param baseSize QSize*
///
void k_datepicker_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDatePicker*
/// @param basew int
/// @param baseh int
///
void k_datepicker_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDatePicker*
/// @param fixedSize QSize*
///
void k_datepicker_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDatePicker*
/// @param w int
/// @param h int
///
void k_datepicker_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KDatePicker*
/// @param w int
///
void k_datepicker_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KDatePicker*
/// @param h int
///
void k_datepicker_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDatePicker*
/// @param param1 QPointF*
///
QPointF* k_datepicker_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDatePicker*
/// @param param1 QPoint*
///
QPoint* k_datepicker_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDatePicker*
/// @param param1 QPointF*
///
QPointF* k_datepicker_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDatePicker*
/// @param param1 QPoint*
///
QPoint* k_datepicker_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDatePicker*
/// @param param1 QPointF*
///
QPointF* k_datepicker_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDatePicker*
/// @param param1 QPoint*
///
QPoint* k_datepicker_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDatePicker*
/// @param param1 QPointF*
///
QPointF* k_datepicker_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDatePicker*
/// @param param1 QPoint*
///
QPoint* k_datepicker_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_datepicker_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_datepicker_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_datepicker_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_datepicker_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KDatePicker*
///
const QPalette* k_datepicker_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KDatePicker*
/// @param palette QPalette*
///
void k_datepicker_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KDatePicker*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_datepicker_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KDatePicker*
///
/// @return enum QPalette__ColorRole
///
int32_t k_datepicker_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KDatePicker*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_datepicker_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KDatePicker*
///
/// @return enum QPalette__ColorRole
///
int32_t k_datepicker_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KDatePicker*
///
const QFont* k_datepicker_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KDatePicker*
/// @param font QFont*
///
void k_datepicker_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KDatePicker*
///
QFontMetrics* k_datepicker_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KDatePicker*
///
QFontInfo* k_datepicker_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KDatePicker*
///
QCursor* k_datepicker_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KDatePicker*
/// @param cursor QCursor*
///
void k_datepicker_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KDatePicker*
///
void k_datepicker_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KDatePicker*
/// @param enable bool
///
void k_datepicker_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KDatePicker*
///
bool k_datepicker_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KDatePicker*
///
bool k_datepicker_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KDatePicker*
/// @param enable bool
///
void k_datepicker_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KDatePicker*
///
bool k_datepicker_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDatePicker*
/// @param mask QBitmap*
///
void k_datepicker_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDatePicker*
/// @param mask QRegion*
///
void k_datepicker_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KDatePicker*
///
QRegion* k_datepicker_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KDatePicker*
///
void k_datepicker_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param target QPaintDevice*
///
void k_datepicker_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param painter QPainter*
///
void k_datepicker_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDatePicker*
///
QPixmap* k_datepicker_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KDatePicker*
///
QGraphicsEffect* k_datepicker_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KDatePicker*
/// @param effect QGraphicsEffect*
///
void k_datepicker_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDatePicker*
/// @param type enum Qt__GestureType
///
void k_datepicker_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KDatePicker*
/// @param type enum Qt__GestureType
///
void k_datepicker_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KDatePicker*
/// @param windowTitle const char*
///
void k_datepicker_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KDatePicker*
/// @param styleSheet const char*
///
void k_datepicker_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KDatePicker*
/// @param icon QIcon*
///
void k_datepicker_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KDatePicker*
///
QIcon* k_datepicker_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KDatePicker*
/// @param windowIconText const char*
///
void k_datepicker_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KDatePicker*
/// @param windowRole const char*
///
void k_datepicker_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KDatePicker*
/// @param filePath const char*
///
void k_datepicker_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KDatePicker*
/// @param level double
///
void k_datepicker_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KDatePicker*
///
double k_datepicker_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KDatePicker*
/// @param toolTip const char*
///
void k_datepicker_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KDatePicker*
/// @param msec int
///
void k_datepicker_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KDatePicker*
/// @param statusTip const char*
///
void k_datepicker_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KDatePicker*
/// @param whatsThis const char*
///
void k_datepicker_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KDatePicker*
/// @param name const char*
///
void k_datepicker_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KDatePicker*
/// @param description const char*
///
void k_datepicker_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KDatePicker*
/// @param direction enum Qt__LayoutDirection
///
void k_datepicker_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KDatePicker*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_datepicker_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KDatePicker*
///
void k_datepicker_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KDatePicker*
/// @param locale QLocale*
///
void k_datepicker_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KDatePicker*
///
QLocale* k_datepicker_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KDatePicker*
///
void k_datepicker_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDatePicker*
///
void k_datepicker_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KDatePicker*
///
void k_datepicker_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KDatePicker*
///
void k_datepicker_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDatePicker*
/// @param reason enum Qt__FocusReason
///
void k_datepicker_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KDatePicker*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_datepicker_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KDatePicker*
/// @param policy enum Qt__FocusPolicy
///
void k_datepicker_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KDatePicker*
///
bool k_datepicker_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_datepicker_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KDatePicker*
/// @param focusProxy QWidget*
///
void k_datepicker_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KDatePicker*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_datepicker_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KDatePicker*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_datepicker_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDatePicker*
///
void k_datepicker_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDatePicker*
/// @param param1 QCursor*
///
void k_datepicker_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KDatePicker*
///
void k_datepicker_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KDatePicker*
///
void k_datepicker_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KDatePicker*
///
void k_datepicker_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDatePicker*
/// @param key QKeySequence*
///
int32_t k_datepicker_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KDatePicker*
/// @param id int
///
void k_datepicker_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDatePicker*
/// @param id int
///
void k_datepicker_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDatePicker*
/// @param id int
///
void k_datepicker_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_datepicker_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_datepicker_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KDatePicker*
///
bool k_datepicker_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KDatePicker*
/// @param enable bool
///
void k_datepicker_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KDatePicker*
///
QGraphicsProxyWidget* k_datepicker_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePicker*
///
void k_datepicker_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePicker*
///
void k_datepicker_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datepicker_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePicker*
/// @param param1 QRect*
///
void k_datepicker_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePicker*
/// @param param1 QRegion*
///
void k_datepicker_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datepicker_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePicker*
/// @param param1 QRect*
///
void k_datepicker_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePicker*
/// @param param1 QRegion*
///
void k_datepicker_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KDatePicker*
/// @param hidden bool
///
void k_datepicker_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KDatePicker*
///
void k_datepicker_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KDatePicker*
///
void k_datepicker_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KDatePicker*
///
void k_datepicker_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KDatePicker*
///
void k_datepicker_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KDatePicker*
///
void k_datepicker_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KDatePicker*
///
void k_datepicker_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KDatePicker*
///
bool k_datepicker_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KDatePicker*
///
void k_datepicker_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KDatePicker*
///
void k_datepicker_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
///
void k_datepicker_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDatePicker*
/// @param x int
/// @param y int
///
void k_datepicker_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDatePicker*
/// @param param1 QPoint*
///
void k_datepicker_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDatePicker*
/// @param w int
/// @param h int
///
void k_datepicker_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDatePicker*
/// @param param1 QSize*
///
void k_datepicker_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDatePicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datepicker_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDatePicker*
/// @param geometry QRect*
///
void k_datepicker_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
char* k_datepicker_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KDatePicker*
/// @param geometry const char*
///
bool k_datepicker_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KDatePicker*
///
void k_datepicker_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KDatePicker*
/// @param param1 QWidget*
///
bool k_datepicker_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KDatePicker*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_datepicker_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KDatePicker*
/// @param state flag of enum Qt__WindowState
///
void k_datepicker_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KDatePicker*
/// @param state flag of enum Qt__WindowState
///
void k_datepicker_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KDatePicker*
///
QSizePolicy* k_datepicker_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDatePicker*
/// @param sizePolicy QSizePolicy*
///
void k_datepicker_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDatePicker*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_datepicker_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KDatePicker*
///
QRegion* k_datepicker_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDatePicker*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_datepicker_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDatePicker*
/// @param margins QMargins*
///
void k_datepicker_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KDatePicker*
///
QMargins* k_datepicker_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KDatePicker*
///
QRect* k_datepicker_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KDatePicker*
///
QLayout* k_datepicker_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KDatePicker*
/// @param layout QLayout*
///
void k_datepicker_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KDatePicker*
///
void k_datepicker_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDatePicker*
/// @param parent QWidget*
///
void k_datepicker_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDatePicker*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_datepicker_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDatePicker*
/// @param dx int
/// @param dy int
///
void k_datepicker_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDatePicker*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_datepicker_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KDatePicker*
///
bool k_datepicker_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KDatePicker*
/// @param on bool
///
void k_datepicker_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePicker*
/// @param action QAction*
///
void k_datepicker_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KDatePicker*
/// @param actions libqt_list /* of QAction* */
///
void k_datepicker_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KDatePicker*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_datepicker_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KDatePicker*
/// @param before QAction*
/// @param action QAction*
///
void k_datepicker_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KDatePicker*
/// @param action QAction*
///
void k_datepicker_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KDatePicker*
///
libqt_list /* of QAction* */ k_datepicker_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePicker*
/// @param text const char*
///
QAction* k_datepicker_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePicker*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_datepicker_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePicker*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_datepicker_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePicker*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_datepicker_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KDatePicker*
///
QWidget* k_datepicker_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KDatePicker*
/// @param type flag of enum Qt__WindowType
///
void k_datepicker_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KDatePicker*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_datepicker_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDatePicker*
/// @param param1 enum Qt__WindowType
///
void k_datepicker_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KDatePicker*
/// @param type flag of enum Qt__WindowType
///
void k_datepicker_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KDatePicker*
///
/// @return enum Qt__WindowType
///
int64_t k_datepicker_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_datepicker_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePicker*
/// @param x int
/// @param y int
///
QWidget* k_datepicker_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePicker*
/// @param p QPoint*
///
QWidget* k_datepicker_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePicker*
/// @param p QPointF*
///
QWidget* k_datepicker_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDatePicker*
/// @param param1 enum Qt__WidgetAttribute
///
void k_datepicker_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KDatePicker*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_datepicker_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KDatePicker*
///
void k_datepicker_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KDatePicker*
/// @param child QWidget*
///
bool k_datepicker_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KDatePicker*
///
bool k_datepicker_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KDatePicker*
/// @param enabled bool
///
void k_datepicker_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KDatePicker*
///
QBackingStore* k_datepicker_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KDatePicker*
///
QWindow* k_datepicker_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KDatePicker*
///
QScreen* k_datepicker_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KDatePicker*
/// @param screen QScreen*
///
void k_datepicker_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_datepicker_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDatePicker*
/// @param title const char*
///
void k_datepicker_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, const char* title)
///
void k_datepicker_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDatePicker*
/// @param icon QIcon*
///
void k_datepicker_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QIcon* icon)
///
void k_datepicker_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDatePicker*
/// @param iconText const char*
///
void k_datepicker_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, const char* iconText)
///
void k_datepicker_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDatePicker*
/// @param pos QPoint*
///
void k_datepicker_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QPoint* pos)
///
void k_datepicker_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KDatePicker*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_datepicker_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KDatePicker*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_datepicker_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_datepicker_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_datepicker_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_datepicker_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_datepicker_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_datepicker_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_datepicker_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDatePicker*
/// @param rectangle QRect*
///
QPixmap* k_datepicker_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDatePicker*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_datepicker_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDatePicker*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_datepicker_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDatePicker*
/// @param id int
/// @param enable bool
///
void k_datepicker_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDatePicker*
/// @param id int
/// @param enable bool
///
void k_datepicker_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDatePicker*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_datepicker_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDatePicker*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_datepicker_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_datepicker_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_datepicker_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char* k_datepicker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDatePicker*
/// @param name char*
///
void k_datepicker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDatePicker*
///
bool k_datepicker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDatePicker*
///
bool k_datepicker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDatePicker*
/// @param b bool
///
bool k_datepicker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDatePicker*
///
QThread* k_datepicker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDatePicker*
/// @param thread QThread*
///
bool k_datepicker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDatePicker*
/// @param interval int
///
int32_t k_datepicker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDatePicker*
/// @param id int
///
void k_datepicker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDatePicker*
/// @param id enum Qt__TimerId
///
void k_datepicker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDatePicker*
///
libqt_list /* of QObject* */ k_datepicker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDatePicker*
/// @param filterObj QObject*
///
void k_datepicker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDatePicker*
/// @param obj QObject*
///
void k_datepicker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_datepicker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDatePicker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_datepicker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_datepicker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_datepicker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDatePicker*
///
void k_datepicker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDatePicker*
///
void k_datepicker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDatePicker*
/// @param name const char*
/// @param value QVariant*
///
bool k_datepicker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDatePicker*
/// @param name const char*
///
QVariant* k_datepicker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePicker*
///
const char** k_datepicker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDatePicker*
///
QBindingStorage* k_datepicker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDatePicker*
///
const QBindingStorage* k_datepicker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePicker*
///
void k_datepicker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self)
///
void k_datepicker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDatePicker*
///
QObject* k_datepicker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDatePicker*
/// @param classname const char*
///
bool k_datepicker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDatePicker*
///
void k_datepicker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDatePicker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_datepicker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDatePicker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_datepicker_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_datepicker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDatePicker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_datepicker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePicker*
/// @param param1 QObject*
///
void k_datepicker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QObject* param1)
///
void k_datepicker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KDatePicker*
///
bool k_datepicker_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KDatePicker*
///
double k_datepicker_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KDatePicker*
///
double k_datepicker_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KDatePicker*
///
int32_t k_datepicker_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_datepicker_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_datepicker_encode_metric_f(int32_t metric, double value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param e QEvent*
///
bool k_datepicker_event(void* self, void* e);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param e QEvent*
///
bool k_datepicker_qbase_event(void* self, void* e);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func(KDatePicker* self, QEvent* e)
///
void k_datepicker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QPaintEvent*
///
void k_datepicker_paint_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QPaintEvent*
///
void k_datepicker_qbase_paint_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QPaintEvent* param1)
///
void k_datepicker_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param option QStyleOptionFrame*
///
void k_datepicker_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param option QStyleOptionFrame*
///
void k_datepicker_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QStyleOptionFrame* option)
///
void k_datepicker_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
int32_t k_datepicker_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
int32_t k_datepicker_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback int32_t func()
///
void k_datepicker_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param visible bool
///
void k_datepicker_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param visible bool
///
void k_datepicker_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, bool visible)
///
void k_datepicker_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
QSize* k_datepicker_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
QSize* k_datepicker_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QSize* func()
///
void k_datepicker_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 int
///
int32_t k_datepicker_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 int
///
int32_t k_datepicker_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback int32_t func(KDatePicker* self, int param1)
///
void k_datepicker_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func()
///
void k_datepicker_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
QPaintEngine* k_datepicker_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
QPaintEngine* k_datepicker_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QPaintEngine* func()
///
void k_datepicker_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMouseEvent* event)
///
void k_datepicker_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMouseEvent* event)
///
void k_datepicker_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMouseEvent* event)
///
void k_datepicker_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMouseEvent*
///
void k_datepicker_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMouseEvent* event)
///
void k_datepicker_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QWheelEvent*
///
void k_datepicker_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QWheelEvent*
///
void k_datepicker_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QWheelEvent* event)
///
void k_datepicker_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QKeyEvent*
///
void k_datepicker_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QKeyEvent*
///
void k_datepicker_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QKeyEvent* event)
///
void k_datepicker_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QKeyEvent*
///
void k_datepicker_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QKeyEvent*
///
void k_datepicker_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QKeyEvent* event)
///
void k_datepicker_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QFocusEvent*
///
void k_datepicker_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QFocusEvent*
///
void k_datepicker_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QFocusEvent* event)
///
void k_datepicker_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QFocusEvent*
///
void k_datepicker_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QFocusEvent*
///
void k_datepicker_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QFocusEvent* event)
///
void k_datepicker_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEnterEvent*
///
void k_datepicker_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEnterEvent*
///
void k_datepicker_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QEnterEvent* event)
///
void k_datepicker_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QEvent* event)
///
void k_datepicker_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMoveEvent*
///
void k_datepicker_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QMoveEvent*
///
void k_datepicker_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMoveEvent* event)
///
void k_datepicker_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QCloseEvent*
///
void k_datepicker_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QCloseEvent*
///
void k_datepicker_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QCloseEvent* event)
///
void k_datepicker_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QContextMenuEvent*
///
void k_datepicker_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QContextMenuEvent*
///
void k_datepicker_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QContextMenuEvent* event)
///
void k_datepicker_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QTabletEvent*
///
void k_datepicker_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QTabletEvent*
///
void k_datepicker_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QTabletEvent* event)
///
void k_datepicker_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QActionEvent*
///
void k_datepicker_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QActionEvent*
///
void k_datepicker_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QActionEvent* event)
///
void k_datepicker_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragEnterEvent*
///
void k_datepicker_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragEnterEvent*
///
void k_datepicker_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDragEnterEvent* event)
///
void k_datepicker_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragMoveEvent*
///
void k_datepicker_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragMoveEvent*
///
void k_datepicker_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDragMoveEvent* event)
///
void k_datepicker_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragLeaveEvent*
///
void k_datepicker_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDragLeaveEvent*
///
void k_datepicker_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDragLeaveEvent* event)
///
void k_datepicker_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDropEvent*
///
void k_datepicker_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QDropEvent*
///
void k_datepicker_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QDropEvent* event)
///
void k_datepicker_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QShowEvent*
///
void k_datepicker_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QShowEvent*
///
void k_datepicker_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QShowEvent* event)
///
void k_datepicker_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QHideEvent*
///
void k_datepicker_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QHideEvent*
///
void k_datepicker_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QHideEvent* event)
///
void k_datepicker_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_datepicker_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_datepicker_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func(KDatePicker* self, const char* eventType, void* message, intptr_t* result)
///
void k_datepicker_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_datepicker_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_datepicker_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback int32_t func(KDatePicker* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_datepicker_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param painter QPainter*
///
void k_datepicker_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param painter QPainter*
///
void k_datepicker_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QPainter* painter)
///
void k_datepicker_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param offset QPoint*
///
QPaintDevice* k_datepicker_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param offset QPoint*
///
QPaintDevice* k_datepicker_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QPaintDevice* func(KDatePicker* self, QPoint* offset)
///
void k_datepicker_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
QPainter* k_datepicker_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
QPainter* k_datepicker_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QPainter* func()
///
void k_datepicker_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QInputMethodEvent*
///
void k_datepicker_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QInputMethodEvent*
///
void k_datepicker_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QInputMethodEvent* param1)
///
void k_datepicker_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_datepicker_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_datepicker_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QVariant* func(KDatePicker* self, enum Qt__InputMethodQuery param1)
///
void k_datepicker_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param next bool
///
bool k_datepicker_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param next bool
///
bool k_datepicker_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func(KDatePicker* self, bool next)
///
void k_datepicker_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QTimerEvent*
///
void k_datepicker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QTimerEvent*
///
void k_datepicker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QTimerEvent* event)
///
void k_datepicker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QChildEvent*
///
void k_datepicker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QChildEvent*
///
void k_datepicker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QChildEvent* event)
///
void k_datepicker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param event QEvent*
///
void k_datepicker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QEvent* event)
///
void k_datepicker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
void k_datepicker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
void k_datepicker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMetaMethod* signal)
///
void k_datepicker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
void k_datepicker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
void k_datepicker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QMetaMethod* signal)
///
void k_datepicker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QPainter*
///
void k_datepicker_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param param1 QPainter*
///
void k_datepicker_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, QPainter* param1)
///
void k_datepicker_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
void k_datepicker_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback void func()
///
void k_datepicker_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func()
///
void k_datepicker_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
bool k_datepicker_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func()
///
void k_datepicker_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
QObject* k_datepicker_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
QObject* k_datepicker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback QObject* func()
///
void k_datepicker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
///
int32_t k_datepicker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
///
int32_t k_datepicker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback int32_t func()
///
void k_datepicker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param signal const char*
///
int32_t k_datepicker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param signal const char*
///
int32_t k_datepicker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback int32_t func(KDatePicker* self, const char* signal)
///
void k_datepicker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
bool k_datepicker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param signal QMetaMethod*
///
bool k_datepicker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback bool func(KDatePicker* self, QMetaMethod* signal)
///
void k_datepicker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePicker*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_datepicker_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePicker*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_datepicker_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePicker*
/// @param callback double func(KDatePicker* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_datepicker_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDatePicker*
/// @param callback void func(KDatePicker* self, const char* objectName)
///
void k_datepicker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdatepicker.html#dtor.KDatePicker)
///
/// Delete this object from C++ memory.
///
/// @param self KDatePicker*
///
void k_datepicker_delete(void* self);

#endif
