#pragma once
#ifndef SRC_QT6C_LIBQCALENDARWIDGET_H
#define SRC_QT6C_LIBQCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html)

/// q_calendarwidget_new constructs a new QCalendarWidget object.
///
/// @param parent QWidget*
///
QCalendarWidget* q_calendarwidget_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html)

/// q_calendarwidget_new2 constructs a new QCalendarWidget object.
///
QCalendarWidget* q_calendarwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCalendarWidget*
///
const QMetaObject* q_calendarwidget_meta_object(void* self);

/// @param self QCalendarWidget*
/// @param param1 const char*
///
void* q_calendarwidget_metacast(void* self, const char* param1);

/// @param self QCalendarWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_calendarwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func(QCalendarWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_calendarwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_calendarwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_calendarwidget_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback QSize* func()
///
void q_calendarwidget_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback QSize* func()
///
void q_calendarwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#selectedDate)
///
/// @param self QCalendarWidget*
///
QDate* q_calendarwidget_selected_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#yearShown)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_year_shown(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#monthShown)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_month_shown(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumDate)
///
/// @param self QCalendarWidget*
///
QDate* q_calendarwidget_minimum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setMinimumDate)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_set_minimum_date(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#clearMinimumDate)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_clear_minimum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#maximumDate)
///
/// @param self QCalendarWidget*
///
QDate* q_calendarwidget_maximum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setMaximumDate)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_set_maximum_date(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#clearMaximumDate)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_clear_maximum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#firstDayOfWeek)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__DayOfWeek
///
int32_t q_calendarwidget_first_day_of_week(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setFirstDayOfWeek)
///
/// @param self QCalendarWidget*
/// @param dayOfWeek enum Qt__DayOfWeek
///
void q_calendarwidget_set_first_day_of_week(void* self, int32_t dayOfWeek);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#isNavigationBarVisible)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_navigation_bar_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#isGridVisible)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_grid_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#calendar)
///
/// @param self QCalendarWidget*
///
QCalendar* q_calendarwidget_calendar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setCalendar)
///
/// @param self QCalendarWidget*
/// @param calendar QCalendar*
///
void q_calendarwidget_set_calendar(void* self, void* calendar);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionMode)
///
/// @param self QCalendarWidget*
///
/// @return enum QCalendarWidget__SelectionMode
///
int32_t q_calendarwidget_selection_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectionMode)
///
/// @param self QCalendarWidget*
/// @param mode enum QCalendarWidget__SelectionMode
///
void q_calendarwidget_set_selection_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#horizontalHeaderFormat)
///
/// @param self QCalendarWidget*
///
/// @return enum QCalendarWidget__HorizontalHeaderFormat
///
int32_t q_calendarwidget_horizontal_header_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setHorizontalHeaderFormat)
///
/// @param self QCalendarWidget*
/// @param format enum QCalendarWidget__HorizontalHeaderFormat
///
void q_calendarwidget_set_horizontal_header_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#verticalHeaderFormat)
///
/// @param self QCalendarWidget*
///
/// @return enum QCalendarWidget__VerticalHeaderFormat
///
int32_t q_calendarwidget_vertical_header_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setVerticalHeaderFormat)
///
/// @param self QCalendarWidget*
/// @param format enum QCalendarWidget__VerticalHeaderFormat
///
void q_calendarwidget_set_vertical_header_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#headerTextFormat)
///
/// @param self QCalendarWidget*
///
QTextCharFormat* q_calendarwidget_header_text_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setHeaderTextFormat)
///
/// @param self QCalendarWidget*
/// @param format QTextCharFormat*
///
void q_calendarwidget_set_header_text_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#weekdayTextFormat)
///
/// @param self QCalendarWidget*
/// @param dayOfWeek enum Qt__DayOfWeek
///
QTextCharFormat* q_calendarwidget_weekday_text_format(void* self, int32_t dayOfWeek);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setWeekdayTextFormat)
///
/// @param self QCalendarWidget*
/// @param dayOfWeek enum Qt__DayOfWeek
/// @param format QTextCharFormat*
///
void q_calendarwidget_set_weekday_text_format(void* self, int32_t dayOfWeek, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of QDate* to QTextCharFormat*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QDate*)map.keys)[i]);
///     free(((QTextCharFormat*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QCalendarWidget*
///
/// @return libqt_map of QDate* to QTextCharFormat*
///
libqt_map q_calendarwidget_date_text_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
QTextCharFormat* q_calendarwidget_date_text_format2(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateTextFormat)
///
/// @param self QCalendarWidget*
/// @param date QDate*
/// @param format QTextCharFormat*
///
void q_calendarwidget_set_date_text_format(void* self, void* date, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#isDateEditEnabled)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_date_edit_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditEnabled)
///
/// @param self QCalendarWidget*
/// @param enable bool
///
void q_calendarwidget_set_date_edit_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#dateEditAcceptDelay)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_date_edit_accept_delay(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditAcceptDelay)
///
/// @param self QCalendarWidget*
/// @param delay int
///
void q_calendarwidget_set_date_edit_accept_delay(void* self, int delay);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
bool q_calendarwidget_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback bool func(QCalendarWidget* self, QEvent* event)
///
void q_calendarwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
bool q_calendarwidget_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// @param self QCalendarWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_calendarwidget_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback bool func(QCalendarWidget* self, QObject* watched, QEvent* event)
///
void q_calendarwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_calendarwidget_qbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMouseEvent* event)
///
void q_calendarwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// @param self QCalendarWidget*
/// @param event QResizeEvent*
///
void q_calendarwidget_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QResizeEvent* event)
///
void q_calendarwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param event QResizeEvent*
///
void q_calendarwidget_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// @param self QCalendarWidget*
/// @param event QKeyEvent*
///
void q_calendarwidget_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QKeyEvent* event)
///
void q_calendarwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param event QKeyEvent*
///
void q_calendarwidget_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
/// @param rect QRect*
/// @param date QDate*
///
void q_calendarwidget_paint_cell(void* self, void* painter, void* rect, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date)
///
void q_calendarwidget_on_paint_cell(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
/// @param rect QRect*
/// @param date QDate*
///
void q_calendarwidget_qbase_paint_cell(void* self, void* painter, void* rect, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_update_cell(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDate* date)
///
void q_calendarwidget_on_update_cell(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_qbase_update_cell(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_update_cells(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// Allows for overriding the related default method
///
/// @param self QCalendarWidget*
/// @param callback void func()
///
void q_calendarwidget_on_update_cells(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// Base class method implementation
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_qbase_update_cells(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectedDate)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_set_selected_date(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateRange)
///
/// @param self QCalendarWidget*
/// @param min QDate*
/// @param max QDate*
///
void q_calendarwidget_set_date_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setCurrentPage)
///
/// @param self QCalendarWidget*
/// @param year int
/// @param month int
///
void q_calendarwidget_set_current_page(void* self, int year, int month);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setGridVisible)
///
/// @param self QCalendarWidget*
/// @param show bool
///
void q_calendarwidget_set_grid_visible(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#setNavigationBarVisible)
///
/// @param self QCalendarWidget*
/// @param visible bool
///
void q_calendarwidget_set_navigation_bar_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextMonth)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_next_month(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousMonth)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_previous_month(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextYear)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_next_year(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousYear)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_previous_year(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showSelectedDate)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_selected_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#showToday)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_today(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionChanged)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionChanged)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self)
///
void q_calendarwidget_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#clicked)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_clicked(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#clicked)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDate* date)
///
void q_calendarwidget_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#activated)
///
/// @param self QCalendarWidget*
/// @param date QDate*
///
void q_calendarwidget_activated(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#activated)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDate* date)
///
void q_calendarwidget_on_activated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#currentPageChanged)
///
/// @param self QCalendarWidget*
/// @param year int
/// @param month int
///
void q_calendarwidget_current_page_changed(void* self, int year, int month);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#currentPageChanged)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, int year, int month)
///
void q_calendarwidget_on_current_page_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_calendarwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_calendarwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QCalendarWidget*
///
uintptr_t q_calendarwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QCalendarWidget*
///
uintptr_t q_calendarwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QCalendarWidget*
///
uintptr_t q_calendarwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QCalendarWidget*
///
QStyle* q_calendarwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QCalendarWidget*
/// @param style QStyle*
///
void q_calendarwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__WindowModality
///
int32_t q_calendarwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QCalendarWidget*
/// @param windowModality enum Qt__WindowModality
///
void q_calendarwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
///
bool q_calendarwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QCalendarWidget*
/// @param enabled bool
///
void q_calendarwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QCalendarWidget*
/// @param disabled bool
///
void q_calendarwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QCalendarWidget*
/// @param windowModified bool
///
void q_calendarwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QCalendarWidget*
///
QRect* q_calendarwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QCalendarWidget*
///
const QRect* q_calendarwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QCalendarWidget*
///
QRect* q_calendarwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QCalendarWidget*
///
QPoint* q_calendarwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QCalendarWidget*
///
QRect* q_calendarwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QCalendarWidget*
///
QRect* q_calendarwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QCalendarWidget*
///
QRegion* q_calendarwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QCalendarWidget*
/// @param minimumSize QSize*
///
void q_calendarwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QCalendarWidget*
/// @param minw int
/// @param minh int
///
void q_calendarwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QCalendarWidget*
/// @param maximumSize QSize*
///
void q_calendarwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QCalendarWidget*
/// @param maxw int
/// @param maxh int
///
void q_calendarwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QCalendarWidget*
/// @param minw int
///
void q_calendarwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QCalendarWidget*
/// @param minh int
///
void q_calendarwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QCalendarWidget*
/// @param maxw int
///
void q_calendarwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QCalendarWidget*
/// @param maxh int
///
void q_calendarwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QCalendarWidget*
/// @param sizeIncrement QSize*
///
void q_calendarwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QCalendarWidget*
/// @param w int
/// @param h int
///
void q_calendarwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QCalendarWidget*
///
QSize* q_calendarwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QCalendarWidget*
/// @param baseSize QSize*
///
void q_calendarwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QCalendarWidget*
/// @param basew int
/// @param baseh int
///
void q_calendarwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QCalendarWidget*
/// @param fixedSize QSize*
///
void q_calendarwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QCalendarWidget*
/// @param w int
/// @param h int
///
void q_calendarwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QCalendarWidget*
/// @param w int
///
void q_calendarwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QCalendarWidget*
/// @param h int
///
void q_calendarwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QCalendarWidget*
/// @param param1 QPointF*
///
QPointF* q_calendarwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QCalendarWidget*
/// @param param1 QPoint*
///
QPoint* q_calendarwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QCalendarWidget*
/// @param param1 QPointF*
///
QPointF* q_calendarwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QCalendarWidget*
/// @param param1 QPoint*
///
QPoint* q_calendarwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QCalendarWidget*
/// @param param1 QPointF*
///
QPointF* q_calendarwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QCalendarWidget*
/// @param param1 QPoint*
///
QPoint* q_calendarwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QCalendarWidget*
/// @param param1 QPointF*
///
QPointF* q_calendarwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QCalendarWidget*
/// @param param1 QPoint*
///
QPoint* q_calendarwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_calendarwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_calendarwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_calendarwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_calendarwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QCalendarWidget*
///
const QPalette* q_calendarwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QCalendarWidget*
/// @param palette QPalette*
///
void q_calendarwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QCalendarWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_calendarwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QCalendarWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_calendarwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QCalendarWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_calendarwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QCalendarWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_calendarwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QCalendarWidget*
///
const QFont* q_calendarwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QCalendarWidget*
/// @param font QFont*
///
void q_calendarwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QCalendarWidget*
///
QFontMetrics* q_calendarwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QCalendarWidget*
///
QFontInfo* q_calendarwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QCalendarWidget*
///
QCursor* q_calendarwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QCalendarWidget*
/// @param cursor QCursor*
///
void q_calendarwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QCalendarWidget*
/// @param enable bool
///
void q_calendarwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QCalendarWidget*
/// @param enable bool
///
void q_calendarwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QCalendarWidget*
/// @param mask QBitmap*
///
void q_calendarwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QCalendarWidget*
/// @param mask QRegion*
///
void q_calendarwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QCalendarWidget*
///
QRegion* q_calendarwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param target QPaintDevice*
///
void q_calendarwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
///
void q_calendarwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QCalendarWidget*
///
QPixmap* q_calendarwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QCalendarWidget*
///
QGraphicsEffect* q_calendarwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QCalendarWidget*
/// @param effect QGraphicsEffect*
///
void q_calendarwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QCalendarWidget*
/// @param type enum Qt__GestureType
///
void q_calendarwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QCalendarWidget*
/// @param type enum Qt__GestureType
///
void q_calendarwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QCalendarWidget*
/// @param windowTitle const char*
///
void q_calendarwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QCalendarWidget*
/// @param styleSheet const char*
///
void q_calendarwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QCalendarWidget*
/// @param icon QIcon*
///
void q_calendarwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QCalendarWidget*
///
QIcon* q_calendarwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QCalendarWidget*
/// @param windowIconText const char*
///
void q_calendarwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QCalendarWidget*
/// @param windowRole const char*
///
void q_calendarwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QCalendarWidget*
/// @param filePath const char*
///
void q_calendarwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QCalendarWidget*
/// @param level double
///
void q_calendarwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QCalendarWidget*
///
double q_calendarwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QCalendarWidget*
/// @param toolTip const char*
///
void q_calendarwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QCalendarWidget*
/// @param msec int
///
void q_calendarwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QCalendarWidget*
/// @param statusTip const char*
///
void q_calendarwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QCalendarWidget*
/// @param whatsThis const char*
///
void q_calendarwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QCalendarWidget*
/// @param name const char*
///
void q_calendarwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QCalendarWidget*
/// @param description const char*
///
void q_calendarwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QCalendarWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_calendarwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_calendarwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QCalendarWidget*
/// @param locale QLocale*
///
void q_calendarwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QCalendarWidget*
///
QLocale* q_calendarwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QCalendarWidget*
/// @param reason enum Qt__FocusReason
///
void q_calendarwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_calendarwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QCalendarWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_calendarwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_calendarwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QCalendarWidget*
/// @param focusProxy QWidget*
///
void q_calendarwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_calendarwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QCalendarWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_calendarwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QCalendarWidget*
/// @param param1 QCursor*
///
void q_calendarwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QCalendarWidget*
/// @param key QKeySequence*
///
int32_t q_calendarwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QCalendarWidget*
/// @param id int
///
void q_calendarwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QCalendarWidget*
/// @param id int
///
void q_calendarwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QCalendarWidget*
/// @param id int
///
void q_calendarwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_calendarwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_calendarwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QCalendarWidget*
/// @param enable bool
///
void q_calendarwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QCalendarWidget*
///
QGraphicsProxyWidget* q_calendarwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCalendarWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_calendarwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCalendarWidget*
/// @param param1 QRect*
///
void q_calendarwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCalendarWidget*
/// @param param1 QRegion*
///
void q_calendarwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCalendarWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_calendarwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCalendarWidget*
/// @param param1 QRect*
///
void q_calendarwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCalendarWidget*
/// @param param1 QRegion*
///
void q_calendarwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QCalendarWidget*
/// @param hidden bool
///
void q_calendarwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
///
void q_calendarwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QCalendarWidget*
/// @param x int
/// @param y int
///
void q_calendarwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QCalendarWidget*
/// @param param1 QPoint*
///
void q_calendarwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QCalendarWidget*
/// @param w int
/// @param h int
///
void q_calendarwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QCalendarWidget*
/// @param param1 QSize*
///
void q_calendarwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QCalendarWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_calendarwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QCalendarWidget*
/// @param geometry QRect*
///
void q_calendarwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCalendarWidget*
///
char* q_calendarwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QCalendarWidget*
/// @param geometry const char*
///
bool q_calendarwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QCalendarWidget*
/// @param param1 QWidget*
///
bool q_calendarwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QCalendarWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_calendarwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QCalendarWidget*
/// @param state flag of enum Qt__WindowState
///
void q_calendarwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QCalendarWidget*
/// @param state flag of enum Qt__WindowState
///
void q_calendarwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QCalendarWidget*
///
QSizePolicy* q_calendarwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QCalendarWidget*
/// @param sizePolicy QSizePolicy*
///
void q_calendarwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QCalendarWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_calendarwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QCalendarWidget*
///
QRegion* q_calendarwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QCalendarWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_calendarwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QCalendarWidget*
/// @param margins QMargins*
///
void q_calendarwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QCalendarWidget*
///
QMargins* q_calendarwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QCalendarWidget*
///
QRect* q_calendarwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QCalendarWidget*
///
QLayout* q_calendarwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QCalendarWidget*
/// @param layout QLayout*
///
void q_calendarwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QCalendarWidget*
/// @param parent QWidget*
///
void q_calendarwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QCalendarWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_calendarwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QCalendarWidget*
/// @param dx int
/// @param dy int
///
void q_calendarwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QCalendarWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_calendarwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QCalendarWidget*
/// @param on bool
///
void q_calendarwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCalendarWidget*
/// @param action QAction*
///
void q_calendarwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QCalendarWidget*
/// @param actions libqt_list of QAction*
///
void q_calendarwidget_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QCalendarWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_calendarwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QCalendarWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_calendarwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QCalendarWidget*
/// @param action QAction*
///
void q_calendarwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QCalendarWidget*
///
/// @return libqt_list of QAction*
///
libqt_list q_calendarwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCalendarWidget*
/// @param text const char*
///
QAction* q_calendarwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCalendarWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_calendarwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCalendarWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_calendarwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCalendarWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_calendarwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QCalendarWidget*
///
QWidget* q_calendarwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QCalendarWidget*
/// @param type flag of enum Qt__WindowType
///
void q_calendarwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QCalendarWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_calendarwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__WindowType
///
void q_calendarwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QCalendarWidget*
/// @param type flag of enum Qt__WindowType
///
void q_calendarwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QCalendarWidget*
///
/// @return enum Qt__WindowType
///
int32_t q_calendarwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_calendarwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QCalendarWidget*
/// @param x int
/// @param y int
///
QWidget* q_calendarwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QCalendarWidget*
/// @param p QPoint*
///
QWidget* q_calendarwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QCalendarWidget*
/// @param p QPointF*
///
QWidget* q_calendarwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void q_calendarwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_calendarwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QCalendarWidget*
/// @param child QWidget*
///
bool q_calendarwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QCalendarWidget*
/// @param enabled bool
///
void q_calendarwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QCalendarWidget*
///
QBackingStore* q_calendarwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QCalendarWidget*
///
QWindow* q_calendarwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QCalendarWidget*
///
QScreen* q_calendarwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QCalendarWidget*
/// @param screen QScreen*
///
void q_calendarwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_calendarwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QCalendarWidget*
/// @param title const char*
///
void q_calendarwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, const char* title)
///
void q_calendarwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QCalendarWidget*
/// @param icon QIcon*
///
void q_calendarwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QIcon* icon)
///
void q_calendarwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QCalendarWidget*
/// @param iconText const char*
///
void q_calendarwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, const char* iconText)
///
void q_calendarwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QCalendarWidget*
/// @param pos QPoint*
///
void q_calendarwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QPoint* pos)
///
void q_calendarwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QCalendarWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_calendarwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QCalendarWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_calendarwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_calendarwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_calendarwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_calendarwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_calendarwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_calendarwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_calendarwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QCalendarWidget*
/// @param rectangle QRect*
///
QPixmap* q_calendarwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QCalendarWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_calendarwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QCalendarWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_calendarwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QCalendarWidget*
/// @param id int
/// @param enable bool
///
void q_calendarwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QCalendarWidget*
/// @param id int
/// @param enable bool
///
void q_calendarwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_calendarwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_calendarwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_calendarwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_calendarwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCalendarWidget*
///
const char* q_calendarwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCalendarWidget*
/// @param name char*
///
void q_calendarwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCalendarWidget*
/// @param b bool
///
bool q_calendarwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCalendarWidget*
///
QThread* q_calendarwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCalendarWidget*
/// @param thread QThread*
///
bool q_calendarwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCalendarWidget*
/// @param interval int
///
int32_t q_calendarwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCalendarWidget*
/// @param time int64_t of nanoseconds
///
int32_t q_calendarwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCalendarWidget*
/// @param id int
///
void q_calendarwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCalendarWidget*
/// @param id enum Qt__TimerId
///
void q_calendarwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCalendarWidget*
///
/// @return libqt_list of QObject*
///
libqt_list q_calendarwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCalendarWidget*
/// @param filterObj QObject*
///
void q_calendarwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCalendarWidget*
/// @param obj QObject*
///
void q_calendarwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_calendarwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCalendarWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_calendarwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_calendarwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_calendarwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCalendarWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_calendarwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCalendarWidget*
/// @param name const char*
///
QVariant* q_calendarwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCalendarWidget*
///
const char** q_calendarwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCalendarWidget*
///
QBindingStorage* q_calendarwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCalendarWidget*
///
const QBindingStorage* q_calendarwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self)
///
void q_calendarwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCalendarWidget*
///
QObject* q_calendarwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCalendarWidget*
/// @param classname const char*
///
bool q_calendarwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCalendarWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_calendarwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCalendarWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_calendarwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCalendarWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_calendarwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_calendarwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCalendarWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_calendarwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCalendarWidget*
/// @param param1 QObject*
///
void q_calendarwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QObject* param1)
///
void q_calendarwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QCalendarWidget*
///
double q_calendarwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QCalendarWidget*
///
double q_calendarwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_calendarwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_calendarwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func()
///
void q_calendarwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param visible bool
///
void q_calendarwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param visible bool
///
void q_calendarwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, bool visible)
///
void q_calendarwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 int
///
int32_t q_calendarwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 int
///
int32_t q_calendarwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func(QCalendarWidget* self, int param1)
///
void q_calendarwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func()
///
void q_calendarwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
QPaintEngine* q_calendarwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
QPaintEngine* q_calendarwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback QPaintEngine* func()
///
void q_calendarwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMouseEvent* event)
///
void q_calendarwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMouseEvent* event)
///
void q_calendarwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMouseEvent*
///
void q_calendarwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMouseEvent* event)
///
void q_calendarwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QWheelEvent*
///
void q_calendarwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QWheelEvent*
///
void q_calendarwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QWheelEvent* event)
///
void q_calendarwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QKeyEvent*
///
void q_calendarwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QKeyEvent*
///
void q_calendarwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QKeyEvent* event)
///
void q_calendarwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QFocusEvent*
///
void q_calendarwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QFocusEvent*
///
void q_calendarwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QFocusEvent* event)
///
void q_calendarwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QFocusEvent*
///
void q_calendarwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QFocusEvent*
///
void q_calendarwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QFocusEvent* event)
///
void q_calendarwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEnterEvent*
///
void q_calendarwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEnterEvent*
///
void q_calendarwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QEnterEvent* event)
///
void q_calendarwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
void q_calendarwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
void q_calendarwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QEvent* event)
///
void q_calendarwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QPaintEvent*
///
void q_calendarwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QPaintEvent*
///
void q_calendarwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QPaintEvent* event)
///
void q_calendarwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMoveEvent*
///
void q_calendarwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QMoveEvent*
///
void q_calendarwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMoveEvent* event)
///
void q_calendarwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QCloseEvent*
///
void q_calendarwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QCloseEvent*
///
void q_calendarwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QCloseEvent* event)
///
void q_calendarwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QContextMenuEvent*
///
void q_calendarwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QContextMenuEvent*
///
void q_calendarwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QContextMenuEvent* event)
///
void q_calendarwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QTabletEvent*
///
void q_calendarwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QTabletEvent*
///
void q_calendarwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QTabletEvent* event)
///
void q_calendarwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QActionEvent*
///
void q_calendarwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QActionEvent*
///
void q_calendarwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QActionEvent* event)
///
void q_calendarwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragEnterEvent*
///
void q_calendarwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragEnterEvent*
///
void q_calendarwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDragEnterEvent* event)
///
void q_calendarwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragMoveEvent*
///
void q_calendarwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragMoveEvent*
///
void q_calendarwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDragMoveEvent* event)
///
void q_calendarwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragLeaveEvent*
///
void q_calendarwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDragLeaveEvent*
///
void q_calendarwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDragLeaveEvent* event)
///
void q_calendarwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDropEvent*
///
void q_calendarwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QDropEvent*
///
void q_calendarwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QDropEvent* event)
///
void q_calendarwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QShowEvent*
///
void q_calendarwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QShowEvent*
///
void q_calendarwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QShowEvent* event)
///
void q_calendarwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QHideEvent*
///
void q_calendarwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QHideEvent*
///
void q_calendarwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QHideEvent* event)
///
void q_calendarwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_calendarwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_calendarwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func(QCalendarWidget* self, const char* eventType, void* message, intptr_t* result)
///
void q_calendarwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 QEvent*
///
void q_calendarwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 QEvent*
///
void q_calendarwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QEvent* param1)
///
void q_calendarwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_calendarwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_calendarwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func(QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_calendarwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
///
void q_calendarwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param painter QPainter*
///
void q_calendarwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QPainter* painter)
///
void q_calendarwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param offset QPoint*
///
QPaintDevice* q_calendarwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param offset QPoint*
///
QPaintDevice* q_calendarwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback QPaintDevice* func(QCalendarWidget* self, QPoint* offset)
///
void q_calendarwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
QPainter* q_calendarwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
QPainter* q_calendarwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback QPainter* func()
///
void q_calendarwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 QInputMethodEvent*
///
void q_calendarwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 QInputMethodEvent*
///
void q_calendarwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QInputMethodEvent* param1)
///
void q_calendarwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_calendarwidget_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_calendarwidget_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback QVariant* func(QCalendarWidget* self, enum Qt__InputMethodQuery param1)
///
void q_calendarwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param next bool
///
bool q_calendarwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param next bool
///
bool q_calendarwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func(QCalendarWidget* self, bool next)
///
void q_calendarwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QTimerEvent*
///
void q_calendarwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QTimerEvent*
///
void q_calendarwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QTimerEvent* event)
///
void q_calendarwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QChildEvent*
///
void q_calendarwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QChildEvent*
///
void q_calendarwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QChildEvent* event)
///
void q_calendarwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
void q_calendarwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param event QEvent*
///
void q_calendarwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QEvent* event)
///
void q_calendarwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
void q_calendarwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
void q_calendarwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMetaMethod* signal)
///
void q_calendarwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
void q_calendarwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
void q_calendarwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, QMetaMethod* signal)
///
void q_calendarwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func()
///
void q_calendarwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func()
///
void q_calendarwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback void func()
///
void q_calendarwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func()
///
void q_calendarwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
bool q_calendarwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func()
///
void q_calendarwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
QObject* q_calendarwidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
QObject* q_calendarwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback QObject* func()
///
void q_calendarwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
///
int32_t q_calendarwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func()
///
void q_calendarwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal const char*
///
int32_t q_calendarwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal const char*
///
int32_t q_calendarwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback int32_t func(QCalendarWidget* self, const char* signal)
///
void q_calendarwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
bool q_calendarwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param signal QMetaMethod*
///
bool q_calendarwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback bool func(QCalendarWidget* self, QMetaMethod* signal)
///
void q_calendarwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCalendarWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_calendarwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_calendarwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCalendarWidget*
/// @param callback double func(QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_calendarwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCalendarWidget*
/// @param callback void func(QCalendarWidget* self, const char* objectName)
///
void q_calendarwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#dtor.QCalendarWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QCalendarWidget*
///
void q_calendarwidget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#public-types)

typedef enum {
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_NOHORIZONTALHEADER = 0,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SINGLELETTERDAYNAMES = 1,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SHORTDAYNAMES = 2,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_LONGDAYNAMES = 3
} QCalendarWidget__HorizontalHeaderFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#public-types)

typedef enum {
    QCALENDARWIDGET_VERTICALHEADERFORMAT_NOVERTICALHEADER = 0,
    QCALENDARWIDGET_VERTICALHEADERFORMAT_ISOWEEKNUMBERS = 1
} QCalendarWidget__VerticalHeaderFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qcalendarwidget.html#public-types)

typedef enum {
    QCALENDARWIDGET_SELECTIONMODE_NOSELECTION = 0,
    QCALENDARWIDGET_SELECTIONMODE_SINGLESELECTION = 1
} QCalendarWidget__SelectionMode;

#endif
