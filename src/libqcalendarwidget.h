#pragma once
#ifndef SRCQT6C_LIBQCALENDARWIDGET_H
#define SRCQT6C_LIBQCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcalendarwidget.html

/// q_calendarwidget_new constructs a new QCalendarWidget object.
///
/// ``` QWidget* parent ```
QCalendarWidget* q_calendarwidget_new(void* parent);

/// q_calendarwidget_new2 constructs a new QCalendarWidget object.
///
///
QCalendarWidget* q_calendarwidget_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCalendarWidget* self ```
const QMetaObject* q_calendarwidget_meta_object(void* self);

/// ``` QCalendarWidget* self, const char* param1 ```
void* q_calendarwidget_metacast(void* self, const char* param1);

/// ``` QCalendarWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_calendarwidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, enum QMetaObject__Call, int, void*) ```
void q_calendarwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCalendarWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_calendarwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_calendarwidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, QSize* (*slot)() ```
void q_calendarwidget_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, QSize* (*slot)() ```
void q_calendarwidget_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectedDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_selected_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#yearShown)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_year_shown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#monthShown)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_month_shown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_minimum_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setMinimumDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_minimum_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#clearMinimumDate)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_minimum_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#maximumDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_maximum_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setMaximumDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_maximum_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#clearMaximumDate)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_maximum_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#firstDayOfWeek)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_first_day_of_week(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setFirstDayOfWeek)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek ```
void q_calendarwidget_set_first_day_of_week(void* self, int64_t dayOfWeek);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isNavigationBarVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_navigation_bar_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isGridVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_grid_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#calendar)
///
/// ``` QCalendarWidget* self ```
QCalendar* q_calendarwidget_calendar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setCalendar)
///
/// ``` QCalendarWidget* self, QCalendar* calendar ```
void q_calendarwidget_set_calendar(void* self, void* calendar);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionMode)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_selection_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectionMode)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__SelectionMode mode ```
void q_calendarwidget_set_selection_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#horizontalHeaderFormat)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_horizontal_header_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setHorizontalHeaderFormat)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__HorizontalHeaderFormat format ```
void q_calendarwidget_set_horizontal_header_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#verticalHeaderFormat)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_vertical_header_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setVerticalHeaderFormat)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__VerticalHeaderFormat format ```
void q_calendarwidget_set_vertical_header_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#headerTextFormat)
///
/// ``` QCalendarWidget* self ```
QTextCharFormat* q_calendarwidget_header_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setHeaderTextFormat)
///
/// ``` QCalendarWidget* self, QTextCharFormat* format ```
void q_calendarwidget_set_header_text_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#weekdayTextFormat)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek ```
QTextCharFormat* q_calendarwidget_weekday_text_format(void* self, int64_t dayOfWeek);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setWeekdayTextFormat)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek, QTextCharFormat* format ```
void q_calendarwidget_set_weekday_text_format(void* self, int64_t dayOfWeek, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// ``` QCalendarWidget* self ```
libqt_map /* of QDate* to QTextCharFormat* */ q_calendarwidget_date_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// ``` QCalendarWidget* self, QDate* date ```
QTextCharFormat* q_calendarwidget_date_text_format2(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateTextFormat)
///
/// ``` QCalendarWidget* self, QDate* date, QTextCharFormat* format ```
void q_calendarwidget_set_date_text_format(void* self, void* date, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isDateEditEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_date_edit_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditEnabled)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_date_edit_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateEditAcceptDelay)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_date_edit_accept_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditAcceptDelay)
///
/// ``` QCalendarWidget* self, int delay ```
void q_calendarwidget_set_date_edit_accept_delay(void* self, int delay);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// ``` QCalendarWidget* self, QEvent* event ```
bool q_calendarwidget_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QEvent* event ```
bool q_calendarwidget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// ``` QCalendarWidget* self, QObject* watched, QEvent* event ```
bool q_calendarwidget_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QObject*, QEvent*) ```
void q_calendarwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QObject* watched, QEvent* event ```
bool q_calendarwidget_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// ``` QCalendarWidget* self, QResizeEvent* event ```
void q_calendarwidget_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QResizeEvent*) ```
void q_calendarwidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QResizeEvent* event ```
void q_calendarwidget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QKeyEvent*) ```
void q_calendarwidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// ``` QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date ```
void q_calendarwidget_paint_cell(void* self, void* painter, void* rect, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPainter*, QRect*, QDate*) ```
void q_calendarwidget_on_paint_cell(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date ```
void q_calendarwidget_qbase_paint_cell(void* self, void* painter, void* rect, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_update_cell(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_update_cell(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_qbase_update_cell(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_cells(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_update_cells(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_update_cells(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectedDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_selected_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateRange)
///
/// ``` QCalendarWidget* self, QDate* min, QDate* max ```
void q_calendarwidget_set_date_range(void* self, void* min, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setCurrentPage)
///
/// ``` QCalendarWidget* self, int year, int month ```
void q_calendarwidget_set_current_page(void* self, int year, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setGridVisible)
///
/// ``` QCalendarWidget* self, bool show ```
void q_calendarwidget_set_grid_visible(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setNavigationBarVisible)
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_set_navigation_bar_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextMonth)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_next_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousMonth)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_previous_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextYear)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_next_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousYear)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_previous_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showSelectedDate)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_selected_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showToday)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_today(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionChanged)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionChanged)
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*) ```
void q_calendarwidget_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#clicked)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_clicked(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#clicked)
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#activated)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_activated(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#activated)
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_activated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#currentPageChanged)
///
/// ``` QCalendarWidget* self, int year, int month ```
void q_calendarwidget_current_page_changed(void* self, int year, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#currentPageChanged)
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, int, int) ```
void q_calendarwidget_on_current_page_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_calendarwidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_calendarwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QCalendarWidget* self ```
QStyle* q_calendarwidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QCalendarWidget* self, QStyle* style ```
void q_calendarwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QCalendarWidget* self, enum Qt__WindowModality windowModality ```
void q_calendarwidget_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
bool q_calendarwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QCalendarWidget* self, bool enabled ```
void q_calendarwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QCalendarWidget* self, bool disabled ```
void q_calendarwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QCalendarWidget* self, bool windowModified ```
void q_calendarwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QCalendarWidget* self ```
const QRect* q_calendarwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QCalendarWidget* self ```
QPoint* q_calendarwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCalendarWidget* self, QSize* minimumSize ```
void q_calendarwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCalendarWidget* self, int minw, int minh ```
void q_calendarwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCalendarWidget* self, QSize* maximumSize ```
void q_calendarwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCalendarWidget* self, int maxw, int maxh ```
void q_calendarwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QCalendarWidget* self, int minw ```
void q_calendarwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QCalendarWidget* self, int minh ```
void q_calendarwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QCalendarWidget* self, int maxw ```
void q_calendarwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QCalendarWidget* self, int maxh ```
void q_calendarwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCalendarWidget* self, QSize* sizeIncrement ```
void q_calendarwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCalendarWidget* self, QSize* baseSize ```
void q_calendarwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCalendarWidget* self, int basew, int baseh ```
void q_calendarwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCalendarWidget* self, QSize* fixedSize ```
void q_calendarwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QCalendarWidget* self, int w ```
void q_calendarwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QCalendarWidget* self, int h ```
void q_calendarwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_calendarwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_calendarwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_calendarwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_calendarwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QCalendarWidget* self ```
const QPalette* q_calendarwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QCalendarWidget* self, QPalette* palette ```
void q_calendarwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QCalendarWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_calendarwidget_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QCalendarWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_calendarwidget_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QCalendarWidget* self ```
const QFont* q_calendarwidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QCalendarWidget* self, QFont* font ```
void q_calendarwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QCalendarWidget* self ```
QFontMetrics* q_calendarwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QCalendarWidget* self ```
QFontInfo* q_calendarwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QCalendarWidget* self ```
QCursor* q_calendarwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QCalendarWidget* self, QCursor* cursor ```
void q_calendarwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCalendarWidget* self, QBitmap* mask ```
void q_calendarwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCalendarWidget* self, QRegion* mask ```
void q_calendarwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target ```
void q_calendarwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCalendarWidget* self ```
QPixmap* q_calendarwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QCalendarWidget* self ```
QGraphicsEffect* q_calendarwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QCalendarWidget* self, QGraphicsEffect* effect ```
void q_calendarwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal ```
void q_calendarwidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal ```
void q_calendarwidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QCalendarWidget* self, const char* windowTitle ```
void q_calendarwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QCalendarWidget* self, const char* styleSheet ```
void q_calendarwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QCalendarWidget* self, QIcon* icon ```
void q_calendarwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QCalendarWidget* self ```
QIcon* q_calendarwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QCalendarWidget* self, const char* windowIconText ```
void q_calendarwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QCalendarWidget* self, const char* windowRole ```
void q_calendarwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QCalendarWidget* self, const char* filePath ```
void q_calendarwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QCalendarWidget* self, double level ```
void q_calendarwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QCalendarWidget* self, const char* toolTip ```
void q_calendarwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QCalendarWidget* self, int msec ```
void q_calendarwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QCalendarWidget* self, const char* statusTip ```
void q_calendarwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QCalendarWidget* self, const char* whatsThis ```
void q_calendarwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QCalendarWidget* self, const char* name ```
void q_calendarwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QCalendarWidget* self, const char* description ```
void q_calendarwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QCalendarWidget* self, enum Qt__LayoutDirection direction ```
void q_calendarwidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QCalendarWidget* self, QLocale* locale ```
void q_calendarwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QCalendarWidget* self ```
QLocale* q_calendarwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCalendarWidget* self, enum Qt__FocusReason reason ```
void q_calendarwidget_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QCalendarWidget* self, enum Qt__FocusPolicy policy ```
void q_calendarwidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_calendarwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QCalendarWidget* self, QWidget* focusProxy ```
void q_calendarwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QCalendarWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_calendarwidget_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCalendarWidget* self, QCursor* param1 ```
void q_calendarwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCalendarWidget* self, QKeySequence* key ```
int32_t q_calendarwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_calendarwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_calendarwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QCalendarWidget* self ```
QGraphicsProxyWidget* q_calendarwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, QRect* param1 ```
void q_calendarwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, QRegion* param1 ```
void q_calendarwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, QRect* param1 ```
void q_calendarwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, QRegion* param1 ```
void q_calendarwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QCalendarWidget* self, bool hidden ```
void q_calendarwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
void q_calendarwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCalendarWidget* self, int x, int y ```
void q_calendarwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
void q_calendarwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCalendarWidget* self, QSize* param1 ```
void q_calendarwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCalendarWidget* self, QRect* geometry ```
void q_calendarwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QCalendarWidget* self ```
char* q_calendarwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QCalendarWidget* self, const char* geometry ```
bool q_calendarwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
bool q_calendarwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QCalendarWidget* self, int state ```
void q_calendarwidget_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QCalendarWidget* self, int state ```
void q_calendarwidget_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QCalendarWidget* self ```
QSizePolicy* q_calendarwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCalendarWidget* self, QSizePolicy* sizePolicy ```
void q_calendarwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCalendarWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_calendarwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCalendarWidget* self, int left, int top, int right, int bottom ```
void q_calendarwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCalendarWidget* self, QMargins* margins ```
void q_calendarwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QCalendarWidget* self ```
QMargins* q_calendarwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QCalendarWidget* self ```
QLayout* q_calendarwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QCalendarWidget* self, QLayout* layout ```
void q_calendarwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCalendarWidget* self, QWidget* parent ```
void q_calendarwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCalendarWidget* self, QWidget* parent, int f ```
void q_calendarwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCalendarWidget* self, int dx, int dy ```
void q_calendarwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCalendarWidget* self, int dx, int dy, QRect* param3 ```
void q_calendarwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QCalendarWidget* self, bool on ```
void q_calendarwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QAction* action ```
void q_calendarwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QCalendarWidget* self, libqt_list /* of QAction* */ actions ```
void q_calendarwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QCalendarWidget* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_calendarwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QCalendarWidget* self, QAction* before, QAction* action ```
void q_calendarwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QCalendarWidget* self, QAction* action ```
void q_calendarwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QCalendarWidget* self ```
libqt_list /* of QAction* */ q_calendarwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, const char* text ```
QAction* q_calendarwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QIcon* icon, const char* text ```
QAction* q_calendarwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_calendarwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_calendarwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QCalendarWidget* self, int typeVal ```
void q_calendarwidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCalendarWidget* self, enum Qt__WindowType param1 ```
void q_calendarwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QCalendarWidget* self, int typeVal ```
void q_calendarwidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_calendarwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCalendarWidget* self, int x, int y ```
QWidget* q_calendarwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCalendarWidget* self, QPoint* p ```
QWidget* q_calendarwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCalendarWidget* self, QPointF* p ```
QWidget* q_calendarwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1 ```
void q_calendarwidget_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_calendarwidget_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QCalendarWidget* self, QWidget* child ```
bool q_calendarwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QCalendarWidget* self, bool enabled ```
void q_calendarwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QCalendarWidget* self ```
QBackingStore* q_calendarwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QCalendarWidget* self ```
QWindow* q_calendarwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QCalendarWidget* self ```
QScreen* q_calendarwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QCalendarWidget* self, QScreen* screen ```
void q_calendarwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_calendarwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QCalendarWidget* self, const char* title ```
void q_calendarwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, const char*) ```
void q_calendarwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QCalendarWidget* self, QIcon* icon ```
void q_calendarwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_calendarwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QCalendarWidget* self, const char* iconText ```
void q_calendarwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, const char*) ```
void q_calendarwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QCalendarWidget* self, QPoint* pos ```
void q_calendarwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_calendarwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QCalendarWidget* self, int hints ```
void q_calendarwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_calendarwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_calendarwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_calendarwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_calendarwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_calendarwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_calendarwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCalendarWidget* self, QRect* rectangle ```
QPixmap* q_calendarwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_calendarwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCalendarWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_calendarwidget_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCalendarWidget* self, int id, bool enable ```
void q_calendarwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCalendarWidget* self, int id, bool enable ```
void q_calendarwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCalendarWidget* self, enum Qt__WindowType param1, bool on ```
void q_calendarwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_calendarwidget_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_calendarwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_calendarwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCalendarWidget* self, char* name ```
void q_calendarwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCalendarWidget* self, bool b ```
bool q_calendarwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCalendarWidget* self ```
QThread* q_calendarwidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCalendarWidget* self, QThread* thread ```
bool q_calendarwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCalendarWidget* self, int interval ```
int32_t q_calendarwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCalendarWidget* self, enum Qt__TimerId id ```
void q_calendarwidget_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCalendarWidget* self ```
libqt_list /* of QObject* */ q_calendarwidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCalendarWidget* self, QObject* filterObj ```
void q_calendarwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCalendarWidget* self, QObject* obj ```
void q_calendarwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_calendarwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCalendarWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_calendarwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_calendarwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_calendarwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCalendarWidget* self, const char* name, QVariant* value ```
bool q_calendarwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCalendarWidget* self, const char* name ```
QVariant* q_calendarwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCalendarWidget* self ```
const char** q_calendarwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCalendarWidget* self ```
QBindingStorage* q_calendarwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCalendarWidget* self ```
const QBindingStorage* q_calendarwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self, void (*slot)(QObject*) ```
void q_calendarwidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCalendarWidget* self, const char* classname ```
bool q_calendarwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCalendarWidget* self, QThread* thread, Disambiguated_t* param2 ```
bool q_calendarwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCalendarWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_calendarwidget_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_calendarwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCalendarWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_calendarwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self, QObject* param1 ```
void q_calendarwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self, void (*slot)(QObject*, QObject*) ```
void q_calendarwidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_calendarwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_calendarwidget_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)() ```
void q_calendarwidget_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, bool) ```
void q_calendarwidget_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, int param1 ```
int32_t q_calendarwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, int param1 ```
int32_t q_calendarwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, int) ```
void q_calendarwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPaintEngine* q_calendarwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPaintEngine* q_calendarwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEngine* (*slot)() ```
void q_calendarwidget_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QWheelEvent* event ```
void q_calendarwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QWheelEvent* event ```
void q_calendarwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QWheelEvent*) ```
void q_calendarwidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QKeyEvent*) ```
void q_calendarwidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QFocusEvent*) ```
void q_calendarwidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QFocusEvent*) ```
void q_calendarwidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEnterEvent* event ```
void q_calendarwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEnterEvent* event ```
void q_calendarwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEnterEvent*) ```
void q_calendarwidget_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEvent* event ```
void q_calendarwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEvent* event ```
void q_calendarwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPaintEvent*) ```
void q_calendarwidget_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMoveEvent* event ```
void q_calendarwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMoveEvent* event ```
void q_calendarwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMoveEvent*) ```
void q_calendarwidget_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QCloseEvent* event ```
void q_calendarwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QCloseEvent* event ```
void q_calendarwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QCloseEvent*) ```
void q_calendarwidget_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QContextMenuEvent* event ```
void q_calendarwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QContextMenuEvent* event ```
void q_calendarwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QContextMenuEvent*) ```
void q_calendarwidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QTabletEvent* event ```
void q_calendarwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QTabletEvent* event ```
void q_calendarwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QTabletEvent*) ```
void q_calendarwidget_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QActionEvent* event ```
void q_calendarwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QActionEvent* event ```
void q_calendarwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QActionEvent*) ```
void q_calendarwidget_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragEnterEvent* event ```
void q_calendarwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragEnterEvent* event ```
void q_calendarwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragEnterEvent*) ```
void q_calendarwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragMoveEvent* event ```
void q_calendarwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragMoveEvent* event ```
void q_calendarwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragMoveEvent*) ```
void q_calendarwidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragLeaveEvent* event ```
void q_calendarwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragLeaveEvent* event ```
void q_calendarwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragLeaveEvent*) ```
void q_calendarwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDropEvent* event ```
void q_calendarwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDropEvent* event ```
void q_calendarwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDropEvent*) ```
void q_calendarwidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QShowEvent* event ```
void q_calendarwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QShowEvent* event ```
void q_calendarwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QShowEvent*) ```
void q_calendarwidget_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QHideEvent* event ```
void q_calendarwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QHideEvent* event ```
void q_calendarwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QHideEvent*) ```
void q_calendarwidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_calendarwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_calendarwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, const char*, void*, intptr_t*) ```
void q_calendarwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* param1 ```
void q_calendarwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* param1 ```
void q_calendarwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_calendarwidget_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_calendarwidget_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_calendarwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPainter*) ```
void q_calendarwidget_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPoint* offset ```
QPaintDevice* q_calendarwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPoint* offset ```
QPaintDevice* q_calendarwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintDevice* (*slot)(QCalendarWidget*, QPoint*) ```
void q_calendarwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPainter* q_calendarwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPainter* q_calendarwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* (*slot)() ```
void q_calendarwidget_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QInputMethodEvent* param1 ```
void q_calendarwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QInputMethodEvent* param1 ```
void q_calendarwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QInputMethodEvent*) ```
void q_calendarwidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_calendarwidget_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_calendarwidget_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QVariant* (*slot)(QCalendarWidget*, enum Qt__InputMethodQuery) ```
void q_calendarwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, bool next ```
bool q_calendarwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool next ```
bool q_calendarwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, bool) ```
void q_calendarwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QTimerEvent* event ```
void q_calendarwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QTimerEvent* event ```
void q_calendarwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QTimerEvent*) ```
void q_calendarwidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QChildEvent* event ```
void q_calendarwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QChildEvent* event ```
void q_calendarwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QChildEvent*) ```
void q_calendarwidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QObject* (*slot)() ```
void q_calendarwidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)() ```
void q_calendarwidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, const char* signal ```
int32_t q_calendarwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, const char* signal ```
int32_t q_calendarwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, const char*) ```
void q_calendarwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
bool q_calendarwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
bool q_calendarwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_calendarwidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_calendarwidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, double (*slot)(QCalendarWidget*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_calendarwidget_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QCalendarWidget* self, void (*slot)(QObject*, const char*) ```
void q_calendarwidget_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dtor.QCalendarWidget)
///
/// Delete this object from C++ memory.
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendarwidget.html#types

typedef enum {
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_NOHORIZONTALHEADER = 0,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SINGLELETTERDAYNAMES = 1,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SHORTDAYNAMES = 2,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_LONGDAYNAMES = 3
} QCalendarWidget__HorizontalHeaderFormat;

typedef enum {
    QCALENDARWIDGET_VERTICALHEADERFORMAT_NOVERTICALHEADER = 0,
    QCALENDARWIDGET_VERTICALHEADERFORMAT_ISOWEEKNUMBERS = 1
} QCalendarWidget__VerticalHeaderFormat;

typedef enum {
    QCALENDARWIDGET_SELECTIONMODE_NOSELECTION = 0,
    QCALENDARWIDGET_SELECTIONMODE_SINGLESELECTION = 1
} QCalendarWidget__SelectionMode;

#endif
