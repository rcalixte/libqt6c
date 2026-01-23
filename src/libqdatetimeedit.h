#pragma once
#ifndef SRC_QT6C_LIBQDATETIMEEDIT_H
#define SRC_QT6C_LIBQDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new constructs a new QDateTimeEdit object.
///
/// @param parent QWidget*
///
QDateTimeEdit* q_datetimeedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new2 constructs a new QDateTimeEdit object.
///
QDateTimeEdit* q_datetimeedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new3 constructs a new QDateTimeEdit object.
///
/// @param dt QDateTime*
///
QDateTimeEdit* q_datetimeedit_new3(void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new4 constructs a new QDateTimeEdit object.
///
/// @param d QDate*
///
QDateTimeEdit* q_datetimeedit_new4(void* d);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new5 constructs a new QDateTimeEdit object.
///
/// @param t QTime*
///
QDateTimeEdit* q_datetimeedit_new5(void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new6 constructs a new QDateTimeEdit object.
///
/// @param dt QDateTime*
/// @param parent QWidget*
///
QDateTimeEdit* q_datetimeedit_new6(void* dt, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new7 constructs a new QDateTimeEdit object.
///
/// @param d QDate*
/// @param parent QWidget*
///
QDateTimeEdit* q_datetimeedit_new7(void* d, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)

/// q_datetimeedit_new8 constructs a new QDateTimeEdit object.
///
/// @param t QTime*
/// @param parent QWidget*
///
QDateTimeEdit* q_datetimeedit_new8(void* t, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDateTimeEdit*
///
const QMetaObject* q_datetimeedit_meta_object(void* self);

/// @param self QDateTimeEdit*
/// @param param1 const char*
///
void* q_datetimeedit_metacast(void* self, const char* param1);

/// @param self QDateTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_datetimeedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func(QDateTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_datetimeedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_datetimeedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_datetimeedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// @param self QDateTimeEdit*
///
QDateTime* q_datetimeedit_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// @param self QDateTimeEdit*
///
QDate* q_datetimeedit_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// @param self QDateTimeEdit*
///
QTime* q_datetimeedit_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// @param self QDateTimeEdit*
///
QCalendar* q_datetimeedit_calendar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// @param self QDateTimeEdit*
/// @param calendar QCalendar*
///
void q_datetimeedit_set_calendar(void* self, void* calendar);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// @param self QDateTimeEdit*
///
QDateTime* q_datetimeedit_minimum_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_minimum_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// @param self QDateTimeEdit*
/// @param dt QDateTime*
///
void q_datetimeedit_set_minimum_date_time(void* self, void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// @param self QDateTimeEdit*
///
QDateTime* q_datetimeedit_maximum_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_maximum_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// @param self QDateTimeEdit*
/// @param dt QDateTime*
///
void q_datetimeedit_set_maximum_date_time(void* self, void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// @param self QDateTimeEdit*
/// @param min QDateTime*
/// @param max QDateTime*
///
void q_datetimeedit_set_date_time_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// @param self QDateTimeEdit*
///
QDate* q_datetimeedit_minimum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// @param self QDateTimeEdit*
/// @param min QDate*
///
void q_datetimeedit_set_minimum_date(void* self, void* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_minimum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// @param self QDateTimeEdit*
///
QDate* q_datetimeedit_maximum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// @param self QDateTimeEdit*
/// @param max QDate*
///
void q_datetimeedit_set_maximum_date(void* self, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_maximum_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// @param self QDateTimeEdit*
/// @param min QDate*
/// @param max QDate*
///
void q_datetimeedit_set_date_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// @param self QDateTimeEdit*
///
QTime* q_datetimeedit_minimum_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// @param self QDateTimeEdit*
/// @param min QTime*
///
void q_datetimeedit_set_minimum_time(void* self, void* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_minimum_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// @param self QDateTimeEdit*
///
QTime* q_datetimeedit_maximum_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// @param self QDateTimeEdit*
/// @param max QTime*
///
void q_datetimeedit_set_maximum_time(void* self, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_maximum_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// @param self QDateTimeEdit*
/// @param min QTime*
/// @param max QTime*
///
void q_datetimeedit_set_time_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum QDateTimeEdit__Section
///
int32_t q_datetimeedit_displayed_sections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// @param self QDateTimeEdit*
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_datetimeedit_current_section(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// @param self QDateTimeEdit*
/// @param index int
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_datetimeedit_section_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// @param self QDateTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_datetimeedit_set_current_section(void* self, int32_t section);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_current_section_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// @param self QDateTimeEdit*
/// @param index int
///
void q_datetimeedit_set_current_section_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// @param self QDateTimeEdit*
///
QCalendarWidget* q_datetimeedit_calendar_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// @param self QDateTimeEdit*
/// @param calendarWidget QCalendarWidget*
///
void q_datetimeedit_set_calendar_widget(void* self, void* calendarWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_section_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// @param self QDateTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_datetimeedit_set_selected_section(void* self, int32_t section);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
const char* q_datetimeedit_section_text(void* self, int32_t section);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_display_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// @param self QDateTimeEdit*
/// @param format const char*
///
void q_datetimeedit_set_display_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_calendar_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// @param self QDateTimeEdit*
/// @param enable bool
///
void q_datetimeedit_set_calendar_popup(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__TimeSpec
///
int32_t q_datetimeedit_time_spec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// @param self QDateTimeEdit*
/// @param spec enum Qt__TimeSpec
///
void q_datetimeedit_set_time_spec(void* self, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
///
/// @param self QDateTimeEdit*
///
QTimeZone* q_datetimeedit_time_zone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
///
/// @param self QDateTimeEdit*
/// @param zone QTimeZone*
///
void q_datetimeedit_set_time_zone(void* self, void* zone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback QSize* func()
///
void q_datetimeedit_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func()
///
void q_datetimeedit_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_qbase_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// @param self QDateTimeEdit*
/// @param steps int
///
void q_datetimeedit_step_by(void* self, int steps);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, int steps)
///
void q_datetimeedit_on_step_by(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param steps int
///
void q_datetimeedit_qbase_step_by(void* self, int steps);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
bool q_datetimeedit_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback bool func(QDateTimeEdit* self, QEvent* event)
///
void q_datetimeedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
bool q_datetimeedit_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QDateTimeEdit*
/// @param dateTime QDateTime*
///
void q_datetimeedit_date_time_changed(void* self, void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDateTime* dateTime)
///
void q_datetimeedit_on_date_time_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QDateTimeEdit*
/// @param time QTime*
///
void q_datetimeedit_time_changed(void* self, void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QTime* time)
///
void q_datetimeedit_on_time_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QDateTimeEdit*
/// @param date QDate*
///
void q_datetimeedit_date_changed(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDate* date)
///
void q_datetimeedit_on_date_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// @param self QDateTimeEdit*
/// @param dateTime QDateTime*
///
void q_datetimeedit_set_date_time(void* self, void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// @param self QDateTimeEdit*
/// @param date QDate*
///
void q_datetimeedit_set_date(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// @param self QDateTimeEdit*
/// @param time QTime*
///
void q_datetimeedit_set_time(void* self, void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// @param self QDateTimeEdit*
/// @param event QKeyEvent*
///
void q_datetimeedit_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QKeyEvent* event)
///
void q_datetimeedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QKeyEvent*
///
void q_datetimeedit_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// @param self QDateTimeEdit*
/// @param event QWheelEvent*
///
void q_datetimeedit_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QWheelEvent* event)
///
void q_datetimeedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QWheelEvent*
///
void q_datetimeedit_qbase_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// @param self QDateTimeEdit*
/// @param event QFocusEvent*
///
void q_datetimeedit_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QFocusEvent* event)
///
void q_datetimeedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QFocusEvent*
///
void q_datetimeedit_qbase_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// @param self QDateTimeEdit*
/// @param next bool
///
bool q_datetimeedit_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback bool func(QDateTimeEdit* self, bool next)
///
void q_datetimeedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param next bool
///
bool q_datetimeedit_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// @param self QDateTimeEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_datetimeedit_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func(QDateTimeEdit* self, const char* input, int* pos)
///
void q_datetimeedit_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_datetimeedit_qbase_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// @param self QDateTimeEdit*
/// @param input const char*
///
void q_datetimeedit_fixup(void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, const char* input)
///
void q_datetimeedit_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param input const char*
///
void q_datetimeedit_qbase_fixup(void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// @param self QDateTimeEdit*
/// @param text const char*
///
QDateTime* q_datetimeedit_date_time_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback QDateTime* func(QDateTimeEdit* self, const char* text)
///
void q_datetimeedit_on_date_time_from_text(void* self, QDateTime* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param text const char*
///
QDateTime* q_datetimeedit_qbase_date_time_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
/// @param dt QDateTime*
///
const char* q_datetimeedit_text_from_date_time(void* self, void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback const char* func(QDateTimeEdit* self, QDateTime* dt)
///
void q_datetimeedit_on_text_from_date_time(void* self, const char* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param dt QDateTime*
///
const char* q_datetimeedit_qbase_text_from_date_time(void* self, void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_datetimeedit_step_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func()
///
void q_datetimeedit_on_step_enabled(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_datetimeedit_qbase_step_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMouseEvent* event)
///
void q_datetimeedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// @param self QDateTimeEdit*
/// @param event QPaintEvent*
///
void q_datetimeedit_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QPaintEvent* event)
///
void q_datetimeedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param event QPaintEvent*
///
void q_datetimeedit_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// @param self QDateTimeEdit*
/// @param option QStyleOptionSpinBox*
///
void q_datetimeedit_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QStyleOptionSpinBox* option)
///
void q_datetimeedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QDateTimeEdit*
/// @param option QStyleOptionSpinBox*
///
void q_datetimeedit_qbase_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_datetimeedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_datetimeedit_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QDateTimeEdit*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_datetimeedit_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QDateTimeEdit*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_datetimeedit_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QDateTimeEdit*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_datetimeedit_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QDateTimeEdit*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_datetimeedit_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QDateTimeEdit*
/// @param txt const char*
///
void q_datetimeedit_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QDateTimeEdit*
/// @param w bool
///
void q_datetimeedit_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QDateTimeEdit*
/// @param r bool
///
void q_datetimeedit_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QDateTimeEdit*
/// @param kt bool
///
void q_datetimeedit_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QDateTimeEdit*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_datetimeedit_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_datetimeedit_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QDateTimeEdit*
/// @param frame bool
///
void q_datetimeedit_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QDateTimeEdit*
/// @param on bool
///
void q_datetimeedit_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QDateTimeEdit*
/// @param shown bool
///
void q_datetimeedit_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self)
///
void q_datetimeedit_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDateTimeEdit*
///
uintptr_t q_datetimeedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDateTimeEdit*
///
uintptr_t q_datetimeedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDateTimeEdit*
///
uintptr_t q_datetimeedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDateTimeEdit*
///
QStyle* q_datetimeedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDateTimeEdit*
/// @param style QStyle*
///
void q_datetimeedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_datetimeedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDateTimeEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_datetimeedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
///
bool q_datetimeedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDateTimeEdit*
/// @param enabled bool
///
void q_datetimeedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDateTimeEdit*
/// @param disabled bool
///
void q_datetimeedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDateTimeEdit*
/// @param windowModified bool
///
void q_datetimeedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDateTimeEdit*
///
QRect* q_datetimeedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDateTimeEdit*
///
const QRect* q_datetimeedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDateTimeEdit*
///
QRect* q_datetimeedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDateTimeEdit*
///
QPoint* q_datetimeedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDateTimeEdit*
///
QRect* q_datetimeedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDateTimeEdit*
///
QRect* q_datetimeedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDateTimeEdit*
///
QRegion* q_datetimeedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDateTimeEdit*
/// @param minimumSize QSize*
///
void q_datetimeedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDateTimeEdit*
/// @param minw int
/// @param minh int
///
void q_datetimeedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDateTimeEdit*
/// @param maximumSize QSize*
///
void q_datetimeedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDateTimeEdit*
/// @param maxw int
/// @param maxh int
///
void q_datetimeedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDateTimeEdit*
/// @param minw int
///
void q_datetimeedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDateTimeEdit*
/// @param minh int
///
void q_datetimeedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDateTimeEdit*
/// @param maxw int
///
void q_datetimeedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDateTimeEdit*
/// @param maxh int
///
void q_datetimeedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDateTimeEdit*
/// @param sizeIncrement QSize*
///
void q_datetimeedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDateTimeEdit*
/// @param w int
/// @param h int
///
void q_datetimeedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDateTimeEdit*
/// @param baseSize QSize*
///
void q_datetimeedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDateTimeEdit*
/// @param basew int
/// @param baseh int
///
void q_datetimeedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDateTimeEdit*
/// @param fixedSize QSize*
///
void q_datetimeedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDateTimeEdit*
/// @param w int
/// @param h int
///
void q_datetimeedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDateTimeEdit*
/// @param w int
///
void q_datetimeedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDateTimeEdit*
/// @param h int
///
void q_datetimeedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_datetimeedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_datetimeedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_datetimeedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_datetimeedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_datetimeedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_datetimeedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_datetimeedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_datetimeedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_datetimeedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_datetimeedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_datetimeedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_datetimeedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDateTimeEdit*
///
const QPalette* q_datetimeedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDateTimeEdit*
/// @param palette QPalette*
///
void q_datetimeedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDateTimeEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_datetimeedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDateTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_datetimeedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDateTimeEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_datetimeedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDateTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_datetimeedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDateTimeEdit*
///
const QFont* q_datetimeedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDateTimeEdit*
/// @param font QFont*
///
void q_datetimeedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDateTimeEdit*
///
QFontMetrics* q_datetimeedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDateTimeEdit*
///
QFontInfo* q_datetimeedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDateTimeEdit*
///
QCursor* q_datetimeedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDateTimeEdit*
/// @param cursor QCursor*
///
void q_datetimeedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDateTimeEdit*
/// @param enable bool
///
void q_datetimeedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDateTimeEdit*
/// @param enable bool
///
void q_datetimeedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDateTimeEdit*
/// @param mask QBitmap*
///
void q_datetimeedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDateTimeEdit*
/// @param mask QRegion*
///
void q_datetimeedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDateTimeEdit*
///
QRegion* q_datetimeedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param target QPaintDevice*
///
void q_datetimeedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
///
void q_datetimeedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDateTimeEdit*
///
QPixmap* q_datetimeedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDateTimeEdit*
///
QGraphicsEffect* q_datetimeedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDateTimeEdit*
/// @param effect QGraphicsEffect*
///
void q_datetimeedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDateTimeEdit*
/// @param type enum Qt__GestureType
///
void q_datetimeedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDateTimeEdit*
/// @param type enum Qt__GestureType
///
void q_datetimeedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDateTimeEdit*
/// @param windowTitle const char*
///
void q_datetimeedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDateTimeEdit*
/// @param styleSheet const char*
///
void q_datetimeedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDateTimeEdit*
/// @param icon QIcon*
///
void q_datetimeedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDateTimeEdit*
///
QIcon* q_datetimeedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDateTimeEdit*
/// @param windowIconText const char*
///
void q_datetimeedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDateTimeEdit*
/// @param windowRole const char*
///
void q_datetimeedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDateTimeEdit*
/// @param filePath const char*
///
void q_datetimeedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDateTimeEdit*
/// @param level double
///
void q_datetimeedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDateTimeEdit*
///
double q_datetimeedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDateTimeEdit*
/// @param toolTip const char*
///
void q_datetimeedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDateTimeEdit*
/// @param msec int
///
void q_datetimeedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDateTimeEdit*
/// @param statusTip const char*
///
void q_datetimeedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDateTimeEdit*
/// @param whatsThis const char*
///
void q_datetimeedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDateTimeEdit*
/// @param name const char*
///
void q_datetimeedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDateTimeEdit*
/// @param description const char*
///
void q_datetimeedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDateTimeEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_datetimeedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_datetimeedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDateTimeEdit*
/// @param locale QLocale*
///
void q_datetimeedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDateTimeEdit*
///
QLocale* q_datetimeedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDateTimeEdit*
/// @param reason enum Qt__FocusReason
///
void q_datetimeedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_datetimeedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDateTimeEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_datetimeedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_datetimeedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDateTimeEdit*
/// @param focusProxy QWidget*
///
void q_datetimeedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_datetimeedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDateTimeEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_datetimeedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDateTimeEdit*
/// @param param1 QCursor*
///
void q_datetimeedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDateTimeEdit*
/// @param key QKeySequence*
///
int32_t q_datetimeedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDateTimeEdit*
/// @param id int
///
void q_datetimeedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDateTimeEdit*
/// @param id int
///
void q_datetimeedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDateTimeEdit*
/// @param id int
///
void q_datetimeedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_datetimeedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_datetimeedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDateTimeEdit*
/// @param enable bool
///
void q_datetimeedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDateTimeEdit*
///
QGraphicsProxyWidget* q_datetimeedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_datetimeedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateTimeEdit*
/// @param param1 QRect*
///
void q_datetimeedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateTimeEdit*
/// @param param1 QRegion*
///
void q_datetimeedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_datetimeedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateTimeEdit*
/// @param param1 QRect*
///
void q_datetimeedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateTimeEdit*
/// @param param1 QRegion*
///
void q_datetimeedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDateTimeEdit*
/// @param hidden bool
///
void q_datetimeedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
///
void q_datetimeedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDateTimeEdit*
/// @param x int
/// @param y int
///
void q_datetimeedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDateTimeEdit*
/// @param param1 QPoint*
///
void q_datetimeedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDateTimeEdit*
/// @param w int
/// @param h int
///
void q_datetimeedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDateTimeEdit*
/// @param param1 QSize*
///
void q_datetimeedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_datetimeedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDateTimeEdit*
/// @param geometry QRect*
///
void q_datetimeedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDateTimeEdit*
///
char* q_datetimeedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDateTimeEdit*
/// @param geometry const char*
///
bool q_datetimeedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDateTimeEdit*
/// @param param1 QWidget*
///
bool q_datetimeedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_datetimeedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDateTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void q_datetimeedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDateTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void q_datetimeedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDateTimeEdit*
///
QSizePolicy* q_datetimeedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDateTimeEdit*
/// @param sizePolicy QSizePolicy*
///
void q_datetimeedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDateTimeEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_datetimeedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDateTimeEdit*
///
QRegion* q_datetimeedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDateTimeEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_datetimeedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDateTimeEdit*
/// @param margins QMargins*
///
void q_datetimeedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDateTimeEdit*
///
QMargins* q_datetimeedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDateTimeEdit*
///
QRect* q_datetimeedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDateTimeEdit*
///
QLayout* q_datetimeedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDateTimeEdit*
/// @param layout QLayout*
///
void q_datetimeedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDateTimeEdit*
/// @param parent QWidget*
///
void q_datetimeedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDateTimeEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_datetimeedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDateTimeEdit*
/// @param dx int
/// @param dy int
///
void q_datetimeedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDateTimeEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_datetimeedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDateTimeEdit*
/// @param on bool
///
void q_datetimeedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateTimeEdit*
/// @param action QAction*
///
void q_datetimeedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDateTimeEdit*
/// @param actions libqt_list of QAction*
///
void q_datetimeedit_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDateTimeEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_datetimeedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDateTimeEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_datetimeedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDateTimeEdit*
/// @param action QAction*
///
void q_datetimeedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDateTimeEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_datetimeedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateTimeEdit*
/// @param text const char*
///
QAction* q_datetimeedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateTimeEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_datetimeedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateTimeEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_datetimeedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateTimeEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_datetimeedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDateTimeEdit*
///
QWidget* q_datetimeedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDateTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void q_datetimeedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_datetimeedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__WindowType
///
void q_datetimeedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDateTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void q_datetimeedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDateTimeEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_datetimeedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_datetimeedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateTimeEdit*
/// @param x int
/// @param y int
///
QWidget* q_datetimeedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateTimeEdit*
/// @param p QPoint*
///
QWidget* q_datetimeedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateTimeEdit*
/// @param p QPointF*
///
QWidget* q_datetimeedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_datetimeedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_datetimeedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDateTimeEdit*
/// @param child QWidget*
///
bool q_datetimeedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDateTimeEdit*
/// @param enabled bool
///
void q_datetimeedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDateTimeEdit*
///
QBackingStore* q_datetimeedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDateTimeEdit*
///
QWindow* q_datetimeedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDateTimeEdit*
///
QScreen* q_datetimeedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDateTimeEdit*
/// @param screen QScreen*
///
void q_datetimeedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_datetimeedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDateTimeEdit*
/// @param title const char*
///
void q_datetimeedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, const char* title)
///
void q_datetimeedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDateTimeEdit*
/// @param icon QIcon*
///
void q_datetimeedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QIcon* icon)
///
void q_datetimeedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDateTimeEdit*
/// @param iconText const char*
///
void q_datetimeedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, const char* iconText)
///
void q_datetimeedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDateTimeEdit*
/// @param pos QPoint*
///
void q_datetimeedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QPoint* pos)
///
void q_datetimeedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDateTimeEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_datetimeedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDateTimeEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_datetimeedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_datetimeedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_datetimeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_datetimeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_datetimeedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_datetimeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_datetimeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDateTimeEdit*
/// @param rectangle QRect*
///
QPixmap* q_datetimeedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDateTimeEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_datetimeedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDateTimeEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_datetimeedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDateTimeEdit*
/// @param id int
/// @param enable bool
///
void q_datetimeedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDateTimeEdit*
/// @param id int
/// @param enable bool
///
void q_datetimeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_datetimeedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_datetimeedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_datetimeedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_datetimeedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeEdit*
///
const char* q_datetimeedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDateTimeEdit*
/// @param name char*
///
void q_datetimeedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDateTimeEdit*
/// @param b bool
///
bool q_datetimeedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDateTimeEdit*
///
QThread* q_datetimeedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateTimeEdit*
/// @param thread QThread*
///
bool q_datetimeedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeEdit*
/// @param interval int
///
int32_t q_datetimeedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_datetimeedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateTimeEdit*
/// @param id int
///
void q_datetimeedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateTimeEdit*
/// @param id enum Qt__TimerId
///
void q_datetimeedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDateTimeEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_datetimeedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDateTimeEdit*
/// @param filterObj QObject*
///
void q_datetimeedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDateTimeEdit*
/// @param obj QObject*
///
void q_datetimeedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_datetimeedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_datetimeedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_datetimeedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_datetimeedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDateTimeEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_datetimeedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDateTimeEdit*
/// @param name const char*
///
QVariant* q_datetimeedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDateTimeEdit*
///
const char** q_datetimeedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateTimeEdit*
///
QBindingStorage* q_datetimeedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateTimeEdit*
///
const QBindingStorage* q_datetimeedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self)
///
void q_datetimeedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDateTimeEdit*
///
QObject* q_datetimeedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDateTimeEdit*
/// @param classname const char*
///
bool q_datetimeedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateTimeEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_datetimeedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_datetimeedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_datetimeedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_datetimeedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_datetimeedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeEdit*
/// @param param1 QObject*
///
void q_datetimeedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QObject* param1)
///
void q_datetimeedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDateTimeEdit*
///
double q_datetimeedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDateTimeEdit*
///
double q_datetimeedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_datetimeedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_datetimeedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
QSize* q_datetimeedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QSize* func()
///
void q_datetimeedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_datetimeedit_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_datetimeedit_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QVariant* func(QDateTimeEdit* self, enum Qt__InputMethodQuery param1)
///
void q_datetimeedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QResizeEvent*
///
void q_datetimeedit_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QResizeEvent*
///
void q_datetimeedit_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QResizeEvent* event)
///
void q_datetimeedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QKeyEvent*
///
void q_datetimeedit_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QKeyEvent*
///
void q_datetimeedit_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QKeyEvent* event)
///
void q_datetimeedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QFocusEvent*
///
void q_datetimeedit_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QFocusEvent*
///
void q_datetimeedit_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QFocusEvent* event)
///
void q_datetimeedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QContextMenuEvent*
///
void q_datetimeedit_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QContextMenuEvent*
///
void q_datetimeedit_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QContextMenuEvent* event)
///
void q_datetimeedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QEvent* event)
///
void q_datetimeedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QCloseEvent*
///
void q_datetimeedit_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QCloseEvent*
///
void q_datetimeedit_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QCloseEvent* event)
///
void q_datetimeedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QHideEvent*
///
void q_datetimeedit_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QHideEvent*
///
void q_datetimeedit_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QHideEvent* event)
///
void q_datetimeedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMouseEvent* event)
///
void q_datetimeedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMouseEvent* event)
///
void q_datetimeedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QTimerEvent*
///
void q_datetimeedit_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QTimerEvent*
///
void q_datetimeedit_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QTimerEvent* event)
///
void q_datetimeedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QShowEvent*
///
void q_datetimeedit_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QShowEvent*
///
void q_datetimeedit_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QShowEvent* event)
///
void q_datetimeedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func()
///
void q_datetimeedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param visible bool
///
void q_datetimeedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param visible bool
///
void q_datetimeedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, bool visible)
///
void q_datetimeedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 int
///
int32_t q_datetimeedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 int
///
int32_t q_datetimeedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func(QDateTimeEdit* self, int param1)
///
void q_datetimeedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func()
///
void q_datetimeedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
QPaintEngine* q_datetimeedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
QPaintEngine* q_datetimeedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QPaintEngine* func()
///
void q_datetimeedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMouseEvent*
///
void q_datetimeedit_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMouseEvent* event)
///
void q_datetimeedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEnterEvent*
///
void q_datetimeedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEnterEvent*
///
void q_datetimeedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QEnterEvent* event)
///
void q_datetimeedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QEvent* event)
///
void q_datetimeedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMoveEvent*
///
void q_datetimeedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QMoveEvent*
///
void q_datetimeedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMoveEvent* event)
///
void q_datetimeedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QTabletEvent*
///
void q_datetimeedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QTabletEvent*
///
void q_datetimeedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QTabletEvent* event)
///
void q_datetimeedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QActionEvent*
///
void q_datetimeedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QActionEvent*
///
void q_datetimeedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QActionEvent* event)
///
void q_datetimeedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragEnterEvent*
///
void q_datetimeedit_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragEnterEvent*
///
void q_datetimeedit_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDragEnterEvent* event)
///
void q_datetimeedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragMoveEvent*
///
void q_datetimeedit_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragMoveEvent*
///
void q_datetimeedit_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDragMoveEvent* event)
///
void q_datetimeedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragLeaveEvent*
///
void q_datetimeedit_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDragLeaveEvent*
///
void q_datetimeedit_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDragLeaveEvent* event)
///
void q_datetimeedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDropEvent*
///
void q_datetimeedit_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QDropEvent*
///
void q_datetimeedit_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QDropEvent* event)
///
void q_datetimeedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_datetimeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_datetimeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func(QDateTimeEdit* self, const char* eventType, void* message, intptr_t* result)
///
void q_datetimeedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_datetimeedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_datetimeedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func(QDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_datetimeedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
///
void q_datetimeedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param painter QPainter*
///
void q_datetimeedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QPainter* painter)
///
void q_datetimeedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* q_datetimeedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* q_datetimeedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QPaintDevice* func(QDateTimeEdit* self, QPoint* offset)
///
void q_datetimeedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
QPainter* q_datetimeedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
QPainter* q_datetimeedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QPainter* func()
///
void q_datetimeedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 QInputMethodEvent*
///
void q_datetimeedit_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param param1 QInputMethodEvent*
///
void q_datetimeedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QInputMethodEvent* param1)
///
void q_datetimeedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_datetimeedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_datetimeedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func(QDateTimeEdit* self, QObject* watched, QEvent* event)
///
void q_datetimeedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QChildEvent*
///
void q_datetimeedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QChildEvent*
///
void q_datetimeedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QChildEvent* event)
///
void q_datetimeedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param event QEvent*
///
void q_datetimeedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QEvent* event)
///
void q_datetimeedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
void q_datetimeedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
void q_datetimeedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMetaMethod* signal)
///
void q_datetimeedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
void q_datetimeedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
void q_datetimeedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QMetaMethod* signal)
///
void q_datetimeedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
QLineEdit* q_datetimeedit_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
QLineEdit* q_datetimeedit_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QLineEdit* func()
///
void q_datetimeedit_on_line_edit(void* self, QLineEdit* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param edit QLineEdit*
///
void q_datetimeedit_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param edit QLineEdit*
///
void q_datetimeedit_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, QLineEdit* edit)
///
void q_datetimeedit_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func()
///
void q_datetimeedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func()
///
void q_datetimeedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback void func()
///
void q_datetimeedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func()
///
void q_datetimeedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
bool q_datetimeedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func()
///
void q_datetimeedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
QObject* q_datetimeedit_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
QObject* q_datetimeedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback QObject* func()
///
void q_datetimeedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
///
int32_t q_datetimeedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func()
///
void q_datetimeedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal const char*
///
int32_t q_datetimeedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal const char*
///
int32_t q_datetimeedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback int32_t func(QDateTimeEdit* self, const char* signal)
///
void q_datetimeedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
bool q_datetimeedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param signal QMetaMethod*
///
bool q_datetimeedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback bool func(QDateTimeEdit* self, QMetaMethod* signal)
///
void q_datetimeedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_datetimeedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_datetimeedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeEdit*
/// @param callback double func(QDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_datetimeedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDateTimeEdit*
/// @param callback void func(QDateTimeEdit* self, const char* objectName)
///
void q_datetimeedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dtor.QDateTimeEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QDateTimeEdit*
///
void q_datetimeedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)

