#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqtimezone.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkdatetimeedit.hpp"
#include "libkdatetimeedit.h"

KDateTimeEdit* k_datetimeedit_new(void* parent) {
    return KDateTimeEdit_new((QWidget*)parent);
}

KDateTimeEdit* k_datetimeedit_new2() {
    return KDateTimeEdit_new2();
}

const QMetaObject* k_datetimeedit_meta_object(void* self) {
    return KDateTimeEdit_MetaObject((KDateTimeEdit*)self);
}

void k_datetimeedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDateTimeEdit_OnMetaObject((KDateTimeEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_datetimeedit_qbase_meta_object(void* self) {
    return KDateTimeEdit_QBaseMetaObject((KDateTimeEdit*)self);
}

void* k_datetimeedit_metacast(void* self, const char* param1) {
    return KDateTimeEdit_Metacast((KDateTimeEdit*)self, param1);
}

void k_datetimeedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDateTimeEdit_OnMetacast((KDateTimeEdit*)self, (intptr_t)callback);
}

void* k_datetimeedit_qbase_metacast(void* self, const char* param1) {
    return KDateTimeEdit_QBaseMetacast((KDateTimeEdit*)self, param1);
}

int32_t k_datetimeedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateTimeEdit_Metacall((KDateTimeEdit*)self, param1, param2, param3);
}

