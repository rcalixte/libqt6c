#include "libqevent.hpp"
#include "libqcalendar.hpp"
#include "libqcoreevent.hpp"
#include "libqdatetime.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtextformat.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcalendarwidget.hpp"
#include "libqcalendarwidget.h"

QCalendarWidget* q_calendarwidget_new(void* parent) {
    return QCalendarWidget_new((QWidget*)parent);
}

QCalendarWidget* q_calendarwidget_new2() {
    return QCalendarWidget_new2();
}

const QMetaObject* q_calendarwidget_meta_object(void* self) {
    return QCalendarWidget_MetaObject((QCalendarWidget*)self);
}

void q_calendarwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QCalendarWidget_OnMetaObject((QCalendarWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_calendarwidget_qbase_meta_object(void* self) {
    return QCalendarWidget_QBaseMetaObject((QCalendarWidget*)self);
}

void* q_calendarwidget_metacast(void* self, const char* param1) {
    return QCalendarWidget_Metacast((QCalendarWidget*)self, param1);
}

void q_calendarwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCalendarWidget_OnMetacast((QCalendarWidget*)self, (intptr_t)callback);
}

void* q_calendarwidget_qbase_metacast(void* self, const char* param1) {
    return QCalendarWidget_QBaseMetacast((QCalendarWidget*)self, param1);
}

int32_t q_calendarwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCalendarWidget_Metacall((QCalendarWidget*)self, param1, param2, param3);
}

void q_calendarwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCalendarWidget_OnMetacall((QCalendarWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCalendarWidget_QBaseMetacall((QCalendarWidget*)self, param1, param2, param3);
}

const char* q_calendarwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_calendarwidget_size_hint(void* self) {
    return QCalendarWidget_SizeHint((QCalendarWidget*)self);
}

void q_calendarwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QCalendarWidget_OnSizeHint((QCalendarWidget*)self, (intptr_t)callback);
}

QSize* q_calendarwidget_qbase_size_hint(void* self) {
    return QCalendarWidget_QBaseSizeHint((QCalendarWidget*)self);
}

QSize* q_calendarwidget_minimum_size_hint(void* self) {
    return QCalendarWidget_MinimumSizeHint((QCalendarWidget*)self);
}

void q_calendarwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QCalendarWidget_OnMinimumSizeHint((QCalendarWidget*)self, (intptr_t)callback);
}

QSize* q_calendarwidget_qbase_minimum_size_hint(void* self) {
    return QCalendarWidget_QBaseMinimumSizeHint((QCalendarWidget*)self);
}

QDate* q_calendarwidget_selected_date(void* self) {
    return QCalendarWidget_SelectedDate((QCalendarWidget*)self);
}

int32_t q_calendarwidget_year_shown(void* self) {
    return QCalendarWidget_YearShown((QCalendarWidget*)self);
}

int32_t q_calendarwidget_month_shown(void* self) {
    return QCalendarWidget_MonthShown((QCalendarWidget*)self);
}

QDate* q_calendarwidget_minimum_date(void* self) {
    return QCalendarWidget_MinimumDate((QCalendarWidget*)self);
}

