#include "libqabstractspinbox.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcalendar.hpp"
#include "libqcalendarwidget.hpp"
#include "libqcursor.hpp"
#include "libqdatetime.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlineedit.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqdatetimeedit.hpp"
#include "libqdatetimeedit.h"

/// https://doc.qt.io/qt-6/qdatetimeedit.html

/// q_datetimeedit_new constructs a new QDateTimeEdit object.
///
/// ``` QWidget* parent ```
QDateTimeEdit* q_datetimeedit_new(void* parent) {
    return QDateTimeEdit_new((QWidget*)parent);
}

/// q_datetimeedit_new2 constructs a new QDateTimeEdit object.
///
///
QDateTimeEdit* q_datetimeedit_new2() {
    return QDateTimeEdit_new2();
}

/// q_datetimeedit_new3 constructs a new QDateTimeEdit object.
///
/// ``` QDateTime* dt ```
QDateTimeEdit* q_datetimeedit_new3(void* dt) {
    return QDateTimeEdit_new3((QDateTime*)dt);
}

/// q_datetimeedit_new4 constructs a new QDateTimeEdit object.
///
/// ``` QDate* d ```
QDateTimeEdit* q_datetimeedit_new4(void* d) {
    return QDateTimeEdit_new4((QDate*)d);
}

/// q_datetimeedit_new5 constructs a new QDateTimeEdit object.
///
/// ``` QTime* t ```
QDateTimeEdit* q_datetimeedit_new5(void* t) {
    return QDateTimeEdit_new5((QTime*)t);
}

/// q_datetimeedit_new6 constructs a new QDateTimeEdit object.
///
/// ``` QDateTime* dt, QWidget* parent ```
QDateTimeEdit* q_datetimeedit_new6(void* dt, void* parent) {
    return QDateTimeEdit_new6((QDateTime*)dt, (QWidget*)parent);
}

/// q_datetimeedit_new7 constructs a new QDateTimeEdit object.
///
/// ``` QDate* d, QWidget* parent ```
QDateTimeEdit* q_datetimeedit_new7(void* d, void* parent) {
    return QDateTimeEdit_new7((QDate*)d, (QWidget*)parent);
}