/// q_timeedit_new constructs a new QTimeEdit object.
///
/// @param parent QWidget*
///
QTimeEdit* q_timeedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)

/// q_timeedit_new2 constructs a new QTimeEdit object.
///
QTimeEdit* q_timeedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)

/// q_timeedit_new3 constructs a new QTimeEdit object.
///
/// @param time QTime*
///
QTimeEdit* q_timeedit_new3(void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)

/// q_timeedit_new4 constructs a new QTimeEdit object.
///
/// @param time QTime*
/// @param parent QWidget*
///
QTimeEdit* q_timeedit_new4(void* time, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTimeEdit*
///
const QMetaObject* q_timeedit_meta_object(void* self);

/// @param self QTimeEdit*
/// @param param1 const char*
///
void* q_timeedit_metacast(void* self, const char* param1);

/// @param self QTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timeedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTimeEdit*
/// @param callback int32_t func(QTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_timeedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timeedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_timeedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#userTimeChanged)
///
/// @param self QTimeEdit*
/// @param time QTime*
///
void q_timeedit_user_time_changed(void* self, void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#userTimeChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QTime* time)
///
void q_timeedit_on_user_time_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_timeedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_timeedit_tr3(const char* s, const char* c, int n);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// @param self QTimeEdit*
///
QDateTime* q_timeedit_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// @param self QTimeEdit*
///
QDate* q_timeedit_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// @param self QTimeEdit*
///
QTime* q_timeedit_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// @param self QTimeEdit*
///
QCalendar* q_timeedit_calendar(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// @param self QTimeEdit*
/// @param calendar QCalendar*
///
void q_timeedit_set_calendar(void* self, void* calendar);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// @param self QTimeEdit*
///
QDateTime* q_timeedit_minimum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_minimum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// @param self QTimeEdit*
/// @param dt QDateTime*
///
void q_timeedit_set_minimum_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// @param self QTimeEdit*
///
QDateTime* q_timeedit_maximum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_maximum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// @param self QTimeEdit*
/// @param dt QDateTime*
///
void q_timeedit_set_maximum_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// @param self QTimeEdit*
/// @param min QDateTime*
/// @param max QDateTime*
///
void q_timeedit_set_date_time_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// @param self QTimeEdit*
///
QDate* q_timeedit_minimum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// @param self QTimeEdit*
/// @param min QDate*
///
void q_timeedit_set_minimum_date(void* self, void* min);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_minimum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// @param self QTimeEdit*
///
QDate* q_timeedit_maximum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// @param self QTimeEdit*
/// @param max QDate*
///
void q_timeedit_set_maximum_date(void* self, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_maximum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// @param self QTimeEdit*
/// @param min QDate*
/// @param max QDate*
///
void q_timeedit_set_date_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// @param self QTimeEdit*
///
QTime* q_timeedit_minimum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// @param self QTimeEdit*
/// @param min QTime*
///
void q_timeedit_set_minimum_time(void* self, void* min);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_minimum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// @param self QTimeEdit*
///
QTime* q_timeedit_maximum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// @param self QTimeEdit*
/// @param max QTime*
///
void q_timeedit_set_maximum_time(void* self, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_maximum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// @param self QTimeEdit*
/// @param min QTime*
/// @param max QTime*
///
void q_timeedit_set_time_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// @param self QTimeEdit*
///
/// @return flag of enum QDateTimeEdit__Section
///
int32_t q_timeedit_displayed_sections(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// @param self QTimeEdit*
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_timeedit_current_section(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// @param self QTimeEdit*
/// @param index int
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_timeedit_section_at(void* self, int index);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// @param self QTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_timeedit_set_current_section(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_current_section_index(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// @param self QTimeEdit*
/// @param index int
///
void q_timeedit_set_current_section_index(void* self, int index);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// @param self QTimeEdit*
///
QCalendarWidget* q_timeedit_calendar_widget(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// @param self QTimeEdit*
/// @param calendarWidget QCalendarWidget*
///
void q_timeedit_set_calendar_widget(void* self, void* calendarWidget);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_section_count(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// @param self QTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_timeedit_set_selected_section(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
/// @param section enum QDateTimeEdit__Section
///
const char* q_timeedit_section_text(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_display_format(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// @param self QTimeEdit*
/// @param format const char*
///
void q_timeedit_set_display_format(void* self, const char* format);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// @param self QTimeEdit*
///
bool q_timeedit_calendar_popup(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// @param self QTimeEdit*
/// @param enable bool
///
void q_timeedit_set_calendar_popup(void* self, bool enable);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__TimeSpec
///
int32_t q_timeedit_time_spec(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// @param self QTimeEdit*
/// @param spec enum Qt__TimeSpec
///
void q_timeedit_set_time_spec(void* self, int32_t spec);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
///
/// @param self QTimeEdit*
///
QTimeZone* q_timeedit_time_zone(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
///
/// @param self QTimeEdit*
/// @param zone QTimeZone*
///
void q_timeedit_set_time_zone(void* self, void* zone);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QTimeEdit*
/// @param dateTime QDateTime*
///
void q_timeedit_date_time_changed(void* self, void* dateTime);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDateTime* dateTime)
///
void q_timeedit_on_date_time_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QTimeEdit*
/// @param time QTime*
///
void q_timeedit_time_changed(void* self, void* time);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QTime* time)
///
void q_timeedit_on_time_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QTimeEdit*
/// @param date QDate*
///
void q_timeedit_date_changed(void* self, void* date);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDate* date)
///
void q_timeedit_on_date_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// @param self QTimeEdit*
/// @param dateTime QDateTime*
///
void q_timeedit_set_date_time(void* self, void* dateTime);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// @param self QTimeEdit*
/// @param date QDate*
///
void q_timeedit_set_date(void* self, void* date);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// @param self QTimeEdit*
/// @param time QTime*
///
void q_timeedit_set_time(void* self, void* time);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QTimeEdit*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_timeedit_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QTimeEdit*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_timeedit_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QTimeEdit*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_timeedit_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QTimeEdit*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_timeedit_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QTimeEdit*
/// @param txt const char*
///
void q_timeedit_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QTimeEdit*
///
bool q_timeedit_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QTimeEdit*
/// @param w bool
///
void q_timeedit_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QTimeEdit*
/// @param r bool
///
void q_timeedit_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QTimeEdit*
/// @param kt bool
///
void q_timeedit_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QTimeEdit*
///
bool q_timeedit_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QTimeEdit*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_timeedit_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QTimeEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_timeedit_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QTimeEdit*
/// @param frame bool
///
void q_timeedit_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QTimeEdit*
/// @param on bool
///
void q_timeedit_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QTimeEdit*
/// @param shown bool
///
void q_timeedit_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QTimeEdit*
///
void q_timeedit_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QTimeEdit*
///
void q_timeedit_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QTimeEdit*
///
void q_timeedit_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QTimeEdit*
///
void q_timeedit_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QTimeEdit*
///
void q_timeedit_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self)
///
void q_timeedit_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTimeEdit*
///
uintptr_t q_timeedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTimeEdit*
///
void q_timeedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTimeEdit*
///
uintptr_t q_timeedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTimeEdit*
///
uintptr_t q_timeedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTimeEdit*
///
QStyle* q_timeedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTimeEdit*
/// @param style QStyle*
///
void q_timeedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_timeedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTimeEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_timeedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
///
bool q_timeedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTimeEdit*
/// @param enabled bool
///
void q_timeedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTimeEdit*
/// @param disabled bool
///
void q_timeedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTimeEdit*
/// @param windowModified bool
///
void q_timeedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTimeEdit*
///
QRect* q_timeedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTimeEdit*
///
const QRect* q_timeedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTimeEdit*
///
QRect* q_timeedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTimeEdit*
///
QPoint* q_timeedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTimeEdit*
///
QRect* q_timeedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTimeEdit*
///
QRect* q_timeedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTimeEdit*
///
QRegion* q_timeedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTimeEdit*
/// @param minimumSize QSize*
///
void q_timeedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTimeEdit*
/// @param minw int
/// @param minh int
///
void q_timeedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTimeEdit*
/// @param maximumSize QSize*
///
void q_timeedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTimeEdit*
/// @param maxw int
/// @param maxh int
///
void q_timeedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTimeEdit*
/// @param minw int
///
void q_timeedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTimeEdit*
/// @param minh int
///
void q_timeedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTimeEdit*
/// @param maxw int
///
void q_timeedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTimeEdit*
/// @param maxh int
///
void q_timeedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTimeEdit*
/// @param sizeIncrement QSize*
///
void q_timeedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTimeEdit*
/// @param w int
/// @param h int
///
void q_timeedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTimeEdit*
/// @param baseSize QSize*
///
void q_timeedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTimeEdit*
/// @param basew int
/// @param baseh int
///
void q_timeedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTimeEdit*
/// @param fixedSize QSize*
///
void q_timeedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTimeEdit*
/// @param w int
/// @param h int
///
void q_timeedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTimeEdit*
/// @param w int
///
void q_timeedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTimeEdit*
/// @param h int
///
void q_timeedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_timeedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_timeedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_timeedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_timeedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_timeedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_timeedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTimeEdit*
/// @param param1 QPointF*
///
QPointF* q_timeedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTimeEdit*
/// @param param1 QPoint*
///
QPoint* q_timeedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_timeedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_timeedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_timeedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_timeedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTimeEdit*
///
const QPalette* q_timeedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTimeEdit*
/// @param palette QPalette*
///
void q_timeedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTimeEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_timeedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_timeedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTimeEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_timeedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_timeedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTimeEdit*
///
const QFont* q_timeedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTimeEdit*
/// @param font QFont*
///
void q_timeedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTimeEdit*
///
QFontMetrics* q_timeedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTimeEdit*
///
QFontInfo* q_timeedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTimeEdit*
///
QCursor* q_timeedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTimeEdit*
/// @param cursor QCursor*
///
void q_timeedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTimeEdit*
///
void q_timeedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTimeEdit*
/// @param enable bool
///
void q_timeedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTimeEdit*
///
bool q_timeedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTimeEdit*
/// @param enable bool
///
void q_timeedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTimeEdit*
/// @param mask QBitmap*
///
void q_timeedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTimeEdit*
/// @param mask QRegion*
///
void q_timeedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTimeEdit*
///
QRegion* q_timeedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param target QPaintDevice*
///
void q_timeedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param painter QPainter*
///
void q_timeedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTimeEdit*
///
QPixmap* q_timeedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTimeEdit*
///
QGraphicsEffect* q_timeedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTimeEdit*
/// @param effect QGraphicsEffect*
///
void q_timeedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTimeEdit*
/// @param type enum Qt__GestureType
///
void q_timeedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTimeEdit*
/// @param type enum Qt__GestureType
///
void q_timeedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTimeEdit*
/// @param windowTitle const char*
///
void q_timeedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTimeEdit*
/// @param styleSheet const char*
///
void q_timeedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTimeEdit*
/// @param icon QIcon*
///
void q_timeedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTimeEdit*
///
QIcon* q_timeedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTimeEdit*
/// @param windowIconText const char*
///
void q_timeedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTimeEdit*
/// @param windowRole const char*
///
void q_timeedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTimeEdit*
/// @param filePath const char*
///
void q_timeedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTimeEdit*
/// @param level double
///
void q_timeedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTimeEdit*
///
double q_timeedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTimeEdit*
/// @param toolTip const char*
///
void q_timeedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTimeEdit*
/// @param msec int
///
void q_timeedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTimeEdit*
/// @param statusTip const char*
///
void q_timeedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTimeEdit*
/// @param whatsThis const char*
///
void q_timeedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTimeEdit*
/// @param name const char*
///
void q_timeedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTimeEdit*
/// @param description const char*
///
void q_timeedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTimeEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_timeedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_timeedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTimeEdit*
///
void q_timeedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTimeEdit*
/// @param locale QLocale*
///
void q_timeedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTimeEdit*
///
QLocale* q_timeedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTimeEdit*
///
void q_timeedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTimeEdit*
///
void q_timeedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTimeEdit*
///
void q_timeedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTimeEdit*
///
void q_timeedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTimeEdit*
/// @param reason enum Qt__FocusReason
///
void q_timeedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_timeedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTimeEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_timeedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_timeedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTimeEdit*
/// @param focusProxy QWidget*
///
void q_timeedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_timeedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTimeEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_timeedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTimeEdit*
///
void q_timeedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTimeEdit*
/// @param param1 QCursor*
///
void q_timeedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTimeEdit*
///
void q_timeedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTimeEdit*
///
void q_timeedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTimeEdit*
///
void q_timeedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTimeEdit*
/// @param key QKeySequence*
///
int32_t q_timeedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTimeEdit*
/// @param id int
///
void q_timeedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTimeEdit*
/// @param id int
///
void q_timeedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTimeEdit*
/// @param id int
///
void q_timeedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_timeedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_timeedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTimeEdit*
///
bool q_timeedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTimeEdit*
/// @param enable bool
///
void q_timeedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTimeEdit*
///
QGraphicsProxyWidget* q_timeedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTimeEdit*
///
void q_timeedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTimeEdit*
///
void q_timeedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_timeedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTimeEdit*
/// @param param1 QRect*
///
void q_timeedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTimeEdit*
/// @param param1 QRegion*
///
void q_timeedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_timeedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTimeEdit*
/// @param param1 QRect*
///
void q_timeedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTimeEdit*
/// @param param1 QRegion*
///
void q_timeedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTimeEdit*
/// @param hidden bool
///
void q_timeedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTimeEdit*
///
void q_timeedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTimeEdit*
///
void q_timeedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTimeEdit*
///
void q_timeedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTimeEdit*
///
void q_timeedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTimeEdit*
///
void q_timeedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTimeEdit*
///
void q_timeedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTimeEdit*
///
bool q_timeedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTimeEdit*
///
void q_timeedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTimeEdit*
///
void q_timeedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
///
void q_timeedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTimeEdit*
/// @param x int
/// @param y int
///
void q_timeedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTimeEdit*
/// @param param1 QPoint*
///
void q_timeedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTimeEdit*
/// @param w int
/// @param h int
///
void q_timeedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTimeEdit*
/// @param param1 QSize*
///
void q_timeedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_timeedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTimeEdit*
/// @param geometry QRect*
///
void q_timeedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTimeEdit*
///
char* q_timeedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTimeEdit*
/// @param geometry const char*
///
bool q_timeedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTimeEdit*
///
void q_timeedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTimeEdit*
/// @param param1 QWidget*
///
bool q_timeedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTimeEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_timeedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void q_timeedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void q_timeedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTimeEdit*
///
QSizePolicy* q_timeedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTimeEdit*
/// @param sizePolicy QSizePolicy*
///
void q_timeedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTimeEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_timeedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTimeEdit*
///
QRegion* q_timeedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTimeEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_timeedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTimeEdit*
/// @param margins QMargins*
///
void q_timeedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTimeEdit*
///
QMargins* q_timeedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTimeEdit*
///
QRect* q_timeedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTimeEdit*
///
QLayout* q_timeedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTimeEdit*
/// @param layout QLayout*
///
void q_timeedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTimeEdit*
///
void q_timeedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTimeEdit*
/// @param parent QWidget*
///
void q_timeedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTimeEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_timeedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTimeEdit*
/// @param dx int
/// @param dy int
///
void q_timeedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTimeEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_timeedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTimeEdit*
///
bool q_timeedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTimeEdit*
/// @param on bool
///
void q_timeedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTimeEdit*
/// @param action QAction*
///
void q_timeedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTimeEdit*
/// @param actions libqt_list of QAction*
///
void q_timeedit_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTimeEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_timeedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTimeEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_timeedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTimeEdit*
/// @param action QAction*
///
void q_timeedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTimeEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_timeedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTimeEdit*
/// @param text const char*
///
QAction* q_timeedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTimeEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_timeedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTimeEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_timeedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTimeEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_timeedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTimeEdit*
///
QWidget* q_timeedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void q_timeedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTimeEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_timeedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__WindowType
///
void q_timeedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void q_timeedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTimeEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_timeedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_timeedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTimeEdit*
/// @param x int
/// @param y int
///
QWidget* q_timeedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTimeEdit*
/// @param p QPoint*
///
QWidget* q_timeedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTimeEdit*
/// @param p QPointF*
///
QWidget* q_timeedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_timeedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_timeedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTimeEdit*
///
void q_timeedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTimeEdit*
/// @param child QWidget*
///
bool q_timeedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTimeEdit*
///
bool q_timeedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTimeEdit*
/// @param enabled bool
///
void q_timeedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTimeEdit*
///
QBackingStore* q_timeedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTimeEdit*
///
QWindow* q_timeedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTimeEdit*
///
QScreen* q_timeedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTimeEdit*
/// @param screen QScreen*
///
void q_timeedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_timeedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTimeEdit*
/// @param title const char*
///
void q_timeedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, const char* title)
///
void q_timeedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTimeEdit*
/// @param icon QIcon*
///
void q_timeedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QIcon* icon)
///
void q_timeedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTimeEdit*
/// @param iconText const char*
///
void q_timeedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, const char* iconText)
///
void q_timeedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTimeEdit*
/// @param pos QPoint*
///
void q_timeedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QPoint* pos)
///
void q_timeedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTimeEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_timeedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTimeEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_timeedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_timeedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_timeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_timeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_timeedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_timeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_timeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTimeEdit*
/// @param rectangle QRect*
///
QPixmap* q_timeedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTimeEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_timeedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTimeEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_timeedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTimeEdit*
/// @param id int
/// @param enable bool
///
void q_timeedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTimeEdit*
/// @param id int
/// @param enable bool
///
void q_timeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_timeedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_timeedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_timeedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_timeedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeEdit*
///
const char* q_timeedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTimeEdit*
/// @param name char*
///
void q_timeedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTimeEdit*
///
bool q_timeedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTimeEdit*
///
bool q_timeedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTimeEdit*
/// @param b bool
///
bool q_timeedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTimeEdit*
///
QThread* q_timeedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTimeEdit*
/// @param thread QThread*
///
bool q_timeedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeEdit*
/// @param interval int
///
int32_t q_timeedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_timeedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimeEdit*
/// @param id int
///
void q_timeedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimeEdit*
/// @param id enum Qt__TimerId
///
void q_timeedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTimeEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_timeedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTimeEdit*
/// @param filterObj QObject*
///
void q_timeedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTimeEdit*
/// @param obj QObject*
///
void q_timeedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_timeedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_timeedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_timeedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_timeedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTimeEdit*
///
void q_timeedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTimeEdit*
///
void q_timeedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTimeEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_timeedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTimeEdit*
/// @param name const char*
///
QVariant* q_timeedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTimeEdit*
///
const char** q_timeedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimeEdit*
///
QBindingStorage* q_timeedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimeEdit*
///
const QBindingStorage* q_timeedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeEdit*
///
void q_timeedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self)
///
void q_timeedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTimeEdit*
///
QObject* q_timeedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTimeEdit*
/// @param classname const char*
///
bool q_timeedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTimeEdit*
///
void q_timeedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTimeEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_timeedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_timeedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_timeedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_timeedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_timeedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeEdit*
/// @param param1 QObject*
///
void q_timeedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QObject* param1)
///
void q_timeedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTimeEdit*
///
bool q_timeedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTimeEdit*
///
double q_timeedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTimeEdit*
///
double q_timeedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_timeedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_timeedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_size_hint(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_qbase_size_hint(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QSize* func()
///
void q_timeedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_clear(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_qbase_clear(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func()
///
void q_timeedit_on_clear(void* self, void (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param steps int
///
void q_timeedit_step_by(void* self, int steps);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param steps int
///
void q_timeedit_qbase_step_by(void* self, int steps);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, int steps)
///
void q_timeedit_on_step_by(void* self, void (*callback)(void*, int));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
bool q_timeedit_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
bool q_timeedit_qbase_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func(QTimeEdit* self, QEvent* event)
///
void q_timeedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QKeyEvent*
///
void q_timeedit_key_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QKeyEvent*
///
void q_timeedit_qbase_key_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QKeyEvent* event)
///
void q_timeedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QWheelEvent*
///
void q_timeedit_wheel_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QWheelEvent*
///
void q_timeedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QWheelEvent* event)
///
void q_timeedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QFocusEvent*
///
void q_timeedit_focus_in_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QFocusEvent*
///
void q_timeedit_qbase_focus_in_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QFocusEvent* event)
///
void q_timeedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param next bool
///
bool q_timeedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param next bool
///
bool q_timeedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func(QTimeEdit* self, bool next)
///
void q_timeedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_timeedit_validate(void* self, const char* input, int* pos);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_timeedit_qbase_validate(void* self, const char* input, int* pos);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func(QTimeEdit* self, const char* input, int* pos)
///
void q_timeedit_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param input const char*
///
void q_timeedit_fixup(void* self, const char* input);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param input const char*
///
void q_timeedit_qbase_fixup(void* self, const char* input);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, const char* input)
///
void q_timeedit_on_fixup(void* self, void (*callback)(void*, const char*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param text const char*
///
QDateTime* q_timeedit_date_time_from_text(void* self, const char* text);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param text const char*
///
QDateTime* q_timeedit_qbase_date_time_from_text(void* self, const char* text);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QDateTime* func(QTimeEdit* self, const char* text)
///
void q_timeedit_on_date_time_from_text(void* self, QDateTime* (*callback)(void*, const char*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param dt QDateTime*
///
const char* q_timeedit_text_from_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param dt QDateTime*
///
const char* q_timeedit_qbase_text_from_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback const char* func(QTimeEdit* self, QDateTime* dt)
///
void q_timeedit_on_text_from_date_time(void* self, const char* (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_timeedit_step_enabled(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_timeedit_qbase_step_enabled(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func()
///
void q_timeedit_on_step_enabled(void* self, int32_t (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_mouse_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMouseEvent* event)
///
void q_timeedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QPaintEvent*
///
void q_timeedit_paint_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QPaintEvent*
///
void q_timeedit_qbase_paint_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QPaintEvent* event)
///
void q_timeedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param option QStyleOptionSpinBox*
///
void q_timeedit_init_style_option(void* self, void* option);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param option QStyleOptionSpinBox*
///
void q_timeedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QStyleOptionSpinBox* option)
///
void q_timeedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QSize* q_timeedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QSize* func()
///
void q_timeedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_timeedit_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_timeedit_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QVariant* func(QTimeEdit* self, enum Qt__InputMethodQuery param1)
///
void q_timeedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QResizeEvent*
///
void q_timeedit_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QResizeEvent*
///
void q_timeedit_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QResizeEvent* event)
///
void q_timeedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QKeyEvent*
///
void q_timeedit_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QKeyEvent*
///
void q_timeedit_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QKeyEvent* event)
///
void q_timeedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QFocusEvent*
///
void q_timeedit_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QFocusEvent*
///
void q_timeedit_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QFocusEvent* event)
///
void q_timeedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QContextMenuEvent*
///
void q_timeedit_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QContextMenuEvent*
///
void q_timeedit_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QContextMenuEvent* event)
///
void q_timeedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QEvent* event)
///
void q_timeedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QCloseEvent*
///
void q_timeedit_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QCloseEvent*
///
void q_timeedit_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QCloseEvent* event)
///
void q_timeedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QHideEvent*
///
void q_timeedit_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QHideEvent*
///
void q_timeedit_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QHideEvent* event)
///
void q_timeedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMouseEvent* event)
///
void q_timeedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMouseEvent* event)
///
void q_timeedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QTimerEvent*
///
void q_timeedit_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QTimerEvent*
///
void q_timeedit_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QTimerEvent* event)
///
void q_timeedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QShowEvent*
///
void q_timeedit_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QShowEvent*
///
void q_timeedit_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QShowEvent* event)
///
void q_timeedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func()
///
void q_timeedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param visible bool
///
void q_timeedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param visible bool
///
void q_timeedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, bool visible)
///
void q_timeedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 int
///
int32_t q_timeedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 int
///
int32_t q_timeedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func(QTimeEdit* self, int param1)
///
void q_timeedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func()
///
void q_timeedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QPaintEngine* q_timeedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QPaintEngine* q_timeedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QPaintEngine* func()
///
void q_timeedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMouseEvent*
///
void q_timeedit_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMouseEvent* event)
///
void q_timeedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEnterEvent*
///
void q_timeedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEnterEvent*
///
void q_timeedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QEnterEvent* event)
///
void q_timeedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QEvent* event)
///
void q_timeedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMoveEvent*
///
void q_timeedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QMoveEvent*
///
void q_timeedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMoveEvent* event)
///
void q_timeedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QTabletEvent*
///
void q_timeedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QTabletEvent*
///
void q_timeedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QTabletEvent* event)
///
void q_timeedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QActionEvent*
///
void q_timeedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QActionEvent*
///
void q_timeedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QActionEvent* event)
///
void q_timeedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragEnterEvent*
///
void q_timeedit_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragEnterEvent*
///
void q_timeedit_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDragEnterEvent* event)
///
void q_timeedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragMoveEvent*
///
void q_timeedit_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragMoveEvent*
///
void q_timeedit_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDragMoveEvent* event)
///
void q_timeedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragLeaveEvent*
///
void q_timeedit_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDragLeaveEvent*
///
void q_timeedit_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDragLeaveEvent* event)
///
void q_timeedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDropEvent*
///
void q_timeedit_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QDropEvent*
///
void q_timeedit_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QDropEvent* event)
///
void q_timeedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_timeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_timeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func(QTimeEdit* self, const char* eventType, void* message, intptr_t* result)
///
void q_timeedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_timeedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_timeedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func(QTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_timeedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param painter QPainter*
///
void q_timeedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param painter QPainter*
///
void q_timeedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QPainter* painter)
///
void q_timeedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* q_timeedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* q_timeedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QPaintDevice* func(QTimeEdit* self, QPoint* offset)
///
void q_timeedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QPainter* q_timeedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QPainter* q_timeedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QPainter* func()
///
void q_timeedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 QInputMethodEvent*
///
void q_timeedit_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param param1 QInputMethodEvent*
///
void q_timeedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QInputMethodEvent* param1)
///
void q_timeedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timeedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timeedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func(QTimeEdit* self, QObject* watched, QEvent* event)
///
void q_timeedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QChildEvent*
///
void q_timeedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QChildEvent*
///
void q_timeedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QChildEvent* event)
///
void q_timeedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param event QEvent*
///
void q_timeedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QEvent* event)
///
void q_timeedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
void q_timeedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
void q_timeedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMetaMethod* signal)
///
void q_timeedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
void q_timeedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
void q_timeedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QMetaMethod* signal)
///
void q_timeedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QLineEdit* q_timeedit_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QLineEdit* q_timeedit_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QLineEdit* func()
///
void q_timeedit_on_line_edit(void* self, QLineEdit* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param edit QLineEdit*
///
void q_timeedit_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param edit QLineEdit*
///
void q_timeedit_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, QLineEdit* edit)
///
void q_timeedit_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func()
///
void q_timeedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func()
///
void q_timeedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
void q_timeedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback void func()
///
void q_timeedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func()
///
void q_timeedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
bool q_timeedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func()
///
void q_timeedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
QObject* q_timeedit_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
QObject* q_timeedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback QObject* func()
///
void q_timeedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
///
int32_t q_timeedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func()
///
void q_timeedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal const char*
///
int32_t q_timeedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal const char*
///
int32_t q_timeedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback int32_t func(QTimeEdit* self, const char* signal)
///
void q_timeedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
bool q_timeedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param signal QMetaMethod*
///
bool q_timeedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback bool func(QTimeEdit* self, QMetaMethod* signal)
///
void q_timeedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_timeedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_timeedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeEdit*
/// @param callback double func(QTimeEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_timeedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeEdit*
/// @param callback void func(QTimeEdit* self, const char* objectName)
///
void q_timeedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#dtor.QTimeEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QTimeEdit*
///
void q_timeedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)