void k_datetimeedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDateTimeEdit_OnMetacall((KDateTimeEdit*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateTimeEdit_QBaseMetacall((KDateTimeEdit*)self, param1, param2, param3);
}

const char* k_datetimeedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_datetimeedit_options(void* self) {
    return KDateTimeEdit_Options((KDateTimeEdit*)self);
}

QDateTime* k_datetimeedit_date_time(void* self) {
    return KDateTimeEdit_DateTime((KDateTimeEdit*)self);
}

QDate* k_datetimeedit_date(void* self) {
    return KDateTimeEdit_Date((KDateTimeEdit*)self);
}

QTime* k_datetimeedit_time(void* self) {
    return KDateTimeEdit_Time((KDateTimeEdit*)self);
}

QTimeZone* k_datetimeedit_time_zone(void* self) {
    return KDateTimeEdit_TimeZone((KDateTimeEdit*)self);
}

libqt_list /* of QLocale* */ k_datetimeedit_calendar_locales_list(void* self) {
    libqt_list _arr = KDateTimeEdit_CalendarLocalesList((KDateTimeEdit*)self);
    return _arr;
}

QDateTime* k_datetimeedit_minimum_date_time(void* self) {
    return KDateTimeEdit_MinimumDateTime((KDateTimeEdit*)self);
}

QDateTime* k_datetimeedit_maximum_date_time(void* self) {
    return KDateTimeEdit_MaximumDateTime((KDateTimeEdit*)self);
}

int32_t k_datetimeedit_date_display_format(void* self) {
    return KDateTimeEdit_DateDisplayFormat((KDateTimeEdit*)self);
}

libqt_map /* of QDate* to const char* */ k_datetimeedit_date_map(void* self) {
    // Convert QMap<QDate,QString> to libqt_map
    libqt_map _out = KDateTimeEdit_DateMap((KDateTimeEdit*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_datetimeedit_date_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_datetimeedit_date_map\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

int32_t k_datetimeedit_time_display_format(void* self) {
    return KDateTimeEdit_TimeDisplayFormat((KDateTimeEdit*)self);
}

int32_t k_datetimeedit_time_list_interval(void* self) {
    return KDateTimeEdit_TimeListInterval((KDateTimeEdit*)self);
}

libqt_list /* of QTime* */ k_datetimeedit_time_list(void* self) {
    libqt_list _arr = KDateTimeEdit_TimeList((KDateTimeEdit*)self);
    return _arr;
}

libqt_list /* of QTimeZone* */ k_datetimeedit_time_zones(void* self) {
    libqt_list _arr = KDateTimeEdit_TimeZones((KDateTimeEdit*)self);
    return _arr;
}

bool k_datetimeedit_is_valid(void* self) {
    return KDateTimeEdit_IsValid((KDateTimeEdit*)self);
}

bool k_datetimeedit_is_null(void* self) {
    return KDateTimeEdit_IsNull((KDateTimeEdit*)self);
}

bool k_datetimeedit_is_valid_date(void* self) {
    return KDateTimeEdit_IsValidDate((KDateTimeEdit*)self);
}

bool k_datetimeedit_is_null_date(void* self) {
    return KDateTimeEdit_IsNullDate((KDateTimeEdit*)self);
}

bool k_datetimeedit_is_valid_time(void* self) {
    return KDateTimeEdit_IsValidTime((KDateTimeEdit*)self);
}

bool k_datetimeedit_is_null_time(void* self) {
    return KDateTimeEdit_IsNullTime((KDateTimeEdit*)self);
}

void k_datetimeedit_date_time_entered(void* self, void* dateTime) {
    KDateTimeEdit_DateTimeEntered((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_on_date_time_entered(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateTimeEntered((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_date_time_changed(void* self, void* dateTime) {
    KDateTimeEdit_DateTimeChanged((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_on_date_time_changed(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateTimeChanged((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_date_time_edited(void* self, void* dateTime) {
    KDateTimeEdit_DateTimeEdited((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_on_date_time_edited(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateTimeEdited((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_calendar_entered(void* self, void* calendarLocale) {
    KDateTimeEdit_CalendarEntered((KDateTimeEdit*)self, (QLocale*)calendarLocale);
}

void k_datetimeedit_on_calendar_entered(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_CalendarEntered((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_calendar_changed(void* self, void* calendarLocale) {
    KDateTimeEdit_CalendarChanged((KDateTimeEdit*)self, (QLocale*)calendarLocale);
}

void k_datetimeedit_on_calendar_changed(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_CalendarChanged((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_date_entered(void* self, void* date) {
    KDateTimeEdit_DateEntered((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_on_date_entered(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateEntered((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_date_changed(void* self, void* date) {
    KDateTimeEdit_DateChanged((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_on_date_changed(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateChanged((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_date_edited(void* self, void* date) {
    KDateTimeEdit_DateEdited((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_on_date_edited(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_DateEdited((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_time_entered(void* self, void* time) {
    KDateTimeEdit_TimeEntered((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_on_time_entered(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_TimeEntered((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_time_changed(void* self, void* time) {
    KDateTimeEdit_TimeChanged((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_on_time_changed(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_TimeChanged((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_time_edited(void* self, void* time) {
    KDateTimeEdit_TimeEdited((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_on_time_edited(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_TimeEdited((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_time_zone_entered(void* self, void* zone) {
    KDateTimeEdit_TimeZoneEntered((KDateTimeEdit*)self, (QTimeZone*)zone);
}

void k_datetimeedit_on_time_zone_entered(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_TimeZoneEntered((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_time_zone_changed(void* self, void* zone) {
    KDateTimeEdit_TimeZoneChanged((KDateTimeEdit*)self, (QTimeZone*)zone);
}

void k_datetimeedit_on_time_zone_changed(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_Connect_TimeZoneChanged((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_set_options(void* self, int32_t options) {
    KDateTimeEdit_SetOptions((KDateTimeEdit*)self, options);
}

void k_datetimeedit_set_date_time(void* self, void* dateTime) {
    KDateTimeEdit_SetDateTime((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_set_date(void* self, void* date) {
    KDateTimeEdit_SetDate((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_set_time(void* self, void* time) {
    KDateTimeEdit_SetTime((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_set_time_zone(void* self, void* zone) {
    KDateTimeEdit_SetTimeZone((KDateTimeEdit*)self, (QTimeZone*)zone);
}

void k_datetimeedit_set_date_time_range(void* self, void* minDateTime, void* maxDateTime) {
    KDateTimeEdit_SetDateTimeRange((KDateTimeEdit*)self, (QDateTime*)minDateTime, (QDateTime*)maxDateTime);
}

void k_datetimeedit_reset_date_time_range(void* self) {
    KDateTimeEdit_ResetDateTimeRange((KDateTimeEdit*)self);
}

void k_datetimeedit_set_minimum_date_time(void* self, void* minDateTime) {
    KDateTimeEdit_SetMinimumDateTime((KDateTimeEdit*)self, (QDateTime*)minDateTime);
}

void k_datetimeedit_reset_minimum_date_time(void* self) {
    KDateTimeEdit_ResetMinimumDateTime((KDateTimeEdit*)self);
}

void k_datetimeedit_set_maximum_date_time(void* self, void* maxDateTime) {
    KDateTimeEdit_SetMaximumDateTime((KDateTimeEdit*)self, (QDateTime*)maxDateTime);
}

void k_datetimeedit_reset_maximum_date_time(void* self) {
    KDateTimeEdit_ResetMaximumDateTime((KDateTimeEdit*)self);
}

void k_datetimeedit_set_date_display_format(void* self, int32_t format) {
    KDateTimeEdit_SetDateDisplayFormat((KDateTimeEdit*)self, format);
}

void k_datetimeedit_set_calendar_locales_list(void* self, libqt_list /* of QLocale* */ calendarLocales) {
    KDateTimeEdit_SetCalendarLocalesList((KDateTimeEdit*)self, calendarLocales);
}

void k_datetimeedit_set_date_map(void* self, libqt_map /* of QDate* to const char* */ dateMap) {
    // Convert libqt_map to QMap<QDate,QString>
    libqt_map dateMap_ret;
    dateMap_ret.len = dateMap.len;
    dateMap_ret.keys = (QDate**)malloc(dateMap_ret.len * sizeof(QDate*));
    if (dateMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_datetimeedit_set_date_map\n");
        abort();
    }
    dateMap_ret.values = (libqt_string*)malloc(dateMap_ret.len * sizeof(libqt_string));
    if (dateMap_ret.values == NULL) {
        free(dateMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_datetimeedit_set_date_map\n");
        abort();
    }
    QDate** dateMap_karr = (QDate**)dateMap.keys;
    QDate** dateMap_kdest = (QDate**)dateMap_ret.keys;
    const char** dateMap_varr = (const char**)dateMap.values;
    libqt_string* dateMap_vdest = (libqt_string*)dateMap_ret.values;
    for (size_t i = 0; i < dateMap_ret.len; ++i) {
        dateMap_kdest[i] = dateMap_karr[i];
        dateMap_vdest[i] = qstring(dateMap_varr[i]);
    }
    KDateTimeEdit_SetDateMap((KDateTimeEdit*)self, dateMap_ret);
    free(dateMap_ret.keys);
    free(dateMap_ret.values);
}

void k_datetimeedit_set_time_display_format(void* self, int32_t format) {
    KDateTimeEdit_SetTimeDisplayFormat((KDateTimeEdit*)self, format);
}

void k_datetimeedit_set_time_list_interval(void* self, int minutes) {
    KDateTimeEdit_SetTimeListInterval((KDateTimeEdit*)self, minutes);
}

void k_datetimeedit_set_time_list(void* self, libqt_list /* of QTime* */ timeList) {
    KDateTimeEdit_SetTimeList((KDateTimeEdit*)self, timeList);
}

void k_datetimeedit_set_time_zones(void* self, libqt_list /* of QTimeZone* */ zones) {
    KDateTimeEdit_SetTimeZones((KDateTimeEdit*)self, zones);
}

bool k_datetimeedit_event_filter(void* self, void* object, void* event) {
    return KDateTimeEdit_EventFilter((KDateTimeEdit*)self, (QObject*)object, (QEvent*)event);
}

void k_datetimeedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDateTimeEdit_OnEventFilter((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_qbase_event_filter(void* self, void* object, void* event) {
    return KDateTimeEdit_QBaseEventFilter((KDateTimeEdit*)self, (QObject*)object, (QEvent*)event);
}

void k_datetimeedit_focus_in_event(void* self, void* event) {
    KDateTimeEdit_FocusInEvent((KDateTimeEdit*)self, (QFocusEvent*)event);
}

void k_datetimeedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnFocusInEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_focus_in_event(void* self, void* event) {
    KDateTimeEdit_QBaseFocusInEvent((KDateTimeEdit*)self, (QFocusEvent*)event);
}

void k_datetimeedit_focus_out_event(void* self, void* event) {
    KDateTimeEdit_FocusOutEvent((KDateTimeEdit*)self, (QFocusEvent*)event);
}

void k_datetimeedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnFocusOutEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_focus_out_event(void* self, void* event) {
    KDateTimeEdit_QBaseFocusOutEvent((KDateTimeEdit*)self, (QFocusEvent*)event);
}

void k_datetimeedit_resize_event(void* self, void* event) {
    KDateTimeEdit_ResizeEvent((KDateTimeEdit*)self, (QResizeEvent*)event);
}

void k_datetimeedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnResizeEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_resize_event(void* self, void* event) {
    KDateTimeEdit_QBaseResizeEvent((KDateTimeEdit*)self, (QResizeEvent*)event);
}

void k_datetimeedit_assign_date_time(void* self, void* dateTime) {
    KDateTimeEdit_AssignDateTime((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_on_assign_date_time(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnAssignDateTime((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_assign_date_time(void* self, void* dateTime) {
    KDateTimeEdit_QBaseAssignDateTime((KDateTimeEdit*)self, (QDateTime*)dateTime);
}

void k_datetimeedit_assign_date(void* self, void* date) {
    KDateTimeEdit_AssignDate((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_on_assign_date(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnAssignDate((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_assign_date(void* self, void* date) {
    KDateTimeEdit_QBaseAssignDate((KDateTimeEdit*)self, (QDate*)date);
}

void k_datetimeedit_assign_time(void* self, void* time) {
    KDateTimeEdit_AssignTime((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_on_assign_time(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnAssignTime((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_assign_time(void* self, void* time) {
    KDateTimeEdit_QBaseAssignTime((KDateTimeEdit*)self, (QTime*)time);
}

void k_datetimeedit_assign_time_zone(void* self, void* zone) {
    KDateTimeEdit_AssignTimeZone((KDateTimeEdit*)self, (QTimeZone*)zone);
}

void k_datetimeedit_on_assign_time_zone(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnAssignTimeZone((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_qbase_assign_time_zone(void* self, void* zone) {
    KDateTimeEdit_QBaseAssignTimeZone((KDateTimeEdit*)self, (QTimeZone*)zone);
}

const char* k_datetimeedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datetimeedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_date_time_range3(void* self, void* minDateTime, void* maxDateTime, const char* minWarnMsg) {
    KDateTimeEdit_SetDateTimeRange3((KDateTimeEdit*)self, (QDateTime*)minDateTime, (QDateTime*)maxDateTime, qstring(minWarnMsg));
}

void k_datetimeedit_set_date_time_range4(void* self, void* minDateTime, void* maxDateTime, const char* minWarnMsg, const char* maxWarnMsg) {
    KDateTimeEdit_SetDateTimeRange4((KDateTimeEdit*)self, (QDateTime*)minDateTime, (QDateTime*)maxDateTime, qstring(minWarnMsg), qstring(maxWarnMsg));
}

void k_datetimeedit_set_minimum_date_time2(void* self, void* minDateTime, const char* minWarnMsg) {
    KDateTimeEdit_SetMinimumDateTime2((KDateTimeEdit*)self, (QDateTime*)minDateTime, qstring(minWarnMsg));
}

void k_datetimeedit_set_maximum_date_time2(void* self, void* maxDateTime, const char* maxWarnMsg) {
    KDateTimeEdit_SetMaximumDateTime2((KDateTimeEdit*)self, (QDateTime*)maxDateTime, qstring(maxWarnMsg));
}

void k_datetimeedit_set_time_list2(void* self, libqt_list /* of QTime* */ timeList, const char* minWarnMsg) {
    KDateTimeEdit_SetTimeList2((KDateTimeEdit*)self, timeList, qstring(minWarnMsg));
}

void k_datetimeedit_set_time_list3(void* self, libqt_list /* of QTime* */ timeList, const char* minWarnMsg, const char* maxWarnMsg) {
    KDateTimeEdit_SetTimeList3((KDateTimeEdit*)self, timeList, qstring(minWarnMsg), qstring(maxWarnMsg));
}

uintptr_t k_datetimeedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_datetimeedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_datetimeedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_datetimeedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_datetimeedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_datetimeedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_datetimeedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_datetimeedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_datetimeedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_datetimeedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_datetimeedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_datetimeedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_datetimeedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_datetimeedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_datetimeedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_datetimeedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_datetimeedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_datetimeedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_datetimeedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_datetimeedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_datetimeedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_datetimeedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_datetimeedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_datetimeedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_datetimeedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_datetimeedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_datetimeedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_datetimeedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_datetimeedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_datetimeedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_datetimeedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_datetimeedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_datetimeedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_datetimeedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_datetimeedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_datetimeedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_datetimeedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_datetimeedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_datetimeedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_datetimeedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_datetimeedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_datetimeedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_datetimeedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_datetimeedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_datetimeedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_datetimeedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_datetimeedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_datetimeedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_datetimeedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_datetimeedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_datetimeedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_datetimeedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_datetimeedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_datetimeedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datetimeedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datetimeedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datetimeedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datetimeedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datetimeedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datetimeedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datetimeedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datetimeedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datetimeedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_datetimeedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datetimeedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_datetimeedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_datetimeedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_datetimeedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_datetimeedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_datetimeedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_datetimeedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_datetimeedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_datetimeedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_datetimeedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_datetimeedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_datetimeedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_datetimeedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_datetimeedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_datetimeedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_datetimeedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_datetimeedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_datetimeedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_datetimeedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_datetimeedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_datetimeedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_datetimeedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_datetimeedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_datetimeedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_datetimeedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_datetimeedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_datetimeedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_datetimeedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_datetimeedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_datetimeedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_datetimeedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_datetimeedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_datetimeedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_datetimeedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_datetimeedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_datetimeedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datetimeedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_datetimeedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_datetimeedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_datetimeedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_datetimeedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_datetimeedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_datetimeedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_datetimeedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_datetimeedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_datetimeedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_datetimeedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_datetimeedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_datetimeedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_datetimeedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datetimeedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_datetimeedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_datetimeedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_datetimeedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_datetimeedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_datetimeedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_datetimeedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_datetimeedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_datetimeedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_datetimeedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_datetimeedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_datetimeedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_datetimeedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_datetimeedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_datetimeedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_datetimeedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_datetimeedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_datetimeedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_datetimeedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_datetimeedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_datetimeedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_datetimeedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_datetimeedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_datetimeedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_datetimeedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_datetimeedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_datetimeedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_datetimeedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_datetimeedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_datetimeedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_datetimeedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_datetimeedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_datetimeedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_datetimeedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_datetimeedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_datetimeedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_datetimeedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_datetimeedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_datetimeedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_datetimeedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_datetimeedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_datetimeedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_datetimeedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_datetimeedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_datetimeedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_datetimeedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_datetimeedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_datetimeedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_datetimeedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_datetimeedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_datetimeedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_datetimeedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_datetimeedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_datetimeedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_datetimeedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_datetimeedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_datetimeedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_datetimeedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_datetimeedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_datetimeedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_datetimeedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_datetimeedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_datetimeedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_datetimeedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_datetimeedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_datetimeedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_datetimeedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_datetimeedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_datetimeedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_datetimeedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_datetimeedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_datetimeedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_datetimeedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_datetimeedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_datetimeedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_datetimeedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_datetimeedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_datetimeedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_datetimeedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_datetimeedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_datetimeedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_datetimeedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_datetimeedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_datetimeedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_datetimeedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_datetimeedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_datetimeedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_datetimeedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_datetimeedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_datetimeedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_datetimeedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_datetimeedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_datetimeedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_datetimeedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_datetimeedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_datetimeedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_datetimeedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_datetimeedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_datetimeedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_datetimeedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_datetimeedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_datetimeedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_datetimeedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_datetimeedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_datetimeedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_datetimeedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_datetimeedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_datetimeedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_datetimeedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_datetimeedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_datetimeedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_datetimeedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_datetimeedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_datetimeedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_datetimeedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_datetimeedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_datetimeedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_datetimeedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_datetimeedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_datetimeedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_datetimeedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_datetimeedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_datetimeedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_datetimeedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_datetimeedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_datetimeedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_datetimeedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_datetimeedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_datetimeedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_datetimeedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_datetimeedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_datetimeedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_datetimeedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_datetimeedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_datetimeedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_datetimeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datetimeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_datetimeedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_datetimeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datetimeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_datetimeedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_datetimeedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_datetimeedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_datetimeedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_datetimeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_datetimeedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_datetimeedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_datetimeedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_datetimeedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_datetimeedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datetimeedit_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_datetimeedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_datetimeedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_datetimeedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_datetimeedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_datetimeedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_datetimeedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_datetimeedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_datetimeedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_datetimeedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_datetimeedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_datetimeedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_datetimeedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_datetimeedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_datetimeedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_datetimeedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_datetimeedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_datetimeedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_datetimeedit_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_datetimeedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_datetimeedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_datetimeedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_datetimeedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_datetimeedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_datetimeedit_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_datetimeedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_datetimeedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_datetimeedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_datetimeedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_datetimeedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_datetimeedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_datetimeedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_datetimeedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_datetimeedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_datetimeedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_datetimeedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_datetimeedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_datetimeedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_datetimeedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_datetimeedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_datetimeedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_datetimeedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_datetimeedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_datetimeedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_datetimeedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_datetimeedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_datetimeedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_datetimeedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_datetimeedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_datetimeedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_datetimeedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_datetimeedit_dev_type(void* self) {
    return KDateTimeEdit_DevType((KDateTimeEdit*)self);
}

int32_t k_datetimeedit_qbase_dev_type(void* self) {
    return KDateTimeEdit_QBaseDevType((KDateTimeEdit*)self);
}

void k_datetimeedit_on_dev_type(void* self, int32_t (*callback)()) {
    KDateTimeEdit_OnDevType((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_set_visible(void* self, bool visible) {
    KDateTimeEdit_SetVisible((KDateTimeEdit*)self, visible);
}

void k_datetimeedit_qbase_set_visible(void* self, bool visible) {
    KDateTimeEdit_QBaseSetVisible((KDateTimeEdit*)self, visible);
}

void k_datetimeedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KDateTimeEdit_OnSetVisible((KDateTimeEdit*)self, (intptr_t)callback);
}

QSize* k_datetimeedit_size_hint(void* self) {
    return KDateTimeEdit_SizeHint((KDateTimeEdit*)self);
}

QSize* k_datetimeedit_qbase_size_hint(void* self) {
    return KDateTimeEdit_QBaseSizeHint((KDateTimeEdit*)self);
}

void k_datetimeedit_on_size_hint(void* self, QSize* (*callback)()) {
    KDateTimeEdit_OnSizeHint((KDateTimeEdit*)self, (intptr_t)callback);
}

QSize* k_datetimeedit_minimum_size_hint(void* self) {
    return KDateTimeEdit_MinimumSizeHint((KDateTimeEdit*)self);
}

QSize* k_datetimeedit_qbase_minimum_size_hint(void* self) {
    return KDateTimeEdit_QBaseMinimumSizeHint((KDateTimeEdit*)self);
}

void k_datetimeedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KDateTimeEdit_OnMinimumSizeHint((KDateTimeEdit*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_height_for_width(void* self, int param1) {
    return KDateTimeEdit_HeightForWidth((KDateTimeEdit*)self, param1);
}

int32_t k_datetimeedit_qbase_height_for_width(void* self, int param1) {
    return KDateTimeEdit_QBaseHeightForWidth((KDateTimeEdit*)self, param1);
}

void k_datetimeedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KDateTimeEdit_OnHeightForWidth((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_has_height_for_width(void* self) {
    return KDateTimeEdit_HasHeightForWidth((KDateTimeEdit*)self);
}

bool k_datetimeedit_qbase_has_height_for_width(void* self) {
    return KDateTimeEdit_QBaseHasHeightForWidth((KDateTimeEdit*)self);
}

void k_datetimeedit_on_has_height_for_width(void* self, bool (*callback)()) {
    KDateTimeEdit_OnHasHeightForWidth((KDateTimeEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_datetimeedit_paint_engine(void* self) {
    return KDateTimeEdit_PaintEngine((KDateTimeEdit*)self);
}

QPaintEngine* k_datetimeedit_qbase_paint_engine(void* self) {
    return KDateTimeEdit_QBasePaintEngine((KDateTimeEdit*)self);
}

void k_datetimeedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KDateTimeEdit_OnPaintEngine((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_event(void* self, void* event) {
    return KDateTimeEdit_Event((KDateTimeEdit*)self, (QEvent*)event);
}

bool k_datetimeedit_qbase_event(void* self, void* event) {
    return KDateTimeEdit_QBaseEvent((KDateTimeEdit*)self, (QEvent*)event);
}

void k_datetimeedit_on_event(void* self, bool (*callback)(void*, void*)) {
    KDateTimeEdit_OnEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_mouse_press_event(void* self, void* event) {
    KDateTimeEdit_MousePressEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_qbase_mouse_press_event(void* self, void* event) {
    KDateTimeEdit_QBaseMousePressEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnMousePressEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_mouse_release_event(void* self, void* event) {
    KDateTimeEdit_MouseReleaseEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_qbase_mouse_release_event(void* self, void* event) {
    KDateTimeEdit_QBaseMouseReleaseEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnMouseReleaseEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_mouse_double_click_event(void* self, void* event) {
    KDateTimeEdit_MouseDoubleClickEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_qbase_mouse_double_click_event(void* self, void* event) {
    KDateTimeEdit_QBaseMouseDoubleClickEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnMouseDoubleClickEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_mouse_move_event(void* self, void* event) {
    KDateTimeEdit_MouseMoveEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_qbase_mouse_move_event(void* self, void* event) {
    KDateTimeEdit_QBaseMouseMoveEvent((KDateTimeEdit*)self, (QMouseEvent*)event);
}

void k_datetimeedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnMouseMoveEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_wheel_event(void* self, void* event) {
    KDateTimeEdit_WheelEvent((KDateTimeEdit*)self, (QWheelEvent*)event);
}

void k_datetimeedit_qbase_wheel_event(void* self, void* event) {
    KDateTimeEdit_QBaseWheelEvent((KDateTimeEdit*)self, (QWheelEvent*)event);
}

void k_datetimeedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnWheelEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_key_press_event(void* self, void* event) {
    KDateTimeEdit_KeyPressEvent((KDateTimeEdit*)self, (QKeyEvent*)event);
}

void k_datetimeedit_qbase_key_press_event(void* self, void* event) {
    KDateTimeEdit_QBaseKeyPressEvent((KDateTimeEdit*)self, (QKeyEvent*)event);
}

void k_datetimeedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnKeyPressEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_key_release_event(void* self, void* event) {
    KDateTimeEdit_KeyReleaseEvent((KDateTimeEdit*)self, (QKeyEvent*)event);
}

void k_datetimeedit_qbase_key_release_event(void* self, void* event) {
    KDateTimeEdit_QBaseKeyReleaseEvent((KDateTimeEdit*)self, (QKeyEvent*)event);
}

void k_datetimeedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnKeyReleaseEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_enter_event(void* self, void* event) {
    KDateTimeEdit_EnterEvent((KDateTimeEdit*)self, (QEnterEvent*)event);
}

void k_datetimeedit_qbase_enter_event(void* self, void* event) {
    KDateTimeEdit_QBaseEnterEvent((KDateTimeEdit*)self, (QEnterEvent*)event);
}

void k_datetimeedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnEnterEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_leave_event(void* self, void* event) {
    KDateTimeEdit_LeaveEvent((KDateTimeEdit*)self, (QEvent*)event);
}

void k_datetimeedit_qbase_leave_event(void* self, void* event) {
    KDateTimeEdit_QBaseLeaveEvent((KDateTimeEdit*)self, (QEvent*)event);
}

void k_datetimeedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnLeaveEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_paint_event(void* self, void* event) {
    KDateTimeEdit_PaintEvent((KDateTimeEdit*)self, (QPaintEvent*)event);
}

void k_datetimeedit_qbase_paint_event(void* self, void* event) {
    KDateTimeEdit_QBasePaintEvent((KDateTimeEdit*)self, (QPaintEvent*)event);
}

void k_datetimeedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnPaintEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_move_event(void* self, void* event) {
    KDateTimeEdit_MoveEvent((KDateTimeEdit*)self, (QMoveEvent*)event);
}

void k_datetimeedit_qbase_move_event(void* self, void* event) {
    KDateTimeEdit_QBaseMoveEvent((KDateTimeEdit*)self, (QMoveEvent*)event);
}

void k_datetimeedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnMoveEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_close_event(void* self, void* event) {
    KDateTimeEdit_CloseEvent((KDateTimeEdit*)self, (QCloseEvent*)event);
}

void k_datetimeedit_qbase_close_event(void* self, void* event) {
    KDateTimeEdit_QBaseCloseEvent((KDateTimeEdit*)self, (QCloseEvent*)event);
}

void k_datetimeedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnCloseEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_context_menu_event(void* self, void* event) {
    KDateTimeEdit_ContextMenuEvent((KDateTimeEdit*)self, (QContextMenuEvent*)event);
}

void k_datetimeedit_qbase_context_menu_event(void* self, void* event) {
    KDateTimeEdit_QBaseContextMenuEvent((KDateTimeEdit*)self, (QContextMenuEvent*)event);
}

void k_datetimeedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnContextMenuEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_tablet_event(void* self, void* event) {
    KDateTimeEdit_TabletEvent((KDateTimeEdit*)self, (QTabletEvent*)event);
}

void k_datetimeedit_qbase_tablet_event(void* self, void* event) {
    KDateTimeEdit_QBaseTabletEvent((KDateTimeEdit*)self, (QTabletEvent*)event);
}

void k_datetimeedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnTabletEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_action_event(void* self, void* event) {
    KDateTimeEdit_ActionEvent((KDateTimeEdit*)self, (QActionEvent*)event);
}

void k_datetimeedit_qbase_action_event(void* self, void* event) {
    KDateTimeEdit_QBaseActionEvent((KDateTimeEdit*)self, (QActionEvent*)event);
}

void k_datetimeedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnActionEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_drag_enter_event(void* self, void* event) {
    KDateTimeEdit_DragEnterEvent((KDateTimeEdit*)self, (QDragEnterEvent*)event);
}

void k_datetimeedit_qbase_drag_enter_event(void* self, void* event) {
    KDateTimeEdit_QBaseDragEnterEvent((KDateTimeEdit*)self, (QDragEnterEvent*)event);
}

void k_datetimeedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnDragEnterEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_drag_move_event(void* self, void* event) {
    KDateTimeEdit_DragMoveEvent((KDateTimeEdit*)self, (QDragMoveEvent*)event);
}

void k_datetimeedit_qbase_drag_move_event(void* self, void* event) {
    KDateTimeEdit_QBaseDragMoveEvent((KDateTimeEdit*)self, (QDragMoveEvent*)event);
}

void k_datetimeedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnDragMoveEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_drag_leave_event(void* self, void* event) {
    KDateTimeEdit_DragLeaveEvent((KDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

void k_datetimeedit_qbase_drag_leave_event(void* self, void* event) {
    KDateTimeEdit_QBaseDragLeaveEvent((KDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

void k_datetimeedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnDragLeaveEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_drop_event(void* self, void* event) {
    KDateTimeEdit_DropEvent((KDateTimeEdit*)self, (QDropEvent*)event);
}

void k_datetimeedit_qbase_drop_event(void* self, void* event) {
    KDateTimeEdit_QBaseDropEvent((KDateTimeEdit*)self, (QDropEvent*)event);
}

void k_datetimeedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnDropEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_show_event(void* self, void* event) {
    KDateTimeEdit_ShowEvent((KDateTimeEdit*)self, (QShowEvent*)event);
}

void k_datetimeedit_qbase_show_event(void* self, void* event) {
    KDateTimeEdit_QBaseShowEvent((KDateTimeEdit*)self, (QShowEvent*)event);
}

void k_datetimeedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnShowEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_hide_event(void* self, void* event) {
    KDateTimeEdit_HideEvent((KDateTimeEdit*)self, (QHideEvent*)event);
}

void k_datetimeedit_qbase_hide_event(void* self, void* event) {
    KDateTimeEdit_QBaseHideEvent((KDateTimeEdit*)self, (QHideEvent*)event);
}

void k_datetimeedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnHideEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDateTimeEdit_NativeEvent((KDateTimeEdit*)self, qstring(eventType), message, result);
}

bool k_datetimeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDateTimeEdit_QBaseNativeEvent((KDateTimeEdit*)self, qstring(eventType), message, result);
}

void k_datetimeedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KDateTimeEdit_OnNativeEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_change_event(void* self, void* param1) {
    KDateTimeEdit_ChangeEvent((KDateTimeEdit*)self, (QEvent*)param1);
}

void k_datetimeedit_qbase_change_event(void* self, void* param1) {
    KDateTimeEdit_QBaseChangeEvent((KDateTimeEdit*)self, (QEvent*)param1);
}

void k_datetimeedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnChangeEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_metric(void* self, int32_t param1) {
    return KDateTimeEdit_Metric((KDateTimeEdit*)self, param1);
}

int32_t k_datetimeedit_qbase_metric(void* self, int32_t param1) {
    return KDateTimeEdit_QBaseMetric((KDateTimeEdit*)self, param1);
}

void k_datetimeedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KDateTimeEdit_OnMetric((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_init_painter(void* self, void* painter) {
    KDateTimeEdit_InitPainter((KDateTimeEdit*)self, (QPainter*)painter);
}

void k_datetimeedit_qbase_init_painter(void* self, void* painter) {
    KDateTimeEdit_QBaseInitPainter((KDateTimeEdit*)self, (QPainter*)painter);
}

void k_datetimeedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnInitPainter((KDateTimeEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_datetimeedit_redirected(void* self, void* offset) {
    return KDateTimeEdit_Redirected((KDateTimeEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_datetimeedit_qbase_redirected(void* self, void* offset) {
    return KDateTimeEdit_QBaseRedirected((KDateTimeEdit*)self, (QPoint*)offset);
}

void k_datetimeedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KDateTimeEdit_OnRedirected((KDateTimeEdit*)self, (intptr_t)callback);
}

QPainter* k_datetimeedit_shared_painter(void* self) {
    return KDateTimeEdit_SharedPainter((KDateTimeEdit*)self);
}

QPainter* k_datetimeedit_qbase_shared_painter(void* self) {
    return KDateTimeEdit_QBaseSharedPainter((KDateTimeEdit*)self);
}

void k_datetimeedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    KDateTimeEdit_OnSharedPainter((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_input_method_event(void* self, void* param1) {
    KDateTimeEdit_InputMethodEvent((KDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

void k_datetimeedit_qbase_input_method_event(void* self, void* param1) {
    KDateTimeEdit_QBaseInputMethodEvent((KDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

void k_datetimeedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnInputMethodEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

QVariant* k_datetimeedit_input_method_query(void* self, int32_t param1) {
    return KDateTimeEdit_InputMethodQuery((KDateTimeEdit*)self, param1);
}

QVariant* k_datetimeedit_qbase_input_method_query(void* self, int32_t param1) {
    return KDateTimeEdit_QBaseInputMethodQuery((KDateTimeEdit*)self, param1);
}

void k_datetimeedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KDateTimeEdit_OnInputMethodQuery((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_focus_next_prev_child(void* self, bool next) {
    return KDateTimeEdit_FocusNextPrevChild((KDateTimeEdit*)self, next);
}

bool k_datetimeedit_qbase_focus_next_prev_child(void* self, bool next) {
    return KDateTimeEdit_QBaseFocusNextPrevChild((KDateTimeEdit*)self, next);
}

void k_datetimeedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KDateTimeEdit_OnFocusNextPrevChild((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_timer_event(void* self, void* event) {
    KDateTimeEdit_TimerEvent((KDateTimeEdit*)self, (QTimerEvent*)event);
}

void k_datetimeedit_qbase_timer_event(void* self, void* event) {
    KDateTimeEdit_QBaseTimerEvent((KDateTimeEdit*)self, (QTimerEvent*)event);
}

void k_datetimeedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnTimerEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_child_event(void* self, void* event) {
    KDateTimeEdit_ChildEvent((KDateTimeEdit*)self, (QChildEvent*)event);
}

void k_datetimeedit_qbase_child_event(void* self, void* event) {
    KDateTimeEdit_QBaseChildEvent((KDateTimeEdit*)self, (QChildEvent*)event);
}

void k_datetimeedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnChildEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_custom_event(void* self, void* event) {
    KDateTimeEdit_CustomEvent((KDateTimeEdit*)self, (QEvent*)event);
}

void k_datetimeedit_qbase_custom_event(void* self, void* event) {
    KDateTimeEdit_QBaseCustomEvent((KDateTimeEdit*)self, (QEvent*)event);
}

void k_datetimeedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnCustomEvent((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_connect_notify(void* self, void* signal) {
    KDateTimeEdit_ConnectNotify((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

void k_datetimeedit_qbase_connect_notify(void* self, void* signal) {
    KDateTimeEdit_QBaseConnectNotify((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

void k_datetimeedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnConnectNotify((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_disconnect_notify(void* self, void* signal) {
    KDateTimeEdit_DisconnectNotify((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

void k_datetimeedit_qbase_disconnect_notify(void* self, void* signal) {
    KDateTimeEdit_QBaseDisconnectNotify((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

void k_datetimeedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDateTimeEdit_OnDisconnectNotify((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_update_micro_focus(void* self) {
    KDateTimeEdit_UpdateMicroFocus((KDateTimeEdit*)self);
}

void k_datetimeedit_qbase_update_micro_focus(void* self) {
    KDateTimeEdit_QBaseUpdateMicroFocus((KDateTimeEdit*)self);
}

void k_datetimeedit_on_update_micro_focus(void* self, void (*callback)()) {
    KDateTimeEdit_OnUpdateMicroFocus((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_create(void* self) {
    KDateTimeEdit_Create((KDateTimeEdit*)self);
}

void k_datetimeedit_qbase_create(void* self) {
    KDateTimeEdit_QBaseCreate((KDateTimeEdit*)self);
}

void k_datetimeedit_on_create(void* self, void (*callback)()) {
    KDateTimeEdit_OnCreate((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_destroy(void* self) {
    KDateTimeEdit_Destroy((KDateTimeEdit*)self);
}

void k_datetimeedit_qbase_destroy(void* self) {
    KDateTimeEdit_QBaseDestroy((KDateTimeEdit*)self);
}

void k_datetimeedit_on_destroy(void* self, void (*callback)()) {
    KDateTimeEdit_OnDestroy((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_focus_next_child(void* self) {
    return KDateTimeEdit_FocusNextChild((KDateTimeEdit*)self);
}

bool k_datetimeedit_qbase_focus_next_child(void* self) {
    return KDateTimeEdit_QBaseFocusNextChild((KDateTimeEdit*)self);
}

void k_datetimeedit_on_focus_next_child(void* self, bool (*callback)()) {
    KDateTimeEdit_OnFocusNextChild((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_focus_previous_child(void* self) {
    return KDateTimeEdit_FocusPreviousChild((KDateTimeEdit*)self);
}

bool k_datetimeedit_qbase_focus_previous_child(void* self) {
    return KDateTimeEdit_QBaseFocusPreviousChild((KDateTimeEdit*)self);
}

void k_datetimeedit_on_focus_previous_child(void* self, bool (*callback)()) {
    KDateTimeEdit_OnFocusPreviousChild((KDateTimeEdit*)self, (intptr_t)callback);
}

QObject* k_datetimeedit_sender(void* self) {
    return KDateTimeEdit_Sender((KDateTimeEdit*)self);
}

QObject* k_datetimeedit_qbase_sender(void* self) {
    return KDateTimeEdit_QBaseSender((KDateTimeEdit*)self);
}

void k_datetimeedit_on_sender(void* self, QObject* (*callback)()) {
    KDateTimeEdit_OnSender((KDateTimeEdit*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_sender_signal_index(void* self) {
    return KDateTimeEdit_SenderSignalIndex((KDateTimeEdit*)self);
}

int32_t k_datetimeedit_qbase_sender_signal_index(void* self) {
    return KDateTimeEdit_QBaseSenderSignalIndex((KDateTimeEdit*)self);
}

void k_datetimeedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDateTimeEdit_OnSenderSignalIndex((KDateTimeEdit*)self, (intptr_t)callback);
}

int32_t k_datetimeedit_receivers(void* self, const char* signal) {
    return KDateTimeEdit_Receivers((KDateTimeEdit*)self, signal);
}

int32_t k_datetimeedit_qbase_receivers(void* self, const char* signal) {
    return KDateTimeEdit_QBaseReceivers((KDateTimeEdit*)self, signal);
}

void k_datetimeedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDateTimeEdit_OnReceivers((KDateTimeEdit*)self, (intptr_t)callback);
}

bool k_datetimeedit_is_signal_connected(void* self, void* signal) {
    return KDateTimeEdit_IsSignalConnected((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

bool k_datetimeedit_qbase_is_signal_connected(void* self, void* signal) {
    return KDateTimeEdit_QBaseIsSignalConnected((KDateTimeEdit*)self, (QMetaMethod*)signal);
}

void k_datetimeedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDateTimeEdit_OnIsSignalConnected((KDateTimeEdit*)self, (intptr_t)callback);
}

double k_datetimeedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDateTimeEdit_GetDecodedMetricF((KDateTimeEdit*)self, metricA, metricB);
}

double k_datetimeedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDateTimeEdit_QBaseGetDecodedMetricF((KDateTimeEdit*)self, metricA, metricB);
}

void k_datetimeedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KDateTimeEdit_OnGetDecodedMetricF((KDateTimeEdit*)self, (intptr_t)callback);
}

void k_datetimeedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_datetimeedit_delete(void* self) {
    KDateTimeEdit_Delete((KDateTimeEdit*)(self));
}