/// q_datetimeedit_new8 constructs a new QDateTimeEdit object.
///
/// ``` QTime* t, QWidget* parent ```
QDateTimeEdit* q_datetimeedit_new8(void* t, void* parent) {
    return QDateTimeEdit_new8((QTime*)t, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDateTimeEdit* self ```
QMetaObject* q_datetimeedit_meta_object(void* self) {
    return QDateTimeEdit_MetaObject((QDateTimeEdit*)self);
}

/// ``` QDateTimeEdit* self, const char* param1 ```
void* q_datetimeedit_metacast(void* self, const char* param1) {
    return QDateTimeEdit_Metacast((QDateTimeEdit*)self, param1);
}

/// ``` QDateTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeEdit_Metacall((QDateTimeEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)(QDateTimeEdit*, enum QMetaObject__Call, int, void*) ```
void q_datetimeedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDateTimeEdit_OnMetacall((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeEdit_QBaseMetacall((QDateTimeEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_datetimeedit_tr(const char* s) {
    libqt_string _str = QDateTimeEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// ``` QDateTimeEdit* self ```
QDateTime* q_datetimeedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// ``` QDateTimeEdit* self ```
QDate* q_datetimeedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// ``` QDateTimeEdit* self ```
QTime* q_datetimeedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// ``` QDateTimeEdit* self ```
QCalendar* q_datetimeedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// ``` QDateTimeEdit* self, QCalendar* calendar ```
void q_datetimeedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// ``` QDateTimeEdit* self ```
QDateTime* q_datetimeedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// ``` QDateTimeEdit* self, QDateTime* dt ```
void q_datetimeedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// ``` QDateTimeEdit* self ```
QDateTime* q_datetimeedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// ``` QDateTimeEdit* self, QDateTime* dt ```
void q_datetimeedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// ``` QDateTimeEdit* self, QDateTime* min, QDateTime* max ```
void q_datetimeedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// ``` QDateTimeEdit* self ```
QDate* q_datetimeedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// ``` QDateTimeEdit* self, QDate* min ```
void q_datetimeedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// ``` QDateTimeEdit* self ```
QDate* q_datetimeedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// ``` QDateTimeEdit* self, QDate* max ```
void q_datetimeedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// ``` QDateTimeEdit* self, QDate* min, QDate* max ```
void q_datetimeedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// ``` QDateTimeEdit* self ```
QTime* q_datetimeedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// ``` QDateTimeEdit* self, QTime* min ```
void q_datetimeedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// ``` QDateTimeEdit* self ```
QTime* q_datetimeedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// ``` QDateTimeEdit* self, QTime* max ```
void q_datetimeedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// ``` QDateTimeEdit* self, QTime* min, QTime* max ```
void q_datetimeedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// ``` QDateTimeEdit* self, int index ```
int64_t q_datetimeedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// ``` QDateTimeEdit* self, enum QDateTimeEdit__Section section ```
void q_datetimeedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// ``` QDateTimeEdit* self, int index ```
void q_datetimeedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// ``` QDateTimeEdit* self ```
QCalendarWidget* q_datetimeedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// ``` QDateTimeEdit* self, QCalendarWidget* calendarWidget ```
void q_datetimeedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// ``` QDateTimeEdit* self, enum QDateTimeEdit__Section section ```
void q_datetimeedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// ``` QDateTimeEdit* self, enum QDateTimeEdit__Section section ```
const char* q_datetimeedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// ``` QDateTimeEdit* self, const char* format ```
void q_datetimeedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// ``` QDateTimeEdit* self, bool enable ```
void q_datetimeedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// ``` QDateTimeEdit* self, enum Qt__TimeSpec spec ```
void q_datetimeedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_size_hint(void* self) {
    return QDateTimeEdit_SizeHint((QDateTimeEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, QSize* (*slot)() ```
void q_datetimeedit_on_size_hint(void* self, QSize* (*slot)()) {
    QDateTimeEdit_OnSizeHint((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_qbase_size_hint(void* self) {
    return QDateTimeEdit_QBaseSizeHint((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear(void* self) {
    QDateTimeEdit_Clear((QDateTimeEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)() ```
void q_datetimeedit_on_clear(void* self, void (*slot)()) {
    QDateTimeEdit_OnClear((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_qbase_clear(void* self) {
    QDateTimeEdit_QBaseClear((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// ``` QDateTimeEdit* self, int steps ```
void q_datetimeedit_step_by(void* self, int steps) {
    QDateTimeEdit_StepBy((QDateTimeEdit*)self, steps);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, int) ```
void q_datetimeedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QDateTimeEdit_OnStepBy((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, int steps ```
void q_datetimeedit_qbase_step_by(void* self, int steps) {
    QDateTimeEdit_QBaseStepBy((QDateTimeEdit*)self, steps);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// ``` QDateTimeEdit* self, QEvent* event ```
bool q_datetimeedit_event(void* self, void* event) {
    return QDateTimeEdit_Event((QDateTimeEdit*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, bool (*slot)(QDateTimeEdit*, QEvent*) ```
void q_datetimeedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QDateTimeEdit_OnEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QEvent* event ```
bool q_datetimeedit_qbase_event(void* self, void* event) {
    return QDateTimeEdit_QBaseEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// ``` QDateTimeEdit* self, QDateTime* dateTime ```
void q_datetimeedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDateTime*) ```
void q_datetimeedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// ``` QDateTimeEdit* self, QTime* time ```
void q_datetimeedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QTime*) ```
void q_datetimeedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// ``` QDateTimeEdit* self, QDate* date ```
void q_datetimeedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDate*) ```
void q_datetimeedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// ``` QDateTimeEdit* self, QDateTime* dateTime ```
void q_datetimeedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// ``` QDateTimeEdit* self, QDate* date ```
void q_datetimeedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// ``` QDateTimeEdit* self, QTime* time ```
void q_datetimeedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// ``` QDateTimeEdit* self, QKeyEvent* event ```
void q_datetimeedit_key_press_event(void* self, void* event) {
    QDateTimeEdit_KeyPressEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QKeyEvent*) ```
void q_datetimeedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnKeyPressEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QKeyEvent* event ```
void q_datetimeedit_qbase_key_press_event(void* self, void* event) {
    QDateTimeEdit_QBaseKeyPressEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// ``` QDateTimeEdit* self, QWheelEvent* event ```
void q_datetimeedit_wheel_event(void* self, void* event) {
    QDateTimeEdit_WheelEvent((QDateTimeEdit*)self, (QWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QWheelEvent*) ```
void q_datetimeedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnWheelEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QWheelEvent* event ```
void q_datetimeedit_qbase_wheel_event(void* self, void* event) {
    QDateTimeEdit_QBaseWheelEvent((QDateTimeEdit*)self, (QWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// ``` QDateTimeEdit* self, QFocusEvent* event ```
void q_datetimeedit_focus_in_event(void* self, void* event) {
    QDateTimeEdit_FocusInEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QFocusEvent*) ```
void q_datetimeedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnFocusInEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QFocusEvent* event ```
void q_datetimeedit_qbase_focus_in_event(void* self, void* event) {
    QDateTimeEdit_QBaseFocusInEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// ``` QDateTimeEdit* self, bool next ```
bool q_datetimeedit_focus_next_prev_child(void* self, bool next) {
    return QDateTimeEdit_FocusNextPrevChild((QDateTimeEdit*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, bool (*slot)(QDateTimeEdit*, bool) ```
void q_datetimeedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDateTimeEdit_OnFocusNextPrevChild((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, bool next ```
bool q_datetimeedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QDateTimeEdit_QBaseFocusNextPrevChild((QDateTimeEdit*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// ``` QDateTimeEdit* self, const char* input, int* pos ```
int64_t q_datetimeedit_validate(void* self, const char* input, int* pos) {
    return QDateTimeEdit_Validate((QDateTimeEdit*)self, qstring(input), pos);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, int64_t (*slot)(QDateTimeEdit*, const char*, int*) ```
void q_datetimeedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QDateTimeEdit_OnValidate((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, const char* input, int* pos ```
int64_t q_datetimeedit_qbase_validate(void* self, const char* input, int* pos) {
    return QDateTimeEdit_QBaseValidate((QDateTimeEdit*)self, qstring(input), pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// ``` QDateTimeEdit* self, const char* input ```
void q_datetimeedit_fixup(void* self, const char* input) {
    QDateTimeEdit_Fixup((QDateTimeEdit*)self, qstring(input));
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, const char*) ```
void q_datetimeedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QDateTimeEdit_OnFixup((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, const char* input ```
void q_datetimeedit_qbase_fixup(void* self, const char* input) {
    QDateTimeEdit_QBaseFixup((QDateTimeEdit*)self, qstring(input));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// ``` QDateTimeEdit* self, const char* text ```
QDateTime* q_datetimeedit_date_time_from_text(void* self, const char* text) {
    return QDateTimeEdit_DateTimeFromText((QDateTimeEdit*)self, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, QDateTime* (*slot)(QDateTimeEdit*, const char*) ```
void q_datetimeedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QDateTimeEdit_OnDateTimeFromText((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, const char* text ```
QDateTime* q_datetimeedit_qbase_date_time_from_text(void* self, const char* text) {
    return QDateTimeEdit_QBaseDateTimeFromText((QDateTimeEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// ``` QDateTimeEdit* self, QDateTime* dt ```
const char* q_datetimeedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateTimeEdit_TextFromDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, const char* (*slot)(QDateTimeEdit*, QDateTime*) ```
void q_datetimeedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QDateTimeEdit_OnTextFromDateTime((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QDateTime* dt ```
const char* q_datetimeedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateTimeEdit_QBaseTextFromDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_step_enabled(void* self) {
    return QDateTimeEdit_StepEnabled((QDateTimeEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, int64_t (*slot)() ```
void q_datetimeedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QDateTimeEdit_OnStepEnabled((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_qbase_step_enabled(void* self) {
    return QDateTimeEdit_QBaseStepEnabled((QDateTimeEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_mouse_press_event(void* self, void* event) {
    QDateTimeEdit_MousePressEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMouseEvent*) ```
void q_datetimeedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMousePressEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_qbase_mouse_press_event(void* self, void* event) {
    QDateTimeEdit_QBaseMousePressEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// ``` QDateTimeEdit* self, QPaintEvent* event ```
void q_datetimeedit_paint_event(void* self, void* event) {
    QDateTimeEdit_PaintEvent((QDateTimeEdit*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QPaintEvent*) ```
void q_datetimeedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnPaintEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QPaintEvent* event ```
void q_datetimeedit_qbase_paint_event(void* self, void* event) {
    QDateTimeEdit_QBasePaintEvent((QDateTimeEdit*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// ``` QDateTimeEdit* self, QStyleOptionSpinBox* option ```
void q_datetimeedit_init_style_option(void* self, void* option) {
    QDateTimeEdit_InitStyleOption((QDateTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QStyleOptionSpinBox*) ```
void q_datetimeedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInitStyleOption((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeEdit* self, QStyleOptionSpinBox* option ```
void q_datetimeedit_qbase_init_style_option(void* self, void* option) {
    QDateTimeEdit_QBaseInitStyleOption((QDateTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_datetimeedit_tr2(const char* s, const char* c) {
    libqt_string _str = QDateTimeEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_datetimeedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDateTimeEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QDateTimeEdit* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_datetimeedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QDateTimeEdit* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_datetimeedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QDateTimeEdit* self, const char* txt ```
void q_datetimeedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QDateTimeEdit* self, bool w ```
void q_datetimeedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QDateTimeEdit* self, bool r ```
void q_datetimeedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QDateTimeEdit* self, bool kt ```
void q_datetimeedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QDateTimeEdit* self, int flag ```
void q_datetimeedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QDateTimeEdit* self, bool frame ```
void q_datetimeedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QDateTimeEdit* self, bool on ```
void q_datetimeedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QDateTimeEdit* self, bool shown ```
void q_datetimeedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// ``` QDateTimeEdit* self, void (*slot)(QAbstractSpinBox*) ```
void q_datetimeedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDateTimeEdit* self ```
uintptr_t q_datetimeedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDateTimeEdit* self ```
uintptr_t q_datetimeedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDateTimeEdit* self ```
uintptr_t q_datetimeedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDateTimeEdit* self ```
QStyle* q_datetimeedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDateTimeEdit* self, QStyle* style ```
void q_datetimeedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDateTimeEdit* self, enum Qt__WindowModality windowModality ```
void q_datetimeedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDateTimeEdit* self, QWidget* param1 ```
bool q_datetimeedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDateTimeEdit* self, bool enabled ```
void q_datetimeedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDateTimeEdit* self, bool disabled ```
void q_datetimeedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDateTimeEdit* self, bool windowModified ```
void q_datetimeedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDateTimeEdit* self ```
QPoint* q_datetimeedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDateTimeEdit* self ```
QRegion* q_datetimeedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDateTimeEdit* self, QSize* minimumSize ```
void q_datetimeedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDateTimeEdit* self, int minw, int minh ```
void q_datetimeedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDateTimeEdit* self, QSize* maximumSize ```
void q_datetimeedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDateTimeEdit* self, int maxw, int maxh ```
void q_datetimeedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDateTimeEdit* self, int minw ```
void q_datetimeedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDateTimeEdit* self, int minh ```
void q_datetimeedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDateTimeEdit* self, int maxw ```
void q_datetimeedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDateTimeEdit* self, int maxh ```
void q_datetimeedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDateTimeEdit* self, QSize* sizeIncrement ```
void q_datetimeedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDateTimeEdit* self, int w, int h ```
void q_datetimeedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDateTimeEdit* self, QSize* baseSize ```
void q_datetimeedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDateTimeEdit* self, int basew, int baseh ```
void q_datetimeedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDateTimeEdit* self, QSize* fixedSize ```
void q_datetimeedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDateTimeEdit* self, int w, int h ```
void q_datetimeedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDateTimeEdit* self, int w ```
void q_datetimeedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDateTimeEdit* self, int h ```
void q_datetimeedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDateTimeEdit* self, QPointF* param1 ```
QPointF* q_datetimeedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDateTimeEdit* self, QPoint* param1 ```
QPoint* q_datetimeedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDateTimeEdit* self, QPointF* param1 ```
QPointF* q_datetimeedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDateTimeEdit* self, QPoint* param1 ```
QPoint* q_datetimeedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDateTimeEdit* self, QPointF* param1 ```
QPointF* q_datetimeedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDateTimeEdit* self, QPoint* param1 ```
QPoint* q_datetimeedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDateTimeEdit* self, QPointF* param1 ```
QPointF* q_datetimeedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDateTimeEdit* self, QPoint* param1 ```
QPoint* q_datetimeedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDateTimeEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_datetimeedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDateTimeEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_datetimeedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDateTimeEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_datetimeedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDateTimeEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_datetimeedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDateTimeEdit* self ```
QPalette* q_datetimeedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDateTimeEdit* self, QPalette* palette ```
void q_datetimeedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDateTimeEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_datetimeedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDateTimeEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_datetimeedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDateTimeEdit* self ```
QFont* q_datetimeedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDateTimeEdit* self, QFont* font ```
void q_datetimeedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDateTimeEdit* self ```
QFontMetrics* q_datetimeedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDateTimeEdit* self ```
QFontInfo* q_datetimeedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDateTimeEdit* self ```
QCursor* q_datetimeedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDateTimeEdit* self, QCursor* cursor ```
void q_datetimeedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDateTimeEdit* self, bool enable ```
void q_datetimeedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDateTimeEdit* self, bool enable ```
void q_datetimeedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDateTimeEdit* self, QBitmap* mask ```
void q_datetimeedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDateTimeEdit* self, QRegion* mask ```
void q_datetimeedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDateTimeEdit* self ```
QRegion* q_datetimeedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPaintDevice* target ```
void q_datetimeedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPainter* painter ```
void q_datetimeedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDateTimeEdit* self ```
QPixmap* q_datetimeedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDateTimeEdit* self ```
QGraphicsEffect* q_datetimeedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDateTimeEdit* self, QGraphicsEffect* effect ```
void q_datetimeedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDateTimeEdit* self, enum Qt__GestureType typeVal ```
void q_datetimeedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDateTimeEdit* self, enum Qt__GestureType typeVal ```
void q_datetimeedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDateTimeEdit* self, const char* windowTitle ```
void q_datetimeedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDateTimeEdit* self, const char* styleSheet ```
void q_datetimeedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDateTimeEdit* self, QIcon* icon ```
void q_datetimeedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDateTimeEdit* self ```
QIcon* q_datetimeedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDateTimeEdit* self, const char* windowIconText ```
void q_datetimeedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDateTimeEdit* self, const char* windowRole ```
void q_datetimeedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDateTimeEdit* self, const char* filePath ```
void q_datetimeedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDateTimeEdit* self, double level ```
void q_datetimeedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDateTimeEdit* self ```
double q_datetimeedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDateTimeEdit* self, const char* toolTip ```
void q_datetimeedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDateTimeEdit* self, int msec ```
void q_datetimeedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDateTimeEdit* self, const char* statusTip ```
void q_datetimeedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDateTimeEdit* self, const char* whatsThis ```
void q_datetimeedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDateTimeEdit* self, const char* name ```
void q_datetimeedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDateTimeEdit* self, const char* description ```
void q_datetimeedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDateTimeEdit* self, enum Qt__LayoutDirection direction ```
void q_datetimeedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDateTimeEdit* self, QLocale* locale ```
void q_datetimeedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDateTimeEdit* self ```
QLocale* q_datetimeedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDateTimeEdit* self, enum Qt__FocusReason reason ```
void q_datetimeedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDateTimeEdit* self, enum Qt__FocusPolicy policy ```
void q_datetimeedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_datetimeedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDateTimeEdit* self, QWidget* focusProxy ```
void q_datetimeedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDateTimeEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_datetimeedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDateTimeEdit* self, QCursor* param1 ```
void q_datetimeedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDateTimeEdit* self, QKeySequence* key ```
int32_t q_datetimeedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDateTimeEdit* self, int id ```
void q_datetimeedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDateTimeEdit* self, int id ```
void q_datetimeedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDateTimeEdit* self, int id ```
void q_datetimeedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_datetimeedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_datetimeedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDateTimeEdit* self, bool enable ```
void q_datetimeedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDateTimeEdit* self ```
QGraphicsProxyWidget* q_datetimeedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateTimeEdit* self, int x, int y, int w, int h ```
void q_datetimeedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateTimeEdit* self, QRect* param1 ```
void q_datetimeedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateTimeEdit* self, QRegion* param1 ```
void q_datetimeedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateTimeEdit* self, int x, int y, int w, int h ```
void q_datetimeedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateTimeEdit* self, QRect* param1 ```
void q_datetimeedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateTimeEdit* self, QRegion* param1 ```
void q_datetimeedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDateTimeEdit* self, bool hidden ```
void q_datetimeedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDateTimeEdit* self, QWidget* param1 ```
void q_datetimeedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDateTimeEdit* self, int x, int y ```
void q_datetimeedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDateTimeEdit* self, QPoint* param1 ```
void q_datetimeedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDateTimeEdit* self, int w, int h ```
void q_datetimeedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDateTimeEdit* self, QSize* param1 ```
void q_datetimeedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDateTimeEdit* self, int x, int y, int w, int h ```
void q_datetimeedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDateTimeEdit* self, QRect* geometry ```
void q_datetimeedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDateTimeEdit* self ```
char* q_datetimeedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDateTimeEdit* self, const char* geometry ```
bool q_datetimeedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDateTimeEdit* self, QWidget* param1 ```
bool q_datetimeedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDateTimeEdit* self, int state ```
void q_datetimeedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDateTimeEdit* self, int state ```
void q_datetimeedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDateTimeEdit* self ```
QSizePolicy* q_datetimeedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDateTimeEdit* self, QSizePolicy* sizePolicy ```
void q_datetimeedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDateTimeEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_datetimeedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDateTimeEdit* self ```
QRegion* q_datetimeedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDateTimeEdit* self, int left, int top, int right, int bottom ```
void q_datetimeedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDateTimeEdit* self, QMargins* margins ```
void q_datetimeedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDateTimeEdit* self ```
QMargins* q_datetimeedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDateTimeEdit* self ```
QRect* q_datetimeedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDateTimeEdit* self ```
QLayout* q_datetimeedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDateTimeEdit* self, QLayout* layout ```
void q_datetimeedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDateTimeEdit* self, QWidget* parent ```
void q_datetimeedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDateTimeEdit* self, QWidget* parent, int f ```
void q_datetimeedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDateTimeEdit* self, int dx, int dy ```
void q_datetimeedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDateTimeEdit* self, int dx, int dy, QRect* param3 ```
void q_datetimeedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDateTimeEdit* self, bool on ```
void q_datetimeedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateTimeEdit* self, QAction* action ```
void q_datetimeedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDateTimeEdit* self, QAction* actions[] ```
void q_datetimeedit_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QDateTimeEdit* self, QAction* before, QAction* actions[] ```
void q_datetimeedit_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QDateTimeEdit* self, QAction* before, QAction* action ```
void q_datetimeedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDateTimeEdit* self, QAction* action ```
void q_datetimeedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDateTimeEdit* self ```
libqt_list /* of QAction* */ q_datetimeedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateTimeEdit* self, const char* text ```
QAction* q_datetimeedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateTimeEdit* self, QIcon* icon, const char* text ```
QAction* q_datetimeedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateTimeEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_datetimeedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateTimeEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_datetimeedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDateTimeEdit* self ```
QWidget* q_datetimeedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDateTimeEdit* self, int typeVal ```
void q_datetimeedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDateTimeEdit* self, enum Qt__WindowType param1 ```
void q_datetimeedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDateTimeEdit* self, int typeVal ```
void q_datetimeedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_datetimeedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDateTimeEdit* self, int x, int y ```
QWidget* q_datetimeedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDateTimeEdit* self, QPoint* p ```
QWidget* q_datetimeedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDateTimeEdit* self, enum Qt__WidgetAttribute param1 ```
void q_datetimeedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDateTimeEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_datetimeedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDateTimeEdit* self, QWidget* child ```
bool q_datetimeedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDateTimeEdit* self, bool enabled ```
void q_datetimeedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDateTimeEdit* self ```
QBackingStore* q_datetimeedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDateTimeEdit* self ```
QWindow* q_datetimeedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDateTimeEdit* self ```
QScreen* q_datetimeedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDateTimeEdit* self, QScreen* screen ```
void q_datetimeedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_datetimeedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDateTimeEdit* self, const char* title ```
void q_datetimeedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QDateTimeEdit* self, void (*slot)(QWidget*, const char*) ```
void q_datetimeedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDateTimeEdit* self, QIcon* icon ```
void q_datetimeedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QDateTimeEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_datetimeedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDateTimeEdit* self, const char* iconText ```
void q_datetimeedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QDateTimeEdit* self, void (*slot)(QWidget*, const char*) ```
void q_datetimeedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDateTimeEdit* self, QPoint* pos ```
void q_datetimeedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QDateTimeEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_datetimeedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDateTimeEdit* self ```
int64_t q_datetimeedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDateTimeEdit* self, int hints ```
void q_datetimeedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_datetimeedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_datetimeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_datetimeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_datetimeedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_datetimeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateTimeEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_datetimeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDateTimeEdit* self, QRect* rectangle ```
QPixmap* q_datetimeedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDateTimeEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_datetimeedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDateTimeEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_datetimeedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDateTimeEdit* self, int id, bool enable ```
void q_datetimeedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDateTimeEdit* self, int id, bool enable ```
void q_datetimeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDateTimeEdit* self, enum Qt__WindowType param1, bool on ```
void q_datetimeedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDateTimeEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_datetimeedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_datetimeedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_datetimeedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDateTimeEdit* self ```
const char* q_datetimeedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDateTimeEdit* self, const char* name ```
void q_datetimeedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDateTimeEdit* self, bool b ```
bool q_datetimeedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDateTimeEdit* self ```
QThread* q_datetimeedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDateTimeEdit* self, QThread* thread ```
void q_datetimeedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeEdit* self, int interval ```
int32_t q_datetimeedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDateTimeEdit* self, int id ```
void q_datetimeedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDateTimeEdit* self ```
libqt_list /* of QObject* */ q_datetimeedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDateTimeEdit* self, QObject* filterObj ```
void q_datetimeedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDateTimeEdit* self, QObject* obj ```
void q_datetimeedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_datetimeedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_datetimeedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_datetimeedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_datetimeedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDateTimeEdit* self, const char* name, QVariant* value ```
bool q_datetimeedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDateTimeEdit* self, const char* name ```
QVariant* q_datetimeedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDateTimeEdit* self ```
const char** q_datetimeedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateTimeEdit* self ```
QBindingStorage* q_datetimeedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateTimeEdit* self ```
QBindingStorage* q_datetimeedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDateTimeEdit* self, void (*slot)(QObject*) ```
void q_datetimeedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDateTimeEdit* self ```
QObject* q_datetimeedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDateTimeEdit* self, const char* classname ```
bool q_datetimeedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_datetimeedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeEdit* self, QObject* param1 ```
void q_datetimeedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDateTimeEdit* self, void (*slot)(QObject*, QObject*) ```
void q_datetimeedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDateTimeEdit* self ```
double q_datetimeedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDateTimeEdit* self ```
double q_datetimeedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_datetimeedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_minimum_size_hint(void* self) {
    return QDateTimeEdit_MinimumSizeHint((QDateTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QSize* q_datetimeedit_qbase_minimum_size_hint(void* self) {
    return QDateTimeEdit_QBaseMinimumSizeHint((QDateTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QSize* (*slot)() ```
void q_datetimeedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDateTimeEdit_OnMinimumSizeHint((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_datetimeedit_input_method_query(void* self, int64_t param1) {
    return QDateTimeEdit_InputMethodQuery((QDateTimeEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_datetimeedit_qbase_input_method_query(void* self, int64_t param1) {
    return QDateTimeEdit_QBaseInputMethodQuery((QDateTimeEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QVariant* (*slot)(QDateTimeEdit*, enum Qt__InputMethodQuery) ```
void q_datetimeedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDateTimeEdit_OnInputMethodQuery((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QResizeEvent* event ```
void q_datetimeedit_resize_event(void* self, void* event) {
    QDateTimeEdit_ResizeEvent((QDateTimeEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QResizeEvent* event ```
void q_datetimeedit_qbase_resize_event(void* self, void* event) {
    QDateTimeEdit_QBaseResizeEvent((QDateTimeEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QResizeEvent*) ```
void q_datetimeedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnResizeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QKeyEvent* event ```
void q_datetimeedit_key_release_event(void* self, void* event) {
    QDateTimeEdit_KeyReleaseEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QKeyEvent* event ```
void q_datetimeedit_qbase_key_release_event(void* self, void* event) {
    QDateTimeEdit_QBaseKeyReleaseEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QKeyEvent*) ```
void q_datetimeedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnKeyReleaseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QFocusEvent* event ```
void q_datetimeedit_focus_out_event(void* self, void* event) {
    QDateTimeEdit_FocusOutEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QFocusEvent* event ```
void q_datetimeedit_qbase_focus_out_event(void* self, void* event) {
    QDateTimeEdit_QBaseFocusOutEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QFocusEvent*) ```
void q_datetimeedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnFocusOutEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QContextMenuEvent* event ```
void q_datetimeedit_context_menu_event(void* self, void* event) {
    QDateTimeEdit_ContextMenuEvent((QDateTimeEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QContextMenuEvent* event ```
void q_datetimeedit_qbase_context_menu_event(void* self, void* event) {
    QDateTimeEdit_QBaseContextMenuEvent((QDateTimeEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QContextMenuEvent*) ```
void q_datetimeedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnContextMenuEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_change_event(void* self, void* event) {
    QDateTimeEdit_ChangeEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_qbase_change_event(void* self, void* event) {
    QDateTimeEdit_QBaseChangeEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QEvent*) ```
void q_datetimeedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnChangeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QCloseEvent* event ```
void q_datetimeedit_close_event(void* self, void* event) {
    QDateTimeEdit_CloseEvent((QDateTimeEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QCloseEvent* event ```
void q_datetimeedit_qbase_close_event(void* self, void* event) {
    QDateTimeEdit_QBaseCloseEvent((QDateTimeEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QCloseEvent*) ```
void q_datetimeedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnCloseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QHideEvent* event ```
void q_datetimeedit_hide_event(void* self, void* event) {
    QDateTimeEdit_HideEvent((QDateTimeEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QHideEvent* event ```
void q_datetimeedit_qbase_hide_event(void* self, void* event) {
    QDateTimeEdit_QBaseHideEvent((QDateTimeEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QHideEvent*) ```
void q_datetimeedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnHideEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_mouse_release_event(void* self, void* event) {
    QDateTimeEdit_MouseReleaseEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_qbase_mouse_release_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseReleaseEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMouseEvent*) ```
void q_datetimeedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseReleaseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_mouse_move_event(void* self, void* event) {
    QDateTimeEdit_MouseMoveEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_qbase_mouse_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseMoveEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMouseEvent*) ```
void q_datetimeedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QTimerEvent* event ```
void q_datetimeedit_timer_event(void* self, void* event) {
    QDateTimeEdit_TimerEvent((QDateTimeEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QTimerEvent* event ```
void q_datetimeedit_qbase_timer_event(void* self, void* event) {
    QDateTimeEdit_QBaseTimerEvent((QDateTimeEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QTimerEvent*) ```
void q_datetimeedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnTimerEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QShowEvent* event ```
void q_datetimeedit_show_event(void* self, void* event) {
    QDateTimeEdit_ShowEvent((QDateTimeEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QShowEvent* event ```
void q_datetimeedit_qbase_show_event(void* self, void* event) {
    QDateTimeEdit_QBaseShowEvent((QDateTimeEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QShowEvent*) ```
void q_datetimeedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnShowEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_dev_type(void* self) {
    return QDateTimeEdit_DevType((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_qbase_dev_type(void* self) {
    return QDateTimeEdit_QBaseDevType((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)() ```
void q_datetimeedit_on_dev_type(void* self, int32_t (*slot)()) {
    QDateTimeEdit_OnDevType((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, bool visible ```
void q_datetimeedit_set_visible(void* self, bool visible) {
    QDateTimeEdit_SetVisible((QDateTimeEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool visible ```
void q_datetimeedit_qbase_set_visible(void* self, bool visible) {
    QDateTimeEdit_QBaseSetVisible((QDateTimeEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, bool) ```
void q_datetimeedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDateTimeEdit_OnSetVisible((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, int param1 ```
int32_t q_datetimeedit_height_for_width(void* self, int param1) {
    return QDateTimeEdit_HeightForWidth((QDateTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int param1 ```
int32_t q_datetimeedit_qbase_height_for_width(void* self, int param1) {
    return QDateTimeEdit_QBaseHeightForWidth((QDateTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)(QDateTimeEdit*, int) ```
void q_datetimeedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDateTimeEdit_OnHeightForWidth((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_has_height_for_width(void* self) {
    return QDateTimeEdit_HasHeightForWidth((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_qbase_has_height_for_width(void* self) {
    return QDateTimeEdit_QBaseHasHeightForWidth((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)() ```
void q_datetimeedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QDateTimeEdit_OnHasHeightForWidth((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QPaintEngine* q_datetimeedit_paint_engine(void* self) {
    return QDateTimeEdit_PaintEngine((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QPaintEngine* q_datetimeedit_qbase_paint_engine(void* self) {
    return QDateTimeEdit_QBasePaintEngine((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QPaintEngine* (*slot)() ```
void q_datetimeedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDateTimeEdit_OnPaintEngine((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_mouse_double_click_event(void* self, void* event) {
    QDateTimeEdit_MouseDoubleClickEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMouseEvent* event ```
void q_datetimeedit_qbase_mouse_double_click_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseDoubleClickEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMouseEvent*) ```
void q_datetimeedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseDoubleClickEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QEnterEvent* event ```
void q_datetimeedit_enter_event(void* self, void* event) {
    QDateTimeEdit_EnterEvent((QDateTimeEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QEnterEvent* event ```
void q_datetimeedit_qbase_enter_event(void* self, void* event) {
    QDateTimeEdit_QBaseEnterEvent((QDateTimeEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QEnterEvent*) ```
void q_datetimeedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnEnterEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_leave_event(void* self, void* event) {
    QDateTimeEdit_LeaveEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_qbase_leave_event(void* self, void* event) {
    QDateTimeEdit_QBaseLeaveEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QEvent*) ```
void q_datetimeedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnLeaveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMoveEvent* event ```
void q_datetimeedit_move_event(void* self, void* event) {
    QDateTimeEdit_MoveEvent((QDateTimeEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMoveEvent* event ```
void q_datetimeedit_qbase_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseMoveEvent((QDateTimeEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMoveEvent*) ```
void q_datetimeedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QTabletEvent* event ```
void q_datetimeedit_tablet_event(void* self, void* event) {
    QDateTimeEdit_TabletEvent((QDateTimeEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QTabletEvent* event ```
void q_datetimeedit_qbase_tablet_event(void* self, void* event) {
    QDateTimeEdit_QBaseTabletEvent((QDateTimeEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QTabletEvent*) ```
void q_datetimeedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnTabletEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QActionEvent* event ```
void q_datetimeedit_action_event(void* self, void* event) {
    QDateTimeEdit_ActionEvent((QDateTimeEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QActionEvent* event ```
void q_datetimeedit_qbase_action_event(void* self, void* event) {
    QDateTimeEdit_QBaseActionEvent((QDateTimeEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QActionEvent*) ```
void q_datetimeedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnActionEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragEnterEvent* event ```
void q_datetimeedit_drag_enter_event(void* self, void* event) {
    QDateTimeEdit_DragEnterEvent((QDateTimeEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragEnterEvent* event ```
void q_datetimeedit_qbase_drag_enter_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragEnterEvent((QDateTimeEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDragEnterEvent*) ```
void q_datetimeedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragEnterEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragMoveEvent* event ```
void q_datetimeedit_drag_move_event(void* self, void* event) {
    QDateTimeEdit_DragMoveEvent((QDateTimeEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragMoveEvent* event ```
void q_datetimeedit_qbase_drag_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragMoveEvent((QDateTimeEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDragMoveEvent*) ```
void q_datetimeedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragLeaveEvent* event ```
void q_datetimeedit_drag_leave_event(void* self, void* event) {
    QDateTimeEdit_DragLeaveEvent((QDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QDragLeaveEvent* event ```
void q_datetimeedit_qbase_drag_leave_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragLeaveEvent((QDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDragLeaveEvent*) ```
void q_datetimeedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragLeaveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QDropEvent* event ```
void q_datetimeedit_drop_event(void* self, void* event) {
    QDateTimeEdit_DropEvent((QDateTimeEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QDropEvent* event ```
void q_datetimeedit_qbase_drop_event(void* self, void* event) {
    QDateTimeEdit_QBaseDropEvent((QDateTimeEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QDropEvent*) ```
void q_datetimeedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDropEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_datetimeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateTimeEdit_NativeEvent((QDateTimeEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_datetimeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateTimeEdit_QBaseNativeEvent((QDateTimeEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)(QDateTimeEdit*, const char*, void*, intptr_t*) ```
void q_datetimeedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDateTimeEdit_OnNativeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_datetimeedit_metric(void* self, int64_t param1) {
    return QDateTimeEdit_Metric((QDateTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_datetimeedit_qbase_metric(void* self, int64_t param1) {
    return QDateTimeEdit_QBaseMetric((QDateTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)(QDateTimeEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_datetimeedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDateTimeEdit_OnMetric((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QPainter* painter ```
void q_datetimeedit_init_painter(void* self, void* painter) {
    QDateTimeEdit_InitPainter((QDateTimeEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QPainter* painter ```
void q_datetimeedit_qbase_init_painter(void* self, void* painter) {
    QDateTimeEdit_QBaseInitPainter((QDateTimeEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QPainter*) ```
void q_datetimeedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInitPainter((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QPoint* offset ```
QPaintDevice* q_datetimeedit_redirected(void* self, void* offset) {
    return QDateTimeEdit_Redirected((QDateTimeEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QPoint* offset ```
QPaintDevice* q_datetimeedit_qbase_redirected(void* self, void* offset) {
    return QDateTimeEdit_QBaseRedirected((QDateTimeEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QPaintDevice* (*slot)(QDateTimeEdit*, QPoint*) ```
void q_datetimeedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDateTimeEdit_OnRedirected((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QPainter* q_datetimeedit_shared_painter(void* self) {
    return QDateTimeEdit_SharedPainter((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QPainter* q_datetimeedit_qbase_shared_painter(void* self) {
    return QDateTimeEdit_QBaseSharedPainter((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QPainter* (*slot)() ```
void q_datetimeedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDateTimeEdit_OnSharedPainter((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QInputMethodEvent* param1 ```
void q_datetimeedit_input_method_event(void* self, void* param1) {
    QDateTimeEdit_InputMethodEvent((QDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QInputMethodEvent* param1 ```
void q_datetimeedit_qbase_input_method_event(void* self, void* param1) {
    QDateTimeEdit_QBaseInputMethodEvent((QDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QInputMethodEvent*) ```
void q_datetimeedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInputMethodEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QObject* watched, QEvent* event ```
bool q_datetimeedit_event_filter(void* self, void* watched, void* event) {
    return QDateTimeEdit_EventFilter((QDateTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QObject* watched, QEvent* event ```
bool q_datetimeedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QDateTimeEdit_QBaseEventFilter((QDateTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)(QDateTimeEdit*, QObject*, QEvent*) ```
void q_datetimeedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDateTimeEdit_OnEventFilter((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QChildEvent* event ```
void q_datetimeedit_child_event(void* self, void* event) {
    QDateTimeEdit_ChildEvent((QDateTimeEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QChildEvent* event ```
void q_datetimeedit_qbase_child_event(void* self, void* event) {
    QDateTimeEdit_QBaseChildEvent((QDateTimeEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QChildEvent*) ```
void q_datetimeedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnChildEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_custom_event(void* self, void* event) {
    QDateTimeEdit_CustomEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QEvent* event ```
void q_datetimeedit_qbase_custom_event(void* self, void* event) {
    QDateTimeEdit_QBaseCustomEvent((QDateTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QEvent*) ```
void q_datetimeedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnCustomEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
void q_datetimeedit_connect_notify(void* self, void* signal) {
    QDateTimeEdit_ConnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
void q_datetimeedit_qbase_connect_notify(void* self, void* signal) {
    QDateTimeEdit_QBaseConnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMetaMethod*) ```
void q_datetimeedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnConnectNotify((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
void q_datetimeedit_disconnect_notify(void* self, void* signal) {
    QDateTimeEdit_DisconnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
void q_datetimeedit_qbase_disconnect_notify(void* self, void* signal) {
    QDateTimeEdit_QBaseDisconnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QMetaMethod*) ```
void q_datetimeedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDisconnectNotify((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QLineEdit* q_datetimeedit_line_edit(void* self) {
    return QDateTimeEdit_LineEdit((QDateTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QLineEdit* q_datetimeedit_qbase_line_edit(void* self) {
    return QDateTimeEdit_QBaseLineEdit((QDateTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QLineEdit* (*slot)() ```
void q_datetimeedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QDateTimeEdit_OnLineEdit((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QLineEdit* edit ```
void q_datetimeedit_set_line_edit(void* self, void* edit) {
    QDateTimeEdit_SetLineEdit((QDateTimeEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QLineEdit* edit ```
void q_datetimeedit_qbase_set_line_edit(void* self, void* edit) {
    QDateTimeEdit_QBaseSetLineEdit((QDateTimeEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)(QDateTimeEdit*, QLineEdit*) ```
void q_datetimeedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnSetLineEdit((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_update_micro_focus(void* self) {
    QDateTimeEdit_UpdateMicroFocus((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_qbase_update_micro_focus(void* self) {
    QDateTimeEdit_QBaseUpdateMicroFocus((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)() ```
void q_datetimeedit_on_update_micro_focus(void* self, void (*slot)()) {
    QDateTimeEdit_OnUpdateMicroFocus((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_create(void* self) {
    QDateTimeEdit_Create((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_qbase_create(void* self) {
    QDateTimeEdit_QBaseCreate((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)() ```
void q_datetimeedit_on_create(void* self, void (*slot)()) {
    QDateTimeEdit_OnCreate((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_destroy(void* self) {
    QDateTimeEdit_Destroy((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_qbase_destroy(void* self) {
    QDateTimeEdit_QBaseDestroy((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, void (*slot)() ```
void q_datetimeedit_on_destroy(void* self, void (*slot)()) {
    QDateTimeEdit_OnDestroy((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_focus_next_child(void* self) {
    return QDateTimeEdit_FocusNextChild((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_qbase_focus_next_child(void* self) {
    return QDateTimeEdit_QBaseFocusNextChild((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)() ```
void q_datetimeedit_on_focus_next_child(void* self, bool (*slot)()) {
    QDateTimeEdit_OnFocusNextChild((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_focus_previous_child(void* self) {
    return QDateTimeEdit_FocusPreviousChild((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
bool q_datetimeedit_qbase_focus_previous_child(void* self) {
    return QDateTimeEdit_QBaseFocusPreviousChild((QDateTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)() ```
void q_datetimeedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QDateTimeEdit_OnFocusPreviousChild((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QObject* q_datetimeedit_sender(void* self) {
    return QDateTimeEdit_Sender((QDateTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
QObject* q_datetimeedit_qbase_sender(void* self) {
    return QDateTimeEdit_QBaseSender((QDateTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QObject* (*slot)() ```
void q_datetimeedit_on_sender(void* self, QObject* (*slot)()) {
    QDateTimeEdit_OnSender((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_sender_signal_index(void* self) {
    return QDateTimeEdit_SenderSignalIndex((QDateTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self ```
int32_t q_datetimeedit_qbase_sender_signal_index(void* self) {
    return QDateTimeEdit_QBaseSenderSignalIndex((QDateTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)() ```
void q_datetimeedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDateTimeEdit_OnSenderSignalIndex((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, const char* signal ```
int32_t q_datetimeedit_receivers(void* self, const char* signal) {
    return QDateTimeEdit_Receivers((QDateTimeEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, const char* signal ```
int32_t q_datetimeedit_qbase_receivers(void* self, const char* signal) {
    return QDateTimeEdit_QBaseReceivers((QDateTimeEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, int32_t (*slot)(QDateTimeEdit*, const char*) ```
void q_datetimeedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDateTimeEdit_OnReceivers((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
bool q_datetimeedit_is_signal_connected(void* self, void* signal) {
    return QDateTimeEdit_IsSignalConnected((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeEdit* self, QMetaMethod* signal ```
bool q_datetimeedit_qbase_is_signal_connected(void* self, void* signal) {
    return QDateTimeEdit_QBaseIsSignalConnected((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeEdit* self, bool (*slot)(QDateTimeEdit*, QMetaMethod*) ```
void q_datetimeedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDateTimeEdit_OnIsSignalConnected((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDateTimeEdit* self ```
void q_datetimeedit_delete(void* self) {
    QDateTimeEdit_Delete((QDateTimeEdit*)(self));
}

/// https://doc.qt.io/qt-6/qtimeedit.html

/// q_timeedit_new constructs a new QTimeEdit object.
///
/// ``` QWidget* parent ```
QTimeEdit* q_timeedit_new(void* parent) {
    return QTimeEdit_new((QWidget*)parent);
}

/// q_timeedit_new2 constructs a new QTimeEdit object.
///
///
QTimeEdit* q_timeedit_new2() {
    return QTimeEdit_new2();
}

/// q_timeedit_new3 constructs a new QTimeEdit object.
///
/// ``` QTime* time ```
QTimeEdit* q_timeedit_new3(void* time) {
    return QTimeEdit_new3((QTime*)time);
}

/// q_timeedit_new4 constructs a new QTimeEdit object.
///
/// ``` QTime* time, QWidget* parent ```
QTimeEdit* q_timeedit_new4(void* time, void* parent) {
    return QTimeEdit_new4((QTime*)time, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTimeEdit* self ```
QMetaObject* q_timeedit_meta_object(void* self) {
    return QTimeEdit_MetaObject((QTimeEdit*)self);
}

/// ``` QTimeEdit* self, const char* param1 ```
void* q_timeedit_metacast(void* self, const char* param1) {
    return QTimeEdit_Metacast((QTimeEdit*)self, param1);
}

/// ``` QTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeEdit_Metacall((QTimeEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTimeEdit* self, int32_t (*slot)(QTimeEdit*, enum QMetaObject__Call, int, void*) ```
void q_timeedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTimeEdit_OnMetacall((QTimeEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimeEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeEdit_QBaseMetacall((QTimeEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_timeedit_tr(const char* s) {
    libqt_string _str = QTimeEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeedit.html#userTimeChanged)
///
/// ``` QTimeEdit* self, QTime* time ```
void q_timeedit_user_time_changed(void* self, void* time) {
    QTimeEdit_UserTimeChanged((QTimeEdit*)self, (QTime*)time);
}

/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QTime*) ```
void q_timeedit_on_user_time_changed(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_Connect_UserTimeChanged((QTimeEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_timeedit_tr2(const char* s, const char* c) {
    libqt_string _str = QTimeEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_timeedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTimeEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// ``` QTimeEdit* self ```
QDateTime* q_timeedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// ``` QTimeEdit* self ```
QDate* q_timeedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// ``` QTimeEdit* self ```
QTime* q_timeedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// ``` QTimeEdit* self ```
QCalendar* q_timeedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// ``` QTimeEdit* self, QCalendar* calendar ```
void q_timeedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// ``` QTimeEdit* self ```
QDateTime* q_timeedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// ``` QTimeEdit* self, QDateTime* dt ```
void q_timeedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// ``` QTimeEdit* self ```
QDateTime* q_timeedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// ``` QTimeEdit* self, QDateTime* dt ```
void q_timeedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// ``` QTimeEdit* self, QDateTime* min, QDateTime* max ```
void q_timeedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// ``` QTimeEdit* self ```
QDate* q_timeedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// ``` QTimeEdit* self, QDate* min ```
void q_timeedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// ``` QTimeEdit* self ```
QDate* q_timeedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// ``` QTimeEdit* self, QDate* max ```
void q_timeedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// ``` QTimeEdit* self, QDate* min, QDate* max ```
void q_timeedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// ``` QTimeEdit* self ```
QTime* q_timeedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// ``` QTimeEdit* self, QTime* min ```
void q_timeedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// ``` QTimeEdit* self ```
QTime* q_timeedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// ``` QTimeEdit* self, QTime* max ```
void q_timeedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// ``` QTimeEdit* self, QTime* min, QTime* max ```
void q_timeedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// ``` QTimeEdit* self, int index ```
int64_t q_timeedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// ``` QTimeEdit* self, enum QDateTimeEdit__Section section ```
void q_timeedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// ``` QTimeEdit* self, int index ```
void q_timeedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// ``` QTimeEdit* self ```
QCalendarWidget* q_timeedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// ``` QTimeEdit* self, QCalendarWidget* calendarWidget ```
void q_timeedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// ``` QTimeEdit* self, enum QDateTimeEdit__Section section ```
void q_timeedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// ``` QTimeEdit* self, enum QDateTimeEdit__Section section ```
const char* q_timeedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// ``` QTimeEdit* self, const char* format ```
void q_timeedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// ``` QTimeEdit* self, bool enable ```
void q_timeedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// ``` QTimeEdit* self, enum Qt__TimeSpec spec ```
void q_timeedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// ``` QTimeEdit* self, QDateTime* dateTime ```
void q_timeedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// Inherited from QDateTimeEdit
///
/// ``` QTimeEdit* self, void (*slot)(QDateTimeEdit*, QDateTime*) ```
void q_timeedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// ``` QTimeEdit* self, QTime* time ```
void q_timeedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

/// Inherited from QDateTimeEdit
///
/// ``` QTimeEdit* self, void (*slot)(QDateTimeEdit*, QTime*) ```
void q_timeedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// ``` QTimeEdit* self, QDate* date ```
void q_timeedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

/// Inherited from QDateTimeEdit
///
/// ``` QTimeEdit* self, void (*slot)(QDateTimeEdit*, QDate*) ```
void q_timeedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// ``` QTimeEdit* self, QDateTime* dateTime ```
void q_timeedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// ``` QTimeEdit* self, QDate* date ```
void q_timeedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// ``` QTimeEdit* self, QTime* time ```
void q_timeedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QTimeEdit* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_timeedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QTimeEdit* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_timeedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QTimeEdit* self, const char* txt ```
void q_timeedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QTimeEdit* self, bool w ```
void q_timeedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QTimeEdit* self, bool r ```
void q_timeedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QTimeEdit* self, bool kt ```
void q_timeedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QTimeEdit* self, int flag ```
void q_timeedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QTimeEdit* self, bool frame ```
void q_timeedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QTimeEdit* self, bool on ```
void q_timeedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QTimeEdit* self, bool shown ```
void q_timeedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QTimeEdit* self ```
void q_timeedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QTimeEdit* self ```
void q_timeedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QTimeEdit* self ```
void q_timeedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QTimeEdit* self ```
void q_timeedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QTimeEdit* self ```
void q_timeedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// ``` QTimeEdit* self, void (*slot)(QAbstractSpinBox*) ```
void q_timeedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTimeEdit* self ```
uintptr_t q_timeedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTimeEdit* self ```
void q_timeedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTimeEdit* self ```
uintptr_t q_timeedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTimeEdit* self ```
uintptr_t q_timeedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTimeEdit* self ```
QStyle* q_timeedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTimeEdit* self, QStyle* style ```
void q_timeedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTimeEdit* self, enum Qt__WindowModality windowModality ```
void q_timeedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTimeEdit* self, QWidget* param1 ```
bool q_timeedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTimeEdit* self, bool enabled ```
void q_timeedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTimeEdit* self, bool disabled ```
void q_timeedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTimeEdit* self, bool windowModified ```
void q_timeedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTimeEdit* self ```
QPoint* q_timeedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTimeEdit* self ```
QRegion* q_timeedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTimeEdit* self, QSize* minimumSize ```
void q_timeedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTimeEdit* self, int minw, int minh ```
void q_timeedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTimeEdit* self, QSize* maximumSize ```
void q_timeedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTimeEdit* self, int maxw, int maxh ```
void q_timeedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTimeEdit* self, int minw ```
void q_timeedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTimeEdit* self, int minh ```
void q_timeedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTimeEdit* self, int maxw ```
void q_timeedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTimeEdit* self, int maxh ```
void q_timeedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTimeEdit* self, QSize* sizeIncrement ```
void q_timeedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTimeEdit* self, int w, int h ```
void q_timeedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTimeEdit* self, QSize* baseSize ```
void q_timeedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTimeEdit* self, int basew, int baseh ```
void q_timeedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTimeEdit* self, QSize* fixedSize ```
void q_timeedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTimeEdit* self, int w, int h ```
void q_timeedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTimeEdit* self, int w ```
void q_timeedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTimeEdit* self, int h ```
void q_timeedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTimeEdit* self, QPointF* param1 ```
QPointF* q_timeedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTimeEdit* self, QPoint* param1 ```
QPoint* q_timeedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTimeEdit* self, QPointF* param1 ```
QPointF* q_timeedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTimeEdit* self, QPoint* param1 ```
QPoint* q_timeedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTimeEdit* self, QPointF* param1 ```
QPointF* q_timeedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTimeEdit* self, QPoint* param1 ```
QPoint* q_timeedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTimeEdit* self, QPointF* param1 ```
QPointF* q_timeedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTimeEdit* self, QPoint* param1 ```
QPoint* q_timeedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTimeEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_timeedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTimeEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_timeedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTimeEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_timeedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTimeEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_timeedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTimeEdit* self ```
QPalette* q_timeedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTimeEdit* self, QPalette* palette ```
void q_timeedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTimeEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_timeedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTimeEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_timeedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTimeEdit* self ```
QFont* q_timeedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTimeEdit* self, QFont* font ```
void q_timeedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTimeEdit* self ```
QFontMetrics* q_timeedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTimeEdit* self ```
QFontInfo* q_timeedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTimeEdit* self ```
QCursor* q_timeedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTimeEdit* self, QCursor* cursor ```
void q_timeedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTimeEdit* self ```
void q_timeedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTimeEdit* self, bool enable ```
void q_timeedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTimeEdit* self, bool enable ```
void q_timeedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTimeEdit* self, QBitmap* mask ```
void q_timeedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTimeEdit* self, QRegion* mask ```
void q_timeedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTimeEdit* self ```
QRegion* q_timeedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPaintDevice* target ```
void q_timeedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPainter* painter ```
void q_timeedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTimeEdit* self ```
QPixmap* q_timeedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTimeEdit* self ```
QGraphicsEffect* q_timeedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTimeEdit* self, QGraphicsEffect* effect ```
void q_timeedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTimeEdit* self, enum Qt__GestureType typeVal ```
void q_timeedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTimeEdit* self, enum Qt__GestureType typeVal ```
void q_timeedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTimeEdit* self, const char* windowTitle ```
void q_timeedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTimeEdit* self, const char* styleSheet ```
void q_timeedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTimeEdit* self, QIcon* icon ```
void q_timeedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTimeEdit* self ```
QIcon* q_timeedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTimeEdit* self, const char* windowIconText ```
void q_timeedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTimeEdit* self, const char* windowRole ```
void q_timeedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTimeEdit* self, const char* filePath ```
void q_timeedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTimeEdit* self, double level ```
void q_timeedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTimeEdit* self ```
double q_timeedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTimeEdit* self, const char* toolTip ```
void q_timeedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTimeEdit* self, int msec ```
void q_timeedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTimeEdit* self, const char* statusTip ```
void q_timeedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTimeEdit* self, const char* whatsThis ```
void q_timeedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTimeEdit* self, const char* name ```
void q_timeedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTimeEdit* self, const char* description ```
void q_timeedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTimeEdit* self, enum Qt__LayoutDirection direction ```
void q_timeedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTimeEdit* self ```
void q_timeedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTimeEdit* self, QLocale* locale ```
void q_timeedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTimeEdit* self ```
QLocale* q_timeedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTimeEdit* self ```
void q_timeedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTimeEdit* self ```
void q_timeedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTimeEdit* self ```
void q_timeedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTimeEdit* self, enum Qt__FocusReason reason ```
void q_timeedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTimeEdit* self, enum Qt__FocusPolicy policy ```
void q_timeedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_timeedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTimeEdit* self, QWidget* focusProxy ```
void q_timeedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTimeEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_timeedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTimeEdit* self ```
void q_timeedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTimeEdit* self, QCursor* param1 ```
void q_timeedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTimeEdit* self ```
void q_timeedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTimeEdit* self ```
void q_timeedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTimeEdit* self ```
void q_timeedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTimeEdit* self, QKeySequence* key ```
int32_t q_timeedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTimeEdit* self, int id ```
void q_timeedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTimeEdit* self, int id ```
void q_timeedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTimeEdit* self, int id ```
void q_timeedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_timeedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_timeedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTimeEdit* self, bool enable ```
void q_timeedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTimeEdit* self ```
QGraphicsProxyWidget* q_timeedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTimeEdit* self ```
void q_timeedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTimeEdit* self ```
void q_timeedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTimeEdit* self, int x, int y, int w, int h ```
void q_timeedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTimeEdit* self, QRect* param1 ```
void q_timeedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTimeEdit* self, QRegion* param1 ```
void q_timeedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTimeEdit* self, int x, int y, int w, int h ```
void q_timeedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTimeEdit* self, QRect* param1 ```
void q_timeedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTimeEdit* self, QRegion* param1 ```
void q_timeedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTimeEdit* self, bool hidden ```
void q_timeedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTimeEdit* self ```
void q_timeedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTimeEdit* self ```
void q_timeedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTimeEdit* self ```
void q_timeedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTimeEdit* self ```
void q_timeedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTimeEdit* self ```
void q_timeedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTimeEdit* self ```
void q_timeedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTimeEdit* self ```
void q_timeedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTimeEdit* self ```
void q_timeedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTimeEdit* self, QWidget* param1 ```
void q_timeedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTimeEdit* self, int x, int y ```
void q_timeedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTimeEdit* self, QPoint* param1 ```
void q_timeedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTimeEdit* self, int w, int h ```
void q_timeedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTimeEdit* self, QSize* param1 ```
void q_timeedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTimeEdit* self, int x, int y, int w, int h ```
void q_timeedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTimeEdit* self, QRect* geometry ```
void q_timeedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTimeEdit* self ```
char* q_timeedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTimeEdit* self, const char* geometry ```
bool q_timeedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTimeEdit* self ```
void q_timeedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTimeEdit* self, QWidget* param1 ```
bool q_timeedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTimeEdit* self, int state ```
void q_timeedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTimeEdit* self, int state ```
void q_timeedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTimeEdit* self ```
QSizePolicy* q_timeedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTimeEdit* self, QSizePolicy* sizePolicy ```
void q_timeedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTimeEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_timeedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTimeEdit* self ```
QRegion* q_timeedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTimeEdit* self, int left, int top, int right, int bottom ```
void q_timeedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTimeEdit* self, QMargins* margins ```
void q_timeedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTimeEdit* self ```
QMargins* q_timeedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTimeEdit* self ```
QRect* q_timeedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTimeEdit* self ```
QLayout* q_timeedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTimeEdit* self, QLayout* layout ```
void q_timeedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTimeEdit* self ```
void q_timeedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTimeEdit* self, QWidget* parent ```
void q_timeedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTimeEdit* self, QWidget* parent, int f ```
void q_timeedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTimeEdit* self, int dx, int dy ```
void q_timeedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTimeEdit* self, int dx, int dy, QRect* param3 ```
void q_timeedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTimeEdit* self, bool on ```
void q_timeedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTimeEdit* self, QAction* action ```
void q_timeedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTimeEdit* self, QAction* actions[] ```
void q_timeedit_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTimeEdit* self, QAction* before, QAction* actions[] ```
void q_timeedit_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTimeEdit* self, QAction* before, QAction* action ```
void q_timeedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTimeEdit* self, QAction* action ```
void q_timeedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTimeEdit* self ```
libqt_list /* of QAction* */ q_timeedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTimeEdit* self, const char* text ```
QAction* q_timeedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTimeEdit* self, QIcon* icon, const char* text ```
QAction* q_timeedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTimeEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_timeedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTimeEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_timeedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTimeEdit* self ```
QWidget* q_timeedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTimeEdit* self, int typeVal ```
void q_timeedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTimeEdit* self, enum Qt__WindowType param1 ```
void q_timeedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTimeEdit* self, int typeVal ```
void q_timeedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_timeedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTimeEdit* self, int x, int y ```
QWidget* q_timeedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTimeEdit* self, QPoint* p ```
QWidget* q_timeedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTimeEdit* self, enum Qt__WidgetAttribute param1 ```
void q_timeedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTimeEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_timeedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTimeEdit* self ```
void q_timeedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTimeEdit* self, QWidget* child ```
bool q_timeedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTimeEdit* self, bool enabled ```
void q_timeedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTimeEdit* self ```
QBackingStore* q_timeedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTimeEdit* self ```
QWindow* q_timeedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTimeEdit* self ```
QScreen* q_timeedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTimeEdit* self, QScreen* screen ```
void q_timeedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_timeedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTimeEdit* self, const char* title ```
void q_timeedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTimeEdit* self, void (*slot)(QWidget*, const char*) ```
void q_timeedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTimeEdit* self, QIcon* icon ```
void q_timeedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTimeEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_timeedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTimeEdit* self, const char* iconText ```
void q_timeedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTimeEdit* self, void (*slot)(QWidget*, const char*) ```
void q_timeedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTimeEdit* self, QPoint* pos ```
void q_timeedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTimeEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_timeedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTimeEdit* self, int hints ```
void q_timeedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_timeedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_timeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_timeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_timeedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_timeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTimeEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_timeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTimeEdit* self, QRect* rectangle ```
QPixmap* q_timeedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTimeEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_timeedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTimeEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_timeedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTimeEdit* self, int id, bool enable ```
void q_timeedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTimeEdit* self, int id, bool enable ```
void q_timeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTimeEdit* self, enum Qt__WindowType param1, bool on ```
void q_timeedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTimeEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_timeedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_timeedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_timeedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTimeEdit* self ```
const char* q_timeedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTimeEdit* self, const char* name ```
void q_timeedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTimeEdit* self, bool b ```
bool q_timeedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTimeEdit* self ```
QThread* q_timeedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTimeEdit* self, QThread* thread ```
void q_timeedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeEdit* self, int interval ```
int32_t q_timeedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTimeEdit* self, int id ```
void q_timeedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTimeEdit* self ```
libqt_list /* of QObject* */ q_timeedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTimeEdit* self, QObject* filterObj ```
void q_timeedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTimeEdit* self, QObject* obj ```
void q_timeedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_timeedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_timeedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_timeedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_timeedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTimeEdit* self ```
void q_timeedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTimeEdit* self ```
void q_timeedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTimeEdit* self, const char* name, QVariant* value ```
bool q_timeedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTimeEdit* self, const char* name ```
QVariant* q_timeedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTimeEdit* self ```
const char** q_timeedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimeEdit* self ```
QBindingStorage* q_timeedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimeEdit* self ```
QBindingStorage* q_timeedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeEdit* self ```
void q_timeedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTimeEdit* self, void (*slot)(QObject*) ```
void q_timeedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTimeEdit* self ```
QObject* q_timeedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTimeEdit* self, const char* classname ```
bool q_timeedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTimeEdit* self ```
void q_timeedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_timeedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeEdit* self, QObject* param1 ```
void q_timeedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTimeEdit* self, void (*slot)(QObject*, QObject*) ```
void q_timeedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTimeEdit* self ```
bool q_timeedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTimeEdit* self ```
double q_timeedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTimeEdit* self ```
double q_timeedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_timeedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_size_hint(void* self) {
    return QTimeEdit_SizeHint((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_qbase_size_hint(void* self) {
    return QTimeEdit_QBaseSizeHint((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QSize* (*slot)() ```
void q_timeedit_on_size_hint(void* self, QSize* (*slot)()) {
    QTimeEdit_OnSizeHint((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_clear(void* self) {
    QTimeEdit_Clear((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_qbase_clear(void* self) {
    QTimeEdit_QBaseClear((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)() ```
void q_timeedit_on_clear(void* self, void (*slot)()) {
    QTimeEdit_OnClear((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, int steps ```
void q_timeedit_step_by(void* self, int steps) {
    QTimeEdit_StepBy((QTimeEdit*)self, steps);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, int steps ```
void q_timeedit_qbase_step_by(void* self, int steps) {
    QTimeEdit_QBaseStepBy((QTimeEdit*)self, steps);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, int) ```
void q_timeedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QTimeEdit_OnStepBy((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
bool q_timeedit_event(void* self, void* event) {
    return QTimeEdit_Event((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
bool q_timeedit_qbase_event(void* self, void* event) {
    return QTimeEdit_QBaseEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)(QTimeEdit*, QEvent*) ```
void q_timeedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QTimeEdit_OnEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QKeyEvent* event ```
void q_timeedit_key_press_event(void* self, void* event) {
    QTimeEdit_KeyPressEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QKeyEvent* event ```
void q_timeedit_qbase_key_press_event(void* self, void* event) {
    QTimeEdit_QBaseKeyPressEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QKeyEvent*) ```
void q_timeedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnKeyPressEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QWheelEvent* event ```
void q_timeedit_wheel_event(void* self, void* event) {
    QTimeEdit_WheelEvent((QTimeEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QWheelEvent* event ```
void q_timeedit_qbase_wheel_event(void* self, void* event) {
    QTimeEdit_QBaseWheelEvent((QTimeEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QWheelEvent*) ```
void q_timeedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnWheelEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QFocusEvent* event ```
void q_timeedit_focus_in_event(void* self, void* event) {
    QTimeEdit_FocusInEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QFocusEvent* event ```
void q_timeedit_qbase_focus_in_event(void* self, void* event) {
    QTimeEdit_QBaseFocusInEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QFocusEvent*) ```
void q_timeedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnFocusInEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, bool next ```
bool q_timeedit_focus_next_prev_child(void* self, bool next) {
    return QTimeEdit_FocusNextPrevChild((QTimeEdit*)self, next);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, bool next ```
bool q_timeedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QTimeEdit_QBaseFocusNextPrevChild((QTimeEdit*)self, next);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)(QTimeEdit*, bool) ```
void q_timeedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTimeEdit_OnFocusNextPrevChild((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, const char* input, int* pos ```
int64_t q_timeedit_validate(void* self, const char* input, int* pos) {
    return QTimeEdit_Validate((QTimeEdit*)self, qstring(input), pos);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* input, int* pos ```
int64_t q_timeedit_qbase_validate(void* self, const char* input, int* pos) {
    return QTimeEdit_QBaseValidate((QTimeEdit*)self, qstring(input), pos);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int64_t (*slot)(QTimeEdit*, const char*, int*) ```
void q_timeedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QTimeEdit_OnValidate((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, const char* input ```
void q_timeedit_fixup(void* self, const char* input) {
    QTimeEdit_Fixup((QTimeEdit*)self, qstring(input));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* input ```
void q_timeedit_qbase_fixup(void* self, const char* input) {
    QTimeEdit_QBaseFixup((QTimeEdit*)self, qstring(input));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, const char*) ```
void q_timeedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QTimeEdit_OnFixup((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, const char* text ```
QDateTime* q_timeedit_date_time_from_text(void* self, const char* text) {
    return QTimeEdit_DateTimeFromText((QTimeEdit*)self, qstring(text));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* text ```
QDateTime* q_timeedit_qbase_date_time_from_text(void* self, const char* text) {
    return QTimeEdit_QBaseDateTimeFromText((QTimeEdit*)self, qstring(text));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QDateTime* (*slot)(QTimeEdit*, const char*) ```
void q_timeedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QTimeEdit_OnDateTimeFromText((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QDateTime* dt ```
const char* q_timeedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QTimeEdit_TextFromDateTime((QTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QDateTime* dt ```
const char* q_timeedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QTimeEdit_QBaseTextFromDateTime((QTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* (*slot)(QTimeEdit*, QDateTime*) ```
void q_timeedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QTimeEdit_OnTextFromDateTime((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_step_enabled(void* self) {
    return QTimeEdit_StepEnabled((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
int64_t q_timeedit_qbase_step_enabled(void* self) {
    return QTimeEdit_QBaseStepEnabled((QTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int64_t (*slot)() ```
void q_timeedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QTimeEdit_OnStepEnabled((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_mouse_press_event(void* self, void* event) {
    QTimeEdit_MousePressEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_qbase_mouse_press_event(void* self, void* event) {
    QTimeEdit_QBaseMousePressEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMouseEvent*) ```
void q_timeedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMousePressEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QPaintEvent* event ```
void q_timeedit_paint_event(void* self, void* event) {
    QTimeEdit_PaintEvent((QTimeEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QPaintEvent* event ```
void q_timeedit_qbase_paint_event(void* self, void* event) {
    QTimeEdit_QBasePaintEvent((QTimeEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QPaintEvent*) ```
void q_timeedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnPaintEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QStyleOptionSpinBox* option ```
void q_timeedit_init_style_option(void* self, void* option) {
    QTimeEdit_InitStyleOption((QTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QStyleOptionSpinBox* option ```
void q_timeedit_qbase_init_style_option(void* self, void* option) {
    QTimeEdit_QBaseInitStyleOption((QTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QStyleOptionSpinBox*) ```
void q_timeedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInitStyleOption((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_minimum_size_hint(void* self) {
    return QTimeEdit_MinimumSizeHint((QTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QSize* q_timeedit_qbase_minimum_size_hint(void* self) {
    return QTimeEdit_QBaseMinimumSizeHint((QTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QSize* (*slot)() ```
void q_timeedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTimeEdit_OnMinimumSizeHint((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_timeedit_input_method_query(void* self, int64_t param1) {
    return QTimeEdit_InputMethodQuery((QTimeEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_timeedit_qbase_input_method_query(void* self, int64_t param1) {
    return QTimeEdit_QBaseInputMethodQuery((QTimeEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QVariant* (*slot)(QTimeEdit*, enum Qt__InputMethodQuery) ```
void q_timeedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTimeEdit_OnInputMethodQuery((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QResizeEvent* event ```
void q_timeedit_resize_event(void* self, void* event) {
    QTimeEdit_ResizeEvent((QTimeEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QResizeEvent* event ```
void q_timeedit_qbase_resize_event(void* self, void* event) {
    QTimeEdit_QBaseResizeEvent((QTimeEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QResizeEvent*) ```
void q_timeedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnResizeEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QKeyEvent* event ```
void q_timeedit_key_release_event(void* self, void* event) {
    QTimeEdit_KeyReleaseEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QKeyEvent* event ```
void q_timeedit_qbase_key_release_event(void* self, void* event) {
    QTimeEdit_QBaseKeyReleaseEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QKeyEvent*) ```
void q_timeedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnKeyReleaseEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QFocusEvent* event ```
void q_timeedit_focus_out_event(void* self, void* event) {
    QTimeEdit_FocusOutEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QFocusEvent* event ```
void q_timeedit_qbase_focus_out_event(void* self, void* event) {
    QTimeEdit_QBaseFocusOutEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QFocusEvent*) ```
void q_timeedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnFocusOutEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QContextMenuEvent* event ```
void q_timeedit_context_menu_event(void* self, void* event) {
    QTimeEdit_ContextMenuEvent((QTimeEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QContextMenuEvent* event ```
void q_timeedit_qbase_context_menu_event(void* self, void* event) {
    QTimeEdit_QBaseContextMenuEvent((QTimeEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QContextMenuEvent*) ```
void q_timeedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnContextMenuEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_change_event(void* self, void* event) {
    QTimeEdit_ChangeEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_qbase_change_event(void* self, void* event) {
    QTimeEdit_QBaseChangeEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QEvent*) ```
void q_timeedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnChangeEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QCloseEvent* event ```
void q_timeedit_close_event(void* self, void* event) {
    QTimeEdit_CloseEvent((QTimeEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QCloseEvent* event ```
void q_timeedit_qbase_close_event(void* self, void* event) {
    QTimeEdit_QBaseCloseEvent((QTimeEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QCloseEvent*) ```
void q_timeedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnCloseEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QHideEvent* event ```
void q_timeedit_hide_event(void* self, void* event) {
    QTimeEdit_HideEvent((QTimeEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QHideEvent* event ```
void q_timeedit_qbase_hide_event(void* self, void* event) {
    QTimeEdit_QBaseHideEvent((QTimeEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QHideEvent*) ```
void q_timeedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnHideEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_mouse_release_event(void* self, void* event) {
    QTimeEdit_MouseReleaseEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_qbase_mouse_release_event(void* self, void* event) {
    QTimeEdit_QBaseMouseReleaseEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMouseEvent*) ```
void q_timeedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseReleaseEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_mouse_move_event(void* self, void* event) {
    QTimeEdit_MouseMoveEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_qbase_mouse_move_event(void* self, void* event) {
    QTimeEdit_QBaseMouseMoveEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMouseEvent*) ```
void q_timeedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QTimerEvent* event ```
void q_timeedit_timer_event(void* self, void* event) {
    QTimeEdit_TimerEvent((QTimeEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QTimerEvent* event ```
void q_timeedit_qbase_timer_event(void* self, void* event) {
    QTimeEdit_QBaseTimerEvent((QTimeEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QTimerEvent*) ```
void q_timeedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnTimerEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QShowEvent* event ```
void q_timeedit_show_event(void* self, void* event) {
    QTimeEdit_ShowEvent((QTimeEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QShowEvent* event ```
void q_timeedit_qbase_show_event(void* self, void* event) {
    QTimeEdit_QBaseShowEvent((QTimeEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QShowEvent*) ```
void q_timeedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnShowEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_dev_type(void* self) {
    return QTimeEdit_DevType((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_qbase_dev_type(void* self) {
    return QTimeEdit_QBaseDevType((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int32_t (*slot)() ```
void q_timeedit_on_dev_type(void* self, int32_t (*slot)()) {
    QTimeEdit_OnDevType((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, bool visible ```
void q_timeedit_set_visible(void* self, bool visible) {
    QTimeEdit_SetVisible((QTimeEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, bool visible ```
void q_timeedit_qbase_set_visible(void* self, bool visible) {
    QTimeEdit_QBaseSetVisible((QTimeEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, bool) ```
void q_timeedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTimeEdit_OnSetVisible((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, int param1 ```
int32_t q_timeedit_height_for_width(void* self, int param1) {
    return QTimeEdit_HeightForWidth((QTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, int param1 ```
int32_t q_timeedit_qbase_height_for_width(void* self, int param1) {
    return QTimeEdit_QBaseHeightForWidth((QTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int32_t (*slot)(QTimeEdit*, int) ```
void q_timeedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTimeEdit_OnHeightForWidth((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_has_height_for_width(void* self) {
    return QTimeEdit_HasHeightForWidth((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_qbase_has_height_for_width(void* self) {
    return QTimeEdit_QBaseHasHeightForWidth((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)() ```
void q_timeedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QTimeEdit_OnHasHeightForWidth((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QPaintEngine* q_timeedit_paint_engine(void* self) {
    return QTimeEdit_PaintEngine((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QPaintEngine* q_timeedit_qbase_paint_engine(void* self) {
    return QTimeEdit_QBasePaintEngine((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QPaintEngine* (*slot)() ```
void q_timeedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTimeEdit_OnPaintEngine((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_mouse_double_click_event(void* self, void* event) {
    QTimeEdit_MouseDoubleClickEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMouseEvent* event ```
void q_timeedit_qbase_mouse_double_click_event(void* self, void* event) {
    QTimeEdit_QBaseMouseDoubleClickEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMouseEvent*) ```
void q_timeedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseDoubleClickEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QEnterEvent* event ```
void q_timeedit_enter_event(void* self, void* event) {
    QTimeEdit_EnterEvent((QTimeEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QEnterEvent* event ```
void q_timeedit_qbase_enter_event(void* self, void* event) {
    QTimeEdit_QBaseEnterEvent((QTimeEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QEnterEvent*) ```
void q_timeedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnEnterEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_leave_event(void* self, void* event) {
    QTimeEdit_LeaveEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_qbase_leave_event(void* self, void* event) {
    QTimeEdit_QBaseLeaveEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QEvent*) ```
void q_timeedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnLeaveEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMoveEvent* event ```
void q_timeedit_move_event(void* self, void* event) {
    QTimeEdit_MoveEvent((QTimeEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMoveEvent* event ```
void q_timeedit_qbase_move_event(void* self, void* event) {
    QTimeEdit_QBaseMoveEvent((QTimeEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMoveEvent*) ```
void q_timeedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QTabletEvent* event ```
void q_timeedit_tablet_event(void* self, void* event) {
    QTimeEdit_TabletEvent((QTimeEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QTabletEvent* event ```
void q_timeedit_qbase_tablet_event(void* self, void* event) {
    QTimeEdit_QBaseTabletEvent((QTimeEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QTabletEvent*) ```
void q_timeedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnTabletEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QActionEvent* event ```
void q_timeedit_action_event(void* self, void* event) {
    QTimeEdit_ActionEvent((QTimeEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QActionEvent* event ```
void q_timeedit_qbase_action_event(void* self, void* event) {
    QTimeEdit_QBaseActionEvent((QTimeEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QActionEvent*) ```
void q_timeedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnActionEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QDragEnterEvent* event ```
void q_timeedit_drag_enter_event(void* self, void* event) {
    QTimeEdit_DragEnterEvent((QTimeEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QDragEnterEvent* event ```
void q_timeedit_qbase_drag_enter_event(void* self, void* event) {
    QTimeEdit_QBaseDragEnterEvent((QTimeEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QDragEnterEvent*) ```
void q_timeedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragEnterEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QDragMoveEvent* event ```
void q_timeedit_drag_move_event(void* self, void* event) {
    QTimeEdit_DragMoveEvent((QTimeEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QDragMoveEvent* event ```
void q_timeedit_qbase_drag_move_event(void* self, void* event) {
    QTimeEdit_QBaseDragMoveEvent((QTimeEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QDragMoveEvent*) ```
void q_timeedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QDragLeaveEvent* event ```
void q_timeedit_drag_leave_event(void* self, void* event) {
    QTimeEdit_DragLeaveEvent((QTimeEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QDragLeaveEvent* event ```
void q_timeedit_qbase_drag_leave_event(void* self, void* event) {
    QTimeEdit_QBaseDragLeaveEvent((QTimeEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QDragLeaveEvent*) ```
void q_timeedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragLeaveEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QDropEvent* event ```
void q_timeedit_drop_event(void* self, void* event) {
    QTimeEdit_DropEvent((QTimeEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QDropEvent* event ```
void q_timeedit_qbase_drop_event(void* self, void* event) {
    QTimeEdit_QBaseDropEvent((QTimeEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QDropEvent*) ```
void q_timeedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDropEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_timeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTimeEdit_NativeEvent((QTimeEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_timeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTimeEdit_QBaseNativeEvent((QTimeEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)(QTimeEdit*, const char*, void*, intptr_t*) ```
void q_timeedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTimeEdit_OnNativeEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_timeedit_metric(void* self, int64_t param1) {
    return QTimeEdit_Metric((QTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_timeedit_qbase_metric(void* self, int64_t param1) {
    return QTimeEdit_QBaseMetric((QTimeEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int32_t (*slot)(QTimeEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_timeedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTimeEdit_OnMetric((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QPainter* painter ```
void q_timeedit_init_painter(void* self, void* painter) {
    QTimeEdit_InitPainter((QTimeEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QPainter* painter ```
void q_timeedit_qbase_init_painter(void* self, void* painter) {
    QTimeEdit_QBaseInitPainter((QTimeEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QPainter*) ```
void q_timeedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInitPainter((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QPoint* offset ```
QPaintDevice* q_timeedit_redirected(void* self, void* offset) {
    return QTimeEdit_Redirected((QTimeEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QPoint* offset ```
QPaintDevice* q_timeedit_qbase_redirected(void* self, void* offset) {
    return QTimeEdit_QBaseRedirected((QTimeEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QPaintDevice* (*slot)(QTimeEdit*, QPoint*) ```
void q_timeedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTimeEdit_OnRedirected((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QPainter* q_timeedit_shared_painter(void* self) {
    return QTimeEdit_SharedPainter((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QPainter* q_timeedit_qbase_shared_painter(void* self) {
    return QTimeEdit_QBaseSharedPainter((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QPainter* (*slot)() ```
void q_timeedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTimeEdit_OnSharedPainter((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QInputMethodEvent* param1 ```
void q_timeedit_input_method_event(void* self, void* param1) {
    QTimeEdit_InputMethodEvent((QTimeEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QInputMethodEvent* param1 ```
void q_timeedit_qbase_input_method_event(void* self, void* param1) {
    QTimeEdit_QBaseInputMethodEvent((QTimeEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QInputMethodEvent*) ```
void q_timeedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInputMethodEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QObject* watched, QEvent* event ```
bool q_timeedit_event_filter(void* self, void* watched, void* event) {
    return QTimeEdit_EventFilter((QTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QObject* watched, QEvent* event ```
bool q_timeedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QTimeEdit_QBaseEventFilter((QTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)(QTimeEdit*, QObject*, QEvent*) ```
void q_timeedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTimeEdit_OnEventFilter((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QChildEvent* event ```
void q_timeedit_child_event(void* self, void* event) {
    QTimeEdit_ChildEvent((QTimeEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QChildEvent* event ```
void q_timeedit_qbase_child_event(void* self, void* event) {
    QTimeEdit_QBaseChildEvent((QTimeEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QChildEvent*) ```
void q_timeedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnChildEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_custom_event(void* self, void* event) {
    QTimeEdit_CustomEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QEvent* event ```
void q_timeedit_qbase_custom_event(void* self, void* event) {
    QTimeEdit_QBaseCustomEvent((QTimeEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QEvent*) ```
void q_timeedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnCustomEvent((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
void q_timeedit_connect_notify(void* self, void* signal) {
    QTimeEdit_ConnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
void q_timeedit_qbase_connect_notify(void* self, void* signal) {
    QTimeEdit_QBaseConnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMetaMethod*) ```
void q_timeedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnConnectNotify((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
void q_timeedit_disconnect_notify(void* self, void* signal) {
    QTimeEdit_DisconnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
void q_timeedit_qbase_disconnect_notify(void* self, void* signal) {
    QTimeEdit_QBaseDisconnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QMetaMethod*) ```
void q_timeedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDisconnectNotify((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QLineEdit* q_timeedit_line_edit(void* self) {
    return QTimeEdit_LineEdit((QTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QLineEdit* q_timeedit_qbase_line_edit(void* self) {
    return QTimeEdit_QBaseLineEdit((QTimeEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QLineEdit* (*slot)() ```
void q_timeedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QTimeEdit_OnLineEdit((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QLineEdit* edit ```
void q_timeedit_set_line_edit(void* self, void* edit) {
    QTimeEdit_SetLineEdit((QTimeEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QLineEdit* edit ```
void q_timeedit_qbase_set_line_edit(void* self, void* edit) {
    QTimeEdit_QBaseSetLineEdit((QTimeEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)(QTimeEdit*, QLineEdit*) ```
void q_timeedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnSetLineEdit((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_update_micro_focus(void* self) {
    QTimeEdit_UpdateMicroFocus((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_qbase_update_micro_focus(void* self) {
    QTimeEdit_QBaseUpdateMicroFocus((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)() ```
void q_timeedit_on_update_micro_focus(void* self, void (*slot)()) {
    QTimeEdit_OnUpdateMicroFocus((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_create(void* self) {
    QTimeEdit_Create((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_qbase_create(void* self) {
    QTimeEdit_QBaseCreate((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)() ```
void q_timeedit_on_create(void* self, void (*slot)()) {
    QTimeEdit_OnCreate((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_destroy(void* self) {
    QTimeEdit_Destroy((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
void q_timeedit_qbase_destroy(void* self) {
    QTimeEdit_QBaseDestroy((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, void (*slot)() ```
void q_timeedit_on_destroy(void* self, void (*slot)()) {
    QTimeEdit_OnDestroy((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_focus_next_child(void* self) {
    return QTimeEdit_FocusNextChild((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_qbase_focus_next_child(void* self) {
    return QTimeEdit_QBaseFocusNextChild((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)() ```
void q_timeedit_on_focus_next_child(void* self, bool (*slot)()) {
    QTimeEdit_OnFocusNextChild((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_focus_previous_child(void* self) {
    return QTimeEdit_FocusPreviousChild((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
bool q_timeedit_qbase_focus_previous_child(void* self) {
    return QTimeEdit_QBaseFocusPreviousChild((QTimeEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)() ```
void q_timeedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QTimeEdit_OnFocusPreviousChild((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
QObject* q_timeedit_sender(void* self) {
    return QTimeEdit_Sender((QTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
QObject* q_timeedit_qbase_sender(void* self) {
    return QTimeEdit_QBaseSender((QTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, QObject* (*slot)() ```
void q_timeedit_on_sender(void* self, QObject* (*slot)()) {
    QTimeEdit_OnSender((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_sender_signal_index(void* self) {
    return QTimeEdit_SenderSignalIndex((QTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self ```
int32_t q_timeedit_qbase_sender_signal_index(void* self) {
    return QTimeEdit_QBaseSenderSignalIndex((QTimeEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int32_t (*slot)() ```
void q_timeedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTimeEdit_OnSenderSignalIndex((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, const char* signal ```
int32_t q_timeedit_receivers(void* self, const char* signal) {
    return QTimeEdit_Receivers((QTimeEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, const char* signal ```
int32_t q_timeedit_qbase_receivers(void* self, const char* signal) {
    return QTimeEdit_QBaseReceivers((QTimeEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, int32_t (*slot)(QTimeEdit*, const char*) ```
void q_timeedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTimeEdit_OnReceivers((QTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
bool q_timeedit_is_signal_connected(void* self, void* signal) {
    return QTimeEdit_IsSignalConnected((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeEdit* self, QMetaMethod* signal ```
bool q_timeedit_qbase_is_signal_connected(void* self, void* signal) {
    return QTimeEdit_QBaseIsSignalConnected((QTimeEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeEdit* self, bool (*slot)(QTimeEdit*, QMetaMethod*) ```
void q_timeedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTimeEdit_OnIsSignalConnected((QTimeEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTimeEdit* self ```
void q_timeedit_delete(void* self) {
    QTimeEdit_Delete((QTimeEdit*)(self));
}

/// https://doc.qt.io/qt-6/qdateedit.html

/// q_dateedit_new constructs a new QDateEdit object.
///
/// ``` QWidget* parent ```
QDateEdit* q_dateedit_new(void* parent) {
    return QDateEdit_new((QWidget*)parent);
}

/// q_dateedit_new2 constructs a new QDateEdit object.
///
///
QDateEdit* q_dateedit_new2() {
    return QDateEdit_new2();
}

/// q_dateedit_new3 constructs a new QDateEdit object.
///
/// ``` QDate* date ```
QDateEdit* q_dateedit_new3(void* date) {
    return QDateEdit_new3((QDate*)date);
}

/// q_dateedit_new4 constructs a new QDateEdit object.
///
/// ``` QDate* date, QWidget* parent ```
QDateEdit* q_dateedit_new4(void* date, void* parent) {
    return QDateEdit_new4((QDate*)date, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDateEdit* self ```
QMetaObject* q_dateedit_meta_object(void* self) {
    return QDateEdit_MetaObject((QDateEdit*)self);
}

/// ``` QDateEdit* self, const char* param1 ```
void* q_dateedit_metacast(void* self, const char* param1) {
    return QDateEdit_Metacast((QDateEdit*)self, param1);
}

/// ``` QDateEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dateedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateEdit_Metacall((QDateEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDateEdit* self, int32_t (*slot)(QDateEdit*, enum QMetaObject__Call, int, void*) ```
void q_dateedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDateEdit_OnMetacall((QDateEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dateedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateEdit_QBaseMetacall((QDateEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dateedit_tr(const char* s) {
    libqt_string _str = QDateEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdateedit.html#userDateChanged)
///
/// ``` QDateEdit* self, QDate* date ```
void q_dateedit_user_date_changed(void* self, void* date) {
    QDateEdit_UserDateChanged((QDateEdit*)self, (QDate*)date);
}

/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QDate*) ```
void q_dateedit_on_user_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateEdit_Connect_UserDateChanged((QDateEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dateedit_tr2(const char* s, const char* c) {
    libqt_string _str = QDateEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dateedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDateEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
///
/// ``` QDateEdit* self ```
QDateTime* q_dateedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
///
/// ``` QDateEdit* self ```
QDate* q_dateedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
///
/// ``` QDateEdit* self ```
QTime* q_dateedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
///
/// ``` QDateEdit* self ```
QCalendar* q_dateedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
///
/// ``` QDateEdit* self, QCalendar* calendar ```
void q_dateedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
///
/// ``` QDateEdit* self ```
QDateTime* q_dateedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
///
/// ``` QDateEdit* self, QDateTime* dt ```
void q_dateedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
///
/// ``` QDateEdit* self ```
QDateTime* q_dateedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
///
/// ``` QDateEdit* self, QDateTime* dt ```
void q_dateedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
///
/// ``` QDateEdit* self, QDateTime* min, QDateTime* max ```
void q_dateedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
///
/// ``` QDateEdit* self ```
QDate* q_dateedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
///
/// ``` QDateEdit* self, QDate* min ```
void q_dateedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
///
/// ``` QDateEdit* self ```
QDate* q_dateedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
///
/// ``` QDateEdit* self, QDate* max ```
void q_dateedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
///
/// ``` QDateEdit* self, QDate* min, QDate* max ```
void q_dateedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
///
/// ``` QDateEdit* self ```
QTime* q_dateedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
///
/// ``` QDateEdit* self, QTime* min ```
void q_dateedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
///
/// ``` QDateEdit* self ```
QTime* q_dateedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
///
/// ``` QDateEdit* self, QTime* max ```
void q_dateedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
///
/// ``` QDateEdit* self, QTime* min, QTime* max ```
void q_dateedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
///
/// ``` QDateEdit* self, int index ```
int64_t q_dateedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
///
/// ``` QDateEdit* self, enum QDateTimeEdit__Section section ```
void q_dateedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
///
/// ``` QDateEdit* self, int index ```
void q_dateedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
///
/// ``` QDateEdit* self ```
QCalendarWidget* q_dateedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
///
/// ``` QDateEdit* self, QCalendarWidget* calendarWidget ```
void q_dateedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
///
/// ``` QDateEdit* self, enum QDateTimeEdit__Section section ```
void q_dateedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
///
/// ``` QDateEdit* self, enum QDateTimeEdit__Section section ```
const char* q_dateedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
///
/// ``` QDateEdit* self, const char* format ```
void q_dateedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
///
/// ``` QDateEdit* self ```
bool q_dateedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
///
/// ``` QDateEdit* self, bool enable ```
void q_dateedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
///
/// ``` QDateEdit* self, enum Qt__TimeSpec spec ```
void q_dateedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
///
/// ``` QDateEdit* self, QDateTime* dateTime ```
void q_dateedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// Inherited from QDateTimeEdit
///
/// ``` QDateEdit* self, void (*slot)(QDateTimeEdit*, QDateTime*) ```
void q_dateedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
///
/// ``` QDateEdit* self, QTime* time ```
void q_dateedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

/// Inherited from QDateTimeEdit
///
/// ``` QDateEdit* self, void (*slot)(QDateTimeEdit*, QTime*) ```
void q_dateedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
///
/// ``` QDateEdit* self, QDate* date ```
void q_dateedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

/// Inherited from QDateTimeEdit
///
/// ``` QDateEdit* self, void (*slot)(QDateTimeEdit*, QDate*) ```
void q_dateedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
///
/// ``` QDateEdit* self, QDateTime* dateTime ```
void q_dateedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
///
/// ``` QDateEdit* self, QDate* date ```
void q_dateedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
///
/// ``` QDateEdit* self, QTime* time ```
void q_dateedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QDateEdit* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_dateedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QDateEdit* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_dateedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QDateEdit* self, const char* txt ```
void q_dateedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QDateEdit* self ```
bool q_dateedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QDateEdit* self, bool w ```
void q_dateedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QDateEdit* self, bool r ```
void q_dateedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QDateEdit* self, bool kt ```
void q_dateedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QDateEdit* self ```
bool q_dateedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QDateEdit* self, int flag ```
void q_dateedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QDateEdit* self, bool frame ```
void q_dateedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QDateEdit* self, bool on ```
void q_dateedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QDateEdit* self, bool shown ```
void q_dateedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QDateEdit* self ```
void q_dateedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QDateEdit* self ```
void q_dateedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QDateEdit* self ```
void q_dateedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QDateEdit* self ```
void q_dateedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QDateEdit* self ```
void q_dateedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

/// Inherited from QAbstractSpinBox
///
/// ``` QDateEdit* self, void (*slot)(QAbstractSpinBox*) ```
void q_dateedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDateEdit* self ```
uintptr_t q_dateedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDateEdit* self ```
void q_dateedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDateEdit* self ```
uintptr_t q_dateedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDateEdit* self ```
uintptr_t q_dateedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDateEdit* self ```
QStyle* q_dateedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDateEdit* self, QStyle* style ```
void q_dateedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDateEdit* self, enum Qt__WindowModality windowModality ```
void q_dateedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDateEdit* self, QWidget* param1 ```
bool q_dateedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDateEdit* self, bool enabled ```
void q_dateedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDateEdit* self, bool disabled ```
void q_dateedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDateEdit* self, bool windowModified ```
void q_dateedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDateEdit* self ```
QPoint* q_dateedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDateEdit* self ```
QRegion* q_dateedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDateEdit* self, QSize* minimumSize ```
void q_dateedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDateEdit* self, int minw, int minh ```
void q_dateedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDateEdit* self, QSize* maximumSize ```
void q_dateedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDateEdit* self, int maxw, int maxh ```
void q_dateedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDateEdit* self, int minw ```
void q_dateedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDateEdit* self, int minh ```
void q_dateedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDateEdit* self, int maxw ```
void q_dateedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDateEdit* self, int maxh ```
void q_dateedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDateEdit* self, QSize* sizeIncrement ```
void q_dateedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDateEdit* self, int w, int h ```
void q_dateedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDateEdit* self, QSize* baseSize ```
void q_dateedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDateEdit* self, int basew, int baseh ```
void q_dateedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDateEdit* self, QSize* fixedSize ```
void q_dateedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDateEdit* self, int w, int h ```
void q_dateedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDateEdit* self, int w ```
void q_dateedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDateEdit* self, int h ```
void q_dateedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDateEdit* self, QPointF* param1 ```
QPointF* q_dateedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDateEdit* self, QPoint* param1 ```
QPoint* q_dateedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDateEdit* self, QPointF* param1 ```
QPointF* q_dateedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDateEdit* self, QPoint* param1 ```
QPoint* q_dateedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDateEdit* self, QPointF* param1 ```
QPointF* q_dateedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDateEdit* self, QPoint* param1 ```
QPoint* q_dateedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDateEdit* self, QPointF* param1 ```
QPointF* q_dateedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDateEdit* self, QPoint* param1 ```
QPoint* q_dateedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDateEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dateedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDateEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dateedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDateEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dateedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDateEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dateedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDateEdit* self ```
QPalette* q_dateedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDateEdit* self, QPalette* palette ```
void q_dateedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDateEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_dateedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDateEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_dateedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDateEdit* self ```
QFont* q_dateedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDateEdit* self, QFont* font ```
void q_dateedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDateEdit* self ```
QFontMetrics* q_dateedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDateEdit* self ```
QFontInfo* q_dateedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDateEdit* self ```
QCursor* q_dateedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDateEdit* self, QCursor* cursor ```
void q_dateedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDateEdit* self ```
void q_dateedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDateEdit* self, bool enable ```
void q_dateedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDateEdit* self ```
bool q_dateedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDateEdit* self, bool enable ```
void q_dateedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDateEdit* self, QBitmap* mask ```
void q_dateedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDateEdit* self, QRegion* mask ```
void q_dateedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDateEdit* self ```
QRegion* q_dateedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPaintDevice* target ```
void q_dateedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPainter* painter ```
void q_dateedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDateEdit* self ```
QPixmap* q_dateedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDateEdit* self ```
QGraphicsEffect* q_dateedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDateEdit* self, QGraphicsEffect* effect ```
void q_dateedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDateEdit* self, enum Qt__GestureType typeVal ```
void q_dateedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDateEdit* self, enum Qt__GestureType typeVal ```
void q_dateedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDateEdit* self, const char* windowTitle ```
void q_dateedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDateEdit* self, const char* styleSheet ```
void q_dateedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDateEdit* self, QIcon* icon ```
void q_dateedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDateEdit* self ```
QIcon* q_dateedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDateEdit* self, const char* windowIconText ```
void q_dateedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDateEdit* self, const char* windowRole ```
void q_dateedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDateEdit* self, const char* filePath ```
void q_dateedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDateEdit* self, double level ```
void q_dateedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDateEdit* self ```
double q_dateedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDateEdit* self, const char* toolTip ```
void q_dateedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDateEdit* self, int msec ```
void q_dateedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDateEdit* self, const char* statusTip ```
void q_dateedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDateEdit* self, const char* whatsThis ```
void q_dateedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDateEdit* self, const char* name ```
void q_dateedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDateEdit* self, const char* description ```
void q_dateedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDateEdit* self, enum Qt__LayoutDirection direction ```
void q_dateedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDateEdit* self ```
void q_dateedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDateEdit* self, QLocale* locale ```
void q_dateedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDateEdit* self ```
QLocale* q_dateedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDateEdit* self ```
void q_dateedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDateEdit* self ```
void q_dateedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDateEdit* self ```
void q_dateedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDateEdit* self ```
void q_dateedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDateEdit* self, enum Qt__FocusReason reason ```
void q_dateedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDateEdit* self, enum Qt__FocusPolicy policy ```
void q_dateedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_dateedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDateEdit* self, QWidget* focusProxy ```
void q_dateedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDateEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_dateedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDateEdit* self ```
void q_dateedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDateEdit* self, QCursor* param1 ```
void q_dateedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDateEdit* self ```
void q_dateedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDateEdit* self ```
void q_dateedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDateEdit* self ```
void q_dateedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDateEdit* self, QKeySequence* key ```
int32_t q_dateedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDateEdit* self, int id ```
void q_dateedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDateEdit* self, int id ```
void q_dateedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDateEdit* self, int id ```
void q_dateedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_dateedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_dateedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDateEdit* self ```
bool q_dateedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDateEdit* self, bool enable ```
void q_dateedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDateEdit* self ```
QGraphicsProxyWidget* q_dateedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateEdit* self ```
void q_dateedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateEdit* self ```
void q_dateedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateEdit* self, int x, int y, int w, int h ```
void q_dateedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateEdit* self, QRect* param1 ```
void q_dateedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDateEdit* self, QRegion* param1 ```
void q_dateedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateEdit* self, int x, int y, int w, int h ```
void q_dateedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateEdit* self, QRect* param1 ```
void q_dateedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDateEdit* self, QRegion* param1 ```
void q_dateedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDateEdit* self, bool hidden ```
void q_dateedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDateEdit* self ```
void q_dateedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDateEdit* self ```
void q_dateedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDateEdit* self ```
void q_dateedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDateEdit* self ```
void q_dateedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDateEdit* self ```
void q_dateedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDateEdit* self ```
void q_dateedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDateEdit* self ```
bool q_dateedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDateEdit* self ```
void q_dateedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDateEdit* self ```
void q_dateedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDateEdit* self, QWidget* param1 ```
void q_dateedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDateEdit* self, int x, int y ```
void q_dateedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDateEdit* self, QPoint* param1 ```
void q_dateedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDateEdit* self, int w, int h ```
void q_dateedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDateEdit* self, QSize* param1 ```
void q_dateedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDateEdit* self, int x, int y, int w, int h ```
void q_dateedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDateEdit* self, QRect* geometry ```
void q_dateedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDateEdit* self ```
char* q_dateedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDateEdit* self, const char* geometry ```
bool q_dateedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDateEdit* self ```
void q_dateedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDateEdit* self, QWidget* param1 ```
bool q_dateedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDateEdit* self, int state ```
void q_dateedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDateEdit* self, int state ```
void q_dateedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDateEdit* self ```
QSizePolicy* q_dateedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDateEdit* self, QSizePolicy* sizePolicy ```
void q_dateedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDateEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_dateedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDateEdit* self ```
QRegion* q_dateedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDateEdit* self, int left, int top, int right, int bottom ```
void q_dateedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDateEdit* self, QMargins* margins ```
void q_dateedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDateEdit* self ```
QMargins* q_dateedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDateEdit* self ```
QRect* q_dateedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDateEdit* self ```
QLayout* q_dateedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDateEdit* self, QLayout* layout ```
void q_dateedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDateEdit* self ```
void q_dateedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDateEdit* self, QWidget* parent ```
void q_dateedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDateEdit* self, QWidget* parent, int f ```
void q_dateedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDateEdit* self, int dx, int dy ```
void q_dateedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDateEdit* self, int dx, int dy, QRect* param3 ```
void q_dateedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDateEdit* self ```
bool q_dateedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDateEdit* self, bool on ```
void q_dateedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateEdit* self, QAction* action ```
void q_dateedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDateEdit* self, QAction* actions[] ```
void q_dateedit_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QDateEdit* self, QAction* before, QAction* actions[] ```
void q_dateedit_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QDateEdit* self, QAction* before, QAction* action ```
void q_dateedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDateEdit* self, QAction* action ```
void q_dateedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDateEdit* self ```
libqt_list /* of QAction* */ q_dateedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateEdit* self, const char* text ```
QAction* q_dateedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateEdit* self, QIcon* icon, const char* text ```
QAction* q_dateedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_dateedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDateEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_dateedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDateEdit* self ```
QWidget* q_dateedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDateEdit* self, int typeVal ```
void q_dateedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDateEdit* self, enum Qt__WindowType param1 ```
void q_dateedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDateEdit* self, int typeVal ```
void q_dateedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_dateedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDateEdit* self, int x, int y ```
QWidget* q_dateedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDateEdit* self, QPoint* p ```
QWidget* q_dateedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDateEdit* self, enum Qt__WidgetAttribute param1 ```
void q_dateedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDateEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_dateedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDateEdit* self ```
void q_dateedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDateEdit* self, QWidget* child ```
bool q_dateedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDateEdit* self ```
bool q_dateedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDateEdit* self, bool enabled ```
void q_dateedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDateEdit* self ```
QBackingStore* q_dateedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDateEdit* self ```
QWindow* q_dateedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDateEdit* self ```
QScreen* q_dateedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDateEdit* self, QScreen* screen ```
void q_dateedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_dateedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDateEdit* self, const char* title ```
void q_dateedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QDateEdit* self, void (*slot)(QWidget*, const char*) ```
void q_dateedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDateEdit* self, QIcon* icon ```
void q_dateedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QDateEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_dateedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDateEdit* self, const char* iconText ```
void q_dateedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QDateEdit* self, void (*slot)(QWidget*, const char*) ```
void q_dateedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDateEdit* self, QPoint* pos ```
void q_dateedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QDateEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_dateedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDateEdit* self, int hints ```
void q_dateedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_dateedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dateedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dateedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_dateedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dateedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDateEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dateedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDateEdit* self, QRect* rectangle ```
QPixmap* q_dateedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDateEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_dateedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDateEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_dateedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDateEdit* self, int id, bool enable ```
void q_dateedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDateEdit* self, int id, bool enable ```
void q_dateedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDateEdit* self, enum Qt__WindowType param1, bool on ```
void q_dateedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDateEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_dateedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_dateedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_dateedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDateEdit* self ```
const char* q_dateedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDateEdit* self, const char* name ```
void q_dateedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDateEdit* self ```
bool q_dateedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDateEdit* self ```
bool q_dateedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDateEdit* self, bool b ```
bool q_dateedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDateEdit* self ```
QThread* q_dateedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDateEdit* self, QThread* thread ```
void q_dateedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateEdit* self, int interval ```
int32_t q_dateedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDateEdit* self, int id ```
void q_dateedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDateEdit* self ```
libqt_list /* of QObject* */ q_dateedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDateEdit* self, QObject* filterObj ```
void q_dateedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDateEdit* self, QObject* obj ```
void q_dateedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dateedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dateedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dateedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dateedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDateEdit* self ```
void q_dateedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDateEdit* self ```
void q_dateedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDateEdit* self, const char* name, QVariant* value ```
bool q_dateedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDateEdit* self, const char* name ```
QVariant* q_dateedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDateEdit* self ```
const char** q_dateedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateEdit* self ```
QBindingStorage* q_dateedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateEdit* self ```
QBindingStorage* q_dateedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateEdit* self ```
void q_dateedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDateEdit* self, void (*slot)(QObject*) ```
void q_dateedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDateEdit* self ```
QObject* q_dateedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDateEdit* self, const char* classname ```
bool q_dateedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDateEdit* self ```
void q_dateedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dateedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dateedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dateedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateEdit* self, QObject* param1 ```
void q_dateedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDateEdit* self, void (*slot)(QObject*, QObject*) ```
void q_dateedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDateEdit* self ```
bool q_dateedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDateEdit* self ```
double q_dateedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDateEdit* self ```
double q_dateedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_dateedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_size_hint(void* self) {
    return QDateEdit_SizeHint((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_qbase_size_hint(void* self) {
    return QDateEdit_QBaseSizeHint((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QSize* (*slot)() ```
void q_dateedit_on_size_hint(void* self, QSize* (*slot)()) {
    QDateEdit_OnSizeHint((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_clear(void* self) {
    QDateEdit_Clear((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_qbase_clear(void* self) {
    QDateEdit_QBaseClear((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)() ```
void q_dateedit_on_clear(void* self, void (*slot)()) {
    QDateEdit_OnClear((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, int steps ```
void q_dateedit_step_by(void* self, int steps) {
    QDateEdit_StepBy((QDateEdit*)self, steps);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, int steps ```
void q_dateedit_qbase_step_by(void* self, int steps) {
    QDateEdit_QBaseStepBy((QDateEdit*)self, steps);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, int) ```
void q_dateedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QDateEdit_OnStepBy((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
bool q_dateedit_event(void* self, void* event) {
    return QDateEdit_Event((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
bool q_dateedit_qbase_event(void* self, void* event) {
    return QDateEdit_QBaseEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)(QDateEdit*, QEvent*) ```
void q_dateedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QDateEdit_OnEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QKeyEvent* event ```
void q_dateedit_key_press_event(void* self, void* event) {
    QDateEdit_KeyPressEvent((QDateEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QKeyEvent* event ```
void q_dateedit_qbase_key_press_event(void* self, void* event) {
    QDateEdit_QBaseKeyPressEvent((QDateEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QKeyEvent*) ```
void q_dateedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnKeyPressEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QWheelEvent* event ```
void q_dateedit_wheel_event(void* self, void* event) {
    QDateEdit_WheelEvent((QDateEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QWheelEvent* event ```
void q_dateedit_qbase_wheel_event(void* self, void* event) {
    QDateEdit_QBaseWheelEvent((QDateEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QWheelEvent*) ```
void q_dateedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnWheelEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QFocusEvent* event ```
void q_dateedit_focus_in_event(void* self, void* event) {
    QDateEdit_FocusInEvent((QDateEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QFocusEvent* event ```
void q_dateedit_qbase_focus_in_event(void* self, void* event) {
    QDateEdit_QBaseFocusInEvent((QDateEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QFocusEvent*) ```
void q_dateedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnFocusInEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, bool next ```
bool q_dateedit_focus_next_prev_child(void* self, bool next) {
    return QDateEdit_FocusNextPrevChild((QDateEdit*)self, next);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, bool next ```
bool q_dateedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QDateEdit_QBaseFocusNextPrevChild((QDateEdit*)self, next);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)(QDateEdit*, bool) ```
void q_dateedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDateEdit_OnFocusNextPrevChild((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, const char* input, int* pos ```
int64_t q_dateedit_validate(void* self, const char* input, int* pos) {
    return QDateEdit_Validate((QDateEdit*)self, qstring(input), pos);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, const char* input, int* pos ```
int64_t q_dateedit_qbase_validate(void* self, const char* input, int* pos) {
    return QDateEdit_QBaseValidate((QDateEdit*)self, qstring(input), pos);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int64_t (*slot)(QDateEdit*, const char*, int*) ```
void q_dateedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QDateEdit_OnValidate((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, const char* input ```
void q_dateedit_fixup(void* self, const char* input) {
    QDateEdit_Fixup((QDateEdit*)self, qstring(input));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, const char* input ```
void q_dateedit_qbase_fixup(void* self, const char* input) {
    QDateEdit_QBaseFixup((QDateEdit*)self, qstring(input));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, const char*) ```
void q_dateedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QDateEdit_OnFixup((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, const char* text ```
QDateTime* q_dateedit_date_time_from_text(void* self, const char* text) {
    return QDateEdit_DateTimeFromText((QDateEdit*)self, qstring(text));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, const char* text ```
QDateTime* q_dateedit_qbase_date_time_from_text(void* self, const char* text) {
    return QDateEdit_QBaseDateTimeFromText((QDateEdit*)self, qstring(text));
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QDateTime* (*slot)(QDateEdit*, const char*) ```
void q_dateedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QDateEdit_OnDateTimeFromText((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QDateTime* dt ```
const char* q_dateedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateEdit_TextFromDateTime((QDateEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QDateTime* dt ```
const char* q_dateedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateEdit_QBaseTextFromDateTime((QDateEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, const char* (*slot)(QDateEdit*, QDateTime*) ```
void q_dateedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QDateEdit_OnTextFromDateTime((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_step_enabled(void* self) {
    return QDateEdit_StepEnabled((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
int64_t q_dateedit_qbase_step_enabled(void* self) {
    return QDateEdit_QBaseStepEnabled((QDateEdit*)self);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int64_t (*slot)() ```
void q_dateedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QDateEdit_OnStepEnabled((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_mouse_press_event(void* self, void* event) {
    QDateEdit_MousePressEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_qbase_mouse_press_event(void* self, void* event) {
    QDateEdit_QBaseMousePressEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMouseEvent*) ```
void q_dateedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMousePressEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QPaintEvent* event ```
void q_dateedit_paint_event(void* self, void* event) {
    QDateEdit_PaintEvent((QDateEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QPaintEvent* event ```
void q_dateedit_qbase_paint_event(void* self, void* event) {
    QDateEdit_QBasePaintEvent((QDateEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QPaintEvent*) ```
void q_dateedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnPaintEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QDateTimeEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QStyleOptionSpinBox* option ```
void q_dateedit_init_style_option(void* self, void* option) {
    QDateEdit_InitStyleOption((QDateEdit*)self, (QStyleOptionSpinBox*)option);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QStyleOptionSpinBox* option ```
void q_dateedit_qbase_init_style_option(void* self, void* option) {
    QDateEdit_QBaseInitStyleOption((QDateEdit*)self, (QStyleOptionSpinBox*)option);
}

/// Inherited from QDateTimeEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QStyleOptionSpinBox*) ```
void q_dateedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInitStyleOption((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_minimum_size_hint(void* self) {
    return QDateEdit_MinimumSizeHint((QDateEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QSize* q_dateedit_qbase_minimum_size_hint(void* self) {
    return QDateEdit_QBaseMinimumSizeHint((QDateEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QSize* (*slot)() ```
void q_dateedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDateEdit_OnMinimumSizeHint((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dateedit_input_method_query(void* self, int64_t param1) {
    return QDateEdit_InputMethodQuery((QDateEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dateedit_qbase_input_method_query(void* self, int64_t param1) {
    return QDateEdit_QBaseInputMethodQuery((QDateEdit*)self, param1);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QVariant* (*slot)(QDateEdit*, enum Qt__InputMethodQuery) ```
void q_dateedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDateEdit_OnInputMethodQuery((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QResizeEvent* event ```
void q_dateedit_resize_event(void* self, void* event) {
    QDateEdit_ResizeEvent((QDateEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QResizeEvent* event ```
void q_dateedit_qbase_resize_event(void* self, void* event) {
    QDateEdit_QBaseResizeEvent((QDateEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QResizeEvent*) ```
void q_dateedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnResizeEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QKeyEvent* event ```
void q_dateedit_key_release_event(void* self, void* event) {
    QDateEdit_KeyReleaseEvent((QDateEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QKeyEvent* event ```
void q_dateedit_qbase_key_release_event(void* self, void* event) {
    QDateEdit_QBaseKeyReleaseEvent((QDateEdit*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QKeyEvent*) ```
void q_dateedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnKeyReleaseEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QFocusEvent* event ```
void q_dateedit_focus_out_event(void* self, void* event) {
    QDateEdit_FocusOutEvent((QDateEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QFocusEvent* event ```
void q_dateedit_qbase_focus_out_event(void* self, void* event) {
    QDateEdit_QBaseFocusOutEvent((QDateEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QFocusEvent*) ```
void q_dateedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnFocusOutEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QContextMenuEvent* event ```
void q_dateedit_context_menu_event(void* self, void* event) {
    QDateEdit_ContextMenuEvent((QDateEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QContextMenuEvent* event ```
void q_dateedit_qbase_context_menu_event(void* self, void* event) {
    QDateEdit_QBaseContextMenuEvent((QDateEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QContextMenuEvent*) ```
void q_dateedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnContextMenuEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_change_event(void* self, void* event) {
    QDateEdit_ChangeEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_qbase_change_event(void* self, void* event) {
    QDateEdit_QBaseChangeEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QEvent*) ```
void q_dateedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnChangeEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QCloseEvent* event ```
void q_dateedit_close_event(void* self, void* event) {
    QDateEdit_CloseEvent((QDateEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QCloseEvent* event ```
void q_dateedit_qbase_close_event(void* self, void* event) {
    QDateEdit_QBaseCloseEvent((QDateEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QCloseEvent*) ```
void q_dateedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnCloseEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QHideEvent* event ```
void q_dateedit_hide_event(void* self, void* event) {
    QDateEdit_HideEvent((QDateEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QHideEvent* event ```
void q_dateedit_qbase_hide_event(void* self, void* event) {
    QDateEdit_QBaseHideEvent((QDateEdit*)self, (QHideEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QHideEvent*) ```
void q_dateedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnHideEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_mouse_release_event(void* self, void* event) {
    QDateEdit_MouseReleaseEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_qbase_mouse_release_event(void* self, void* event) {
    QDateEdit_QBaseMouseReleaseEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMouseEvent*) ```
void q_dateedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseReleaseEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_mouse_move_event(void* self, void* event) {
    QDateEdit_MouseMoveEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_qbase_mouse_move_event(void* self, void* event) {
    QDateEdit_QBaseMouseMoveEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMouseEvent*) ```
void q_dateedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QTimerEvent* event ```
void q_dateedit_timer_event(void* self, void* event) {
    QDateEdit_TimerEvent((QDateEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QTimerEvent* event ```
void q_dateedit_qbase_timer_event(void* self, void* event) {
    QDateEdit_QBaseTimerEvent((QDateEdit*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QTimerEvent*) ```
void q_dateedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnTimerEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QShowEvent* event ```
void q_dateedit_show_event(void* self, void* event) {
    QDateEdit_ShowEvent((QDateEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QShowEvent* event ```
void q_dateedit_qbase_show_event(void* self, void* event) {
    QDateEdit_QBaseShowEvent((QDateEdit*)self, (QShowEvent*)event);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QShowEvent*) ```
void q_dateedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnShowEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_dev_type(void* self) {
    return QDateEdit_DevType((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_qbase_dev_type(void* self) {
    return QDateEdit_QBaseDevType((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int32_t (*slot)() ```
void q_dateedit_on_dev_type(void* self, int32_t (*slot)()) {
    QDateEdit_OnDevType((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, bool visible ```
void q_dateedit_set_visible(void* self, bool visible) {
    QDateEdit_SetVisible((QDateEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, bool visible ```
void q_dateedit_qbase_set_visible(void* self, bool visible) {
    QDateEdit_QBaseSetVisible((QDateEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, bool) ```
void q_dateedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDateEdit_OnSetVisible((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, int param1 ```
int32_t q_dateedit_height_for_width(void* self, int param1) {
    return QDateEdit_HeightForWidth((QDateEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, int param1 ```
int32_t q_dateedit_qbase_height_for_width(void* self, int param1) {
    return QDateEdit_QBaseHeightForWidth((QDateEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int32_t (*slot)(QDateEdit*, int) ```
void q_dateedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDateEdit_OnHeightForWidth((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_has_height_for_width(void* self) {
    return QDateEdit_HasHeightForWidth((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_qbase_has_height_for_width(void* self) {
    return QDateEdit_QBaseHasHeightForWidth((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)() ```
void q_dateedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QDateEdit_OnHasHeightForWidth((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QPaintEngine* q_dateedit_paint_engine(void* self) {
    return QDateEdit_PaintEngine((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QPaintEngine* q_dateedit_qbase_paint_engine(void* self) {
    return QDateEdit_QBasePaintEngine((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QPaintEngine* (*slot)() ```
void q_dateedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDateEdit_OnPaintEngine((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_mouse_double_click_event(void* self, void* event) {
    QDateEdit_MouseDoubleClickEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMouseEvent* event ```
void q_dateedit_qbase_mouse_double_click_event(void* self, void* event) {
    QDateEdit_QBaseMouseDoubleClickEvent((QDateEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMouseEvent*) ```
void q_dateedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseDoubleClickEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QEnterEvent* event ```
void q_dateedit_enter_event(void* self, void* event) {
    QDateEdit_EnterEvent((QDateEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QEnterEvent* event ```
void q_dateedit_qbase_enter_event(void* self, void* event) {
    QDateEdit_QBaseEnterEvent((QDateEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QEnterEvent*) ```
void q_dateedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnEnterEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_leave_event(void* self, void* event) {
    QDateEdit_LeaveEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_qbase_leave_event(void* self, void* event) {
    QDateEdit_QBaseLeaveEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QEvent*) ```
void q_dateedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnLeaveEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMoveEvent* event ```
void q_dateedit_move_event(void* self, void* event) {
    QDateEdit_MoveEvent((QDateEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMoveEvent* event ```
void q_dateedit_qbase_move_event(void* self, void* event) {
    QDateEdit_QBaseMoveEvent((QDateEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMoveEvent*) ```
void q_dateedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QTabletEvent* event ```
void q_dateedit_tablet_event(void* self, void* event) {
    QDateEdit_TabletEvent((QDateEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QTabletEvent* event ```
void q_dateedit_qbase_tablet_event(void* self, void* event) {
    QDateEdit_QBaseTabletEvent((QDateEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QTabletEvent*) ```
void q_dateedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnTabletEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QActionEvent* event ```
void q_dateedit_action_event(void* self, void* event) {
    QDateEdit_ActionEvent((QDateEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QActionEvent* event ```
void q_dateedit_qbase_action_event(void* self, void* event) {
    QDateEdit_QBaseActionEvent((QDateEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QActionEvent*) ```
void q_dateedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnActionEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QDragEnterEvent* event ```
void q_dateedit_drag_enter_event(void* self, void* event) {
    QDateEdit_DragEnterEvent((QDateEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QDragEnterEvent* event ```
void q_dateedit_qbase_drag_enter_event(void* self, void* event) {
    QDateEdit_QBaseDragEnterEvent((QDateEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QDragEnterEvent*) ```
void q_dateedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragEnterEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QDragMoveEvent* event ```
void q_dateedit_drag_move_event(void* self, void* event) {
    QDateEdit_DragMoveEvent((QDateEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QDragMoveEvent* event ```
void q_dateedit_qbase_drag_move_event(void* self, void* event) {
    QDateEdit_QBaseDragMoveEvent((QDateEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QDragMoveEvent*) ```
void q_dateedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QDragLeaveEvent* event ```
void q_dateedit_drag_leave_event(void* self, void* event) {
    QDateEdit_DragLeaveEvent((QDateEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QDragLeaveEvent* event ```
void q_dateedit_qbase_drag_leave_event(void* self, void* event) {
    QDateEdit_QBaseDragLeaveEvent((QDateEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QDragLeaveEvent*) ```
void q_dateedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragLeaveEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QDropEvent* event ```
void q_dateedit_drop_event(void* self, void* event) {
    QDateEdit_DropEvent((QDateEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QDropEvent* event ```
void q_dateedit_qbase_drop_event(void* self, void* event) {
    QDateEdit_QBaseDropEvent((QDateEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QDropEvent*) ```
void q_dateedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDropEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_dateedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateEdit_NativeEvent((QDateEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_dateedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateEdit_QBaseNativeEvent((QDateEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)(QDateEdit*, const char*, void*, intptr_t*) ```
void q_dateedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDateEdit_OnNativeEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dateedit_metric(void* self, int64_t param1) {
    return QDateEdit_Metric((QDateEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dateedit_qbase_metric(void* self, int64_t param1) {
    return QDateEdit_QBaseMetric((QDateEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int32_t (*slot)(QDateEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_dateedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDateEdit_OnMetric((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QPainter* painter ```
void q_dateedit_init_painter(void* self, void* painter) {
    QDateEdit_InitPainter((QDateEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QPainter* painter ```
void q_dateedit_qbase_init_painter(void* self, void* painter) {
    QDateEdit_QBaseInitPainter((QDateEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QPainter*) ```
void q_dateedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInitPainter((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QPoint* offset ```
QPaintDevice* q_dateedit_redirected(void* self, void* offset) {
    return QDateEdit_Redirected((QDateEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QPoint* offset ```
QPaintDevice* q_dateedit_qbase_redirected(void* self, void* offset) {
    return QDateEdit_QBaseRedirected((QDateEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QPaintDevice* (*slot)(QDateEdit*, QPoint*) ```
void q_dateedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDateEdit_OnRedirected((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QPainter* q_dateedit_shared_painter(void* self) {
    return QDateEdit_SharedPainter((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QPainter* q_dateedit_qbase_shared_painter(void* self) {
    return QDateEdit_QBaseSharedPainter((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QPainter* (*slot)() ```
void q_dateedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDateEdit_OnSharedPainter((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QInputMethodEvent* param1 ```
void q_dateedit_input_method_event(void* self, void* param1) {
    QDateEdit_InputMethodEvent((QDateEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QInputMethodEvent* param1 ```
void q_dateedit_qbase_input_method_event(void* self, void* param1) {
    QDateEdit_QBaseInputMethodEvent((QDateEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QInputMethodEvent*) ```
void q_dateedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInputMethodEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QObject* watched, QEvent* event ```
bool q_dateedit_event_filter(void* self, void* watched, void* event) {
    return QDateEdit_EventFilter((QDateEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QObject* watched, QEvent* event ```
bool q_dateedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QDateEdit_QBaseEventFilter((QDateEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)(QDateEdit*, QObject*, QEvent*) ```
void q_dateedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDateEdit_OnEventFilter((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QChildEvent* event ```
void q_dateedit_child_event(void* self, void* event) {
    QDateEdit_ChildEvent((QDateEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QChildEvent* event ```
void q_dateedit_qbase_child_event(void* self, void* event) {
    QDateEdit_QBaseChildEvent((QDateEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QChildEvent*) ```
void q_dateedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnChildEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_custom_event(void* self, void* event) {
    QDateEdit_CustomEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QEvent* event ```
void q_dateedit_qbase_custom_event(void* self, void* event) {
    QDateEdit_QBaseCustomEvent((QDateEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QEvent*) ```
void q_dateedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnCustomEvent((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
void q_dateedit_connect_notify(void* self, void* signal) {
    QDateEdit_ConnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
void q_dateedit_qbase_connect_notify(void* self, void* signal) {
    QDateEdit_QBaseConnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMetaMethod*) ```
void q_dateedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnConnectNotify((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
void q_dateedit_disconnect_notify(void* self, void* signal) {
    QDateEdit_DisconnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
void q_dateedit_qbase_disconnect_notify(void* self, void* signal) {
    QDateEdit_QBaseDisconnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QMetaMethod*) ```
void q_dateedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDisconnectNotify((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QLineEdit* q_dateedit_line_edit(void* self) {
    return QDateEdit_LineEdit((QDateEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QLineEdit* q_dateedit_qbase_line_edit(void* self) {
    return QDateEdit_QBaseLineEdit((QDateEdit*)self);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QLineEdit* (*slot)() ```
void q_dateedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QDateEdit_OnLineEdit((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QLineEdit* edit ```
void q_dateedit_set_line_edit(void* self, void* edit) {
    QDateEdit_SetLineEdit((QDateEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QLineEdit* edit ```
void q_dateedit_qbase_set_line_edit(void* self, void* edit) {
    QDateEdit_QBaseSetLineEdit((QDateEdit*)self, (QLineEdit*)edit);
}

/// Inherited from QAbstractSpinBox
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)(QDateEdit*, QLineEdit*) ```
void q_dateedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnSetLineEdit((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_update_micro_focus(void* self) {
    QDateEdit_UpdateMicroFocus((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_qbase_update_micro_focus(void* self) {
    QDateEdit_QBaseUpdateMicroFocus((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)() ```
void q_dateedit_on_update_micro_focus(void* self, void (*slot)()) {
    QDateEdit_OnUpdateMicroFocus((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_create(void* self) {
    QDateEdit_Create((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_qbase_create(void* self) {
    QDateEdit_QBaseCreate((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)() ```
void q_dateedit_on_create(void* self, void (*slot)()) {
    QDateEdit_OnCreate((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_destroy(void* self) {
    QDateEdit_Destroy((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
void q_dateedit_qbase_destroy(void* self) {
    QDateEdit_QBaseDestroy((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, void (*slot)() ```
void q_dateedit_on_destroy(void* self, void (*slot)()) {
    QDateEdit_OnDestroy((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_focus_next_child(void* self) {
    return QDateEdit_FocusNextChild((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_qbase_focus_next_child(void* self) {
    return QDateEdit_QBaseFocusNextChild((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)() ```
void q_dateedit_on_focus_next_child(void* self, bool (*slot)()) {
    QDateEdit_OnFocusNextChild((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_focus_previous_child(void* self) {
    return QDateEdit_FocusPreviousChild((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
bool q_dateedit_qbase_focus_previous_child(void* self) {
    return QDateEdit_QBaseFocusPreviousChild((QDateEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)() ```
void q_dateedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QDateEdit_OnFocusPreviousChild((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
QObject* q_dateedit_sender(void* self) {
    return QDateEdit_Sender((QDateEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
QObject* q_dateedit_qbase_sender(void* self) {
    return QDateEdit_QBaseSender((QDateEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, QObject* (*slot)() ```
void q_dateedit_on_sender(void* self, QObject* (*slot)()) {
    QDateEdit_OnSender((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_sender_signal_index(void* self) {
    return QDateEdit_SenderSignalIndex((QDateEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self ```
int32_t q_dateedit_qbase_sender_signal_index(void* self) {
    return QDateEdit_QBaseSenderSignalIndex((QDateEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int32_t (*slot)() ```
void q_dateedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDateEdit_OnSenderSignalIndex((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, const char* signal ```
int32_t q_dateedit_receivers(void* self, const char* signal) {
    return QDateEdit_Receivers((QDateEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, const char* signal ```
int32_t q_dateedit_qbase_receivers(void* self, const char* signal) {
    return QDateEdit_QBaseReceivers((QDateEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, int32_t (*slot)(QDateEdit*, const char*) ```
void q_dateedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDateEdit_OnReceivers((QDateEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
bool q_dateedit_is_signal_connected(void* self, void* signal) {
    return QDateEdit_IsSignalConnected((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateEdit* self, QMetaMethod* signal ```
bool q_dateedit_qbase_is_signal_connected(void* self, void* signal) {
    return QDateEdit_QBaseIsSignalConnected((QDateEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateEdit* self, bool (*slot)(QDateEdit*, QMetaMethod*) ```
void q_dateedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDateEdit_OnIsSignalConnected((QDateEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDateEdit* self ```
void q_dateedit_delete(void* self) {
    QDateEdit_Delete((QDateEdit*)(self));
}