/// q_dateedit_new constructs a new QDateEdit object.
///
/// @param parent QWidget*
///
QDateEdit* q_dateedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)

/// q_dateedit_new2 constructs a new QDateEdit object.
///
QDateEdit* q_dateedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)

/// q_dateedit_new3 constructs a new QDateEdit object.
///
/// @param date QDate*
///
QDateEdit* q_dateedit_new3(void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)

/// q_dateedit_new4 constructs a new QDateEdit object.
///
/// @param date QDate*
/// @param parent QWidget*
///
QDateEdit* q_dateedit_new4(void* date, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDateEdit*
///
const QMetaObject* q_dateedit_meta_object(void* self);

/// @param self QDateEdit*
/// @param param1 const char*
///
void* q_dateedit_metacast(void* self, const char* param1);

/// @param self QDateEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dateedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDateEdit*
/// @param callback int32_t func(QDateEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dateedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDateEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dateedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dateedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#userDateChanged)
///
/// @param self QDateEdit*
/// @param date QDate*
///
void q_dateedit_user_date_changed(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#userDateChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDate* date)
///
void q_dateedit_on_user_date_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dateedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dateedit_tr3(const char* s, const char* c, int n);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// @param self QDateEdit*
///
QDateTime* q_dateedit_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// @param self QDateEdit*
///
QDate* q_dateedit_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// @param self QDateEdit*
///
QTime* q_dateedit_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// @param self QDateEdit*
///
QCalendar* q_dateedit_calendar(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// @param self QDateEdit*
/// @param calendar QCalendar*
///
void q_dateedit_set_calendar(void* self, void* calendar);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// @param self QDateEdit*
///
QDateTime* q_dateedit_minimum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_minimum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// @param self QDateEdit*
/// @param dt QDateTime*
///
void q_dateedit_set_minimum_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// @param self QDateEdit*
///
QDateTime* q_dateedit_maximum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_maximum_date_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// @param self QDateEdit*
/// @param dt QDateTime*
///
void q_dateedit_set_maximum_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// @param self QDateEdit*
/// @param min QDateTime*
/// @param max QDateTime*
///
void q_dateedit_set_date_time_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// @param self QDateEdit*
///
QDate* q_dateedit_minimum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// @param self QDateEdit*
/// @param min QDate*
///
void q_dateedit_set_minimum_date(void* self, void* min);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_minimum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// @param self QDateEdit*
///
QDate* q_dateedit_maximum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// @param self QDateEdit*
/// @param max QDate*
///
void q_dateedit_set_maximum_date(void* self, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_maximum_date(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// @param self QDateEdit*
/// @param min QDate*
/// @param max QDate*
///
void q_dateedit_set_date_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// @param self QDateEdit*
///
QTime* q_dateedit_minimum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// @param self QDateEdit*
/// @param min QTime*
///
void q_dateedit_set_minimum_time(void* self, void* min);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_minimum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// @param self QDateEdit*
///
QTime* q_dateedit_maximum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// @param self QDateEdit*
/// @param max QTime*
///
void q_dateedit_set_maximum_time(void* self, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_maximum_time(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// @param self QDateEdit*
/// @param min QTime*
/// @param max QTime*
///
void q_dateedit_set_time_range(void* self, void* min, void* max);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// @param self QDateEdit*
///
/// @return flag of enum QDateTimeEdit__Section
///
int32_t q_dateedit_displayed_sections(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// @param self QDateEdit*
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_dateedit_current_section(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// @param self QDateEdit*
/// @param index int
///
/// @return enum QDateTimeEdit__Section
///
int32_t q_dateedit_section_at(void* self, int index);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// @param self QDateEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_dateedit_set_current_section(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_current_section_index(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// @param self QDateEdit*
/// @param index int
///
void q_dateedit_set_current_section_index(void* self, int index);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// @param self QDateEdit*
///
QCalendarWidget* q_dateedit_calendar_widget(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// @param self QDateEdit*
/// @param calendarWidget QCalendarWidget*
///
void q_dateedit_set_calendar_widget(void* self, void* calendarWidget);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_section_count(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// @param self QDateEdit*
/// @param section enum QDateTimeEdit__Section
///
void q_dateedit_set_selected_section(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
/// @param section enum QDateTimeEdit__Section
///
const char* q_dateedit_section_text(void* self, int32_t section);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_display_format(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// @param self QDateEdit*
/// @param format const char*
///
void q_dateedit_set_display_format(void* self, const char* format);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// @param self QDateEdit*
///
bool q_dateedit_calendar_popup(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// @param self QDateEdit*
/// @param enable bool
///
void q_dateedit_set_calendar_popup(void* self, bool enable);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// @param self QDateEdit*
///
/// @return enum Qt__TimeSpec
///
int32_t q_dateedit_time_spec(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// @param self QDateEdit*
/// @param spec enum Qt__TimeSpec
///
void q_dateedit_set_time_spec(void* self, int32_t spec);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
///
/// @param self QDateEdit*
///
QTimeZone* q_dateedit_time_zone(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
///
/// @param self QDateEdit*
/// @param zone QTimeZone*
///
void q_dateedit_set_time_zone(void* self, void* zone);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QDateEdit*
/// @param dateTime QDateTime*
///
void q_dateedit_date_time_changed(void* self, void* dateTime);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDateTime* dateTime)
///
void q_dateedit_on_date_time_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QDateEdit*
/// @param time QTime*
///
void q_dateedit_time_changed(void* self, void* time);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QTime* time)
///
void q_dateedit_on_time_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QDateEdit*
/// @param date QDate*
///
void q_dateedit_date_changed(void* self, void* date);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDate* date)
///
void q_dateedit_on_date_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// @param self QDateEdit*
/// @param dateTime QDateTime*
///
void q_dateedit_set_date_time(void* self, void* dateTime);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// @param self QDateEdit*
/// @param date QDate*
///
void q_dateedit_set_date(void* self, void* date);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// @param self QDateEdit*
/// @param time QTime*
///
void q_dateedit_set_time(void* self, void* time);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QDateEdit*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_dateedit_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QDateEdit*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_dateedit_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QDateEdit*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_dateedit_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QDateEdit*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_dateedit_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QDateEdit*
///
bool q_dateedit_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QDateEdit*
/// @param txt const char*
///
void q_dateedit_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QDateEdit*
///
bool q_dateedit_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QDateEdit*
/// @param w bool
///
void q_dateedit_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QDateEdit*
/// @param r bool
///
void q_dateedit_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QDateEdit*
/// @param kt bool
///
void q_dateedit_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QDateEdit*
///
bool q_dateedit_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QDateEdit*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_dateedit_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QDateEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_dateedit_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QDateEdit*
/// @param frame bool
///
void q_dateedit_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QDateEdit*
///
bool q_dateedit_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QDateEdit*
/// @param on bool
///
void q_dateedit_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QDateEdit*
/// @param shown bool
///
void q_dateedit_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QDateEdit*
///
void q_dateedit_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QDateEdit*
///
void q_dateedit_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QDateEdit*
///
void q_dateedit_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QDateEdit*
///
void q_dateedit_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDateEdit*
///
void q_dateedit_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self)
///
void q_dateedit_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDateEdit*
///
uintptr_t q_dateedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDateEdit*
///
void q_dateedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDateEdit*
///
uintptr_t q_dateedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDateEdit*
///
uintptr_t q_dateedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDateEdit*
///
QStyle* q_dateedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDateEdit*
/// @param style QStyle*
///
void q_dateedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDateEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_dateedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDateEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_dateedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
///
bool q_dateedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDateEdit*
/// @param enabled bool
///
void q_dateedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDateEdit*
/// @param disabled bool
///
void q_dateedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDateEdit*
/// @param windowModified bool
///
void q_dateedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDateEdit*
///
QRect* q_dateedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDateEdit*
///
const QRect* q_dateedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDateEdit*
///
QRect* q_dateedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDateEdit*
///
QPoint* q_dateedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDateEdit*
///
QRect* q_dateedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDateEdit*
///
QRect* q_dateedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDateEdit*
///
QRegion* q_dateedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDateEdit*
/// @param minimumSize QSize*
///
void q_dateedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDateEdit*
/// @param minw int
/// @param minh int
///
void q_dateedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDateEdit*
/// @param maximumSize QSize*
///
void q_dateedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDateEdit*
/// @param maxw int
/// @param maxh int
///
void q_dateedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDateEdit*
/// @param minw int
///
void q_dateedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDateEdit*
/// @param minh int
///
void q_dateedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDateEdit*
/// @param maxw int
///
void q_dateedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDateEdit*
/// @param maxh int
///
void q_dateedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDateEdit*
/// @param sizeIncrement QSize*
///
void q_dateedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDateEdit*
/// @param w int
/// @param h int
///
void q_dateedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDateEdit*
///
QSize* q_dateedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDateEdit*
/// @param baseSize QSize*
///
void q_dateedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDateEdit*
/// @param basew int
/// @param baseh int
///
void q_dateedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDateEdit*
/// @param fixedSize QSize*
///
void q_dateedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDateEdit*
/// @param w int
/// @param h int
///
void q_dateedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDateEdit*
/// @param w int
///
void q_dateedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDateEdit*
/// @param h int
///
void q_dateedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDateEdit*
/// @param param1 QPointF*
///
QPointF* q_dateedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDateEdit*
/// @param param1 QPoint*
///
QPoint* q_dateedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDateEdit*
/// @param param1 QPointF*
///
QPointF* q_dateedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDateEdit*
/// @param param1 QPoint*
///
QPoint* q_dateedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDateEdit*
/// @param param1 QPointF*
///
QPointF* q_dateedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDateEdit*
/// @param param1 QPoint*
///
QPoint* q_dateedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDateEdit*
/// @param param1 QPointF*
///
QPointF* q_dateedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDateEdit*
/// @param param1 QPoint*
///
QPoint* q_dateedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_dateedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_dateedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_dateedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_dateedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDateEdit*
///
const QPalette* q_dateedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDateEdit*
/// @param palette QPalette*
///
void q_dateedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDateEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_dateedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDateEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_dateedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDateEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_dateedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDateEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_dateedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDateEdit*
///
const QFont* q_dateedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDateEdit*
/// @param font QFont*
///
void q_dateedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDateEdit*
///
QFontMetrics* q_dateedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDateEdit*
///
QFontInfo* q_dateedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDateEdit*
///
QCursor* q_dateedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDateEdit*
/// @param cursor QCursor*
///
void q_dateedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDateEdit*
///
void q_dateedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDateEdit*
/// @param enable bool
///
void q_dateedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDateEdit*
///
bool q_dateedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDateEdit*
///
bool q_dateedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDateEdit*
/// @param enable bool
///
void q_dateedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDateEdit*
///
bool q_dateedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDateEdit*
/// @param mask QBitmap*
///
void q_dateedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDateEdit*
/// @param mask QRegion*
///
void q_dateedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDateEdit*
///
QRegion* q_dateedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param target QPaintDevice*
///
void q_dateedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param painter QPainter*
///
void q_dateedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDateEdit*
///
QPixmap* q_dateedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDateEdit*
///
QGraphicsEffect* q_dateedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDateEdit*
/// @param effect QGraphicsEffect*
///
void q_dateedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDateEdit*
/// @param type enum Qt__GestureType
///
void q_dateedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDateEdit*
/// @param type enum Qt__GestureType
///
void q_dateedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDateEdit*
/// @param windowTitle const char*
///
void q_dateedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDateEdit*
/// @param styleSheet const char*
///
void q_dateedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDateEdit*
/// @param icon QIcon*
///
void q_dateedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDateEdit*
///
QIcon* q_dateedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDateEdit*
/// @param windowIconText const char*
///
void q_dateedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDateEdit*
/// @param windowRole const char*
///
void q_dateedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDateEdit*
/// @param filePath const char*
///
void q_dateedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDateEdit*
/// @param level double
///
void q_dateedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDateEdit*
///
double q_dateedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDateEdit*
/// @param toolTip const char*
///
void q_dateedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDateEdit*
/// @param msec int
///
void q_dateedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDateEdit*
/// @param statusTip const char*
///
void q_dateedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDateEdit*
/// @param whatsThis const char*
///
void q_dateedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDateEdit*
/// @param name const char*
///
void q_dateedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDateEdit*
/// @param description const char*
///
void q_dateedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDateEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_dateedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDateEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_dateedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDateEdit*
///
void q_dateedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDateEdit*
/// @param locale QLocale*
///
void q_dateedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDateEdit*
///
QLocale* q_dateedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDateEdit*
///
void q_dateedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDateEdit*
///
void q_dateedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDateEdit*
///
void q_dateedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDateEdit*
///
void q_dateedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDateEdit*
/// @param reason enum Qt__FocusReason
///
void q_dateedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDateEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_dateedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDateEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_dateedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDateEdit*
///
bool q_dateedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_dateedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDateEdit*
/// @param focusProxy QWidget*
///
void q_dateedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDateEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_dateedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDateEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_dateedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDateEdit*
///
void q_dateedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDateEdit*
/// @param param1 QCursor*
///
void q_dateedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDateEdit*
///
void q_dateedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDateEdit*
///
void q_dateedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDateEdit*
///
void q_dateedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDateEdit*
/// @param key QKeySequence*
///
int32_t q_dateedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDateEdit*
/// @param id int
///
void q_dateedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDateEdit*
/// @param id int
///
void q_dateedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDateEdit*
/// @param id int
///
void q_dateedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_dateedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_dateedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDateEdit*
///
bool q_dateedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDateEdit*
/// @param enable bool
///
void q_dateedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDateEdit*
///
QGraphicsProxyWidget* q_dateedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateEdit*
///
void q_dateedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateEdit*
///
void q_dateedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_dateedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateEdit*
/// @param param1 QRect*
///
void q_dateedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDateEdit*
/// @param param1 QRegion*
///
void q_dateedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_dateedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateEdit*
/// @param param1 QRect*
///
void q_dateedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDateEdit*
/// @param param1 QRegion*
///
void q_dateedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDateEdit*
/// @param hidden bool
///
void q_dateedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDateEdit*
///
void q_dateedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDateEdit*
///
void q_dateedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDateEdit*
///
void q_dateedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDateEdit*
///
void q_dateedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDateEdit*
///
void q_dateedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDateEdit*
///
void q_dateedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDateEdit*
///
bool q_dateedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDateEdit*
///
void q_dateedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDateEdit*
///
void q_dateedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
///
void q_dateedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDateEdit*
/// @param x int
/// @param y int
///
void q_dateedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDateEdit*
/// @param param1 QPoint*
///
void q_dateedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDateEdit*
/// @param w int
/// @param h int
///
void q_dateedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDateEdit*
/// @param param1 QSize*
///
void q_dateedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDateEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_dateedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDateEdit*
/// @param geometry QRect*
///
void q_dateedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDateEdit*
///
char* q_dateedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDateEdit*
/// @param geometry const char*
///
bool q_dateedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDateEdit*
///
void q_dateedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDateEdit*
/// @param param1 QWidget*
///
bool q_dateedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDateEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_dateedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDateEdit*
/// @param state flag of enum Qt__WindowState
///
void q_dateedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDateEdit*
/// @param state flag of enum Qt__WindowState
///
void q_dateedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDateEdit*
///
QSizePolicy* q_dateedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDateEdit*
/// @param sizePolicy QSizePolicy*
///
void q_dateedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDateEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_dateedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDateEdit*
///
QRegion* q_dateedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDateEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_dateedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDateEdit*
/// @param margins QMargins*
///
void q_dateedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDateEdit*
///
QMargins* q_dateedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDateEdit*
///
QRect* q_dateedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDateEdit*
///
QLayout* q_dateedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDateEdit*
/// @param layout QLayout*
///
void q_dateedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDateEdit*
///
void q_dateedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDateEdit*
/// @param parent QWidget*
///
void q_dateedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDateEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_dateedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDateEdit*
/// @param dx int
/// @param dy int
///
void q_dateedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDateEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_dateedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDateEdit*
///
bool q_dateedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDateEdit*
/// @param on bool
///
void q_dateedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateEdit*
/// @param action QAction*
///
void q_dateedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDateEdit*
/// @param actions libqt_list of QAction*
///
void q_dateedit_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDateEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_dateedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDateEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_dateedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDateEdit*
/// @param action QAction*
///
void q_dateedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDateEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_dateedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateEdit*
/// @param text const char*
///
QAction* q_dateedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_dateedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_dateedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDateEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_dateedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDateEdit*
///
QWidget* q_dateedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDateEdit*
/// @param type flag of enum Qt__WindowType
///
void q_dateedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDateEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_dateedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDateEdit*
/// @param param1 enum Qt__WindowType
///
void q_dateedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDateEdit*
/// @param type flag of enum Qt__WindowType
///
void q_dateedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDateEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_dateedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_dateedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateEdit*
/// @param x int
/// @param y int
///
QWidget* q_dateedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateEdit*
/// @param p QPoint*
///
QWidget* q_dateedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDateEdit*
/// @param p QPointF*
///
QWidget* q_dateedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDateEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_dateedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDateEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_dateedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDateEdit*
///
void q_dateedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDateEdit*
/// @param child QWidget*
///
bool q_dateedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDateEdit*
///
bool q_dateedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDateEdit*
/// @param enabled bool
///
void q_dateedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDateEdit*
///
QBackingStore* q_dateedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDateEdit*
///
QWindow* q_dateedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDateEdit*
///
QScreen* q_dateedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDateEdit*
/// @param screen QScreen*
///
void q_dateedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_dateedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDateEdit*
/// @param title const char*
///
void q_dateedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, const char* title)
///
void q_dateedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDateEdit*
/// @param icon QIcon*
///
void q_dateedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QIcon* icon)
///
void q_dateedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDateEdit*
/// @param iconText const char*
///
void q_dateedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, const char* iconText)
///
void q_dateedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDateEdit*
/// @param pos QPoint*
///
void q_dateedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QPoint* pos)
///
void q_dateedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDateEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_dateedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDateEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_dateedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_dateedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_dateedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_dateedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_dateedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_dateedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDateEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_dateedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDateEdit*
/// @param rectangle QRect*
///
QPixmap* q_dateedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDateEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_dateedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDateEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_dateedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDateEdit*
/// @param id int
/// @param enable bool
///
void q_dateedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDateEdit*
/// @param id int
/// @param enable bool
///
void q_dateedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDateEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_dateedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDateEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_dateedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_dateedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_dateedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateEdit*
///
const char* q_dateedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDateEdit*
/// @param name char*
///
void q_dateedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDateEdit*
///
bool q_dateedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDateEdit*
///
bool q_dateedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDateEdit*
/// @param b bool
///
bool q_dateedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDateEdit*
///
QThread* q_dateedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateEdit*
/// @param thread QThread*
///
bool q_dateedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateEdit*
/// @param interval int
///
int32_t q_dateedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_dateedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateEdit*
/// @param id int
///
void q_dateedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateEdit*
/// @param id enum Qt__TimerId
///
void q_dateedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDateEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_dateedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDateEdit*
/// @param filterObj QObject*
///
void q_dateedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDateEdit*
/// @param obj QObject*
///
void q_dateedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dateedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dateedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dateedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dateedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDateEdit*
///
void q_dateedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDateEdit*
///
void q_dateedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDateEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_dateedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDateEdit*
/// @param name const char*
///
QVariant* q_dateedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDateEdit*
///
const char** q_dateedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateEdit*
///
QBindingStorage* q_dateedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateEdit*
///
const QBindingStorage* q_dateedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateEdit*
///
void q_dateedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self)
///
void q_dateedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDateEdit*
///
QObject* q_dateedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDateEdit*
/// @param classname const char*
///
bool q_dateedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDateEdit*
///
void q_dateedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dateedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dateedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_dateedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_dateedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dateedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateEdit*
/// @param param1 QObject*
///
void q_dateedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QObject* param1)
///
void q_dateedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDateEdit*
///
bool q_dateedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDateEdit*
///
double q_dateedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDateEdit*
///
double q_dateedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDateEdit*
///
int32_t q_dateedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_dateedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_dateedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QSize* q_dateedit_size_hint(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QSize* q_dateedit_qbase_size_hint(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QSize* func()
///
void q_dateedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_clear(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_qbase_clear(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func()
///
void q_dateedit_on_clear(void* self, void (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param steps int
///
void q_dateedit_step_by(void* self, int steps);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param steps int
///
void q_dateedit_qbase_step_by(void* self, int steps);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, int steps)
///
void q_dateedit_on_step_by(void* self, void (*callback)(void*, int));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
bool q_dateedit_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
bool q_dateedit_qbase_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func(QDateEdit* self, QEvent* event)
///
void q_dateedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QKeyEvent*
///
void q_dateedit_key_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QKeyEvent*
///
void q_dateedit_qbase_key_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QKeyEvent* event)
///
void q_dateedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QWheelEvent*
///
void q_dateedit_wheel_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QWheelEvent*
///
void q_dateedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QWheelEvent* event)
///
void q_dateedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QFocusEvent*
///
void q_dateedit_focus_in_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QFocusEvent*
///
void q_dateedit_qbase_focus_in_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QFocusEvent* event)
///
void q_dateedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param next bool
///
bool q_dateedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param next bool
///
bool q_dateedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func(QDateEdit* self, bool next)
///
void q_dateedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_dateedit_validate(void* self, const char* input, int* pos);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_dateedit_qbase_validate(void* self, const char* input, int* pos);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func(QDateEdit* self, const char* input, int* pos)
///
void q_dateedit_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param input const char*
///
void q_dateedit_fixup(void* self, const char* input);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param input const char*
///
void q_dateedit_qbase_fixup(void* self, const char* input);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, const char* input)
///
void q_dateedit_on_fixup(void* self, void (*callback)(void*, const char*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param text const char*
///
QDateTime* q_dateedit_date_time_from_text(void* self, const char* text);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param text const char*
///
QDateTime* q_dateedit_qbase_date_time_from_text(void* self, const char* text);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QDateTime* func(QDateEdit* self, const char* text)
///
void q_dateedit_on_date_time_from_text(void* self, QDateTime* (*callback)(void*, const char*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param dt QDateTime*
///
const char* q_dateedit_text_from_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param dt QDateTime*
///
const char* q_dateedit_qbase_text_from_date_time(void* self, void* dt);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback const char* func(QDateEdit* self, QDateTime* dt)
///
void q_dateedit_on_text_from_date_time(void* self, const char* (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_dateedit_step_enabled(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_dateedit_qbase_step_enabled(void* self);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func()
///
void q_dateedit_on_step_enabled(void* self, int32_t (*callback)());

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_mouse_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMouseEvent* event)
///
void q_dateedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QPaintEvent*
///
void q_dateedit_paint_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QPaintEvent*
///
void q_dateedit_qbase_paint_event(void* self, void* event);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QPaintEvent* event)
///
void q_dateedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param option QStyleOptionSpinBox*
///
void q_dateedit_init_style_option(void* self, void* option);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param option QStyleOptionSpinBox*
///
void q_dateedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QDateTimeEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QStyleOptionSpinBox* option)
///
void q_dateedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QSize* q_dateedit_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QSize* q_dateedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QSize* func()
///
void q_dateedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_dateedit_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_dateedit_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QVariant* func(QDateEdit* self, enum Qt__InputMethodQuery param1)
///
void q_dateedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QResizeEvent*
///
void q_dateedit_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QResizeEvent*
///
void q_dateedit_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QResizeEvent* event)
///
void q_dateedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QKeyEvent*
///
void q_dateedit_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QKeyEvent*
///
void q_dateedit_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QKeyEvent* event)
///
void q_dateedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QFocusEvent*
///
void q_dateedit_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QFocusEvent*
///
void q_dateedit_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QFocusEvent* event)
///
void q_dateedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QContextMenuEvent*
///
void q_dateedit_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QContextMenuEvent*
///
void q_dateedit_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QContextMenuEvent* event)
///
void q_dateedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QEvent* event)
///
void q_dateedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QCloseEvent*
///
void q_dateedit_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QCloseEvent*
///
void q_dateedit_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QCloseEvent* event)
///
void q_dateedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QHideEvent*
///
void q_dateedit_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QHideEvent*
///
void q_dateedit_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QHideEvent* event)
///
void q_dateedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMouseEvent* event)
///
void q_dateedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMouseEvent* event)
///
void q_dateedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QTimerEvent*
///
void q_dateedit_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QTimerEvent*
///
void q_dateedit_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QTimerEvent* event)
///
void q_dateedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QShowEvent*
///
void q_dateedit_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QShowEvent*
///
void q_dateedit_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QShowEvent* event)
///
void q_dateedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
int32_t q_dateedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
int32_t q_dateedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func()
///
void q_dateedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param visible bool
///
void q_dateedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param visible bool
///
void q_dateedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, bool visible)
///
void q_dateedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 int
///
int32_t q_dateedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 int
///
int32_t q_dateedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func(QDateEdit* self, int param1)
///
void q_dateedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func()
///
void q_dateedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QPaintEngine* q_dateedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QPaintEngine* q_dateedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QPaintEngine* func()
///
void q_dateedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMouseEvent*
///
void q_dateedit_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMouseEvent* event)
///
void q_dateedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEnterEvent*
///
void q_dateedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEnterEvent*
///
void q_dateedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QEnterEvent* event)
///
void q_dateedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QEvent* event)
///
void q_dateedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMoveEvent*
///
void q_dateedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QMoveEvent*
///
void q_dateedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMoveEvent* event)
///
void q_dateedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QTabletEvent*
///
void q_dateedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QTabletEvent*
///
void q_dateedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QTabletEvent* event)
///
void q_dateedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QActionEvent*
///
void q_dateedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QActionEvent*
///
void q_dateedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QActionEvent* event)
///
void q_dateedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragEnterEvent*
///
void q_dateedit_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragEnterEvent*
///
void q_dateedit_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDragEnterEvent* event)
///
void q_dateedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragMoveEvent*
///
void q_dateedit_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragMoveEvent*
///
void q_dateedit_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDragMoveEvent* event)
///
void q_dateedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragLeaveEvent*
///
void q_dateedit_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDragLeaveEvent*
///
void q_dateedit_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDragLeaveEvent* event)
///
void q_dateedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDropEvent*
///
void q_dateedit_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QDropEvent*
///
void q_dateedit_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QDropEvent* event)
///
void q_dateedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_dateedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_dateedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func(QDateEdit* self, const char* eventType, void* message, intptr_t* result)
///
void q_dateedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_dateedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_dateedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func(QDateEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_dateedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param painter QPainter*
///
void q_dateedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param painter QPainter*
///
void q_dateedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QPainter* painter)
///
void q_dateedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param offset QPoint*
///
QPaintDevice* q_dateedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param offset QPoint*
///
QPaintDevice* q_dateedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QPaintDevice* func(QDateEdit* self, QPoint* offset)
///
void q_dateedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QPainter* q_dateedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QPainter* q_dateedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QPainter* func()
///
void q_dateedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 QInputMethodEvent*
///
void q_dateedit_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param param1 QInputMethodEvent*
///
void q_dateedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QInputMethodEvent* param1)
///
void q_dateedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dateedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dateedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func(QDateEdit* self, QObject* watched, QEvent* event)
///
void q_dateedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QChildEvent*
///
void q_dateedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QChildEvent*
///
void q_dateedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QChildEvent* event)
///
void q_dateedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param event QEvent*
///
void q_dateedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QEvent* event)
///
void q_dateedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
void q_dateedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
void q_dateedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMetaMethod* signal)
///
void q_dateedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
void q_dateedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
void q_dateedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QMetaMethod* signal)
///
void q_dateedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QLineEdit* q_dateedit_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QLineEdit* q_dateedit_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QLineEdit* func()
///
void q_dateedit_on_line_edit(void* self, QLineEdit* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param edit QLineEdit*
///
void q_dateedit_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param edit QLineEdit*
///
void q_dateedit_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, QLineEdit* edit)
///
void q_dateedit_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func()
///
void q_dateedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func()
///
void q_dateedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
void q_dateedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback void func()
///
void q_dateedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func()
///
void q_dateedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
bool q_dateedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func()
///
void q_dateedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
QObject* q_dateedit_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
QObject* q_dateedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback QObject* func()
///
void q_dateedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
///
int32_t q_dateedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
///
int32_t q_dateedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func()
///
void q_dateedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param signal const char*
///
int32_t q_dateedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param signal const char*
///
int32_t q_dateedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback int32_t func(QDateEdit* self, const char* signal)
///
void q_dateedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
bool q_dateedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param signal QMetaMethod*
///
bool q_dateedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback bool func(QDateEdit* self, QMetaMethod* signal)
///
void q_dateedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_dateedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_dateedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateEdit*
/// @param callback double func(QDateEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_dateedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDateEdit*
/// @param callback void func(QDateEdit* self, const char* objectName)
///
void q_dateedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#dtor.QDateEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QDateEdit*
///
void q_dateedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#public-types)

typedef enum {
    QDATETIMEEDIT_SECTION_NOSECTION = 0,
    QDATETIMEEDIT_SECTION_AMPMSECTION = 1,
    QDATETIMEEDIT_SECTION_MSECSECTION = 2,
    QDATETIMEEDIT_SECTION_SECONDSECTION = 4,
    QDATETIMEEDIT_SECTION_MINUTESECTION = 8,
    QDATETIMEEDIT_SECTION_HOURSECTION = 16,
    QDATETIMEEDIT_SECTION_DAYSECTION = 256,
    QDATETIMEEDIT_SECTION_MONTHSECTION = 512,
    QDATETIMEEDIT_SECTION_YEARSECTION = 1024,
    QDATETIMEEDIT_SECTION_TIMESECTIONS_MASK = 31,
    QDATETIMEEDIT_SECTION_DATESECTIONS_MASK = 1792
} QDateTimeEdit__Section;

#endif
