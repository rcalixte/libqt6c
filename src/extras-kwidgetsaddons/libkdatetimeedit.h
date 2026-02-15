#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDATETIMEEDIT_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html)

/// k_datetimeedit_new constructs a new KDateTimeEdit object.
///
/// @param parent QWidget*
///
KDateTimeEdit* k_datetimeedit_new(void* parent);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html)

/// k_datetimeedit_new2 constructs a new KDateTimeEdit object.
///
KDateTimeEdit* k_datetimeedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDateTimeEdit*
///
const QMetaObject* k_datetimeedit_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback const QMetaObject* func()
///
void k_datetimeedit_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
///
const QMetaObject* k_datetimeedit_qbase_meta_object(void* self);

/// @param self KDateTimeEdit*
/// @param param1 const char*
///
void* k_datetimeedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void* func(KDateTimeEdit* self, const char* param1)
///
void k_datetimeedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param param1 const char*
///
void* k_datetimeedit_qbase_metacast(void* self, const char* param1);

/// @param self KDateTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_datetimeedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func(KDateTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_datetimeedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_datetimeedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_datetimeedit_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#options)
///
/// @param self KDateTimeEdit*
///
/// @return flag of enum KDateTimeEdit__Option
///
int32_t k_datetimeedit_options(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTime)
///
/// @param self KDateTimeEdit*
///
QDateTime* k_datetimeedit_date_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#date)
///
/// @param self KDateTimeEdit*
///
QDate* k_datetimeedit_date(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#time)
///
/// @param self KDateTimeEdit*
///
QTime* k_datetimeedit_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZone)
///
/// @param self KDateTimeEdit*
///
QTimeZone* k_datetimeedit_time_zone(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarLocalesList)
///
/// @param self KDateTimeEdit*
///
/// @return libqt_list of QLocale*
///
libqt_list k_datetimeedit_calendar_locales_list(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#minimumDateTime)
///
/// @param self KDateTimeEdit*
///
QDateTime* k_datetimeedit_minimum_date_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#maximumDateTime)
///
/// @param self KDateTimeEdit*
///
QDateTime* k_datetimeedit_maximum_date_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateDisplayFormat)
///
/// @param self KDateTimeEdit*
///
/// @return enum QLocale__FormatType
///
int32_t k_datetimeedit_date_display_format(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of QDate* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QDate*)map.keys)[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KDateTimeEdit*
///
/// @return libqt_map of QDate* to const char*
///
libqt_map k_datetimeedit_date_map(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeDisplayFormat)
///
/// @param self KDateTimeEdit*
///
/// @return enum QLocale__FormatType
///
int32_t k_datetimeedit_time_display_format(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeListInterval)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_time_list_interval(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeList)
///
/// @param self KDateTimeEdit*
///
/// @return libqt_list of QTime*
///
libqt_list k_datetimeedit_time_list(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZones)
///
/// @param self KDateTimeEdit*
///
/// @return libqt_list of QTimeZone*
///
libqt_list k_datetimeedit_time_zones(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValid)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNull)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_null(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValidDate)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_valid_date(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNullDate)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_null_date(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValidTime)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_valid_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNullTime)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_null_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEntered)
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_date_time_entered(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEntered)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDateTime* dateTime)
///
void k_datetimeedit_on_date_time_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeChanged)
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_date_time_changed(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDateTime* dateTime)
///
void k_datetimeedit_on_date_time_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEdited)
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_date_time_edited(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEdited)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDateTime* dateTime)
///
void k_datetimeedit_on_date_time_edited(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarEntered)
///
/// @param self KDateTimeEdit*
/// @param calendarLocale QLocale*
///
void k_datetimeedit_calendar_entered(void* self, void* calendarLocale);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarEntered)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QLocale* calendarLocale)
///
void k_datetimeedit_on_calendar_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarChanged)
///
/// @param self KDateTimeEdit*
/// @param calendarLocale QLocale*
///
void k_datetimeedit_calendar_changed(void* self, void* calendarLocale);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QLocale* calendarLocale)
///
void k_datetimeedit_on_calendar_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEntered)
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_date_entered(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEntered)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDate* date)
///
void k_datetimeedit_on_date_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateChanged)
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_date_changed(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDate* date)
///
void k_datetimeedit_on_date_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEdited)
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_date_edited(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEdited)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDate* date)
///
void k_datetimeedit_on_date_edited(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEntered)
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_time_entered(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEntered)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTime* time)
///
void k_datetimeedit_on_time_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeChanged)
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_time_changed(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTime* time)
///
void k_datetimeedit_on_time_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEdited)
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_time_edited(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEdited)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTime* time)
///
void k_datetimeedit_on_time_edited(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneEntered)
///
/// @param self KDateTimeEdit*
/// @param zone QTimeZone*
///
void k_datetimeedit_time_zone_entered(void* self, void* zone);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneEntered)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTimeZone* zone)
///
void k_datetimeedit_on_time_zone_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneChanged)
///
/// @param self KDateTimeEdit*
/// @param zone QTimeZone*
///
void k_datetimeedit_time_zone_changed(void* self, void* zone);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTimeZone* zone)
///
void k_datetimeedit_on_time_zone_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setOptions)
///
/// @param self KDateTimeEdit*
/// @param options flag of enum KDateTimeEdit__Option
///
void k_datetimeedit_set_options(void* self, int32_t options);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTime)
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_set_date_time(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDate)
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_set_date(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTime)
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_set_time(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeZone)
///
/// @param self KDateTimeEdit*
/// @param zone QTimeZone*
///
void k_datetimeedit_set_time_zone(void* self, void* zone);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
///
/// @param self KDateTimeEdit*
/// @param minDateTime QDateTime*
/// @param maxDateTime QDateTime*
///
void k_datetimeedit_set_date_time_range(void* self, void* minDateTime, void* maxDateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetDateTimeRange)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_reset_date_time_range(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMinimumDateTime)
///
/// @param self KDateTimeEdit*
/// @param minDateTime QDateTime*
///
void k_datetimeedit_set_minimum_date_time(void* self, void* minDateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetMinimumDateTime)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_reset_minimum_date_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMaximumDateTime)
///
/// @param self KDateTimeEdit*
/// @param maxDateTime QDateTime*
///
void k_datetimeedit_set_maximum_date_time(void* self, void* maxDateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetMaximumDateTime)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_reset_maximum_date_time(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateDisplayFormat)
///
/// @param self KDateTimeEdit*
/// @param format enum QLocale__FormatType
///
void k_datetimeedit_set_date_display_format(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setCalendarLocalesList)
///
/// @param self KDateTimeEdit*
/// @param calendarLocales libqt_list of QLocale*
///
void k_datetimeedit_set_calendar_locales_list(void* self, libqt_list calendarLocales);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateMap)
///
/// @param self KDateTimeEdit*
/// @param dateMap libqt_map of QDate* to const char*
///
void k_datetimeedit_set_date_map(void* self, libqt_map dateMap);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeDisplayFormat)
///
/// @param self KDateTimeEdit*
/// @param format enum QLocale__FormatType
///
void k_datetimeedit_set_time_display_format(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeListInterval)
///
/// @param self KDateTimeEdit*
/// @param minutes int
///
void k_datetimeedit_set_time_list_interval(void* self, int minutes);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
///
/// @param self KDateTimeEdit*
/// @param timeList libqt_list of QTime*
///
void k_datetimeedit_set_time_list(void* self, libqt_list timeList);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeZones)
///
/// @param self KDateTimeEdit*
/// @param zones libqt_list of QTimeZone*
///
void k_datetimeedit_set_time_zones(void* self, libqt_list zones);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
///
/// @param self KDateTimeEdit*
/// @param object QObject*
/// @param event QEvent*
///
bool k_datetimeedit_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback bool func(KDateTimeEdit* self, QObject* object, QEvent* event)
///
void k_datetimeedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param object QObject*
/// @param event QEvent*
///
bool k_datetimeedit_qbase_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
///
/// @param self KDateTimeEdit*
/// @param event QFocusEvent*
///
void k_datetimeedit_focus_in_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QFocusEvent* event)
///
void k_datetimeedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param event QFocusEvent*
///
void k_datetimeedit_qbase_focus_in_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
///
/// @param self KDateTimeEdit*
/// @param event QFocusEvent*
///
void k_datetimeedit_focus_out_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QFocusEvent* event)
///
void k_datetimeedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param event QFocusEvent*
///
void k_datetimeedit_qbase_focus_out_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
///
/// @param self KDateTimeEdit*
/// @param event QResizeEvent*
///
void k_datetimeedit_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QResizeEvent* event)
///
void k_datetimeedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param event QResizeEvent*
///
void k_datetimeedit_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_assign_date_time(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDateTime* dateTime)
///
void k_datetimeedit_on_assign_date_time(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param dateTime QDateTime*
///
void k_datetimeedit_qbase_assign_date_time(void* self, void* dateTime);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_assign_date(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDate* date)
///
void k_datetimeedit_on_assign_date(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param date QDate*
///
void k_datetimeedit_qbase_assign_date(void* self, void* date);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_assign_time(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTime* time)
///
void k_datetimeedit_on_assign_time(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param time QTime*
///
void k_datetimeedit_qbase_assign_time(void* self, void* time);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
///
/// @param self KDateTimeEdit*
/// @param zone QTimeZone*
///
void k_datetimeedit_assign_time_zone(void* self, void* zone);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
///
/// Allows for overriding the related default method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTimeZone* zone)
///
void k_datetimeedit_on_assign_time_zone(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
///
/// Base class method implementation
///
/// @param self KDateTimeEdit*
/// @param zone QTimeZone*
///
void k_datetimeedit_qbase_assign_time_zone(void* self, void* zone);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_datetimeedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_datetimeedit_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
///
/// @param self KDateTimeEdit*
/// @param minDateTime QDateTime*
/// @param maxDateTime QDateTime*
/// @param minWarnMsg const char*
///
void k_datetimeedit_set_date_time_range3(void* self, void* minDateTime, void* maxDateTime, const char* minWarnMsg);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
///
/// @param self KDateTimeEdit*
/// @param minDateTime QDateTime*
/// @param maxDateTime QDateTime*
/// @param minWarnMsg const char*
/// @param maxWarnMsg const char*
///
void k_datetimeedit_set_date_time_range4(void* self, void* minDateTime, void* maxDateTime, const char* minWarnMsg, const char* maxWarnMsg);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMinimumDateTime)
///
/// @param self KDateTimeEdit*
/// @param minDateTime QDateTime*
/// @param minWarnMsg const char*
///
void k_datetimeedit_set_minimum_date_time2(void* self, void* minDateTime, const char* minWarnMsg);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMaximumDateTime)
///
/// @param self KDateTimeEdit*
/// @param maxDateTime QDateTime*
/// @param maxWarnMsg const char*
///
void k_datetimeedit_set_maximum_date_time2(void* self, void* maxDateTime, const char* maxWarnMsg);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
///
/// @param self KDateTimeEdit*
/// @param timeList libqt_list of QTime*
/// @param minWarnMsg const char*
///
void k_datetimeedit_set_time_list2(void* self, libqt_list timeList, const char* minWarnMsg);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
///
/// @param self KDateTimeEdit*
/// @param timeList libqt_list of QTime*
/// @param minWarnMsg const char*
/// @param maxWarnMsg const char*
///
void k_datetimeedit_set_time_list3(void* self, libqt_list timeList, const char* minWarnMsg, const char* maxWarnMsg);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KDateTimeEdit*
///
uintptr_t k_datetimeedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KDateTimeEdit*
///
uintptr_t k_datetimeedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KDateTimeEdit*
///
uintptr_t k_datetimeedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KDateTimeEdit*
///
QStyle* k_datetimeedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KDateTimeEdit*
/// @param style QStyle*
///
void k_datetimeedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KDateTimeEdit*
///
/// @return enum Qt__WindowModality
///
int32_t k_datetimeedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KDateTimeEdit*
/// @param windowModality enum Qt__WindowModality
///
void k_datetimeedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
///
bool k_datetimeedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KDateTimeEdit*
/// @param enabled bool
///
void k_datetimeedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KDateTimeEdit*
/// @param disabled bool
///
void k_datetimeedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KDateTimeEdit*
/// @param windowModified bool
///
void k_datetimeedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KDateTimeEdit*
///
QRect* k_datetimeedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KDateTimeEdit*
///
const QRect* k_datetimeedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KDateTimeEdit*
///
QRect* k_datetimeedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KDateTimeEdit*
///
QPoint* k_datetimeedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KDateTimeEdit*
///
QRect* k_datetimeedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KDateTimeEdit*
///
QRect* k_datetimeedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KDateTimeEdit*
///
QRegion* k_datetimeedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDateTimeEdit*
/// @param minimumSize QSize*
///
void k_datetimeedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDateTimeEdit*
/// @param minw int
/// @param minh int
///
void k_datetimeedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDateTimeEdit*
/// @param maximumSize QSize*
///
void k_datetimeedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDateTimeEdit*
/// @param maxw int
/// @param maxh int
///
void k_datetimeedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KDateTimeEdit*
/// @param minw int
///
void k_datetimeedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KDateTimeEdit*
/// @param minh int
///
void k_datetimeedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KDateTimeEdit*
/// @param maxw int
///
void k_datetimeedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KDateTimeEdit*
/// @param maxh int
///
void k_datetimeedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDateTimeEdit*
/// @param sizeIncrement QSize*
///
void k_datetimeedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDateTimeEdit*
/// @param w int
/// @param h int
///
void k_datetimeedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDateTimeEdit*
/// @param baseSize QSize*
///
void k_datetimeedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDateTimeEdit*
/// @param basew int
/// @param baseh int
///
void k_datetimeedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDateTimeEdit*
/// @param fixedSize QSize*
///
void k_datetimeedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDateTimeEdit*
/// @param w int
/// @param h int
///
void k_datetimeedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KDateTimeEdit*
/// @param w int
///
void k_datetimeedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KDateTimeEdit*
/// @param h int
///
void k_datetimeedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* k_datetimeedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* k_datetimeedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* k_datetimeedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* k_datetimeedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* k_datetimeedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* k_datetimeedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDateTimeEdit*
/// @param param1 QPointF*
///
QPointF* k_datetimeedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDateTimeEdit*
/// @param param1 QPoint*
///
QPoint* k_datetimeedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_datetimeedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_datetimeedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_datetimeedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_datetimeedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KDateTimeEdit*
///
const QPalette* k_datetimeedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KDateTimeEdit*
/// @param palette QPalette*
///
void k_datetimeedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KDateTimeEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_datetimeedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KDateTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_datetimeedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KDateTimeEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_datetimeedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KDateTimeEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_datetimeedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KDateTimeEdit*
///
const QFont* k_datetimeedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KDateTimeEdit*
/// @param font QFont*
///
void k_datetimeedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KDateTimeEdit*
///
QFontMetrics* k_datetimeedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KDateTimeEdit*
///
QFontInfo* k_datetimeedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KDateTimeEdit*
///
QCursor* k_datetimeedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KDateTimeEdit*
/// @param cursor QCursor*
///
void k_datetimeedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KDateTimeEdit*
/// @param enable bool
///
void k_datetimeedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KDateTimeEdit*
/// @param enable bool
///
void k_datetimeedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDateTimeEdit*
/// @param mask QBitmap*
///
void k_datetimeedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDateTimeEdit*
/// @param mask QRegion*
///
void k_datetimeedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KDateTimeEdit*
///
QRegion* k_datetimeedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param target QPaintDevice*
///
void k_datetimeedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
///
void k_datetimeedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDateTimeEdit*
///
QPixmap* k_datetimeedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KDateTimeEdit*
///
QGraphicsEffect* k_datetimeedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KDateTimeEdit*
/// @param effect QGraphicsEffect*
///
void k_datetimeedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDateTimeEdit*
/// @param type enum Qt__GestureType
///
void k_datetimeedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KDateTimeEdit*
/// @param type enum Qt__GestureType
///
void k_datetimeedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KDateTimeEdit*
/// @param windowTitle const char*
///
void k_datetimeedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KDateTimeEdit*
/// @param styleSheet const char*
///
void k_datetimeedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KDateTimeEdit*
/// @param icon QIcon*
///
void k_datetimeedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KDateTimeEdit*
///
QIcon* k_datetimeedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KDateTimeEdit*
/// @param windowIconText const char*
///
void k_datetimeedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KDateTimeEdit*
/// @param windowRole const char*
///
void k_datetimeedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KDateTimeEdit*
/// @param filePath const char*
///
void k_datetimeedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KDateTimeEdit*
/// @param level double
///
void k_datetimeedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KDateTimeEdit*
///
double k_datetimeedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KDateTimeEdit*
/// @param toolTip const char*
///
void k_datetimeedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KDateTimeEdit*
/// @param msec int
///
void k_datetimeedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KDateTimeEdit*
/// @param statusTip const char*
///
void k_datetimeedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KDateTimeEdit*
/// @param whatsThis const char*
///
void k_datetimeedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KDateTimeEdit*
/// @param name const char*
///
void k_datetimeedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KDateTimeEdit*
/// @param description const char*
///
void k_datetimeedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KDateTimeEdit*
/// @param direction enum Qt__LayoutDirection
///
void k_datetimeedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KDateTimeEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_datetimeedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KDateTimeEdit*
/// @param locale QLocale*
///
void k_datetimeedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KDateTimeEdit*
///
QLocale* k_datetimeedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDateTimeEdit*
/// @param reason enum Qt__FocusReason
///
void k_datetimeedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KDateTimeEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_datetimeedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KDateTimeEdit*
/// @param policy enum Qt__FocusPolicy
///
void k_datetimeedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_datetimeedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KDateTimeEdit*
/// @param focusProxy QWidget*
///
void k_datetimeedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KDateTimeEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_datetimeedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KDateTimeEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_datetimeedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDateTimeEdit*
/// @param param1 QCursor*
///
void k_datetimeedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDateTimeEdit*
/// @param key QKeySequence*
///
int32_t k_datetimeedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KDateTimeEdit*
/// @param id int
///
void k_datetimeedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDateTimeEdit*
/// @param id int
///
void k_datetimeedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDateTimeEdit*
/// @param id int
///
void k_datetimeedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_datetimeedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_datetimeedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KDateTimeEdit*
/// @param enable bool
///
void k_datetimeedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KDateTimeEdit*
///
QGraphicsProxyWidget* k_datetimeedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datetimeedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDateTimeEdit*
/// @param param1 QRect*
///
void k_datetimeedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDateTimeEdit*
/// @param param1 QRegion*
///
void k_datetimeedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datetimeedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDateTimeEdit*
/// @param param1 QRect*
///
void k_datetimeedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDateTimeEdit*
/// @param param1 QRegion*
///
void k_datetimeedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KDateTimeEdit*
/// @param hidden bool
///
void k_datetimeedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
///
void k_datetimeedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDateTimeEdit*
/// @param x int
/// @param y int
///
void k_datetimeedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDateTimeEdit*
/// @param param1 QPoint*
///
void k_datetimeedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDateTimeEdit*
/// @param w int
/// @param h int
///
void k_datetimeedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDateTimeEdit*
/// @param param1 QSize*
///
void k_datetimeedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDateTimeEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_datetimeedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDateTimeEdit*
/// @param geometry QRect*
///
void k_datetimeedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDateTimeEdit*
///
char* k_datetimeedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KDateTimeEdit*
/// @param geometry char*
///
bool k_datetimeedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KDateTimeEdit*
/// @param param1 QWidget*
///
bool k_datetimeedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KDateTimeEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_datetimeedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KDateTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void k_datetimeedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KDateTimeEdit*
/// @param state flag of enum Qt__WindowState
///
void k_datetimeedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KDateTimeEdit*
///
QSizePolicy* k_datetimeedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDateTimeEdit*
/// @param sizePolicy QSizePolicy*
///
void k_datetimeedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDateTimeEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_datetimeedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KDateTimeEdit*
///
QRegion* k_datetimeedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDateTimeEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_datetimeedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDateTimeEdit*
/// @param margins QMargins*
///
void k_datetimeedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KDateTimeEdit*
///
QMargins* k_datetimeedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KDateTimeEdit*
///
QRect* k_datetimeedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KDateTimeEdit*
///
QLayout* k_datetimeedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KDateTimeEdit*
/// @param layout QLayout*
///
void k_datetimeedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDateTimeEdit*
/// @param parent QWidget*
///
void k_datetimeedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDateTimeEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_datetimeedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDateTimeEdit*
/// @param dx int
/// @param dy int
///
void k_datetimeedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDateTimeEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_datetimeedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KDateTimeEdit*
/// @param on bool
///
void k_datetimeedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDateTimeEdit*
/// @param action QAction*
///
void k_datetimeedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KDateTimeEdit*
/// @param actions libqt_list of QAction*
///
void k_datetimeedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KDateTimeEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_datetimeedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KDateTimeEdit*
/// @param before QAction*
/// @param action QAction*
///
void k_datetimeedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KDateTimeEdit*
/// @param action QAction*
///
void k_datetimeedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KDateTimeEdit*
///
/// @return libqt_list of QAction*
///
libqt_list k_datetimeedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDateTimeEdit*
/// @param text const char*
///
QAction* k_datetimeedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDateTimeEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_datetimeedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDateTimeEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_datetimeedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDateTimeEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_datetimeedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KDateTimeEdit*
///
QWidget* k_datetimeedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KDateTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void k_datetimeedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KDateTimeEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_datetimeedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__WindowType
///
void k_datetimeedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KDateTimeEdit*
/// @param type flag of enum Qt__WindowType
///
void k_datetimeedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KDateTimeEdit*
///
/// @return enum Qt__WindowType
///
int32_t k_datetimeedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_datetimeedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDateTimeEdit*
/// @param x int
/// @param y int
///
QWidget* k_datetimeedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDateTimeEdit*
/// @param p QPoint*
///
QWidget* k_datetimeedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDateTimeEdit*
/// @param p QPointF*
///
QWidget* k_datetimeedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void k_datetimeedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_datetimeedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KDateTimeEdit*
/// @param child QWidget*
///
bool k_datetimeedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KDateTimeEdit*
/// @param enabled bool
///
void k_datetimeedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KDateTimeEdit*
///
QBackingStore* k_datetimeedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KDateTimeEdit*
///
QWindow* k_datetimeedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KDateTimeEdit*
///
QScreen* k_datetimeedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KDateTimeEdit*
/// @param screen QScreen*
///
void k_datetimeedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_datetimeedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDateTimeEdit*
/// @param title const char*
///
void k_datetimeedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, const char* title)
///
void k_datetimeedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDateTimeEdit*
/// @param icon QIcon*
///
void k_datetimeedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QIcon* icon)
///
void k_datetimeedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDateTimeEdit*
/// @param iconText const char*
///
void k_datetimeedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, const char* iconText)
///
void k_datetimeedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDateTimeEdit*
/// @param pos QPoint*
///
void k_datetimeedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QPoint* pos)
///
void k_datetimeedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KDateTimeEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_datetimeedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KDateTimeEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_datetimeedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_datetimeedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_datetimeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_datetimeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_datetimeedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_datetimeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_datetimeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDateTimeEdit*
/// @param rectangle QRect*
///
QPixmap* k_datetimeedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDateTimeEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_datetimeedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDateTimeEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_datetimeedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDateTimeEdit*
/// @param id int
/// @param enable bool
///
void k_datetimeedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDateTimeEdit*
/// @param id int
/// @param enable bool
///
void k_datetimeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_datetimeedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_datetimeedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_datetimeedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_datetimeedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDateTimeEdit*
///
const char* k_datetimeedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDateTimeEdit*
/// @param name const char*
///
void k_datetimeedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDateTimeEdit*
/// @param b bool
///
bool k_datetimeedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDateTimeEdit*
///
QThread* k_datetimeedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDateTimeEdit*
/// @param thread QThread*
///
bool k_datetimeedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateTimeEdit*
/// @param interval int
///
int32_t k_datetimeedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateTimeEdit*
/// @param time int64_t of nanoseconds
///
int32_t k_datetimeedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDateTimeEdit*
/// @param id int
///
void k_datetimeedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDateTimeEdit*
/// @param id enum Qt__TimerId
///
void k_datetimeedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDateTimeEdit*
///
/// @return libqt_list of QObject*
///
libqt_list k_datetimeedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDateTimeEdit*
/// @param filterObj QObject*
///
void k_datetimeedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDateTimeEdit*
/// @param obj QObject*
///
void k_datetimeedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_datetimeedit_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_datetimeedit_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDateTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_datetimeedit_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_datetimeedit_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_datetimeedit_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
/// @param receiver QObject*
///
bool k_datetimeedit_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_datetimeedit_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDateTimeEdit*
/// @param name const char*
/// @param value QVariant*
///
bool k_datetimeedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDateTimeEdit*
/// @param name const char*
///
QVariant* k_datetimeedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDateTimeEdit*
///
const char** k_datetimeedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDateTimeEdit*
///
QBindingStorage* k_datetimeedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDateTimeEdit*
///
const QBindingStorage* k_datetimeedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self)
///
void k_datetimeedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDateTimeEdit*
///
QObject* k_datetimeedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDateTimeEdit*
/// @param classname const char*
///
bool k_datetimeedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateTimeEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_datetimeedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateTimeEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_datetimeedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_datetimeedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_datetimeedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDateTimeEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_datetimeedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
/// @param signal const char*
///
bool k_datetimeedit_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_datetimeedit_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_datetimeedit_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDateTimeEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool k_datetimeedit_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateTimeEdit*
/// @param param1 QObject*
///
void k_datetimeedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QObject* param1)
///
void k_datetimeedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KDateTimeEdit*
///
double k_datetimeedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KDateTimeEdit*
///
double k_datetimeedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_datetimeedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_datetimeedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func()
///
void k_datetimeedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param visible bool
///
void k_datetimeedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param visible bool
///
void k_datetimeedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, bool visible)
///
void k_datetimeedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QSize* func()
///
void k_datetimeedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
QSize* k_datetimeedit_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QSize* func()
///
void k_datetimeedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 int
///
int32_t k_datetimeedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 int
///
int32_t k_datetimeedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func(KDateTimeEdit* self, int param1)
///
void k_datetimeedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func()
///
void k_datetimeedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
QPaintEngine* k_datetimeedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
QPaintEngine* k_datetimeedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QPaintEngine* func()
///
void k_datetimeedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
bool k_datetimeedit_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
bool k_datetimeedit_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func(KDateTimeEdit* self, QEvent* event)
///
void k_datetimeedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMouseEvent* event)
///
void k_datetimeedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMouseEvent* event)
///
void k_datetimeedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMouseEvent* event)
///
void k_datetimeedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMouseEvent*
///
void k_datetimeedit_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMouseEvent* event)
///
void k_datetimeedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QWheelEvent*
///
void k_datetimeedit_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QWheelEvent*
///
void k_datetimeedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QWheelEvent* event)
///
void k_datetimeedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QKeyEvent*
///
void k_datetimeedit_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QKeyEvent*
///
void k_datetimeedit_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QKeyEvent* event)
///
void k_datetimeedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QKeyEvent*
///
void k_datetimeedit_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QKeyEvent*
///
void k_datetimeedit_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QKeyEvent* event)
///
void k_datetimeedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEnterEvent*
///
void k_datetimeedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEnterEvent*
///
void k_datetimeedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QEnterEvent* event)
///
void k_datetimeedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
void k_datetimeedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
void k_datetimeedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QEvent* event)
///
void k_datetimeedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QPaintEvent*
///
void k_datetimeedit_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QPaintEvent*
///
void k_datetimeedit_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QPaintEvent* event)
///
void k_datetimeedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMoveEvent*
///
void k_datetimeedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QMoveEvent*
///
void k_datetimeedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMoveEvent* event)
///
void k_datetimeedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QCloseEvent*
///
void k_datetimeedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QCloseEvent*
///
void k_datetimeedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QCloseEvent* event)
///
void k_datetimeedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QContextMenuEvent*
///
void k_datetimeedit_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QContextMenuEvent*
///
void k_datetimeedit_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QContextMenuEvent* event)
///
void k_datetimeedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QTabletEvent*
///
void k_datetimeedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QTabletEvent*
///
void k_datetimeedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTabletEvent* event)
///
void k_datetimeedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QActionEvent*
///
void k_datetimeedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QActionEvent*
///
void k_datetimeedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QActionEvent* event)
///
void k_datetimeedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragEnterEvent*
///
void k_datetimeedit_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragEnterEvent*
///
void k_datetimeedit_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDragEnterEvent* event)
///
void k_datetimeedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragMoveEvent*
///
void k_datetimeedit_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragMoveEvent*
///
void k_datetimeedit_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDragMoveEvent* event)
///
void k_datetimeedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragLeaveEvent*
///
void k_datetimeedit_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDragLeaveEvent*
///
void k_datetimeedit_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDragLeaveEvent* event)
///
void k_datetimeedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDropEvent*
///
void k_datetimeedit_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QDropEvent*
///
void k_datetimeedit_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QDropEvent* event)
///
void k_datetimeedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QShowEvent*
///
void k_datetimeedit_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QShowEvent*
///
void k_datetimeedit_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QShowEvent* event)
///
void k_datetimeedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QHideEvent*
///
void k_datetimeedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QHideEvent*
///
void k_datetimeedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QHideEvent* event)
///
void k_datetimeedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_datetimeedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_datetimeedit_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func(KDateTimeEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_datetimeedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 QEvent*
///
void k_datetimeedit_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 QEvent*
///
void k_datetimeedit_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QEvent* param1)
///
void k_datetimeedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_datetimeedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_datetimeedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func(KDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_datetimeedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
///
void k_datetimeedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param painter QPainter*
///
void k_datetimeedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QPainter* painter)
///
void k_datetimeedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* k_datetimeedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param offset QPoint*
///
QPaintDevice* k_datetimeedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QPaintDevice* func(KDateTimeEdit* self, QPoint* offset)
///
void k_datetimeedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
QPainter* k_datetimeedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
QPainter* k_datetimeedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QPainter* func()
///
void k_datetimeedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 QInputMethodEvent*
///
void k_datetimeedit_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 QInputMethodEvent*
///
void k_datetimeedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QInputMethodEvent* param1)
///
void k_datetimeedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_datetimeedit_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_datetimeedit_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QVariant* func(KDateTimeEdit* self, enum Qt__InputMethodQuery param1)
///
void k_datetimeedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param next bool
///
bool k_datetimeedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param next bool
///
bool k_datetimeedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func(KDateTimeEdit* self, bool next)
///
void k_datetimeedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QTimerEvent*
///
void k_datetimeedit_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QTimerEvent*
///
void k_datetimeedit_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QTimerEvent* event)
///
void k_datetimeedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QChildEvent*
///
void k_datetimeedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QChildEvent*
///
void k_datetimeedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QChildEvent* event)
///
void k_datetimeedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
void k_datetimeedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param event QEvent*
///
void k_datetimeedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QEvent* event)
///
void k_datetimeedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
void k_datetimeedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
void k_datetimeedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMetaMethod* signal)
///
void k_datetimeedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
void k_datetimeedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
void k_datetimeedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, QMetaMethod* signal)
///
void k_datetimeedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func()
///
void k_datetimeedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func()
///
void k_datetimeedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback void func()
///
void k_datetimeedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func()
///
void k_datetimeedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
bool k_datetimeedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func()
///
void k_datetimeedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
QObject* k_datetimeedit_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
QObject* k_datetimeedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback QObject* func()
///
void k_datetimeedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
///
int32_t k_datetimeedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func()
///
void k_datetimeedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal const char*
///
int32_t k_datetimeedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal const char*
///
int32_t k_datetimeedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback int32_t func(KDateTimeEdit* self, const char* signal)
///
void k_datetimeedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
bool k_datetimeedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param signal QMetaMethod*
///
bool k_datetimeedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback bool func(KDateTimeEdit* self, QMetaMethod* signal)
///
void k_datetimeedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_datetimeedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_datetimeedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateTimeEdit*
/// @param callback double func(KDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_datetimeedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDateTimeEdit*
/// @param callback void func(KDateTimeEdit* self, const char* objectName)
///
void k_datetimeedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#dtor.KDateTimeEdit)
///
/// Delete this object from C++ memory.
///
/// @param self KDateTimeEdit*
///
void k_datetimeedit_delete(void* self);

/// [Upstream resources](https://api.kde.org/kdatetimeedit.html#public-types)

typedef enum {
    KDATETIMEEDIT_OPTION_SHOWCALENDAR = 1,
    KDATETIMEEDIT_OPTION_SHOWDATE = 2,
    KDATETIMEEDIT_OPTION_SHOWTIME = 4,
    KDATETIMEEDIT_OPTION_SHOWTIMEZONE = 8,
    KDATETIMEEDIT_OPTION_EDITDATE = 32,
    KDATETIMEEDIT_OPTION_EDITTIME = 64,
    KDATETIMEEDIT_OPTION_SELECTCALENDAR = 256,
    KDATETIMEEDIT_OPTION_SELECTDATE = 512,
    KDATETIMEEDIT_OPTION_SELECTTIME = 1024,
    KDATETIMEEDIT_OPTION_SELECTTIMEZONE = 2048,
    KDATETIMEEDIT_OPTION_DATEPICKER = 4096,
    KDATETIMEEDIT_OPTION_DATEKEYWORDS = 8192,
    KDATETIMEEDIT_OPTION_FORCETIME = 16384,
    KDATETIMEEDIT_OPTION_WARNONINVALID = 32768
} KDateTimeEdit__Option;

#endif