void q_calendarwidget_set_minimum_date(void* self, void* date) {
    QCalendarWidget_SetMinimumDate((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_clear_minimum_date(void* self) {
    QCalendarWidget_ClearMinimumDate((QCalendarWidget*)self);
}

QDate* q_calendarwidget_maximum_date(void* self) {
    return QCalendarWidget_MaximumDate((QCalendarWidget*)self);
}

void q_calendarwidget_set_maximum_date(void* self, void* date) {
    QCalendarWidget_SetMaximumDate((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_clear_maximum_date(void* self) {
    QCalendarWidget_ClearMaximumDate((QCalendarWidget*)self);
}

int32_t q_calendarwidget_first_day_of_week(void* self) {
    return QCalendarWidget_FirstDayOfWeek((QCalendarWidget*)self);
}

void q_calendarwidget_set_first_day_of_week(void* self, int32_t dayOfWeek) {
    QCalendarWidget_SetFirstDayOfWeek((QCalendarWidget*)self, dayOfWeek);
}

bool q_calendarwidget_is_navigation_bar_visible(void* self) {
    return QCalendarWidget_IsNavigationBarVisible((QCalendarWidget*)self);
}

bool q_calendarwidget_is_grid_visible(void* self) {
    return QCalendarWidget_IsGridVisible((QCalendarWidget*)self);
}

QCalendar* q_calendarwidget_calendar(void* self) {
    return QCalendarWidget_Calendar((QCalendarWidget*)self);
}

void q_calendarwidget_set_calendar(void* self, void* calendar) {
    QCalendarWidget_SetCalendar((QCalendarWidget*)self, (QCalendar*)calendar);
}

int32_t q_calendarwidget_selection_mode(void* self) {
    return QCalendarWidget_SelectionMode((QCalendarWidget*)self);
}

void q_calendarwidget_set_selection_mode(void* self, int32_t mode) {
    QCalendarWidget_SetSelectionMode((QCalendarWidget*)self, mode);
}

int32_t q_calendarwidget_horizontal_header_format(void* self) {
    return QCalendarWidget_HorizontalHeaderFormat((QCalendarWidget*)self);
}

void q_calendarwidget_set_horizontal_header_format(void* self, int32_t format) {
    QCalendarWidget_SetHorizontalHeaderFormat((QCalendarWidget*)self, format);
}

int32_t q_calendarwidget_vertical_header_format(void* self) {
    return QCalendarWidget_VerticalHeaderFormat((QCalendarWidget*)self);
}

void q_calendarwidget_set_vertical_header_format(void* self, int32_t format) {
    QCalendarWidget_SetVerticalHeaderFormat((QCalendarWidget*)self, format);
}

QTextCharFormat* q_calendarwidget_header_text_format(void* self) {
    return QCalendarWidget_HeaderTextFormat((QCalendarWidget*)self);
}

void q_calendarwidget_set_header_text_format(void* self, void* format) {
    QCalendarWidget_SetHeaderTextFormat((QCalendarWidget*)self, (QTextCharFormat*)format);
}

QTextCharFormat* q_calendarwidget_weekday_text_format(void* self, int32_t dayOfWeek) {
    return QCalendarWidget_WeekdayTextFormat((QCalendarWidget*)self, dayOfWeek);
}

void q_calendarwidget_set_weekday_text_format(void* self, int32_t dayOfWeek, void* format) {
    QCalendarWidget_SetWeekdayTextFormat((QCalendarWidget*)self, dayOfWeek, (QTextCharFormat*)format);
}

libqt_map /* of QDate* to QTextCharFormat* */ q_calendarwidget_date_text_format(void* self) {
    // Convert QMap<QDate,QTextCharFormat> to libqt_map
    libqt_map _out = QCalendarWidget_DateTextFormat((QCalendarWidget*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

QTextCharFormat* q_calendarwidget_date_text_format2(void* self, void* date) {
    return QCalendarWidget_DateTextFormat2((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_set_date_text_format(void* self, void* date, void* format) {
    QCalendarWidget_SetDateTextFormat((QCalendarWidget*)self, (QDate*)date, (QTextCharFormat*)format);
}

bool q_calendarwidget_is_date_edit_enabled(void* self) {
    return QCalendarWidget_IsDateEditEnabled((QCalendarWidget*)self);
}

void q_calendarwidget_set_date_edit_enabled(void* self, bool enable) {
    QCalendarWidget_SetDateEditEnabled((QCalendarWidget*)self, enable);
}

int32_t q_calendarwidget_date_edit_accept_delay(void* self) {
    return QCalendarWidget_DateEditAcceptDelay((QCalendarWidget*)self);
}

void q_calendarwidget_set_date_edit_accept_delay(void* self, int delay) {
    QCalendarWidget_SetDateEditAcceptDelay((QCalendarWidget*)self, delay);
}

bool q_calendarwidget_event(void* self, void* event) {
    return QCalendarWidget_Event((QCalendarWidget*)self, (QEvent*)event);
}

void q_calendarwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QCalendarWidget_OnEvent((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_qbase_event(void* self, void* event) {
    return QCalendarWidget_QBaseEvent((QCalendarWidget*)self, (QEvent*)event);
}

bool q_calendarwidget_event_filter(void* self, void* watched, void* event) {
    return QCalendarWidget_EventFilter((QCalendarWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_calendarwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCalendarWidget_OnEventFilter((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QCalendarWidget_QBaseEventFilter((QCalendarWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_calendarwidget_mouse_press_event(void* self, void* event) {
    QCalendarWidget_MousePressEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnMousePressEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_mouse_press_event(void* self, void* event) {
    QCalendarWidget_QBaseMousePressEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_resize_event(void* self, void* event) {
    QCalendarWidget_ResizeEvent((QCalendarWidget*)self, (QResizeEvent*)event);
}

void q_calendarwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnResizeEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_resize_event(void* self, void* event) {
    QCalendarWidget_QBaseResizeEvent((QCalendarWidget*)self, (QResizeEvent*)event);
}

void q_calendarwidget_key_press_event(void* self, void* event) {
    QCalendarWidget_KeyPressEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

void q_calendarwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnKeyPressEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_key_press_event(void* self, void* event) {
    QCalendarWidget_QBaseKeyPressEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

void q_calendarwidget_paint_cell(void* self, void* painter, void* rect, void* date) {
    QCalendarWidget_PaintCell((QCalendarWidget*)self, (QPainter*)painter, (QRect*)rect, (QDate*)date);
}

void q_calendarwidget_on_paint_cell(void* self, void (*callback)(void*, void*, void*, void*)) {
    QCalendarWidget_OnPaintCell((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_paint_cell(void* self, void* painter, void* rect, void* date) {
    QCalendarWidget_QBasePaintCell((QCalendarWidget*)self, (QPainter*)painter, (QRect*)rect, (QDate*)date);
}

void q_calendarwidget_update_cell(void* self, void* date) {
    QCalendarWidget_UpdateCell((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_on_update_cell(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnUpdateCell((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_update_cell(void* self, void* date) {
    QCalendarWidget_QBaseUpdateCell((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_update_cells(void* self) {
    QCalendarWidget_UpdateCells((QCalendarWidget*)self);
}

void q_calendarwidget_on_update_cells(void* self, void (*callback)()) {
    QCalendarWidget_OnUpdateCells((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_qbase_update_cells(void* self) {
    QCalendarWidget_QBaseUpdateCells((QCalendarWidget*)self);
}

void q_calendarwidget_set_selected_date(void* self, void* date) {
    QCalendarWidget_SetSelectedDate((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_set_date_range(void* self, void* min, void* max) {
    QCalendarWidget_SetDateRange((QCalendarWidget*)self, (QDate*)min, (QDate*)max);
}

void q_calendarwidget_set_current_page(void* self, int year, int month) {
    QCalendarWidget_SetCurrentPage((QCalendarWidget*)self, year, month);
}

void q_calendarwidget_set_grid_visible(void* self, bool show) {
    QCalendarWidget_SetGridVisible((QCalendarWidget*)self, show);
}

void q_calendarwidget_set_navigation_bar_visible(void* self, bool visible) {
    QCalendarWidget_SetNavigationBarVisible((QCalendarWidget*)self, visible);
}

void q_calendarwidget_show_next_month(void* self) {
    QCalendarWidget_ShowNextMonth((QCalendarWidget*)self);
}

void q_calendarwidget_show_previous_month(void* self) {
    QCalendarWidget_ShowPreviousMonth((QCalendarWidget*)self);
}

void q_calendarwidget_show_next_year(void* self) {
    QCalendarWidget_ShowNextYear((QCalendarWidget*)self);
}

void q_calendarwidget_show_previous_year(void* self) {
    QCalendarWidget_ShowPreviousYear((QCalendarWidget*)self);
}

void q_calendarwidget_show_selected_date(void* self) {
    QCalendarWidget_ShowSelectedDate((QCalendarWidget*)self);
}

void q_calendarwidget_show_today(void* self) {
    QCalendarWidget_ShowToday((QCalendarWidget*)self);
}

void q_calendarwidget_selection_changed(void* self) {
    QCalendarWidget_SelectionChanged((QCalendarWidget*)self);
}

void q_calendarwidget_on_selection_changed(void* self, void (*callback)(void*)) {
    QCalendarWidget_Connect_SelectionChanged((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_clicked(void* self, void* date) {
    QCalendarWidget_Clicked((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_on_clicked(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_Connect_Clicked((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_activated(void* self, void* date) {
    QCalendarWidget_Activated((QCalendarWidget*)self, (QDate*)date);
}

void q_calendarwidget_on_activated(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_Connect_Activated((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_current_page_changed(void* self, int year, int month) {
    QCalendarWidget_CurrentPageChanged((QCalendarWidget*)self, year, month);
}

void q_calendarwidget_on_current_page_changed(void* self, void (*callback)(void*, int, int)) {
    QCalendarWidget_Connect_CurrentPageChanged((QCalendarWidget*)self, (intptr_t)callback);
}

const char* q_calendarwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendarwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_calendarwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_calendarwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_calendarwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_calendarwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_calendarwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_calendarwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_calendarwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_calendarwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_calendarwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_calendarwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_calendarwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_calendarwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_calendarwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_calendarwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_calendarwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_calendarwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_calendarwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_calendarwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_calendarwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_calendarwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_calendarwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_calendarwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_calendarwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_calendarwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_calendarwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_calendarwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_calendarwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_calendarwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_calendarwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_calendarwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_calendarwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_calendarwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_calendarwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_calendarwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_calendarwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_calendarwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_calendarwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_calendarwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_calendarwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_calendarwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_calendarwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_calendarwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_calendarwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_calendarwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_calendarwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_calendarwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_calendarwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_calendarwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_calendarwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_calendarwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_calendarwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_calendarwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_calendarwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_calendarwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_calendarwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_calendarwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_calendarwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_calendarwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_calendarwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_calendarwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_calendarwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_calendarwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_calendarwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_calendarwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_calendarwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_calendarwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_calendarwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_calendarwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_calendarwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_calendarwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_calendarwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_calendarwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_calendarwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_calendarwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_calendarwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_calendarwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_calendarwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_calendarwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_calendarwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_calendarwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_calendarwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_calendarwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_calendarwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_calendarwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_calendarwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_calendarwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_calendarwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_calendarwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_calendarwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_calendarwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_calendarwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_calendarwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_calendarwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_calendarwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_calendarwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_calendarwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_calendarwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_calendarwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_calendarwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_calendarwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendarwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_calendarwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_calendarwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_calendarwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_calendarwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_calendarwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_calendarwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_calendarwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_calendarwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_calendarwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_calendarwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_calendarwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_calendarwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_calendarwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendarwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_calendarwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_calendarwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_calendarwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_calendarwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_calendarwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_calendarwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_calendarwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_calendarwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_calendarwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_calendarwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_calendarwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_calendarwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_calendarwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_calendarwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_calendarwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_calendarwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_calendarwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_calendarwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_calendarwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_calendarwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_calendarwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_calendarwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_calendarwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_calendarwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_calendarwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_calendarwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_calendarwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_calendarwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_calendarwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_calendarwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_calendarwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_calendarwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_calendarwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_calendarwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_calendarwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_calendarwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_calendarwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_calendarwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_calendarwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_calendarwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_calendarwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_calendarwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_calendarwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_calendarwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_calendarwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_calendarwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_calendarwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_calendarwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_calendarwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_calendarwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_calendarwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_calendarwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_calendarwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_calendarwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_calendarwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_calendarwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_calendarwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_calendarwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_calendarwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_calendarwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_calendarwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_calendarwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_calendarwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_calendarwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_calendarwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_calendarwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_calendarwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_calendarwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_calendarwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_calendarwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_calendarwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_calendarwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_calendarwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_calendarwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_calendarwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_calendarwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_calendarwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_calendarwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_calendarwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_calendarwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_calendarwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_calendarwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_calendarwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_calendarwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_calendarwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_calendarwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_calendarwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_calendarwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_calendarwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_calendarwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_calendarwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_calendarwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_calendarwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_calendarwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_calendarwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_calendarwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_calendarwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_calendarwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_calendarwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_calendarwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_calendarwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_calendarwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_calendarwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_calendarwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_calendarwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_calendarwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_calendarwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_calendarwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_calendarwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_calendarwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_calendarwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_calendarwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_calendarwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_calendarwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_calendarwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_calendarwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_calendarwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_calendarwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_calendarwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_calendarwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_calendarwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_calendarwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_calendarwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_calendarwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_calendarwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_calendarwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_calendarwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_calendarwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_calendarwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_calendarwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_calendarwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_calendarwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_calendarwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_calendarwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_calendarwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_calendarwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_calendarwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_calendarwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_calendarwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_calendarwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_calendarwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_calendarwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_calendarwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_calendarwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_calendarwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_calendarwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendarwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_calendarwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_calendarwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_calendarwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_calendarwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_calendarwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_calendarwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_calendarwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_calendarwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_calendarwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_calendarwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_calendarwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_calendarwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_calendarwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_calendarwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_calendarwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_calendarwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_calendarwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_calendarwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_calendarwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_calendarwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_calendarwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_calendarwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_calendarwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_calendarwidget_dynamic_property_names\n");
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

QBindingStorage* q_calendarwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_calendarwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_calendarwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_calendarwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_calendarwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_calendarwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_calendarwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_calendarwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_calendarwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_calendarwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_calendarwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_calendarwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_calendarwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_calendarwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_calendarwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_calendarwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_calendarwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_calendarwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_calendarwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_calendarwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_calendarwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_calendarwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_calendarwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_calendarwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_calendarwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_calendarwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_calendarwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_calendarwidget_dev_type(void* self) {
    return QCalendarWidget_DevType((QCalendarWidget*)self);
}

int32_t q_calendarwidget_qbase_dev_type(void* self) {
    return QCalendarWidget_QBaseDevType((QCalendarWidget*)self);
}

void q_calendarwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QCalendarWidget_OnDevType((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_set_visible(void* self, bool visible) {
    QCalendarWidget_SetVisible((QCalendarWidget*)self, visible);
}

void q_calendarwidget_qbase_set_visible(void* self, bool visible) {
    QCalendarWidget_QBaseSetVisible((QCalendarWidget*)self, visible);
}

void q_calendarwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QCalendarWidget_OnSetVisible((QCalendarWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_height_for_width(void* self, int param1) {
    return QCalendarWidget_HeightForWidth((QCalendarWidget*)self, param1);
}

int32_t q_calendarwidget_qbase_height_for_width(void* self, int param1) {
    return QCalendarWidget_QBaseHeightForWidth((QCalendarWidget*)self, param1);
}

void q_calendarwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QCalendarWidget_OnHeightForWidth((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_has_height_for_width(void* self) {
    return QCalendarWidget_HasHeightForWidth((QCalendarWidget*)self);
}

bool q_calendarwidget_qbase_has_height_for_width(void* self) {
    return QCalendarWidget_QBaseHasHeightForWidth((QCalendarWidget*)self);
}

void q_calendarwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QCalendarWidget_OnHasHeightForWidth((QCalendarWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_calendarwidget_paint_engine(void* self) {
    return QCalendarWidget_PaintEngine((QCalendarWidget*)self);
}

QPaintEngine* q_calendarwidget_qbase_paint_engine(void* self) {
    return QCalendarWidget_QBasePaintEngine((QCalendarWidget*)self);
}

void q_calendarwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QCalendarWidget_OnPaintEngine((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_mouse_release_event(void* self, void* event) {
    QCalendarWidget_MouseReleaseEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_qbase_mouse_release_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseReleaseEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnMouseReleaseEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_mouse_double_click_event(void* self, void* event) {
    QCalendarWidget_MouseDoubleClickEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseDoubleClickEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnMouseDoubleClickEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_mouse_move_event(void* self, void* event) {
    QCalendarWidget_MouseMoveEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_qbase_mouse_move_event(void* self, void* event) {
    QCalendarWidget_QBaseMouseMoveEvent((QCalendarWidget*)self, (QMouseEvent*)event);
}

void q_calendarwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnMouseMoveEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_wheel_event(void* self, void* event) {
    QCalendarWidget_WheelEvent((QCalendarWidget*)self, (QWheelEvent*)event);
}

void q_calendarwidget_qbase_wheel_event(void* self, void* event) {
    QCalendarWidget_QBaseWheelEvent((QCalendarWidget*)self, (QWheelEvent*)event);
}

void q_calendarwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnWheelEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_key_release_event(void* self, void* event) {
    QCalendarWidget_KeyReleaseEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

void q_calendarwidget_qbase_key_release_event(void* self, void* event) {
    QCalendarWidget_QBaseKeyReleaseEvent((QCalendarWidget*)self, (QKeyEvent*)event);
}

void q_calendarwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnKeyReleaseEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_focus_in_event(void* self, void* event) {
    QCalendarWidget_FocusInEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

void q_calendarwidget_qbase_focus_in_event(void* self, void* event) {
    QCalendarWidget_QBaseFocusInEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

void q_calendarwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnFocusInEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_focus_out_event(void* self, void* event) {
    QCalendarWidget_FocusOutEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

void q_calendarwidget_qbase_focus_out_event(void* self, void* event) {
    QCalendarWidget_QBaseFocusOutEvent((QCalendarWidget*)self, (QFocusEvent*)event);
}

void q_calendarwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnFocusOutEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_enter_event(void* self, void* event) {
    QCalendarWidget_EnterEvent((QCalendarWidget*)self, (QEnterEvent*)event);
}

void q_calendarwidget_qbase_enter_event(void* self, void* event) {
    QCalendarWidget_QBaseEnterEvent((QCalendarWidget*)self, (QEnterEvent*)event);
}

void q_calendarwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnEnterEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_leave_event(void* self, void* event) {
    QCalendarWidget_LeaveEvent((QCalendarWidget*)self, (QEvent*)event);
}

void q_calendarwidget_qbase_leave_event(void* self, void* event) {
    QCalendarWidget_QBaseLeaveEvent((QCalendarWidget*)self, (QEvent*)event);
}

void q_calendarwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnLeaveEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_paint_event(void* self, void* event) {
    QCalendarWidget_PaintEvent((QCalendarWidget*)self, (QPaintEvent*)event);
}

void q_calendarwidget_qbase_paint_event(void* self, void* event) {
    QCalendarWidget_QBasePaintEvent((QCalendarWidget*)self, (QPaintEvent*)event);
}

void q_calendarwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnPaintEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_move_event(void* self, void* event) {
    QCalendarWidget_MoveEvent((QCalendarWidget*)self, (QMoveEvent*)event);
}

void q_calendarwidget_qbase_move_event(void* self, void* event) {
    QCalendarWidget_QBaseMoveEvent((QCalendarWidget*)self, (QMoveEvent*)event);
}

void q_calendarwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnMoveEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_close_event(void* self, void* event) {
    QCalendarWidget_CloseEvent((QCalendarWidget*)self, (QCloseEvent*)event);
}

void q_calendarwidget_qbase_close_event(void* self, void* event) {
    QCalendarWidget_QBaseCloseEvent((QCalendarWidget*)self, (QCloseEvent*)event);
}

void q_calendarwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnCloseEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_context_menu_event(void* self, void* event) {
    QCalendarWidget_ContextMenuEvent((QCalendarWidget*)self, (QContextMenuEvent*)event);
}

void q_calendarwidget_qbase_context_menu_event(void* self, void* event) {
    QCalendarWidget_QBaseContextMenuEvent((QCalendarWidget*)self, (QContextMenuEvent*)event);
}

void q_calendarwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnContextMenuEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_tablet_event(void* self, void* event) {
    QCalendarWidget_TabletEvent((QCalendarWidget*)self, (QTabletEvent*)event);
}

void q_calendarwidget_qbase_tablet_event(void* self, void* event) {
    QCalendarWidget_QBaseTabletEvent((QCalendarWidget*)self, (QTabletEvent*)event);
}

void q_calendarwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnTabletEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_action_event(void* self, void* event) {
    QCalendarWidget_ActionEvent((QCalendarWidget*)self, (QActionEvent*)event);
}

void q_calendarwidget_qbase_action_event(void* self, void* event) {
    QCalendarWidget_QBaseActionEvent((QCalendarWidget*)self, (QActionEvent*)event);
}

void q_calendarwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnActionEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_drag_enter_event(void* self, void* event) {
    QCalendarWidget_DragEnterEvent((QCalendarWidget*)self, (QDragEnterEvent*)event);
}

void q_calendarwidget_qbase_drag_enter_event(void* self, void* event) {
    QCalendarWidget_QBaseDragEnterEvent((QCalendarWidget*)self, (QDragEnterEvent*)event);
}

void q_calendarwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnDragEnterEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_drag_move_event(void* self, void* event) {
    QCalendarWidget_DragMoveEvent((QCalendarWidget*)self, (QDragMoveEvent*)event);
}

void q_calendarwidget_qbase_drag_move_event(void* self, void* event) {
    QCalendarWidget_QBaseDragMoveEvent((QCalendarWidget*)self, (QDragMoveEvent*)event);
}

void q_calendarwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnDragMoveEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_drag_leave_event(void* self, void* event) {
    QCalendarWidget_DragLeaveEvent((QCalendarWidget*)self, (QDragLeaveEvent*)event);
}

void q_calendarwidget_qbase_drag_leave_event(void* self, void* event) {
    QCalendarWidget_QBaseDragLeaveEvent((QCalendarWidget*)self, (QDragLeaveEvent*)event);
}

void q_calendarwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnDragLeaveEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_drop_event(void* self, void* event) {
    QCalendarWidget_DropEvent((QCalendarWidget*)self, (QDropEvent*)event);
}

void q_calendarwidget_qbase_drop_event(void* self, void* event) {
    QCalendarWidget_QBaseDropEvent((QCalendarWidget*)self, (QDropEvent*)event);
}

void q_calendarwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnDropEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_show_event(void* self, void* event) {
    QCalendarWidget_ShowEvent((QCalendarWidget*)self, (QShowEvent*)event);
}

void q_calendarwidget_qbase_show_event(void* self, void* event) {
    QCalendarWidget_QBaseShowEvent((QCalendarWidget*)self, (QShowEvent*)event);
}

void q_calendarwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnShowEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_hide_event(void* self, void* event) {
    QCalendarWidget_HideEvent((QCalendarWidget*)self, (QHideEvent*)event);
}

void q_calendarwidget_qbase_hide_event(void* self, void* event) {
    QCalendarWidget_QBaseHideEvent((QCalendarWidget*)self, (QHideEvent*)event);
}

void q_calendarwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnHideEvent((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCalendarWidget_NativeEvent((QCalendarWidget*)self, qstring(eventType), message, result);
}

bool q_calendarwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCalendarWidget_QBaseNativeEvent((QCalendarWidget*)self, qstring(eventType), message, result);
}

void q_calendarwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QCalendarWidget_OnNativeEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_change_event(void* self, void* param1) {
    QCalendarWidget_ChangeEvent((QCalendarWidget*)self, (QEvent*)param1);
}

void q_calendarwidget_qbase_change_event(void* self, void* param1) {
    QCalendarWidget_QBaseChangeEvent((QCalendarWidget*)self, (QEvent*)param1);
}

void q_calendarwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnChangeEvent((QCalendarWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_metric(void* self, int32_t param1) {
    return QCalendarWidget_Metric((QCalendarWidget*)self, param1);
}

int32_t q_calendarwidget_qbase_metric(void* self, int32_t param1) {
    return QCalendarWidget_QBaseMetric((QCalendarWidget*)self, param1);
}

void q_calendarwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QCalendarWidget_OnMetric((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_init_painter(void* self, void* painter) {
    QCalendarWidget_InitPainter((QCalendarWidget*)self, (QPainter*)painter);
}

void q_calendarwidget_qbase_init_painter(void* self, void* painter) {
    QCalendarWidget_QBaseInitPainter((QCalendarWidget*)self, (QPainter*)painter);
}

void q_calendarwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnInitPainter((QCalendarWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_calendarwidget_redirected(void* self, void* offset) {
    return QCalendarWidget_Redirected((QCalendarWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_calendarwidget_qbase_redirected(void* self, void* offset) {
    return QCalendarWidget_QBaseRedirected((QCalendarWidget*)self, (QPoint*)offset);
}

void q_calendarwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QCalendarWidget_OnRedirected((QCalendarWidget*)self, (intptr_t)callback);
}

QPainter* q_calendarwidget_shared_painter(void* self) {
    return QCalendarWidget_SharedPainter((QCalendarWidget*)self);
}

QPainter* q_calendarwidget_qbase_shared_painter(void* self) {
    return QCalendarWidget_QBaseSharedPainter((QCalendarWidget*)self);
}

void q_calendarwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QCalendarWidget_OnSharedPainter((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_input_method_event(void* self, void* param1) {
    QCalendarWidget_InputMethodEvent((QCalendarWidget*)self, (QInputMethodEvent*)param1);
}

void q_calendarwidget_qbase_input_method_event(void* self, void* param1) {
    QCalendarWidget_QBaseInputMethodEvent((QCalendarWidget*)self, (QInputMethodEvent*)param1);
}

void q_calendarwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnInputMethodEvent((QCalendarWidget*)self, (intptr_t)callback);
}

QVariant* q_calendarwidget_input_method_query(void* self, int32_t param1) {
    return QCalendarWidget_InputMethodQuery((QCalendarWidget*)self, param1);
}

QVariant* q_calendarwidget_qbase_input_method_query(void* self, int32_t param1) {
    return QCalendarWidget_QBaseInputMethodQuery((QCalendarWidget*)self, param1);
}

void q_calendarwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QCalendarWidget_OnInputMethodQuery((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_focus_next_prev_child(void* self, bool next) {
    return QCalendarWidget_FocusNextPrevChild((QCalendarWidget*)self, next);
}

bool q_calendarwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QCalendarWidget_QBaseFocusNextPrevChild((QCalendarWidget*)self, next);
}

void q_calendarwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QCalendarWidget_OnFocusNextPrevChild((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_timer_event(void* self, void* event) {
    QCalendarWidget_TimerEvent((QCalendarWidget*)self, (QTimerEvent*)event);
}

void q_calendarwidget_qbase_timer_event(void* self, void* event) {
    QCalendarWidget_QBaseTimerEvent((QCalendarWidget*)self, (QTimerEvent*)event);
}

void q_calendarwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnTimerEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_child_event(void* self, void* event) {
    QCalendarWidget_ChildEvent((QCalendarWidget*)self, (QChildEvent*)event);
}

void q_calendarwidget_qbase_child_event(void* self, void* event) {
    QCalendarWidget_QBaseChildEvent((QCalendarWidget*)self, (QChildEvent*)event);
}

void q_calendarwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnChildEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_custom_event(void* self, void* event) {
    QCalendarWidget_CustomEvent((QCalendarWidget*)self, (QEvent*)event);
}

void q_calendarwidget_qbase_custom_event(void* self, void* event) {
    QCalendarWidget_QBaseCustomEvent((QCalendarWidget*)self, (QEvent*)event);
}

void q_calendarwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnCustomEvent((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_connect_notify(void* self, void* signal) {
    QCalendarWidget_ConnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

void q_calendarwidget_qbase_connect_notify(void* self, void* signal) {
    QCalendarWidget_QBaseConnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

void q_calendarwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnConnectNotify((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_disconnect_notify(void* self, void* signal) {
    QCalendarWidget_DisconnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

void q_calendarwidget_qbase_disconnect_notify(void* self, void* signal) {
    QCalendarWidget_QBaseDisconnectNotify((QCalendarWidget*)self, (QMetaMethod*)signal);
}

void q_calendarwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QCalendarWidget_OnDisconnectNotify((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_update_micro_focus(void* self) {
    QCalendarWidget_UpdateMicroFocus((QCalendarWidget*)self);
}

void q_calendarwidget_qbase_update_micro_focus(void* self) {
    QCalendarWidget_QBaseUpdateMicroFocus((QCalendarWidget*)self);
}

void q_calendarwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QCalendarWidget_OnUpdateMicroFocus((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_create(void* self) {
    QCalendarWidget_Create((QCalendarWidget*)self);
}

void q_calendarwidget_qbase_create(void* self) {
    QCalendarWidget_QBaseCreate((QCalendarWidget*)self);
}

void q_calendarwidget_on_create(void* self, void (*callback)()) {
    QCalendarWidget_OnCreate((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_destroy(void* self) {
    QCalendarWidget_Destroy((QCalendarWidget*)self);
}

void q_calendarwidget_qbase_destroy(void* self) {
    QCalendarWidget_QBaseDestroy((QCalendarWidget*)self);
}

void q_calendarwidget_on_destroy(void* self, void (*callback)()) {
    QCalendarWidget_OnDestroy((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_focus_next_child(void* self) {
    return QCalendarWidget_FocusNextChild((QCalendarWidget*)self);
}

bool q_calendarwidget_qbase_focus_next_child(void* self) {
    return QCalendarWidget_QBaseFocusNextChild((QCalendarWidget*)self);
}

void q_calendarwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QCalendarWidget_OnFocusNextChild((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_focus_previous_child(void* self) {
    return QCalendarWidget_FocusPreviousChild((QCalendarWidget*)self);
}

bool q_calendarwidget_qbase_focus_previous_child(void* self) {
    return QCalendarWidget_QBaseFocusPreviousChild((QCalendarWidget*)self);
}

void q_calendarwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QCalendarWidget_OnFocusPreviousChild((QCalendarWidget*)self, (intptr_t)callback);
}

QObject* q_calendarwidget_sender(void* self) {
    return QCalendarWidget_Sender((QCalendarWidget*)self);
}

QObject* q_calendarwidget_qbase_sender(void* self) {
    return QCalendarWidget_QBaseSender((QCalendarWidget*)self);
}

void q_calendarwidget_on_sender(void* self, QObject* (*callback)()) {
    QCalendarWidget_OnSender((QCalendarWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_sender_signal_index(void* self) {
    return QCalendarWidget_SenderSignalIndex((QCalendarWidget*)self);
}

int32_t q_calendarwidget_qbase_sender_signal_index(void* self) {
    return QCalendarWidget_QBaseSenderSignalIndex((QCalendarWidget*)self);
}

void q_calendarwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QCalendarWidget_OnSenderSignalIndex((QCalendarWidget*)self, (intptr_t)callback);
}

int32_t q_calendarwidget_receivers(void* self, const char* signal) {
    return QCalendarWidget_Receivers((QCalendarWidget*)self, signal);
}

int32_t q_calendarwidget_qbase_receivers(void* self, const char* signal) {
    return QCalendarWidget_QBaseReceivers((QCalendarWidget*)self, signal);
}

void q_calendarwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QCalendarWidget_OnReceivers((QCalendarWidget*)self, (intptr_t)callback);
}

bool q_calendarwidget_is_signal_connected(void* self, void* signal) {
    return QCalendarWidget_IsSignalConnected((QCalendarWidget*)self, (QMetaMethod*)signal);
}

bool q_calendarwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QCalendarWidget_QBaseIsSignalConnected((QCalendarWidget*)self, (QMetaMethod*)signal);
}

void q_calendarwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QCalendarWidget_OnIsSignalConnected((QCalendarWidget*)self, (intptr_t)callback);
}

double q_calendarwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCalendarWidget_GetDecodedMetricF((QCalendarWidget*)self, metricA, metricB);
}

double q_calendarwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCalendarWidget_QBaseGetDecodedMetricF((QCalendarWidget*)self, metricA, metricB);
}

void q_calendarwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QCalendarWidget_OnGetDecodedMetricF((QCalendarWidget*)self, (intptr_t)callback);
}

void q_calendarwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_calendarwidget_delete(void* self) {
    QCalendarWidget_Delete((QCalendarWidget*)(self));
}
