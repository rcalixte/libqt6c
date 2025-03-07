#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcalendar.hpp"
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
#include "libqtextformat.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqcalendarwidget.hpp"
#include "libqcalendarwidget.h"

/// https://doc.qt.io/qt-6/qcalendarwidget.html

/// q_calendarwidget_new constructs a new QCalendarWidget object.
///
/// ``` QWidget* parent ```
QCalendarWidget* q_calendarwidget_new(void* parent) {
    return QCalendarWidget_new((QWidget*)parent);
}

/// q_calendarwidget_new2 constructs a new QCalendarWidget object.
///
///
QCalendarWidget* q_calendarwidget_new2() {
    return QCalendarWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCalendarWidget* self ```
QMetaObject* q_calendarwidget_meta_object(void* self) {
    return QCalendarWidget_MetaObject((QCalendarWidget*)self);
}

/// ``` QCalendarWidget* self, const char* param1 ```
void* q_calendarwidget_metacast(void* self, const char* param1) {
    return QCalendarWidget_Metacast((QCalendarWidget*)self, param1);
}

/// ``` QCalendarWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_calendarwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCalendarWidget_Metacall((QCalendarWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, enum QMetaObject__Call, int, void*) ```
void q_calendarwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCalendarWidget_OnMetacall((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_calendarwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCalendarWidget_QBaseMetacall((QCalendarWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_calendarwidget_tr(const char* s) {
    libqt_string _str = QCalendarWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#sizeHint)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size_hint(void* self) {
    return QCalendarWidget_SizeHint((QCalendarWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, QSize* (*slot)() ```
void q_calendarwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QCalendarWidget_OnSizeHint((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_qbase_size_hint(void* self) {
    return QCalendarWidget_QBaseSizeHint((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumSizeHint)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_minimum_size_hint(void* self) {
    return QCalendarWidget_MinimumSizeHint((QCalendarWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, QSize* (*slot)() ```
void q_calendarwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QCalendarWidget_OnMinimumSizeHint((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_qbase_minimum_size_hint(void* self) {
    return QCalendarWidget_QBaseMinimumSizeHint((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectedDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_selected_date(void* self) {
    return QCalendarWidget_SelectedDate((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#yearShown)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_year_shown(void* self) {
    return QCalendarWidget_YearShown((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#monthShown)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_month_shown(void* self) {
    return QCalendarWidget_MonthShown((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#minimumDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_minimum_date(void* self) {
    return QCalendarWidget_MinimumDate((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setMinimumDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_minimum_date(void* self, void* date) {
    QCalendarWidget_SetMinimumDate((QCalendarWidget*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#maximumDate)
///
/// ``` QCalendarWidget* self ```
QDate* q_calendarwidget_maximum_date(void* self) {
    return QCalendarWidget_MaximumDate((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setMaximumDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_maximum_date(void* self, void* date) {
    QCalendarWidget_SetMaximumDate((QCalendarWidget*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#firstDayOfWeek)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_first_day_of_week(void* self) {
    return QCalendarWidget_FirstDayOfWeek((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setFirstDayOfWeek)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek ```
void q_calendarwidget_set_first_day_of_week(void* self, int64_t dayOfWeek) {
    QCalendarWidget_SetFirstDayOfWeek((QCalendarWidget*)self, dayOfWeek);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isNavigationBarVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_navigation_bar_visible(void* self) {
    return QCalendarWidget_IsNavigationBarVisible((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isGridVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_grid_visible(void* self) {
    return QCalendarWidget_IsGridVisible((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#calendar)
///
/// ``` QCalendarWidget* self ```
QCalendar* q_calendarwidget_calendar(void* self) {
    return QCalendarWidget_Calendar((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setCalendar)
///
/// ``` QCalendarWidget* self, QCalendar* calendar ```
void q_calendarwidget_set_calendar(void* self, void* calendar) {
    QCalendarWidget_SetCalendar((QCalendarWidget*)self, (QCalendar*)calendar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionMode)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_selection_mode(void* self) {
    return QCalendarWidget_SelectionMode((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectionMode)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__SelectionMode mode ```
void q_calendarwidget_set_selection_mode(void* self, int64_t mode) {
    QCalendarWidget_SetSelectionMode((QCalendarWidget*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#horizontalHeaderFormat)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_horizontal_header_format(void* self) {
    return QCalendarWidget_HorizontalHeaderFormat((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setHorizontalHeaderFormat)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__HorizontalHeaderFormat format ```
void q_calendarwidget_set_horizontal_header_format(void* self, int64_t format) {
    QCalendarWidget_SetHorizontalHeaderFormat((QCalendarWidget*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#verticalHeaderFormat)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_vertical_header_format(void* self) {
    return QCalendarWidget_VerticalHeaderFormat((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setVerticalHeaderFormat)
///
/// ``` QCalendarWidget* self, enum QCalendarWidget__VerticalHeaderFormat format ```
void q_calendarwidget_set_vertical_header_format(void* self, int64_t format) {
    QCalendarWidget_SetVerticalHeaderFormat((QCalendarWidget*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#headerTextFormat)
///
/// ``` QCalendarWidget* self ```
QTextCharFormat* q_calendarwidget_header_text_format(void* self) {
    return QCalendarWidget_HeaderTextFormat((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setHeaderTextFormat)
///
/// ``` QCalendarWidget* self, QTextCharFormat* format ```
void q_calendarwidget_set_header_text_format(void* self, void* format) {
    QCalendarWidget_SetHeaderTextFormat((QCalendarWidget*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#weekdayTextFormat)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek ```
QTextCharFormat* q_calendarwidget_weekday_text_format(void* self, int64_t dayOfWeek) {
    return QCalendarWidget_WeekdayTextFormat((QCalendarWidget*)self, dayOfWeek);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setWeekdayTextFormat)
///
/// ``` QCalendarWidget* self, enum Qt__DayOfWeek dayOfWeek, QTextCharFormat* format ```
void q_calendarwidget_set_weekday_text_format(void* self, int64_t dayOfWeek, void* format) {
    QCalendarWidget_SetWeekdayTextFormat((QCalendarWidget*)self, dayOfWeek, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// ``` QCalendarWidget* self ```
libqt_map /* of QDate* to QTextCharFormat* */ q_calendarwidget_date_text_format(void* self) {
    return QCalendarWidget_DateTextFormat((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateTextFormat)
///
/// ``` QCalendarWidget* self, QDate* date ```
QTextCharFormat* q_calendarwidget_date_text_format_with_date(void* self, void* date) {
    return QCalendarWidget_DateTextFormatWithDate((QCalendarWidget*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateTextFormat)
///
/// ``` QCalendarWidget* self, QDate* date, QTextCharFormat* format ```
void q_calendarwidget_set_date_text_format(void* self, void* date, void* format) {
    QCalendarWidget_SetDateTextFormat((QCalendarWidget*)self, (QDate*)date, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#isDateEditEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_date_edit_enabled(void* self) {
    return QCalendarWidget_IsDateEditEnabled((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditEnabled)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_date_edit_enabled(void* self, bool enable) {
    QCalendarWidget_SetDateEditEnabled((QCalendarWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#dateEditAcceptDelay)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_date_edit_accept_delay(void* self) {
    return QCalendarWidget_DateEditAcceptDelay((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateEditAcceptDelay)
///
/// ``` QCalendarWidget* self, int delay ```
void q_calendarwidget_set_date_edit_accept_delay(void* self, int delay) {
    QCalendarWidget_SetDateEditAcceptDelay((QCalendarWidget*)self, delay);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#event)
///
/// ``` QCalendarWidget* self, QEvent* event ```
bool q_calendarwidget_event(void* self, void* event) {
    return QCalendarWidget_Event((QCalendarWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QCalendarWidget_OnEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QEvent* event ```
bool q_calendarwidget_qbase_event(void* self, void* event) {
    return QCalendarWidget_QBaseEvent((QCalendarWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#eventFilter)
///
/// ``` QCalendarWidget* self, QObject* watched, QEvent* event ```
bool q_calendarwidget_event_filter(void* self, void* watched, void* event) {
    return QCalendarWidget_EventFilter((QCalendarWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QObject*, QEvent*) ```
void q_calendarwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCalendarWidget_OnEventFilter((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QObject* watched, QEvent* event ```
bool q_calendarwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QCalendarWidget_QBaseEventFilter((QCalendarWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#mousePressEvent)
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_press_event(void* self, void* event) {
    QCalendarWidget_MousePressEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnMousePressEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_press_event(void* self, void* event) {
    QCalendarWidget_QBaseMousePressEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#resizeEvent)
///
/// ``` QCalendarWidget* self, QResizeEvent* event ```
void q_calendarwidget_resize_event(void* self, void* event) {
    QCalendarWidget_ResizeEvent((QCalendarWidget*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QResizeEvent*) ```
void q_calendarwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnResizeEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QResizeEvent* event ```
void q_calendarwidget_qbase_resize_event(void* self, void* event) {
    QCalendarWidget_QBaseResizeEvent((QCalendarWidget*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#keyPressEvent)
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_key_press_event(void* self, void* event) {
    QCalendarWidget_KeyPressEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QKeyEvent*) ```
void q_calendarwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnKeyPressEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_qbase_key_press_event(void* self, void* event) {
    QCalendarWidget_QBaseKeyPressEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#paintCell)
///
/// ``` QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date ```
void q_calendarwidget_paint_cell(void* self, void* painter, void* rect, void* date) {
    QCalendarWidget_PaintCell((QCalendarWidget*)self, (QPainter*)painter, (QRect*)rect, (QDate*)date);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPainter*, QRect*, QDate*) ```
void q_calendarwidget_on_paint_cell(void* self, void (*slot)(void*, void*, void*, void*)) {
    QCalendarWidget_OnPaintCell((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date ```
void q_calendarwidget_qbase_paint_cell(void* self, void* painter, void* rect, void* date) {
    QCalendarWidget_QBasePaintCell((QCalendarWidget*)self, (QPainter*)painter, (QRect*)rect, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCell)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_update_cell(void* self, void* date) {
    QCalendarWidget_UpdateCell((QCalendarWidget*)self, (QDate*)date);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_update_cell(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnUpdateCell((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_qbase_update_cell(void* self, void* date) {
    QCalendarWidget_QBaseUpdateCell((QCalendarWidget*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#updateCells)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_cells(void* self) {
    QCalendarWidget_UpdateCells((QCalendarWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_update_cells(void* self, void (*slot)()) {
    QCalendarWidget_OnUpdateCells((QCalendarWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_update_cells(void* self) {
    QCalendarWidget_QBaseUpdateCells((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setSelectedDate)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_set_selected_date(void* self, void* date) {
    QCalendarWidget_SetSelectedDate((QCalendarWidget*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setDateRange)
///
/// ``` QCalendarWidget* self, QDate* min, QDate* max ```
void q_calendarwidget_set_date_range(void* self, void* min, void* max) {
    QCalendarWidget_SetDateRange((QCalendarWidget*)self, (QDate*)min, (QDate*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setCurrentPage)
///
/// ``` QCalendarWidget* self, int year, int month ```
void q_calendarwidget_set_current_page(void* self, int year, int month) {
    QCalendarWidget_SetCurrentPage((QCalendarWidget*)self, year, month);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setGridVisible)
///
/// ``` QCalendarWidget* self, bool show ```
void q_calendarwidget_set_grid_visible(void* self, bool show) {
    QCalendarWidget_SetGridVisible((QCalendarWidget*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#setNavigationBarVisible)
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_set_navigation_bar_visible(void* self, bool visible) {
    QCalendarWidget_SetNavigationBarVisible((QCalendarWidget*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextMonth)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_next_month(void* self) {
    QCalendarWidget_ShowNextMonth((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousMonth)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_previous_month(void* self) {
    QCalendarWidget_ShowPreviousMonth((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showNextYear)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_next_year(void* self) {
    QCalendarWidget_ShowNextYear((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showPreviousYear)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_previous_year(void* self) {
    QCalendarWidget_ShowPreviousYear((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showSelectedDate)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_selected_date(void* self) {
    QCalendarWidget_ShowSelectedDate((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#showToday)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_today(void* self) {
    QCalendarWidget_ShowToday((QCalendarWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#selectionChanged)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_selection_changed(void* self) {
    QCalendarWidget_SelectionChanged((QCalendarWidget*)self);
}

/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*) ```
void q_calendarwidget_on_selection_changed(void* self, void (*slot)(void*)) {
    QCalendarWidget_Connect_SelectionChanged((QCalendarWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#clicked)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_clicked(void* self, void* date) {
    QCalendarWidget_Clicked((QCalendarWidget*)self, (QDate*)date);
}

/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_clicked(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_Connect_Clicked((QCalendarWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#activated)
///
/// ``` QCalendarWidget* self, QDate* date ```
void q_calendarwidget_activated(void* self, void* date) {
    QCalendarWidget_Activated((QCalendarWidget*)self, (QDate*)date);
}

/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDate*) ```
void q_calendarwidget_on_activated(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_Connect_Activated((QCalendarWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarwidget.html#currentPageChanged)
///
/// ``` QCalendarWidget* self, int year, int month ```
void q_calendarwidget_current_page_changed(void* self, int year, int month) {
    QCalendarWidget_CurrentPageChanged((QCalendarWidget*)self, year, month);
}

/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, int, int) ```
void q_calendarwidget_on_current_page_changed(void* self, void (*slot)(void*, int, int)) {
    QCalendarWidget_Connect_CurrentPageChanged((QCalendarWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_calendarwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QCalendarWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_calendarwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCalendarWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QCalendarWidget* self ```
uintptr_t q_calendarwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QCalendarWidget* self ```
QStyle* q_calendarwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QCalendarWidget* self, QStyle* style ```
void q_calendarwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QCalendarWidget* self, enum Qt__WindowModality windowModality ```
void q_calendarwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
bool q_calendarwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QCalendarWidget* self, bool enabled ```
void q_calendarwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QCalendarWidget* self, bool disabled ```
void q_calendarwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QCalendarWidget* self, bool windowModified ```
void q_calendarwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QCalendarWidget* self ```
QPoint* q_calendarwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCalendarWidget* self, QSize* minimumSize ```
void q_calendarwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QCalendarWidget* self, int minw, int minh ```
void q_calendarwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCalendarWidget* self, QSize* maximumSize ```
void q_calendarwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QCalendarWidget* self, int maxw, int maxh ```
void q_calendarwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QCalendarWidget* self, int minw ```
void q_calendarwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QCalendarWidget* self, int minh ```
void q_calendarwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QCalendarWidget* self, int maxw ```
void q_calendarwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QCalendarWidget* self, int maxh ```
void q_calendarwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCalendarWidget* self, QSize* sizeIncrement ```
void q_calendarwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QCalendarWidget* self ```
QSize* q_calendarwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCalendarWidget* self, QSize* baseSize ```
void q_calendarwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QCalendarWidget* self, int basew, int baseh ```
void q_calendarwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCalendarWidget* self, QSize* fixedSize ```
void q_calendarwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QCalendarWidget* self, int w ```
void q_calendarwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QCalendarWidget* self, int h ```
void q_calendarwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCalendarWidget* self, QPointF* param1 ```
QPointF* q_calendarwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
QPoint* q_calendarwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_calendarwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_calendarwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_calendarwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QCalendarWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_calendarwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QCalendarWidget* self ```
QPalette* q_calendarwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QCalendarWidget* self, QPalette* palette ```
void q_calendarwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QCalendarWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_calendarwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QCalendarWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_calendarwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QCalendarWidget* self ```
QFont* q_calendarwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QCalendarWidget* self, QFont* font ```
void q_calendarwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QCalendarWidget* self ```
QFontMetrics* q_calendarwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QCalendarWidget* self ```
QFontInfo* q_calendarwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QCalendarWidget* self ```
QCursor* q_calendarwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QCalendarWidget* self, QCursor* cursor ```
void q_calendarwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCalendarWidget* self, QBitmap* mask ```
void q_calendarwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QCalendarWidget* self, QRegion* mask ```
void q_calendarwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target ```
void q_calendarwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCalendarWidget* self ```
QPixmap* q_calendarwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QCalendarWidget* self ```
QGraphicsEffect* q_calendarwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QCalendarWidget* self, QGraphicsEffect* effect ```
void q_calendarwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal ```
void q_calendarwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal ```
void q_calendarwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QCalendarWidget* self, const char* windowTitle ```
void q_calendarwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QCalendarWidget* self, const char* styleSheet ```
void q_calendarwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QCalendarWidget* self, QIcon* icon ```
void q_calendarwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QCalendarWidget* self ```
QIcon* q_calendarwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QCalendarWidget* self, const char* windowIconText ```
void q_calendarwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QCalendarWidget* self, const char* windowRole ```
void q_calendarwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QCalendarWidget* self, const char* filePath ```
void q_calendarwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QCalendarWidget* self, double level ```
void q_calendarwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QCalendarWidget* self, const char* toolTip ```
void q_calendarwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QCalendarWidget* self, int msec ```
void q_calendarwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QCalendarWidget* self, const char* statusTip ```
void q_calendarwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QCalendarWidget* self, const char* whatsThis ```
void q_calendarwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QCalendarWidget* self, const char* name ```
void q_calendarwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QCalendarWidget* self, const char* description ```
void q_calendarwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QCalendarWidget* self, enum Qt__LayoutDirection direction ```
void q_calendarwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QCalendarWidget* self, QLocale* locale ```
void q_calendarwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QCalendarWidget* self ```
QLocale* q_calendarwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QCalendarWidget* self, enum Qt__FocusReason reason ```
void q_calendarwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QCalendarWidget* self, enum Qt__FocusPolicy policy ```
void q_calendarwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_calendarwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QCalendarWidget* self, QWidget* focusProxy ```
void q_calendarwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QCalendarWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_calendarwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QCalendarWidget* self, QCursor* param1 ```
void q_calendarwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCalendarWidget* self, QKeySequence* key ```
int32_t q_calendarwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_calendarwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_calendarwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QCalendarWidget* self, bool enable ```
void q_calendarwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QCalendarWidget* self ```
QGraphicsProxyWidget* q_calendarwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, QRect* param1 ```
void q_calendarwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QCalendarWidget* self, QRegion* param1 ```
void q_calendarwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, QRect* param1 ```
void q_calendarwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QCalendarWidget* self, QRegion* param1 ```
void q_calendarwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QCalendarWidget* self, bool hidden ```
void q_calendarwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
void q_calendarwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCalendarWidget* self, int x, int y ```
void q_calendarwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QCalendarWidget* self, QPoint* param1 ```
void q_calendarwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCalendarWidget* self, int w, int h ```
void q_calendarwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QCalendarWidget* self, QSize* param1 ```
void q_calendarwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCalendarWidget* self, int x, int y, int w, int h ```
void q_calendarwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QCalendarWidget* self, QRect* geometry ```
void q_calendarwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QCalendarWidget* self ```
char* q_calendarwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QCalendarWidget* self, const char* geometry ```
bool q_calendarwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QCalendarWidget* self, QWidget* param1 ```
bool q_calendarwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QCalendarWidget* self, int state ```
void q_calendarwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QCalendarWidget* self, int state ```
void q_calendarwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QCalendarWidget* self ```
QSizePolicy* q_calendarwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCalendarWidget* self, QSizePolicy* sizePolicy ```
void q_calendarwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QCalendarWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_calendarwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QCalendarWidget* self ```
QRegion* q_calendarwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCalendarWidget* self, int left, int top, int right, int bottom ```
void q_calendarwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QCalendarWidget* self, QMargins* margins ```
void q_calendarwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QCalendarWidget* self ```
QMargins* q_calendarwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QCalendarWidget* self ```
QRect* q_calendarwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QCalendarWidget* self ```
QLayout* q_calendarwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QCalendarWidget* self, QLayout* layout ```
void q_calendarwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCalendarWidget* self, QWidget* parent ```
void q_calendarwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QCalendarWidget* self, QWidget* parent, int f ```
void q_calendarwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCalendarWidget* self, int dx, int dy ```
void q_calendarwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QCalendarWidget* self, int dx, int dy, QRect* param3 ```
void q_calendarwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QCalendarWidget* self, bool on ```
void q_calendarwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QAction* action ```
void q_calendarwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QCalendarWidget* self, QAction* actions[] ```
void q_calendarwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QCalendarWidget* self, QAction* before, QAction* actions[] ```
void q_calendarwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QCalendarWidget* self, QAction* before, QAction* action ```
void q_calendarwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QCalendarWidget* self, QAction* action ```
void q_calendarwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QCalendarWidget* self ```
libqt_list /* of QAction* */ q_calendarwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, const char* text ```
QAction* q_calendarwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QIcon* icon, const char* text ```
QAction* q_calendarwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_calendarwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QCalendarWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_calendarwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QCalendarWidget* self ```
QWidget* q_calendarwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QCalendarWidget* self, int typeVal ```
void q_calendarwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCalendarWidget* self, enum Qt__WindowType param1 ```
void q_calendarwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QCalendarWidget* self, int typeVal ```
void q_calendarwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_calendarwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCalendarWidget* self, int x, int y ```
QWidget* q_calendarwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QCalendarWidget* self, QPoint* p ```
QWidget* q_calendarwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1 ```
void q_calendarwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_calendarwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QCalendarWidget* self, QWidget* child ```
bool q_calendarwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QCalendarWidget* self, bool enabled ```
void q_calendarwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QCalendarWidget* self ```
QBackingStore* q_calendarwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QCalendarWidget* self ```
QWindow* q_calendarwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QCalendarWidget* self ```
QScreen* q_calendarwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QCalendarWidget* self, QScreen* screen ```
void q_calendarwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_calendarwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QCalendarWidget* self, const char* title ```
void q_calendarwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, const char*) ```
void q_calendarwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QCalendarWidget* self, QIcon* icon ```
void q_calendarwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_calendarwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QCalendarWidget* self, const char* iconText ```
void q_calendarwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, const char*) ```
void q_calendarwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QCalendarWidget* self, QPoint* pos ```
void q_calendarwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QCalendarWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_calendarwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QCalendarWidget* self ```
int64_t q_calendarwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QCalendarWidget* self, int hints ```
void q_calendarwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_calendarwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_calendarwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_calendarwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_calendarwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_calendarwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QCalendarWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_calendarwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QCalendarWidget* self, QRect* rectangle ```
QPixmap* q_calendarwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QCalendarWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_calendarwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QCalendarWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_calendarwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QCalendarWidget* self, int id, bool enable ```
void q_calendarwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QCalendarWidget* self, int id, bool enable ```
void q_calendarwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QCalendarWidget* self, enum Qt__WindowType param1, bool on ```
void q_calendarwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QCalendarWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_calendarwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_calendarwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_calendarwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCalendarWidget* self ```
const char* q_calendarwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCalendarWidget* self, const char* name ```
void q_calendarwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCalendarWidget* self, bool b ```
bool q_calendarwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCalendarWidget* self ```
QThread* q_calendarwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCalendarWidget* self, QThread* thread ```
void q_calendarwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCalendarWidget* self, int interval ```
int32_t q_calendarwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCalendarWidget* self, int id ```
void q_calendarwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCalendarWidget* self ```
libqt_list /* of QObject* */ q_calendarwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCalendarWidget* self, QObject* filterObj ```
void q_calendarwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCalendarWidget* self, QObject* obj ```
void q_calendarwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_calendarwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCalendarWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_calendarwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_calendarwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_calendarwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCalendarWidget* self, const char* name, QVariant* value ```
bool q_calendarwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCalendarWidget* self, const char* name ```
QVariant* q_calendarwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCalendarWidget* self ```
const char** q_calendarwidget_dynamic_property_names(void* self) {
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
/// ``` QCalendarWidget* self ```
QBindingStorage* q_calendarwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCalendarWidget* self ```
QBindingStorage* q_calendarwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCalendarWidget* self, void (*slot)(QObject*) ```
void q_calendarwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCalendarWidget* self, const char* classname ```
bool q_calendarwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCalendarWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_calendarwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_calendarwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCalendarWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_calendarwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCalendarWidget* self, QObject* param1 ```
void q_calendarwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCalendarWidget* self, void (*slot)(QObject*, QObject*) ```
void q_calendarwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QCalendarWidget* self ```
double q_calendarwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_calendarwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_dev_type(void* self) {
    return QCalendarWidget_DevType((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_qbase_dev_type(void* self) {
    return QCalendarWidget_QBaseDevType((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)() ```
void q_calendarwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QCalendarWidget_OnDevType((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_set_visible(void* self, bool visible) {
    QCalendarWidget_SetVisible((QCalendarWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool visible ```
void q_calendarwidget_qbase_set_visible(void* self, bool visible) {
    QCalendarWidget_QBaseSetVisible((QCalendarWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, bool) ```
void q_calendarwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QCalendarWidget_OnSetVisible((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, int param1 ```
int32_t q_calendarwidget_height_for_width(void* self, int param1) {
    return QCalendarWidget_HeightForWidth((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, int param1 ```
int32_t q_calendarwidget_qbase_height_for_width(void* self, int param1) {
    return QCalendarWidget_QBaseHeightForWidth((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, int) ```
void q_calendarwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QCalendarWidget_OnHeightForWidth((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_has_height_for_width(void* self) {
    return QCalendarWidget_HasHeightForWidth((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_has_height_for_width(void* self) {
    return QCalendarWidget_QBaseHasHeightForWidth((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QCalendarWidget_OnHasHeightForWidth((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPaintEngine* q_calendarwidget_paint_engine(void* self) {
    return QCalendarWidget_PaintEngine((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPaintEngine* q_calendarwidget_qbase_paint_engine(void* self) {
    return QCalendarWidget_QBasePaintEngine((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEngine* (*slot)() ```
void q_calendarwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QCalendarWidget_OnPaintEngine((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_release_event(void* self, void* event) {
    QCalendarWidget_MouseReleaseEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_release_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseReleaseEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnMouseReleaseEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_double_click_event(void* self, void* event) {
    QCalendarWidget_MouseDoubleClickEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseDoubleClickEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnMouseDoubleClickEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_mouse_move_event(void* self, void* event) {
    QCalendarWidget_MouseMoveEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMouseEvent* event ```
void q_calendarwidget_qbase_mouse_move_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseMoveEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMouseEvent*) ```
void q_calendarwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnMouseMoveEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QWheelEvent* event ```
void q_calendarwidget_wheel_event(void* self, void* event) {
    QCalendarWidget_WheelEvent((QCalendarWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QWheelEvent* event ```
void q_calendarwidget_qbase_wheel_event(void* self, void* event) {
    QCalendarWidget_QBaseWheelEvent((QCalendarWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QWheelEvent*) ```
void q_calendarwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnWheelEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_key_release_event(void* self, void* event) {
    QCalendarWidget_KeyReleaseEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QKeyEvent* event ```
void q_calendarwidget_qbase_key_release_event(void* self, void* event) {
    QCalendarWidget_QBaseKeyReleaseEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QKeyEvent*) ```
void q_calendarwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnKeyReleaseEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_focus_in_event(void* self, void* event) {
    QCalendarWidget_FocusInEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_qbase_focus_in_event(void* self, void* event) {
    QCalendarWidget_QBaseFocusInEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QFocusEvent*) ```
void q_calendarwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnFocusInEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_focus_out_event(void* self, void* event) {
    QCalendarWidget_FocusOutEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QFocusEvent* event ```
void q_calendarwidget_qbase_focus_out_event(void* self, void* event) {
    QCalendarWidget_QBaseFocusOutEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QFocusEvent*) ```
void q_calendarwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnFocusOutEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEnterEvent* event ```
void q_calendarwidget_enter_event(void* self, void* event) {
    QCalendarWidget_EnterEvent((QCalendarWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEnterEvent* event ```
void q_calendarwidget_qbase_enter_event(void* self, void* event) {
    QCalendarWidget_QBaseEnterEvent((QCalendarWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEnterEvent*) ```
void q_calendarwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnEnterEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_leave_event(void* self, void* event) {
    QCalendarWidget_LeaveEvent((QCalendarWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_qbase_leave_event(void* self, void* event) {
    QCalendarWidget_QBaseLeaveEvent((QCalendarWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnLeaveEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEvent* event ```
void q_calendarwidget_paint_event(void* self, void* event) {
    QCalendarWidget_PaintEvent((QCalendarWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintEvent* event ```
void q_calendarwidget_qbase_paint_event(void* self, void* event) {
    QCalendarWidget_QBasePaintEvent((QCalendarWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPaintEvent*) ```
void q_calendarwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnPaintEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMoveEvent* event ```
void q_calendarwidget_move_event(void* self, void* event) {
    QCalendarWidget_MoveEvent((QCalendarWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMoveEvent* event ```
void q_calendarwidget_qbase_move_event(void* self, void* event) {
    QCalendarWidget_QBaseMoveEvent((QCalendarWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMoveEvent*) ```
void q_calendarwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnMoveEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QCloseEvent* event ```
void q_calendarwidget_close_event(void* self, void* event) {
    QCalendarWidget_CloseEvent((QCalendarWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QCloseEvent* event ```
void q_calendarwidget_qbase_close_event(void* self, void* event) {
    QCalendarWidget_QBaseCloseEvent((QCalendarWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QCloseEvent*) ```
void q_calendarwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnCloseEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QContextMenuEvent* event ```
void q_calendarwidget_context_menu_event(void* self, void* event) {
    QCalendarWidget_ContextMenuEvent((QCalendarWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QContextMenuEvent* event ```
void q_calendarwidget_qbase_context_menu_event(void* self, void* event) {
    QCalendarWidget_QBaseContextMenuEvent((QCalendarWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QContextMenuEvent*) ```
void q_calendarwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnContextMenuEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QTabletEvent* event ```
void q_calendarwidget_tablet_event(void* self, void* event) {
    QCalendarWidget_TabletEvent((QCalendarWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QTabletEvent* event ```
void q_calendarwidget_qbase_tablet_event(void* self, void* event) {
    QCalendarWidget_QBaseTabletEvent((QCalendarWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QTabletEvent*) ```
void q_calendarwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnTabletEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QActionEvent* event ```
void q_calendarwidget_action_event(void* self, void* event) {
    QCalendarWidget_ActionEvent((QCalendarWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QActionEvent* event ```
void q_calendarwidget_qbase_action_event(void* self, void* event) {
    QCalendarWidget_QBaseActionEvent((QCalendarWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QActionEvent*) ```
void q_calendarwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnActionEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragEnterEvent* event ```
void q_calendarwidget_drag_enter_event(void* self, void* event) {
    QCalendarWidget_DragEnterEvent((QCalendarWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragEnterEvent* event ```
void q_calendarwidget_qbase_drag_enter_event(void* self, void* event) {
    QCalendarWidget_QBaseDragEnterEvent((QCalendarWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragEnterEvent*) ```
void q_calendarwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnDragEnterEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragMoveEvent* event ```
void q_calendarwidget_drag_move_event(void* self, void* event) {
    QCalendarWidget_DragMoveEvent((QCalendarWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragMoveEvent* event ```
void q_calendarwidget_qbase_drag_move_event(void* self, void* event) {
    QCalendarWidget_QBaseDragMoveEvent((QCalendarWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragMoveEvent*) ```
void q_calendarwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnDragMoveEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDragLeaveEvent* event ```
void q_calendarwidget_drag_leave_event(void* self, void* event) {
    QCalendarWidget_DragLeaveEvent((QCalendarWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDragLeaveEvent* event ```
void q_calendarwidget_qbase_drag_leave_event(void* self, void* event) {
    QCalendarWidget_QBaseDragLeaveEvent((QCalendarWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDragLeaveEvent*) ```
void q_calendarwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnDragLeaveEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QDropEvent* event ```
void q_calendarwidget_drop_event(void* self, void* event) {
    QCalendarWidget_DropEvent((QCalendarWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QDropEvent* event ```
void q_calendarwidget_qbase_drop_event(void* self, void* event) {
    QCalendarWidget_QBaseDropEvent((QCalendarWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QDropEvent*) ```
void q_calendarwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnDropEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QShowEvent* event ```
void q_calendarwidget_show_event(void* self, void* event) {
    QCalendarWidget_ShowEvent((QCalendarWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QShowEvent* event ```
void q_calendarwidget_qbase_show_event(void* self, void* event) {
    QCalendarWidget_QBaseShowEvent((QCalendarWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QShowEvent*) ```
void q_calendarwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnShowEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QHideEvent* event ```
void q_calendarwidget_hide_event(void* self, void* event) {
    QCalendarWidget_HideEvent((QCalendarWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QHideEvent* event ```
void q_calendarwidget_qbase_hide_event(void* self, void* event) {
    QCalendarWidget_QBaseHideEvent((QCalendarWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QHideEvent*) ```
void q_calendarwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnHideEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_calendarwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCalendarWidget_NativeEvent((QCalendarWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_calendarwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCalendarWidget_QBaseNativeEvent((QCalendarWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, const char*, void*, intptr_t*) ```
void q_calendarwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QCalendarWidget_OnNativeEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* param1 ```
void q_calendarwidget_change_event(void* self, void* param1) {
    QCalendarWidget_ChangeEvent((QCalendarWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* param1 ```
void q_calendarwidget_qbase_change_event(void* self, void* param1) {
    QCalendarWidget_QBaseChangeEvent((QCalendarWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnChangeEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_calendarwidget_metric(void* self, int64_t param1) {
    return QCalendarWidget_Metric((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_calendarwidget_qbase_metric(void* self, int64_t param1) {
    return QCalendarWidget_QBaseMetric((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_calendarwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QCalendarWidget_OnMetric((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_init_painter(void* self, void* painter) {
    QCalendarWidget_InitPainter((QCalendarWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* painter ```
void q_calendarwidget_qbase_init_painter(void* self, void* painter) {
    QCalendarWidget_QBaseInitPainter((QCalendarWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QPainter*) ```
void q_calendarwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnInitPainter((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QPoint* offset ```
QPaintDevice* q_calendarwidget_redirected(void* self, void* offset) {
    return QCalendarWidget_Redirected((QCalendarWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPoint* offset ```
QPaintDevice* q_calendarwidget_qbase_redirected(void* self, void* offset) {
    return QCalendarWidget_QBaseRedirected((QCalendarWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPaintDevice* (*slot)(QCalendarWidget*, QPoint*) ```
void q_calendarwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QCalendarWidget_OnRedirected((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPainter* q_calendarwidget_shared_painter(void* self) {
    return QCalendarWidget_SharedPainter((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QPainter* q_calendarwidget_qbase_shared_painter(void* self) {
    return QCalendarWidget_QBaseSharedPainter((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QPainter* (*slot)() ```
void q_calendarwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QCalendarWidget_OnSharedPainter((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QInputMethodEvent* param1 ```
void q_calendarwidget_input_method_event(void* self, void* param1) {
    QCalendarWidget_InputMethodEvent((QCalendarWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QInputMethodEvent* param1 ```
void q_calendarwidget_qbase_input_method_event(void* self, void* param1) {
    QCalendarWidget_QBaseInputMethodEvent((QCalendarWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QInputMethodEvent*) ```
void q_calendarwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnInputMethodEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_calendarwidget_input_method_query(void* self, int64_t param1) {
    return QCalendarWidget_InputMethodQuery((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_calendarwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QCalendarWidget_QBaseInputMethodQuery((QCalendarWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QVariant* (*slot)(QCalendarWidget*, enum Qt__InputMethodQuery) ```
void q_calendarwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QCalendarWidget_OnInputMethodQuery((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, bool next ```
bool q_calendarwidget_focus_next_prev_child(void* self, bool next) {
    return QCalendarWidget_FocusNextPrevChild((QCalendarWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool next ```
bool q_calendarwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QCalendarWidget_QBaseFocusNextPrevChild((QCalendarWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, bool) ```
void q_calendarwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QCalendarWidget_OnFocusNextPrevChild((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QTimerEvent* event ```
void q_calendarwidget_timer_event(void* self, void* event) {
    QCalendarWidget_TimerEvent((QCalendarWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QTimerEvent* event ```
void q_calendarwidget_qbase_timer_event(void* self, void* event) {
    QCalendarWidget_QBaseTimerEvent((QCalendarWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QTimerEvent*) ```
void q_calendarwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnTimerEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QChildEvent* event ```
void q_calendarwidget_child_event(void* self, void* event) {
    QCalendarWidget_ChildEvent((QCalendarWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QChildEvent* event ```
void q_calendarwidget_qbase_child_event(void* self, void* event) {
    QCalendarWidget_QBaseChildEvent((QCalendarWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QChildEvent*) ```
void q_calendarwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnChildEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_custom_event(void* self, void* event) {
    QCalendarWidget_CustomEvent((QCalendarWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QEvent* event ```
void q_calendarwidget_qbase_custom_event(void* self, void* event) {
    QCalendarWidget_QBaseCustomEvent((QCalendarWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QEvent*) ```
void q_calendarwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnCustomEvent((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_connect_notify(void* self, void* signal) {
    QCalendarWidget_ConnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_qbase_connect_notify(void* self, void* signal) {
    QCalendarWidget_QBaseConnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnConnectNotify((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_disconnect_notify(void* self, void* signal) {
    QCalendarWidget_DisconnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
void q_calendarwidget_qbase_disconnect_notify(void* self, void* signal) {
    QCalendarWidget_QBaseDisconnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCalendarWidget_OnDisconnectNotify((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_update_micro_focus(void* self) {
    QCalendarWidget_UpdateMicroFocus((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_update_micro_focus(void* self) {
    QCalendarWidget_QBaseUpdateMicroFocus((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QCalendarWidget_OnUpdateMicroFocus((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_create(void* self) {
    QCalendarWidget_Create((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_create(void* self) {
    QCalendarWidget_QBaseCreate((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_create(void* self, void (*slot)()) {
    QCalendarWidget_OnCreate((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_destroy(void* self) {
    QCalendarWidget_Destroy((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_qbase_destroy(void* self) {
    QCalendarWidget_QBaseDestroy((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, void (*slot)() ```
void q_calendarwidget_on_destroy(void* self, void (*slot)()) {
    QCalendarWidget_OnDestroy((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_focus_next_child(void* self) {
    return QCalendarWidget_FocusNextChild((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_focus_next_child(void* self) {
    return QCalendarWidget_QBaseFocusNextChild((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QCalendarWidget_OnFocusNextChild((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_focus_previous_child(void* self) {
    return QCalendarWidget_FocusPreviousChild((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
bool q_calendarwidget_qbase_focus_previous_child(void* self) {
    return QCalendarWidget_QBaseFocusPreviousChild((QCalendarWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)() ```
void q_calendarwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QCalendarWidget_OnFocusPreviousChild((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_sender(void* self) {
    return QCalendarWidget_Sender((QCalendarWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
QObject* q_calendarwidget_qbase_sender(void* self) {
    return QCalendarWidget_QBaseSender((QCalendarWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, QObject* (*slot)() ```
void q_calendarwidget_on_sender(void* self, QObject* (*slot)()) {
    QCalendarWidget_OnSender((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_sender_signal_index(void* self) {
    return QCalendarWidget_SenderSignalIndex((QCalendarWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self ```
int32_t q_calendarwidget_qbase_sender_signal_index(void* self) {
    return QCalendarWidget_QBaseSenderSignalIndex((QCalendarWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)() ```
void q_calendarwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCalendarWidget_OnSenderSignalIndex((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, const char* signal ```
int32_t q_calendarwidget_receivers(void* self, const char* signal) {
    return QCalendarWidget_Receivers((QCalendarWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, const char* signal ```
int32_t q_calendarwidget_qbase_receivers(void* self, const char* signal) {
    return QCalendarWidget_QBaseReceivers((QCalendarWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, int32_t (*slot)(QCalendarWidget*, const char*) ```
void q_calendarwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCalendarWidget_OnReceivers((QCalendarWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
bool q_calendarwidget_is_signal_connected(void* self, void* signal) {
    return QCalendarWidget_IsSignalConnected((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCalendarWidget* self, QMetaMethod* signal ```
bool q_calendarwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QCalendarWidget_QBaseIsSignalConnected((QCalendarWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCalendarWidget* self, bool (*slot)(QCalendarWidget*, QMetaMethod*) ```
void q_calendarwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCalendarWidget_OnIsSignalConnected((QCalendarWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCalendarWidget* self ```
void q_calendarwidget_delete(void* self) {
    QCalendarWidget_Delete((QCalendarWidget*)(self));
}