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

QDateTimeEdit* q_datetimeedit_new(void* parent) {
    return QDateTimeEdit_new((QWidget*)parent);
}

QDateTimeEdit* q_datetimeedit_new2() {
    return QDateTimeEdit_new2();
}

QDateTimeEdit* q_datetimeedit_new3(void* dt) {
    return QDateTimeEdit_new3((QDateTime*)dt);
}

QDateTimeEdit* q_datetimeedit_new4(void* d) {
    return QDateTimeEdit_new4((QDate*)d);
}

QDateTimeEdit* q_datetimeedit_new5(void* t) {
    return QDateTimeEdit_new5((QTime*)t);
}

QDateTimeEdit* q_datetimeedit_new6(void* dt, void* parent) {
    return QDateTimeEdit_new6((QDateTime*)dt, (QWidget*)parent);
}

QDateTimeEdit* q_datetimeedit_new7(void* d, void* parent) {
    return QDateTimeEdit_new7((QDate*)d, (QWidget*)parent);
}

QDateTimeEdit* q_datetimeedit_new8(void* t, void* parent) {
    return QDateTimeEdit_new8((QTime*)t, (QWidget*)parent);
}

QMetaObject* q_datetimeedit_meta_object(void* self) {
    return QDateTimeEdit_MetaObject((QDateTimeEdit*)self);
}

void* q_datetimeedit_metacast(void* self, const char* param1) {
    return QDateTimeEdit_Metacast((QDateTimeEdit*)self, param1);
}

int32_t q_datetimeedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeEdit_Metacall((QDateTimeEdit*)self, param1, param2, param3);
}

void q_datetimeedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDateTimeEdit_OnMetacall((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeEdit_QBaseMetacall((QDateTimeEdit*)self, param1, param2, param3);
}

const char* q_datetimeedit_tr(const char* s) {
    libqt_string _str = QDateTimeEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_datetimeedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

QDate* q_datetimeedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

QTime* q_datetimeedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

QCalendar* q_datetimeedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

void q_datetimeedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

QDateTime* q_datetimeedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

void q_datetimeedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

void q_datetimeedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

QDateTime* q_datetimeedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

void q_datetimeedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

void q_datetimeedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

void q_datetimeedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

QDate* q_datetimeedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

void q_datetimeedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

void q_datetimeedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

QDate* q_datetimeedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

void q_datetimeedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

void q_datetimeedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

void q_datetimeedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

QTime* q_datetimeedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

void q_datetimeedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

void q_datetimeedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

QTime* q_datetimeedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

void q_datetimeedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

void q_datetimeedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

void q_datetimeedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

int64_t q_datetimeedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

int64_t q_datetimeedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

int64_t q_datetimeedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

void q_datetimeedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

int32_t q_datetimeedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

void q_datetimeedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

QCalendarWidget* q_datetimeedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

void q_datetimeedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

int32_t q_datetimeedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

void q_datetimeedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

const char* q_datetimeedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetimeedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

bool q_datetimeedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

void q_datetimeedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

int64_t q_datetimeedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

void q_datetimeedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

QSize* q_datetimeedit_size_hint(void* self) {
    return QDateTimeEdit_SizeHint((QDateTimeEdit*)self);
}

void q_datetimeedit_on_size_hint(void* self, QSize* (*slot)()) {
    QDateTimeEdit_OnSizeHint((QDateTimeEdit*)self, (intptr_t)slot);
}

QSize* q_datetimeedit_qbase_size_hint(void* self) {
    return QDateTimeEdit_QBaseSizeHint((QDateTimeEdit*)self);
}

void q_datetimeedit_clear(void* self) {
    QDateTimeEdit_Clear((QDateTimeEdit*)self);
}

void q_datetimeedit_on_clear(void* self, void (*slot)()) {
    QDateTimeEdit_OnClear((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_clear(void* self) {
    QDateTimeEdit_QBaseClear((QDateTimeEdit*)self);
}

void q_datetimeedit_step_by(void* self, int steps) {
    QDateTimeEdit_StepBy((QDateTimeEdit*)self, steps);
}

void q_datetimeedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QDateTimeEdit_OnStepBy((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_step_by(void* self, int steps) {
    QDateTimeEdit_QBaseStepBy((QDateTimeEdit*)self, steps);
}

bool q_datetimeedit_event(void* self, void* event) {
    return QDateTimeEdit_Event((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QDateTimeEdit_OnEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_qbase_event(void* self, void* event) {
    return QDateTimeEdit_QBaseEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_datetimeedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

void q_datetimeedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

void q_datetimeedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_datetimeedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

void q_datetimeedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

void q_datetimeedit_key_press_event(void* self, void* event) {
    QDateTimeEdit_KeyPressEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

void q_datetimeedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnKeyPressEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_key_press_event(void* self, void* event) {
    QDateTimeEdit_QBaseKeyPressEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

void q_datetimeedit_wheel_event(void* self, void* event) {
    QDateTimeEdit_WheelEvent((QDateTimeEdit*)self, (QWheelEvent*)event);
}

void q_datetimeedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnWheelEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_wheel_event(void* self, void* event) {
    QDateTimeEdit_QBaseWheelEvent((QDateTimeEdit*)self, (QWheelEvent*)event);
}

void q_datetimeedit_focus_in_event(void* self, void* event) {
    QDateTimeEdit_FocusInEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

void q_datetimeedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnFocusInEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_focus_in_event(void* self, void* event) {
    QDateTimeEdit_QBaseFocusInEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

bool q_datetimeedit_focus_next_prev_child(void* self, bool next) {
    return QDateTimeEdit_FocusNextPrevChild((QDateTimeEdit*)self, next);
}

void q_datetimeedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDateTimeEdit_OnFocusNextPrevChild((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QDateTimeEdit_QBaseFocusNextPrevChild((QDateTimeEdit*)self, next);
}

int64_t q_datetimeedit_validate(void* self, const char* input, int* pos) {
    return QDateTimeEdit_Validate((QDateTimeEdit*)self, qstring(input), pos);
}

void q_datetimeedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QDateTimeEdit_OnValidate((QDateTimeEdit*)self, (intptr_t)slot);
}

int64_t q_datetimeedit_qbase_validate(void* self, const char* input, int* pos) {
    return QDateTimeEdit_QBaseValidate((QDateTimeEdit*)self, qstring(input), pos);
}

void q_datetimeedit_fixup(void* self, const char* input) {
    QDateTimeEdit_Fixup((QDateTimeEdit*)self, qstring(input));
}

void q_datetimeedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QDateTimeEdit_OnFixup((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_fixup(void* self, const char* input) {
    QDateTimeEdit_QBaseFixup((QDateTimeEdit*)self, qstring(input));
}

QDateTime* q_datetimeedit_date_time_from_text(void* self, const char* text) {
    return QDateTimeEdit_DateTimeFromText((QDateTimeEdit*)self, qstring(text));
}

void q_datetimeedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QDateTimeEdit_OnDateTimeFromText((QDateTimeEdit*)self, (intptr_t)slot);
}

QDateTime* q_datetimeedit_qbase_date_time_from_text(void* self, const char* text) {
    return QDateTimeEdit_QBaseDateTimeFromText((QDateTimeEdit*)self, qstring(text));
}

const char* q_datetimeedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateTimeEdit_TextFromDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QDateTimeEdit_OnTextFromDateTime((QDateTimeEdit*)self, (intptr_t)slot);
}

const char* q_datetimeedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateTimeEdit_QBaseTextFromDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_datetimeedit_step_enabled(void* self) {
    return QDateTimeEdit_StepEnabled((QDateTimeEdit*)self);
}

void q_datetimeedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QDateTimeEdit_OnStepEnabled((QDateTimeEdit*)self, (intptr_t)slot);
}

int64_t q_datetimeedit_qbase_step_enabled(void* self) {
    return QDateTimeEdit_QBaseStepEnabled((QDateTimeEdit*)self);
}

void q_datetimeedit_mouse_press_event(void* self, void* event) {
    QDateTimeEdit_MousePressEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMousePressEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_mouse_press_event(void* self, void* event) {
    QDateTimeEdit_QBaseMousePressEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_paint_event(void* self, void* event) {
    QDateTimeEdit_PaintEvent((QDateTimeEdit*)self, (QPaintEvent*)event);
}

void q_datetimeedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnPaintEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_paint_event(void* self, void* event) {
    QDateTimeEdit_QBasePaintEvent((QDateTimeEdit*)self, (QPaintEvent*)event);
}

void q_datetimeedit_init_style_option(void* self, void* option) {
    QDateTimeEdit_InitStyleOption((QDateTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

void q_datetimeedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInitStyleOption((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_qbase_init_style_option(void* self, void* option) {
    QDateTimeEdit_QBaseInitStyleOption((QDateTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

const char* q_datetimeedit_tr2(const char* s, const char* c) {
    libqt_string _str = QDateTimeEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetimeedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDateTimeEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_datetimeedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_datetimeedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int64_t q_datetimeedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_datetimeedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_datetimeedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetimeedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_datetimeedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_datetimeedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_datetimeedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_datetimeedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int64_t q_datetimeedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_datetimeedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_datetimeedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_datetimeedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_datetimeedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void q_datetimeedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void q_datetimeedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_datetimeedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_datetimeedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_datetimeedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_datetimeedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

uintptr_t q_datetimeedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_datetimeedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_datetimeedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_datetimeedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_datetimeedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_datetimeedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_datetimeedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_datetimeedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_datetimeedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_datetimeedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_datetimeedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_datetimeedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_datetimeedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_datetimeedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_datetimeedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_datetimeedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_datetimeedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_datetimeedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_datetimeedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_datetimeedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_datetimeedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_datetimeedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_datetimeedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_datetimeedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_datetimeedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_datetimeedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_datetimeedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_datetimeedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_datetimeedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_datetimeedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_datetimeedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_datetimeedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_datetimeedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_datetimeedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_datetimeedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_datetimeedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_datetimeedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_datetimeedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_datetimeedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_datetimeedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_datetimeedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_datetimeedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_datetimeedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_datetimeedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_datetimeedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_datetimeedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_datetimeedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_datetimeedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_datetimeedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_datetimeedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_datetimeedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_datetimeedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_datetimeedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_datetimeedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_datetimeedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_datetimeedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_datetimeedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_datetimeedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_datetimeedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_datetimeedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_datetimeedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_datetimeedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_datetimeedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_datetimeedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_datetimeedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_datetimeedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_datetimeedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_datetimeedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_datetimeedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_datetimeedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_datetimeedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_datetimeedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_datetimeedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_datetimeedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_datetimeedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_datetimeedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_datetimeedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_datetimeedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_datetimeedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_datetimeedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_datetimeedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_datetimeedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_datetimeedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_datetimeedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_datetimeedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_datetimeedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_datetimeedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_datetimeedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_datetimeedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_datetimeedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_datetimeedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_datetimeedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_datetimeedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_datetimeedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_datetimeedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_datetimeedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_datetimeedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_datetimeedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_datetimeedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_datetimeedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetimeedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_datetimeedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_datetimeedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_datetimeedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_datetimeedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_datetimeedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_datetimeedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_datetimeedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_datetimeedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_datetimeedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_datetimeedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_datetimeedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_datetimeedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_datetimeedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetimeedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_datetimeedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_datetimeedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_datetimeedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_datetimeedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_datetimeedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_datetimeedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_datetimeedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_datetimeedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_datetimeedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_datetimeedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_datetimeedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_datetimeedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_datetimeedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_datetimeedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_datetimeedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_datetimeedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_datetimeedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_datetimeedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_datetimeedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_datetimeedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_datetimeedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_datetimeedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_datetimeedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_datetimeedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_datetimeedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_datetimeedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_datetimeedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_datetimeedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_datetimeedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_datetimeedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_datetimeedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_datetimeedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_datetimeedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_datetimeedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_datetimeedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_datetimeedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_datetimeedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_datetimeedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_datetimeedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_datetimeedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_datetimeedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_datetimeedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_datetimeedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_datetimeedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_datetimeedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_datetimeedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_datetimeedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_datetimeedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_datetimeedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_datetimeedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_datetimeedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_datetimeedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_datetimeedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_datetimeedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_datetimeedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_datetimeedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_datetimeedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_datetimeedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_datetimeedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_datetimeedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_datetimeedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_datetimeedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_datetimeedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_datetimeedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_datetimeedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_datetimeedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_datetimeedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_datetimeedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_datetimeedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_datetimeedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_datetimeedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_datetimeedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_datetimeedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_datetimeedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_datetimeedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_datetimeedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_datetimeedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_datetimeedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_datetimeedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_datetimeedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_datetimeedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_datetimeedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_datetimeedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_datetimeedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_datetimeedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_datetimeedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_datetimeedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_datetimeedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_datetimeedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_datetimeedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_datetimeedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_datetimeedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_datetimeedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_datetimeedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_datetimeedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_datetimeedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_datetimeedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_datetimeedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_datetimeedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_datetimeedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_datetimeedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_datetimeedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_datetimeedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_datetimeedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_datetimeedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_datetimeedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_datetimeedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_datetimeedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_datetimeedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_datetimeedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_datetimeedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_datetimeedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_datetimeedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_datetimeedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_datetimeedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_datetimeedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_datetimeedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_datetimeedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_datetimeedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_datetimeedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_datetimeedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_datetimeedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_datetimeedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_datetimeedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_datetimeedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_datetimeedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_datetimeedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_datetimeedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_datetimeedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_datetimeedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_datetimeedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_datetimeedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_datetimeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_datetimeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_datetimeedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_datetimeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_datetimeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_datetimeedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_datetimeedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_datetimeedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_datetimeedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_datetimeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_datetimeedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_datetimeedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_datetimeedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_datetimeedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_datetimeedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datetimeedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_datetimeedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_datetimeedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_datetimeedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_datetimeedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_datetimeedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_datetimeedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_datetimeedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_datetimeedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_datetimeedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_datetimeedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_datetimeedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_datetimeedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_datetimeedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_datetimeedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_datetimeedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_datetimeedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_datetimeedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_datetimeedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_datetimeedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_datetimeedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_datetimeedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_datetimeedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_datetimeedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_datetimeedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_datetimeedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_datetimeedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_datetimeedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_datetimeedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_datetimeedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_datetimeedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_datetimeedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_datetimeedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_datetimeedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_datetimeedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_datetimeedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_datetimeedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_datetimeedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_datetimeedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_datetimeedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_datetimeedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_datetimeedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_datetimeedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_datetimeedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_datetimeedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_datetimeedit_minimum_size_hint(void* self) {
    return QDateTimeEdit_MinimumSizeHint((QDateTimeEdit*)self);
}

QSize* q_datetimeedit_qbase_minimum_size_hint(void* self) {
    return QDateTimeEdit_QBaseMinimumSizeHint((QDateTimeEdit*)self);
}

void q_datetimeedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDateTimeEdit_OnMinimumSizeHint((QDateTimeEdit*)self, (intptr_t)slot);
}

QVariant* q_datetimeedit_input_method_query(void* self, int64_t param1) {
    return QDateTimeEdit_InputMethodQuery((QDateTimeEdit*)self, param1);
}

QVariant* q_datetimeedit_qbase_input_method_query(void* self, int64_t param1) {
    return QDateTimeEdit_QBaseInputMethodQuery((QDateTimeEdit*)self, param1);
}

void q_datetimeedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDateTimeEdit_OnInputMethodQuery((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_resize_event(void* self, void* event) {
    QDateTimeEdit_ResizeEvent((QDateTimeEdit*)self, (QResizeEvent*)event);
}

void q_datetimeedit_qbase_resize_event(void* self, void* event) {
    QDateTimeEdit_QBaseResizeEvent((QDateTimeEdit*)self, (QResizeEvent*)event);
}

void q_datetimeedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnResizeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_key_release_event(void* self, void* event) {
    QDateTimeEdit_KeyReleaseEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

void q_datetimeedit_qbase_key_release_event(void* self, void* event) {
    QDateTimeEdit_QBaseKeyReleaseEvent((QDateTimeEdit*)self, (QKeyEvent*)event);
}

void q_datetimeedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnKeyReleaseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_focus_out_event(void* self, void* event) {
    QDateTimeEdit_FocusOutEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

void q_datetimeedit_qbase_focus_out_event(void* self, void* event) {
    QDateTimeEdit_QBaseFocusOutEvent((QDateTimeEdit*)self, (QFocusEvent*)event);
}

void q_datetimeedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnFocusOutEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_context_menu_event(void* self, void* event) {
    QDateTimeEdit_ContextMenuEvent((QDateTimeEdit*)self, (QContextMenuEvent*)event);
}

void q_datetimeedit_qbase_context_menu_event(void* self, void* event) {
    QDateTimeEdit_QBaseContextMenuEvent((QDateTimeEdit*)self, (QContextMenuEvent*)event);
}

void q_datetimeedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnContextMenuEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_change_event(void* self, void* event) {
    QDateTimeEdit_ChangeEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_qbase_change_event(void* self, void* event) {
    QDateTimeEdit_QBaseChangeEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnChangeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_close_event(void* self, void* event) {
    QDateTimeEdit_CloseEvent((QDateTimeEdit*)self, (QCloseEvent*)event);
}

void q_datetimeedit_qbase_close_event(void* self, void* event) {
    QDateTimeEdit_QBaseCloseEvent((QDateTimeEdit*)self, (QCloseEvent*)event);
}

void q_datetimeedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnCloseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_hide_event(void* self, void* event) {
    QDateTimeEdit_HideEvent((QDateTimeEdit*)self, (QHideEvent*)event);
}

void q_datetimeedit_qbase_hide_event(void* self, void* event) {
    QDateTimeEdit_QBaseHideEvent((QDateTimeEdit*)self, (QHideEvent*)event);
}

void q_datetimeedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnHideEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_mouse_release_event(void* self, void* event) {
    QDateTimeEdit_MouseReleaseEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_qbase_mouse_release_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseReleaseEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseReleaseEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_mouse_move_event(void* self, void* event) {
    QDateTimeEdit_MouseMoveEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_qbase_mouse_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseMoveEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_timer_event(void* self, void* event) {
    QDateTimeEdit_TimerEvent((QDateTimeEdit*)self, (QTimerEvent*)event);
}

void q_datetimeedit_qbase_timer_event(void* self, void* event) {
    QDateTimeEdit_QBaseTimerEvent((QDateTimeEdit*)self, (QTimerEvent*)event);
}

void q_datetimeedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnTimerEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_show_event(void* self, void* event) {
    QDateTimeEdit_ShowEvent((QDateTimeEdit*)self, (QShowEvent*)event);
}

void q_datetimeedit_qbase_show_event(void* self, void* event) {
    QDateTimeEdit_QBaseShowEvent((QDateTimeEdit*)self, (QShowEvent*)event);
}

void q_datetimeedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnShowEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_dev_type(void* self) {
    return QDateTimeEdit_DevType((QDateTimeEdit*)self);
}

int32_t q_datetimeedit_qbase_dev_type(void* self) {
    return QDateTimeEdit_QBaseDevType((QDateTimeEdit*)self);
}

void q_datetimeedit_on_dev_type(void* self, int32_t (*slot)()) {
    QDateTimeEdit_OnDevType((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_set_visible(void* self, bool visible) {
    QDateTimeEdit_SetVisible((QDateTimeEdit*)self, visible);
}

void q_datetimeedit_qbase_set_visible(void* self, bool visible) {
    QDateTimeEdit_QBaseSetVisible((QDateTimeEdit*)self, visible);
}

void q_datetimeedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDateTimeEdit_OnSetVisible((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_height_for_width(void* self, int param1) {
    return QDateTimeEdit_HeightForWidth((QDateTimeEdit*)self, param1);
}

int32_t q_datetimeedit_qbase_height_for_width(void* self, int param1) {
    return QDateTimeEdit_QBaseHeightForWidth((QDateTimeEdit*)self, param1);
}

void q_datetimeedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDateTimeEdit_OnHeightForWidth((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_has_height_for_width(void* self) {
    return QDateTimeEdit_HasHeightForWidth((QDateTimeEdit*)self);
}

bool q_datetimeedit_qbase_has_height_for_width(void* self) {
    return QDateTimeEdit_QBaseHasHeightForWidth((QDateTimeEdit*)self);
}

void q_datetimeedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QDateTimeEdit_OnHasHeightForWidth((QDateTimeEdit*)self, (intptr_t)slot);
}

QPaintEngine* q_datetimeedit_paint_engine(void* self) {
    return QDateTimeEdit_PaintEngine((QDateTimeEdit*)self);
}

QPaintEngine* q_datetimeedit_qbase_paint_engine(void* self) {
    return QDateTimeEdit_QBasePaintEngine((QDateTimeEdit*)self);
}

void q_datetimeedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDateTimeEdit_OnPaintEngine((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_mouse_double_click_event(void* self, void* event) {
    QDateTimeEdit_MouseDoubleClickEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_qbase_mouse_double_click_event(void* self, void* event) {
    QDateTimeEdit_QBaseMouseDoubleClickEvent((QDateTimeEdit*)self, (QMouseEvent*)event);
}

void q_datetimeedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMouseDoubleClickEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_enter_event(void* self, void* event) {
    QDateTimeEdit_EnterEvent((QDateTimeEdit*)self, (QEnterEvent*)event);
}

void q_datetimeedit_qbase_enter_event(void* self, void* event) {
    QDateTimeEdit_QBaseEnterEvent((QDateTimeEdit*)self, (QEnterEvent*)event);
}

void q_datetimeedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnEnterEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_leave_event(void* self, void* event) {
    QDateTimeEdit_LeaveEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_qbase_leave_event(void* self, void* event) {
    QDateTimeEdit_QBaseLeaveEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnLeaveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_move_event(void* self, void* event) {
    QDateTimeEdit_MoveEvent((QDateTimeEdit*)self, (QMoveEvent*)event);
}

void q_datetimeedit_qbase_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseMoveEvent((QDateTimeEdit*)self, (QMoveEvent*)event);
}

void q_datetimeedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_tablet_event(void* self, void* event) {
    QDateTimeEdit_TabletEvent((QDateTimeEdit*)self, (QTabletEvent*)event);
}

void q_datetimeedit_qbase_tablet_event(void* self, void* event) {
    QDateTimeEdit_QBaseTabletEvent((QDateTimeEdit*)self, (QTabletEvent*)event);
}

void q_datetimeedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnTabletEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_action_event(void* self, void* event) {
    QDateTimeEdit_ActionEvent((QDateTimeEdit*)self, (QActionEvent*)event);
}

void q_datetimeedit_qbase_action_event(void* self, void* event) {
    QDateTimeEdit_QBaseActionEvent((QDateTimeEdit*)self, (QActionEvent*)event);
}

void q_datetimeedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnActionEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_drag_enter_event(void* self, void* event) {
    QDateTimeEdit_DragEnterEvent((QDateTimeEdit*)self, (QDragEnterEvent*)event);
}

void q_datetimeedit_qbase_drag_enter_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragEnterEvent((QDateTimeEdit*)self, (QDragEnterEvent*)event);
}

void q_datetimeedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragEnterEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_drag_move_event(void* self, void* event) {
    QDateTimeEdit_DragMoveEvent((QDateTimeEdit*)self, (QDragMoveEvent*)event);
}

void q_datetimeedit_qbase_drag_move_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragMoveEvent((QDateTimeEdit*)self, (QDragMoveEvent*)event);
}

void q_datetimeedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragMoveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_drag_leave_event(void* self, void* event) {
    QDateTimeEdit_DragLeaveEvent((QDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

void q_datetimeedit_qbase_drag_leave_event(void* self, void* event) {
    QDateTimeEdit_QBaseDragLeaveEvent((QDateTimeEdit*)self, (QDragLeaveEvent*)event);
}

void q_datetimeedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDragLeaveEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_drop_event(void* self, void* event) {
    QDateTimeEdit_DropEvent((QDateTimeEdit*)self, (QDropEvent*)event);
}

void q_datetimeedit_qbase_drop_event(void* self, void* event) {
    QDateTimeEdit_QBaseDropEvent((QDateTimeEdit*)self, (QDropEvent*)event);
}

void q_datetimeedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDropEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateTimeEdit_NativeEvent((QDateTimeEdit*)self, qstring(eventType), message, result);
}

bool q_datetimeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateTimeEdit_QBaseNativeEvent((QDateTimeEdit*)self, qstring(eventType), message, result);
}

void q_datetimeedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDateTimeEdit_OnNativeEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_metric(void* self, int64_t param1) {
    return QDateTimeEdit_Metric((QDateTimeEdit*)self, param1);
}

int32_t q_datetimeedit_qbase_metric(void* self, int64_t param1) {
    return QDateTimeEdit_QBaseMetric((QDateTimeEdit*)self, param1);
}

void q_datetimeedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDateTimeEdit_OnMetric((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_init_painter(void* self, void* painter) {
    QDateTimeEdit_InitPainter((QDateTimeEdit*)self, (QPainter*)painter);
}

void q_datetimeedit_qbase_init_painter(void* self, void* painter) {
    QDateTimeEdit_QBaseInitPainter((QDateTimeEdit*)self, (QPainter*)painter);
}

void q_datetimeedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInitPainter((QDateTimeEdit*)self, (intptr_t)slot);
}

QPaintDevice* q_datetimeedit_redirected(void* self, void* offset) {
    return QDateTimeEdit_Redirected((QDateTimeEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_datetimeedit_qbase_redirected(void* self, void* offset) {
    return QDateTimeEdit_QBaseRedirected((QDateTimeEdit*)self, (QPoint*)offset);
}

void q_datetimeedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDateTimeEdit_OnRedirected((QDateTimeEdit*)self, (intptr_t)slot);
}

QPainter* q_datetimeedit_shared_painter(void* self) {
    return QDateTimeEdit_SharedPainter((QDateTimeEdit*)self);
}

QPainter* q_datetimeedit_qbase_shared_painter(void* self) {
    return QDateTimeEdit_QBaseSharedPainter((QDateTimeEdit*)self);
}

void q_datetimeedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDateTimeEdit_OnSharedPainter((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_input_method_event(void* self, void* param1) {
    QDateTimeEdit_InputMethodEvent((QDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

void q_datetimeedit_qbase_input_method_event(void* self, void* param1) {
    QDateTimeEdit_QBaseInputMethodEvent((QDateTimeEdit*)self, (QInputMethodEvent*)param1);
}

void q_datetimeedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnInputMethodEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_event_filter(void* self, void* watched, void* event) {
    return QDateTimeEdit_EventFilter((QDateTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool q_datetimeedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QDateTimeEdit_QBaseEventFilter((QDateTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

void q_datetimeedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDateTimeEdit_OnEventFilter((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_child_event(void* self, void* event) {
    QDateTimeEdit_ChildEvent((QDateTimeEdit*)self, (QChildEvent*)event);
}

void q_datetimeedit_qbase_child_event(void* self, void* event) {
    QDateTimeEdit_QBaseChildEvent((QDateTimeEdit*)self, (QChildEvent*)event);
}

void q_datetimeedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnChildEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_custom_event(void* self, void* event) {
    QDateTimeEdit_CustomEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_qbase_custom_event(void* self, void* event) {
    QDateTimeEdit_QBaseCustomEvent((QDateTimeEdit*)self, (QEvent*)event);
}

void q_datetimeedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnCustomEvent((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_connect_notify(void* self, void* signal) {
    QDateTimeEdit_ConnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

void q_datetimeedit_qbase_connect_notify(void* self, void* signal) {
    QDateTimeEdit_QBaseConnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

void q_datetimeedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnConnectNotify((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_disconnect_notify(void* self, void* signal) {
    QDateTimeEdit_DisconnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

void q_datetimeedit_qbase_disconnect_notify(void* self, void* signal) {
    QDateTimeEdit_QBaseDisconnectNotify((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

void q_datetimeedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnDisconnectNotify((QDateTimeEdit*)self, (intptr_t)slot);
}

QLineEdit* q_datetimeedit_line_edit(void* self) {
    return QDateTimeEdit_LineEdit((QDateTimeEdit*)self);
}

QLineEdit* q_datetimeedit_qbase_line_edit(void* self) {
    return QDateTimeEdit_QBaseLineEdit((QDateTimeEdit*)self);
}

void q_datetimeedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QDateTimeEdit_OnLineEdit((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_set_line_edit(void* self, void* edit) {
    QDateTimeEdit_SetLineEdit((QDateTimeEdit*)self, (QLineEdit*)edit);
}

void q_datetimeedit_qbase_set_line_edit(void* self, void* edit) {
    QDateTimeEdit_QBaseSetLineEdit((QDateTimeEdit*)self, (QLineEdit*)edit);
}

void q_datetimeedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_OnSetLineEdit((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_update_micro_focus(void* self) {
    QDateTimeEdit_UpdateMicroFocus((QDateTimeEdit*)self);
}

void q_datetimeedit_qbase_update_micro_focus(void* self) {
    QDateTimeEdit_QBaseUpdateMicroFocus((QDateTimeEdit*)self);
}

void q_datetimeedit_on_update_micro_focus(void* self, void (*slot)()) {
    QDateTimeEdit_OnUpdateMicroFocus((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_create(void* self) {
    QDateTimeEdit_Create((QDateTimeEdit*)self);
}

void q_datetimeedit_qbase_create(void* self) {
    QDateTimeEdit_QBaseCreate((QDateTimeEdit*)self);
}

void q_datetimeedit_on_create(void* self, void (*slot)()) {
    QDateTimeEdit_OnCreate((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_destroy(void* self) {
    QDateTimeEdit_Destroy((QDateTimeEdit*)self);
}

void q_datetimeedit_qbase_destroy(void* self) {
    QDateTimeEdit_QBaseDestroy((QDateTimeEdit*)self);
}

void q_datetimeedit_on_destroy(void* self, void (*slot)()) {
    QDateTimeEdit_OnDestroy((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_focus_next_child(void* self) {
    return QDateTimeEdit_FocusNextChild((QDateTimeEdit*)self);
}

bool q_datetimeedit_qbase_focus_next_child(void* self) {
    return QDateTimeEdit_QBaseFocusNextChild((QDateTimeEdit*)self);
}

void q_datetimeedit_on_focus_next_child(void* self, bool (*slot)()) {
    QDateTimeEdit_OnFocusNextChild((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_focus_previous_child(void* self) {
    return QDateTimeEdit_FocusPreviousChild((QDateTimeEdit*)self);
}

bool q_datetimeedit_qbase_focus_previous_child(void* self) {
    return QDateTimeEdit_QBaseFocusPreviousChild((QDateTimeEdit*)self);
}

void q_datetimeedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QDateTimeEdit_OnFocusPreviousChild((QDateTimeEdit*)self, (intptr_t)slot);
}

QObject* q_datetimeedit_sender(void* self) {
    return QDateTimeEdit_Sender((QDateTimeEdit*)self);
}

QObject* q_datetimeedit_qbase_sender(void* self) {
    return QDateTimeEdit_QBaseSender((QDateTimeEdit*)self);
}

void q_datetimeedit_on_sender(void* self, QObject* (*slot)()) {
    QDateTimeEdit_OnSender((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_sender_signal_index(void* self) {
    return QDateTimeEdit_SenderSignalIndex((QDateTimeEdit*)self);
}

int32_t q_datetimeedit_qbase_sender_signal_index(void* self) {
    return QDateTimeEdit_QBaseSenderSignalIndex((QDateTimeEdit*)self);
}

void q_datetimeedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDateTimeEdit_OnSenderSignalIndex((QDateTimeEdit*)self, (intptr_t)slot);
}

int32_t q_datetimeedit_receivers(void* self, const char* signal) {
    return QDateTimeEdit_Receivers((QDateTimeEdit*)self, signal);
}

int32_t q_datetimeedit_qbase_receivers(void* self, const char* signal) {
    return QDateTimeEdit_QBaseReceivers((QDateTimeEdit*)self, signal);
}

void q_datetimeedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDateTimeEdit_OnReceivers((QDateTimeEdit*)self, (intptr_t)slot);
}

bool q_datetimeedit_is_signal_connected(void* self, void* signal) {
    return QDateTimeEdit_IsSignalConnected((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

bool q_datetimeedit_qbase_is_signal_connected(void* self, void* signal) {
    return QDateTimeEdit_QBaseIsSignalConnected((QDateTimeEdit*)self, (QMetaMethod*)signal);
}

void q_datetimeedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDateTimeEdit_OnIsSignalConnected((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_datetimeedit_delete(void* self) {
    QDateTimeEdit_Delete((QDateTimeEdit*)(self));
}

QTimeEdit* q_timeedit_new(void* parent) {
    return QTimeEdit_new((QWidget*)parent);
}

QTimeEdit* q_timeedit_new2() {
    return QTimeEdit_new2();
}

QTimeEdit* q_timeedit_new3(void* time) {
    return QTimeEdit_new3((QTime*)time);
}

QTimeEdit* q_timeedit_new4(void* time, void* parent) {
    return QTimeEdit_new4((QTime*)time, (QWidget*)parent);
}

QMetaObject* q_timeedit_meta_object(void* self) {
    return QTimeEdit_MetaObject((QTimeEdit*)self);
}

void* q_timeedit_metacast(void* self, const char* param1) {
    return QTimeEdit_Metacast((QTimeEdit*)self, param1);
}

int32_t q_timeedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeEdit_Metacall((QTimeEdit*)self, param1, param2, param3);
}

void q_timeedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTimeEdit_OnMetacall((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeEdit_QBaseMetacall((QTimeEdit*)self, param1, param2, param3);
}

const char* q_timeedit_tr(const char* s) {
    libqt_string _str = QTimeEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_user_time_changed(void* self, void* time) {
    QTimeEdit_UserTimeChanged((QTimeEdit*)self, (QTime*)time);
}

void q_timeedit_on_user_time_changed(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_Connect_UserTimeChanged((QTimeEdit*)self, (intptr_t)slot);
}

const char* q_timeedit_tr2(const char* s, const char* c) {
    libqt_string _str = QTimeEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTimeEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_timeedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

QDate* q_timeedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

QTime* q_timeedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

QCalendar* q_timeedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

void q_timeedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

QDateTime* q_timeedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

void q_timeedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

void q_timeedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

QDateTime* q_timeedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

void q_timeedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

void q_timeedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

void q_timeedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

QDate* q_timeedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

void q_timeedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

void q_timeedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

QDate* q_timeedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

void q_timeedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

void q_timeedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

void q_timeedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

QTime* q_timeedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

void q_timeedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

void q_timeedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

QTime* q_timeedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

void q_timeedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

void q_timeedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

void q_timeedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

int64_t q_timeedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

int64_t q_timeedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

int64_t q_timeedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

void q_timeedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

int32_t q_timeedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

void q_timeedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

QCalendarWidget* q_timeedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

void q_timeedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

int32_t q_timeedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

void q_timeedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

const char* q_timeedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

bool q_timeedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

void q_timeedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

int64_t q_timeedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

void q_timeedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

void q_timeedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_timeedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

void q_timeedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

void q_timeedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_timeedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

void q_timeedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

int64_t q_timeedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_timeedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_timeedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int64_t q_timeedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_timeedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_timeedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_timeedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_timeedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_timeedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_timeedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_timeedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_timeedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_timeedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int64_t q_timeedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_timeedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_timeedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_timeedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_timeedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_timeedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_timeedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void q_timeedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void q_timeedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_timeedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_timeedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_timeedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_timeedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

uintptr_t q_timeedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_timeedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_timeedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_timeedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_timeedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_timeedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_timeedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_timeedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_timeedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_timeedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_timeedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_timeedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_timeedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_timeedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_timeedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_timeedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_timeedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_timeedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_timeedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_timeedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_timeedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_timeedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_timeedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_timeedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_timeedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_timeedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_timeedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_timeedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_timeedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_timeedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_timeedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_timeedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_timeedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_timeedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_timeedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_timeedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_timeedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_timeedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_timeedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_timeedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_timeedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_timeedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_timeedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_timeedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_timeedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_timeedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_timeedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_timeedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_timeedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_timeedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_timeedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_timeedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_timeedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_timeedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_timeedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_timeedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_timeedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_timeedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_timeedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_timeedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_timeedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_timeedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_timeedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_timeedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_timeedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_timeedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_timeedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_timeedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_timeedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_timeedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_timeedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_timeedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_timeedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_timeedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_timeedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_timeedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_timeedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_timeedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_timeedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_timeedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_timeedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_timeedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_timeedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_timeedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_timeedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_timeedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_timeedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_timeedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_timeedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_timeedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_timeedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_timeedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_timeedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_timeedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_timeedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_timeedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_timeedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_timeedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_timeedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_timeedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_timeedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_timeedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_timeedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_timeedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_timeedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_timeedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_timeedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_timeedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_timeedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_timeedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_timeedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_timeedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_timeedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_timeedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_timeedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_timeedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_timeedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_timeedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_timeedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_timeedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_timeedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_timeedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_timeedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_timeedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_timeedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_timeedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_timeedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_timeedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_timeedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_timeedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_timeedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_timeedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_timeedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_timeedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_timeedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_timeedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_timeedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_timeedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_timeedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_timeedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_timeedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_timeedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_timeedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_timeedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_timeedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_timeedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_timeedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_timeedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_timeedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_timeedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_timeedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_timeedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_timeedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_timeedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_timeedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_timeedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_timeedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_timeedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_timeedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_timeedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_timeedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_timeedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_timeedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_timeedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_timeedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_timeedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_timeedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_timeedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_timeedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_timeedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_timeedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_timeedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_timeedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_timeedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_timeedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_timeedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_timeedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_timeedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_timeedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_timeedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_timeedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_timeedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_timeedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_timeedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_timeedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_timeedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_timeedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_timeedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_timeedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_timeedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_timeedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_timeedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_timeedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_timeedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_timeedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_timeedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_timeedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_timeedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_timeedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_timeedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_timeedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_timeedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_timeedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_timeedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_timeedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_timeedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_timeedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_timeedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_timeedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_timeedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_timeedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_timeedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_timeedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_timeedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_timeedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_timeedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_timeedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_timeedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_timeedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_timeedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_timeedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_timeedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_timeedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_timeedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_timeedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_timeedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_timeedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_timeedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_timeedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_timeedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_timeedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_timeedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_timeedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_timeedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_timeedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_timeedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_timeedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_timeedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_timeedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_timeedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_timeedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_timeedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_timeedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_timeedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_timeedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_timeedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_timeedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_timeedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_timeedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_timeedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_timeedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_timeedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_timeedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_timeedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_timeedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_timeedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_timeedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_timeedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_timeedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_timeedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_timeedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_timeedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_timeedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_timeedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_timeedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_timeedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_timeedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_timeedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_timeedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_timeedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_timeedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_timeedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_timeedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_timeedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_timeedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_timeedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_timeedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_timeedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_timeedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_timeedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_timeedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_timeedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_timeedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_timeedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_timeedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_timeedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_timeedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_timeedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_timeedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_timeedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_timeedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_timeedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_timeedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_timeedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_timeedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_timeedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_timeedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_timeedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_timeedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_timeedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_timeedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_timeedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_timeedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_timeedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_timeedit_size_hint(void* self) {
    return QTimeEdit_SizeHint((QTimeEdit*)self);
}

QSize* q_timeedit_qbase_size_hint(void* self) {
    return QTimeEdit_QBaseSizeHint((QTimeEdit*)self);
}

void q_timeedit_on_size_hint(void* self, QSize* (*slot)()) {
    QTimeEdit_OnSizeHint((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_clear(void* self) {
    QTimeEdit_Clear((QTimeEdit*)self);
}

void q_timeedit_qbase_clear(void* self) {
    QTimeEdit_QBaseClear((QTimeEdit*)self);
}

void q_timeedit_on_clear(void* self, void (*slot)()) {
    QTimeEdit_OnClear((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_step_by(void* self, int steps) {
    QTimeEdit_StepBy((QTimeEdit*)self, steps);
}

void q_timeedit_qbase_step_by(void* self, int steps) {
    QTimeEdit_QBaseStepBy((QTimeEdit*)self, steps);
}

void q_timeedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QTimeEdit_OnStepBy((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_event(void* self, void* event) {
    return QTimeEdit_Event((QTimeEdit*)self, (QEvent*)event);
}

bool q_timeedit_qbase_event(void* self, void* event) {
    return QTimeEdit_QBaseEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QTimeEdit_OnEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_key_press_event(void* self, void* event) {
    QTimeEdit_KeyPressEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

void q_timeedit_qbase_key_press_event(void* self, void* event) {
    QTimeEdit_QBaseKeyPressEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

void q_timeedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnKeyPressEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_wheel_event(void* self, void* event) {
    QTimeEdit_WheelEvent((QTimeEdit*)self, (QWheelEvent*)event);
}

void q_timeedit_qbase_wheel_event(void* self, void* event) {
    QTimeEdit_QBaseWheelEvent((QTimeEdit*)self, (QWheelEvent*)event);
}

void q_timeedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnWheelEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_focus_in_event(void* self, void* event) {
    QTimeEdit_FocusInEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

void q_timeedit_qbase_focus_in_event(void* self, void* event) {
    QTimeEdit_QBaseFocusInEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

void q_timeedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnFocusInEvent((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_focus_next_prev_child(void* self, bool next) {
    return QTimeEdit_FocusNextPrevChild((QTimeEdit*)self, next);
}

bool q_timeedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QTimeEdit_QBaseFocusNextPrevChild((QTimeEdit*)self, next);
}

void q_timeedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTimeEdit_OnFocusNextPrevChild((QTimeEdit*)self, (intptr_t)slot);
}

int64_t q_timeedit_validate(void* self, const char* input, int* pos) {
    return QTimeEdit_Validate((QTimeEdit*)self, qstring(input), pos);
}

int64_t q_timeedit_qbase_validate(void* self, const char* input, int* pos) {
    return QTimeEdit_QBaseValidate((QTimeEdit*)self, qstring(input), pos);
}

void q_timeedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QTimeEdit_OnValidate((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_fixup(void* self, const char* input) {
    QTimeEdit_Fixup((QTimeEdit*)self, qstring(input));
}

void q_timeedit_qbase_fixup(void* self, const char* input) {
    QTimeEdit_QBaseFixup((QTimeEdit*)self, qstring(input));
}

void q_timeedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QTimeEdit_OnFixup((QTimeEdit*)self, (intptr_t)slot);
}

QDateTime* q_timeedit_date_time_from_text(void* self, const char* text) {
    return QTimeEdit_DateTimeFromText((QTimeEdit*)self, qstring(text));
}

QDateTime* q_timeedit_qbase_date_time_from_text(void* self, const char* text) {
    return QTimeEdit_QBaseDateTimeFromText((QTimeEdit*)self, qstring(text));
}

void q_timeedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QTimeEdit_OnDateTimeFromText((QTimeEdit*)self, (intptr_t)slot);
}

const char* q_timeedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QTimeEdit_TextFromDateTime((QTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QTimeEdit_QBaseTextFromDateTime((QTimeEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QTimeEdit_OnTextFromDateTime((QTimeEdit*)self, (intptr_t)slot);
}

int64_t q_timeedit_step_enabled(void* self) {
    return QTimeEdit_StepEnabled((QTimeEdit*)self);
}

int64_t q_timeedit_qbase_step_enabled(void* self) {
    return QTimeEdit_QBaseStepEnabled((QTimeEdit*)self);
}

void q_timeedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QTimeEdit_OnStepEnabled((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_mouse_press_event(void* self, void* event) {
    QTimeEdit_MousePressEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_qbase_mouse_press_event(void* self, void* event) {
    QTimeEdit_QBaseMousePressEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMousePressEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_paint_event(void* self, void* event) {
    QTimeEdit_PaintEvent((QTimeEdit*)self, (QPaintEvent*)event);
}

void q_timeedit_qbase_paint_event(void* self, void* event) {
    QTimeEdit_QBasePaintEvent((QTimeEdit*)self, (QPaintEvent*)event);
}

void q_timeedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnPaintEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_init_style_option(void* self, void* option) {
    QTimeEdit_InitStyleOption((QTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

void q_timeedit_qbase_init_style_option(void* self, void* option) {
    QTimeEdit_QBaseInitStyleOption((QTimeEdit*)self, (QStyleOptionSpinBox*)option);
}

void q_timeedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInitStyleOption((QTimeEdit*)self, (intptr_t)slot);
}

QSize* q_timeedit_minimum_size_hint(void* self) {
    return QTimeEdit_MinimumSizeHint((QTimeEdit*)self);
}

QSize* q_timeedit_qbase_minimum_size_hint(void* self) {
    return QTimeEdit_QBaseMinimumSizeHint((QTimeEdit*)self);
}

void q_timeedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTimeEdit_OnMinimumSizeHint((QTimeEdit*)self, (intptr_t)slot);
}

QVariant* q_timeedit_input_method_query(void* self, int64_t param1) {
    return QTimeEdit_InputMethodQuery((QTimeEdit*)self, param1);
}

QVariant* q_timeedit_qbase_input_method_query(void* self, int64_t param1) {
    return QTimeEdit_QBaseInputMethodQuery((QTimeEdit*)self, param1);
}

void q_timeedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTimeEdit_OnInputMethodQuery((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_resize_event(void* self, void* event) {
    QTimeEdit_ResizeEvent((QTimeEdit*)self, (QResizeEvent*)event);
}

void q_timeedit_qbase_resize_event(void* self, void* event) {
    QTimeEdit_QBaseResizeEvent((QTimeEdit*)self, (QResizeEvent*)event);
}

void q_timeedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnResizeEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_key_release_event(void* self, void* event) {
    QTimeEdit_KeyReleaseEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

void q_timeedit_qbase_key_release_event(void* self, void* event) {
    QTimeEdit_QBaseKeyReleaseEvent((QTimeEdit*)self, (QKeyEvent*)event);
}

void q_timeedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnKeyReleaseEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_focus_out_event(void* self, void* event) {
    QTimeEdit_FocusOutEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

void q_timeedit_qbase_focus_out_event(void* self, void* event) {
    QTimeEdit_QBaseFocusOutEvent((QTimeEdit*)self, (QFocusEvent*)event);
}

void q_timeedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnFocusOutEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_context_menu_event(void* self, void* event) {
    QTimeEdit_ContextMenuEvent((QTimeEdit*)self, (QContextMenuEvent*)event);
}

void q_timeedit_qbase_context_menu_event(void* self, void* event) {
    QTimeEdit_QBaseContextMenuEvent((QTimeEdit*)self, (QContextMenuEvent*)event);
}

void q_timeedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnContextMenuEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_change_event(void* self, void* event) {
    QTimeEdit_ChangeEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_qbase_change_event(void* self, void* event) {
    QTimeEdit_QBaseChangeEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnChangeEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_close_event(void* self, void* event) {
    QTimeEdit_CloseEvent((QTimeEdit*)self, (QCloseEvent*)event);
}

void q_timeedit_qbase_close_event(void* self, void* event) {
    QTimeEdit_QBaseCloseEvent((QTimeEdit*)self, (QCloseEvent*)event);
}

void q_timeedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnCloseEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_hide_event(void* self, void* event) {
    QTimeEdit_HideEvent((QTimeEdit*)self, (QHideEvent*)event);
}

void q_timeedit_qbase_hide_event(void* self, void* event) {
    QTimeEdit_QBaseHideEvent((QTimeEdit*)self, (QHideEvent*)event);
}

void q_timeedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnHideEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_mouse_release_event(void* self, void* event) {
    QTimeEdit_MouseReleaseEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_qbase_mouse_release_event(void* self, void* event) {
    QTimeEdit_QBaseMouseReleaseEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseReleaseEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_mouse_move_event(void* self, void* event) {
    QTimeEdit_MouseMoveEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_qbase_mouse_move_event(void* self, void* event) {
    QTimeEdit_QBaseMouseMoveEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_timer_event(void* self, void* event) {
    QTimeEdit_TimerEvent((QTimeEdit*)self, (QTimerEvent*)event);
}

void q_timeedit_qbase_timer_event(void* self, void* event) {
    QTimeEdit_QBaseTimerEvent((QTimeEdit*)self, (QTimerEvent*)event);
}

void q_timeedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnTimerEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_show_event(void* self, void* event) {
    QTimeEdit_ShowEvent((QTimeEdit*)self, (QShowEvent*)event);
}

void q_timeedit_qbase_show_event(void* self, void* event) {
    QTimeEdit_QBaseShowEvent((QTimeEdit*)self, (QShowEvent*)event);
}

void q_timeedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnShowEvent((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_dev_type(void* self) {
    return QTimeEdit_DevType((QTimeEdit*)self);
}

int32_t q_timeedit_qbase_dev_type(void* self) {
    return QTimeEdit_QBaseDevType((QTimeEdit*)self);
}

void q_timeedit_on_dev_type(void* self, int32_t (*slot)()) {
    QTimeEdit_OnDevType((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_set_visible(void* self, bool visible) {
    QTimeEdit_SetVisible((QTimeEdit*)self, visible);
}

void q_timeedit_qbase_set_visible(void* self, bool visible) {
    QTimeEdit_QBaseSetVisible((QTimeEdit*)self, visible);
}

void q_timeedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTimeEdit_OnSetVisible((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_height_for_width(void* self, int param1) {
    return QTimeEdit_HeightForWidth((QTimeEdit*)self, param1);
}

int32_t q_timeedit_qbase_height_for_width(void* self, int param1) {
    return QTimeEdit_QBaseHeightForWidth((QTimeEdit*)self, param1);
}

void q_timeedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTimeEdit_OnHeightForWidth((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_has_height_for_width(void* self) {
    return QTimeEdit_HasHeightForWidth((QTimeEdit*)self);
}

bool q_timeedit_qbase_has_height_for_width(void* self) {
    return QTimeEdit_QBaseHasHeightForWidth((QTimeEdit*)self);
}

void q_timeedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QTimeEdit_OnHasHeightForWidth((QTimeEdit*)self, (intptr_t)slot);
}

QPaintEngine* q_timeedit_paint_engine(void* self) {
    return QTimeEdit_PaintEngine((QTimeEdit*)self);
}

QPaintEngine* q_timeedit_qbase_paint_engine(void* self) {
    return QTimeEdit_QBasePaintEngine((QTimeEdit*)self);
}

void q_timeedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTimeEdit_OnPaintEngine((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_mouse_double_click_event(void* self, void* event) {
    QTimeEdit_MouseDoubleClickEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_qbase_mouse_double_click_event(void* self, void* event) {
    QTimeEdit_QBaseMouseDoubleClickEvent((QTimeEdit*)self, (QMouseEvent*)event);
}

void q_timeedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMouseDoubleClickEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_enter_event(void* self, void* event) {
    QTimeEdit_EnterEvent((QTimeEdit*)self, (QEnterEvent*)event);
}

void q_timeedit_qbase_enter_event(void* self, void* event) {
    QTimeEdit_QBaseEnterEvent((QTimeEdit*)self, (QEnterEvent*)event);
}

void q_timeedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnEnterEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_leave_event(void* self, void* event) {
    QTimeEdit_LeaveEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_qbase_leave_event(void* self, void* event) {
    QTimeEdit_QBaseLeaveEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnLeaveEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_move_event(void* self, void* event) {
    QTimeEdit_MoveEvent((QTimeEdit*)self, (QMoveEvent*)event);
}

void q_timeedit_qbase_move_event(void* self, void* event) {
    QTimeEdit_QBaseMoveEvent((QTimeEdit*)self, (QMoveEvent*)event);
}

void q_timeedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_tablet_event(void* self, void* event) {
    QTimeEdit_TabletEvent((QTimeEdit*)self, (QTabletEvent*)event);
}

void q_timeedit_qbase_tablet_event(void* self, void* event) {
    QTimeEdit_QBaseTabletEvent((QTimeEdit*)self, (QTabletEvent*)event);
}

void q_timeedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnTabletEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_action_event(void* self, void* event) {
    QTimeEdit_ActionEvent((QTimeEdit*)self, (QActionEvent*)event);
}

void q_timeedit_qbase_action_event(void* self, void* event) {
    QTimeEdit_QBaseActionEvent((QTimeEdit*)self, (QActionEvent*)event);
}

void q_timeedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnActionEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_drag_enter_event(void* self, void* event) {
    QTimeEdit_DragEnterEvent((QTimeEdit*)self, (QDragEnterEvent*)event);
}

void q_timeedit_qbase_drag_enter_event(void* self, void* event) {
    QTimeEdit_QBaseDragEnterEvent((QTimeEdit*)self, (QDragEnterEvent*)event);
}

void q_timeedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragEnterEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_drag_move_event(void* self, void* event) {
    QTimeEdit_DragMoveEvent((QTimeEdit*)self, (QDragMoveEvent*)event);
}

void q_timeedit_qbase_drag_move_event(void* self, void* event) {
    QTimeEdit_QBaseDragMoveEvent((QTimeEdit*)self, (QDragMoveEvent*)event);
}

void q_timeedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragMoveEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_drag_leave_event(void* self, void* event) {
    QTimeEdit_DragLeaveEvent((QTimeEdit*)self, (QDragLeaveEvent*)event);
}

void q_timeedit_qbase_drag_leave_event(void* self, void* event) {
    QTimeEdit_QBaseDragLeaveEvent((QTimeEdit*)self, (QDragLeaveEvent*)event);
}

void q_timeedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDragLeaveEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_drop_event(void* self, void* event) {
    QTimeEdit_DropEvent((QTimeEdit*)self, (QDropEvent*)event);
}

void q_timeedit_qbase_drop_event(void* self, void* event) {
    QTimeEdit_QBaseDropEvent((QTimeEdit*)self, (QDropEvent*)event);
}

void q_timeedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDropEvent((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTimeEdit_NativeEvent((QTimeEdit*)self, qstring(eventType), message, result);
}

bool q_timeedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTimeEdit_QBaseNativeEvent((QTimeEdit*)self, qstring(eventType), message, result);
}

void q_timeedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTimeEdit_OnNativeEvent((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_metric(void* self, int64_t param1) {
    return QTimeEdit_Metric((QTimeEdit*)self, param1);
}

int32_t q_timeedit_qbase_metric(void* self, int64_t param1) {
    return QTimeEdit_QBaseMetric((QTimeEdit*)self, param1);
}

void q_timeedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTimeEdit_OnMetric((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_init_painter(void* self, void* painter) {
    QTimeEdit_InitPainter((QTimeEdit*)self, (QPainter*)painter);
}

void q_timeedit_qbase_init_painter(void* self, void* painter) {
    QTimeEdit_QBaseInitPainter((QTimeEdit*)self, (QPainter*)painter);
}

void q_timeedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInitPainter((QTimeEdit*)self, (intptr_t)slot);
}

QPaintDevice* q_timeedit_redirected(void* self, void* offset) {
    return QTimeEdit_Redirected((QTimeEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_timeedit_qbase_redirected(void* self, void* offset) {
    return QTimeEdit_QBaseRedirected((QTimeEdit*)self, (QPoint*)offset);
}

void q_timeedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTimeEdit_OnRedirected((QTimeEdit*)self, (intptr_t)slot);
}

QPainter* q_timeedit_shared_painter(void* self) {
    return QTimeEdit_SharedPainter((QTimeEdit*)self);
}

QPainter* q_timeedit_qbase_shared_painter(void* self) {
    return QTimeEdit_QBaseSharedPainter((QTimeEdit*)self);
}

void q_timeedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTimeEdit_OnSharedPainter((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_input_method_event(void* self, void* param1) {
    QTimeEdit_InputMethodEvent((QTimeEdit*)self, (QInputMethodEvent*)param1);
}

void q_timeedit_qbase_input_method_event(void* self, void* param1) {
    QTimeEdit_QBaseInputMethodEvent((QTimeEdit*)self, (QInputMethodEvent*)param1);
}

void q_timeedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnInputMethodEvent((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_event_filter(void* self, void* watched, void* event) {
    return QTimeEdit_EventFilter((QTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool q_timeedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QTimeEdit_QBaseEventFilter((QTimeEdit*)self, (QObject*)watched, (QEvent*)event);
}

void q_timeedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTimeEdit_OnEventFilter((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_child_event(void* self, void* event) {
    QTimeEdit_ChildEvent((QTimeEdit*)self, (QChildEvent*)event);
}

void q_timeedit_qbase_child_event(void* self, void* event) {
    QTimeEdit_QBaseChildEvent((QTimeEdit*)self, (QChildEvent*)event);
}

void q_timeedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnChildEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_custom_event(void* self, void* event) {
    QTimeEdit_CustomEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_qbase_custom_event(void* self, void* event) {
    QTimeEdit_QBaseCustomEvent((QTimeEdit*)self, (QEvent*)event);
}

void q_timeedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnCustomEvent((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_connect_notify(void* self, void* signal) {
    QTimeEdit_ConnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

void q_timeedit_qbase_connect_notify(void* self, void* signal) {
    QTimeEdit_QBaseConnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

void q_timeedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnConnectNotify((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_disconnect_notify(void* self, void* signal) {
    QTimeEdit_DisconnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

void q_timeedit_qbase_disconnect_notify(void* self, void* signal) {
    QTimeEdit_QBaseDisconnectNotify((QTimeEdit*)self, (QMetaMethod*)signal);
}

void q_timeedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnDisconnectNotify((QTimeEdit*)self, (intptr_t)slot);
}

QLineEdit* q_timeedit_line_edit(void* self) {
    return QTimeEdit_LineEdit((QTimeEdit*)self);
}

QLineEdit* q_timeedit_qbase_line_edit(void* self) {
    return QTimeEdit_QBaseLineEdit((QTimeEdit*)self);
}

void q_timeedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QTimeEdit_OnLineEdit((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_set_line_edit(void* self, void* edit) {
    QTimeEdit_SetLineEdit((QTimeEdit*)self, (QLineEdit*)edit);
}

void q_timeedit_qbase_set_line_edit(void* self, void* edit) {
    QTimeEdit_QBaseSetLineEdit((QTimeEdit*)self, (QLineEdit*)edit);
}

void q_timeedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QTimeEdit_OnSetLineEdit((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_update_micro_focus(void* self) {
    QTimeEdit_UpdateMicroFocus((QTimeEdit*)self);
}

void q_timeedit_qbase_update_micro_focus(void* self) {
    QTimeEdit_QBaseUpdateMicroFocus((QTimeEdit*)self);
}

void q_timeedit_on_update_micro_focus(void* self, void (*slot)()) {
    QTimeEdit_OnUpdateMicroFocus((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_create(void* self) {
    QTimeEdit_Create((QTimeEdit*)self);
}

void q_timeedit_qbase_create(void* self) {
    QTimeEdit_QBaseCreate((QTimeEdit*)self);
}

void q_timeedit_on_create(void* self, void (*slot)()) {
    QTimeEdit_OnCreate((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_destroy(void* self) {
    QTimeEdit_Destroy((QTimeEdit*)self);
}

void q_timeedit_qbase_destroy(void* self) {
    QTimeEdit_QBaseDestroy((QTimeEdit*)self);
}

void q_timeedit_on_destroy(void* self, void (*slot)()) {
    QTimeEdit_OnDestroy((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_focus_next_child(void* self) {
    return QTimeEdit_FocusNextChild((QTimeEdit*)self);
}

bool q_timeedit_qbase_focus_next_child(void* self) {
    return QTimeEdit_QBaseFocusNextChild((QTimeEdit*)self);
}

void q_timeedit_on_focus_next_child(void* self, bool (*slot)()) {
    QTimeEdit_OnFocusNextChild((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_focus_previous_child(void* self) {
    return QTimeEdit_FocusPreviousChild((QTimeEdit*)self);
}

bool q_timeedit_qbase_focus_previous_child(void* self) {
    return QTimeEdit_QBaseFocusPreviousChild((QTimeEdit*)self);
}

void q_timeedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QTimeEdit_OnFocusPreviousChild((QTimeEdit*)self, (intptr_t)slot);
}

QObject* q_timeedit_sender(void* self) {
    return QTimeEdit_Sender((QTimeEdit*)self);
}

QObject* q_timeedit_qbase_sender(void* self) {
    return QTimeEdit_QBaseSender((QTimeEdit*)self);
}

void q_timeedit_on_sender(void* self, QObject* (*slot)()) {
    QTimeEdit_OnSender((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_sender_signal_index(void* self) {
    return QTimeEdit_SenderSignalIndex((QTimeEdit*)self);
}

int32_t q_timeedit_qbase_sender_signal_index(void* self) {
    return QTimeEdit_QBaseSenderSignalIndex((QTimeEdit*)self);
}

void q_timeedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTimeEdit_OnSenderSignalIndex((QTimeEdit*)self, (intptr_t)slot);
}

int32_t q_timeedit_receivers(void* self, const char* signal) {
    return QTimeEdit_Receivers((QTimeEdit*)self, signal);
}

int32_t q_timeedit_qbase_receivers(void* self, const char* signal) {
    return QTimeEdit_QBaseReceivers((QTimeEdit*)self, signal);
}

void q_timeedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTimeEdit_OnReceivers((QTimeEdit*)self, (intptr_t)slot);
}

bool q_timeedit_is_signal_connected(void* self, void* signal) {
    return QTimeEdit_IsSignalConnected((QTimeEdit*)self, (QMetaMethod*)signal);
}

bool q_timeedit_qbase_is_signal_connected(void* self, void* signal) {
    return QTimeEdit_QBaseIsSignalConnected((QTimeEdit*)self, (QMetaMethod*)signal);
}

void q_timeedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTimeEdit_OnIsSignalConnected((QTimeEdit*)self, (intptr_t)slot);
}

void q_timeedit_delete(void* self) {
    QTimeEdit_Delete((QTimeEdit*)(self));
}

QDateEdit* q_dateedit_new(void* parent) {
    return QDateEdit_new((QWidget*)parent);
}

QDateEdit* q_dateedit_new2() {
    return QDateEdit_new2();
}

QDateEdit* q_dateedit_new3(void* date) {
    return QDateEdit_new3((QDate*)date);
}

QDateEdit* q_dateedit_new4(void* date, void* parent) {
    return QDateEdit_new4((QDate*)date, (QWidget*)parent);
}

QMetaObject* q_dateedit_meta_object(void* self) {
    return QDateEdit_MetaObject((QDateEdit*)self);
}

void* q_dateedit_metacast(void* self, const char* param1) {
    return QDateEdit_Metacast((QDateEdit*)self, param1);
}

int32_t q_dateedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateEdit_Metacall((QDateEdit*)self, param1, param2, param3);
}

void q_dateedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDateEdit_OnMetacall((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateEdit_QBaseMetacall((QDateEdit*)self, param1, param2, param3);
}

const char* q_dateedit_tr(const char* s) {
    libqt_string _str = QDateEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_user_date_changed(void* self, void* date) {
    QDateEdit_UserDateChanged((QDateEdit*)self, (QDate*)date);
}

void q_dateedit_on_user_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateEdit_Connect_UserDateChanged((QDateEdit*)self, (intptr_t)slot);
}

const char* q_dateedit_tr2(const char* s, const char* c) {
    libqt_string _str = QDateEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDateEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_dateedit_date_time(void* self) {
    return QDateTimeEdit_DateTime((QDateTimeEdit*)self);
}

QDate* q_dateedit_date(void* self) {
    return QDateTimeEdit_Date((QDateTimeEdit*)self);
}

QTime* q_dateedit_time(void* self) {
    return QDateTimeEdit_Time((QDateTimeEdit*)self);
}

QCalendar* q_dateedit_calendar(void* self) {
    return QDateTimeEdit_Calendar((QDateTimeEdit*)self);
}

void q_dateedit_set_calendar(void* self, void* calendar) {
    QDateTimeEdit_SetCalendar((QDateTimeEdit*)self, (QCalendar*)calendar);
}

QDateTime* q_dateedit_minimum_date_time(void* self) {
    return QDateTimeEdit_MinimumDateTime((QDateTimeEdit*)self);
}

void q_dateedit_clear_minimum_date_time(void* self) {
    QDateTimeEdit_ClearMinimumDateTime((QDateTimeEdit*)self);
}

void q_dateedit_set_minimum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMinimumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

QDateTime* q_dateedit_maximum_date_time(void* self) {
    return QDateTimeEdit_MaximumDateTime((QDateTimeEdit*)self);
}

void q_dateedit_clear_maximum_date_time(void* self) {
    QDateTimeEdit_ClearMaximumDateTime((QDateTimeEdit*)self);
}

void q_dateedit_set_maximum_date_time(void* self, void* dt) {
    QDateTimeEdit_SetMaximumDateTime((QDateTimeEdit*)self, (QDateTime*)dt);
}

void q_dateedit_set_date_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateTimeRange((QDateTimeEdit*)self, (QDateTime*)min, (QDateTime*)max);
}

QDate* q_dateedit_minimum_date(void* self) {
    return QDateTimeEdit_MinimumDate((QDateTimeEdit*)self);
}

void q_dateedit_set_minimum_date(void* self, void* min) {
    QDateTimeEdit_SetMinimumDate((QDateTimeEdit*)self, (QDate*)min);
}

void q_dateedit_clear_minimum_date(void* self) {
    QDateTimeEdit_ClearMinimumDate((QDateTimeEdit*)self);
}

QDate* q_dateedit_maximum_date(void* self) {
    return QDateTimeEdit_MaximumDate((QDateTimeEdit*)self);
}

void q_dateedit_set_maximum_date(void* self, void* max) {
    QDateTimeEdit_SetMaximumDate((QDateTimeEdit*)self, (QDate*)max);
}

void q_dateedit_clear_maximum_date(void* self) {
    QDateTimeEdit_ClearMaximumDate((QDateTimeEdit*)self);
}

void q_dateedit_set_date_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetDateRange((QDateTimeEdit*)self, (QDate*)min, (QDate*)max);
}

QTime* q_dateedit_minimum_time(void* self) {
    return QDateTimeEdit_MinimumTime((QDateTimeEdit*)self);
}

void q_dateedit_set_minimum_time(void* self, void* min) {
    QDateTimeEdit_SetMinimumTime((QDateTimeEdit*)self, (QTime*)min);
}

void q_dateedit_clear_minimum_time(void* self) {
    QDateTimeEdit_ClearMinimumTime((QDateTimeEdit*)self);
}

QTime* q_dateedit_maximum_time(void* self) {
    return QDateTimeEdit_MaximumTime((QDateTimeEdit*)self);
}

void q_dateedit_set_maximum_time(void* self, void* max) {
    QDateTimeEdit_SetMaximumTime((QDateTimeEdit*)self, (QTime*)max);
}

void q_dateedit_clear_maximum_time(void* self) {
    QDateTimeEdit_ClearMaximumTime((QDateTimeEdit*)self);
}

void q_dateedit_set_time_range(void* self, void* min, void* max) {
    QDateTimeEdit_SetTimeRange((QDateTimeEdit*)self, (QTime*)min, (QTime*)max);
}

int64_t q_dateedit_displayed_sections(void* self) {
    return QDateTimeEdit_DisplayedSections((QDateTimeEdit*)self);
}

int64_t q_dateedit_current_section(void* self) {
    return QDateTimeEdit_CurrentSection((QDateTimeEdit*)self);
}

int64_t q_dateedit_section_at(void* self, int index) {
    return QDateTimeEdit_SectionAt((QDateTimeEdit*)self, index);
}

void q_dateedit_set_current_section(void* self, int64_t section) {
    QDateTimeEdit_SetCurrentSection((QDateTimeEdit*)self, section);
}

int32_t q_dateedit_current_section_index(void* self) {
    return QDateTimeEdit_CurrentSectionIndex((QDateTimeEdit*)self);
}

void q_dateedit_set_current_section_index(void* self, int index) {
    QDateTimeEdit_SetCurrentSectionIndex((QDateTimeEdit*)self, index);
}

QCalendarWidget* q_dateedit_calendar_widget(void* self) {
    return QDateTimeEdit_CalendarWidget((QDateTimeEdit*)self);
}

void q_dateedit_set_calendar_widget(void* self, void* calendarWidget) {
    QDateTimeEdit_SetCalendarWidget((QDateTimeEdit*)self, (QCalendarWidget*)calendarWidget);
}

int32_t q_dateedit_section_count(void* self) {
    return QDateTimeEdit_SectionCount((QDateTimeEdit*)self);
}

void q_dateedit_set_selected_section(void* self, int64_t section) {
    QDateTimeEdit_SetSelectedSection((QDateTimeEdit*)self, section);
}

const char* q_dateedit_section_text(void* self, int64_t section) {
    libqt_string _str = QDateTimeEdit_SectionText((QDateTimeEdit*)self, section);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_display_format(void* self) {
    libqt_string _str = QDateTimeEdit_DisplayFormat((QDateTimeEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_display_format(void* self, const char* format) {
    QDateTimeEdit_SetDisplayFormat((QDateTimeEdit*)self, qstring(format));
}

bool q_dateedit_calendar_popup(void* self) {
    return QDateTimeEdit_CalendarPopup((QDateTimeEdit*)self);
}

void q_dateedit_set_calendar_popup(void* self, bool enable) {
    QDateTimeEdit_SetCalendarPopup((QDateTimeEdit*)self, enable);
}

int64_t q_dateedit_time_spec(void* self) {
    return QDateTimeEdit_TimeSpec((QDateTimeEdit*)self);
}

void q_dateedit_set_time_spec(void* self, int64_t spec) {
    QDateTimeEdit_SetTimeSpec((QDateTimeEdit*)self, spec);
}

void q_dateedit_date_time_changed(void* self, void* dateTime) {
    QDateTimeEdit_DateTimeChanged((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_dateedit_on_date_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateTimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_dateedit_time_changed(void* self, void* time) {
    QDateTimeEdit_TimeChanged((QDateTimeEdit*)self, (QTime*)time);
}

void q_dateedit_on_time_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_TimeChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_dateedit_date_changed(void* self, void* date) {
    QDateTimeEdit_DateChanged((QDateTimeEdit*)self, (QDate*)date);
}

void q_dateedit_on_date_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeEdit_Connect_DateChanged((QDateTimeEdit*)self, (intptr_t)slot);
}

void q_dateedit_set_date_time(void* self, void* dateTime) {
    QDateTimeEdit_SetDateTime((QDateTimeEdit*)self, (QDateTime*)dateTime);
}

void q_dateedit_set_date(void* self, void* date) {
    QDateTimeEdit_SetDate((QDateTimeEdit*)self, (QDate*)date);
}

void q_dateedit_set_time(void* self, void* time) {
    QDateTimeEdit_SetTime((QDateTimeEdit*)self, (QTime*)time);
}

int64_t q_dateedit_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_dateedit_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_dateedit_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int64_t q_dateedit_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_dateedit_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_dateedit_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_dateedit_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_dateedit_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_dateedit_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_dateedit_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_dateedit_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_dateedit_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_dateedit_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int64_t q_dateedit_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_dateedit_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_dateedit_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_dateedit_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_dateedit_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_dateedit_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_dateedit_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void q_dateedit_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void q_dateedit_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_dateedit_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_dateedit_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_dateedit_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_dateedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

uintptr_t q_dateedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_dateedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_dateedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_dateedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_dateedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_dateedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_dateedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_dateedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_dateedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_dateedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_dateedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_dateedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_dateedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_dateedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_dateedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_dateedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_dateedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_dateedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_dateedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_dateedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_dateedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_dateedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_dateedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_dateedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_dateedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_dateedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_dateedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_dateedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_dateedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_dateedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_dateedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_dateedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_dateedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_dateedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_dateedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_dateedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_dateedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_dateedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_dateedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_dateedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_dateedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_dateedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_dateedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_dateedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_dateedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_dateedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_dateedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_dateedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_dateedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_dateedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_dateedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_dateedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_dateedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_dateedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dateedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dateedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dateedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dateedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dateedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dateedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dateedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dateedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dateedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_dateedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dateedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_dateedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_dateedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_dateedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_dateedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_dateedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_dateedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_dateedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_dateedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_dateedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_dateedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_dateedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_dateedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_dateedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_dateedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_dateedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_dateedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_dateedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_dateedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_dateedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_dateedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_dateedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_dateedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_dateedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_dateedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_dateedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_dateedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_dateedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_dateedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_dateedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_dateedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_dateedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_dateedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_dateedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_dateedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_dateedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_dateedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_dateedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_dateedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_dateedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_dateedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_dateedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_dateedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_dateedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_dateedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_dateedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_dateedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_dateedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_dateedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_dateedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_dateedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_dateedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_dateedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_dateedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_dateedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_dateedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_dateedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_dateedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_dateedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_dateedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_dateedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_dateedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_dateedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_dateedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_dateedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_dateedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_dateedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_dateedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_dateedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_dateedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_dateedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_dateedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_dateedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_dateedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_dateedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_dateedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_dateedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_dateedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_dateedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_dateedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_dateedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_dateedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_dateedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_dateedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_dateedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_dateedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_dateedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_dateedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_dateedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_dateedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_dateedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_dateedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_dateedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_dateedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_dateedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_dateedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_dateedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_dateedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_dateedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_dateedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_dateedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_dateedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_dateedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_dateedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_dateedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_dateedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_dateedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_dateedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_dateedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_dateedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_dateedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dateedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_dateedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_dateedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_dateedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_dateedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_dateedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_dateedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_dateedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_dateedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_dateedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_dateedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_dateedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_dateedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_dateedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_dateedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_dateedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_dateedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_dateedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_dateedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_dateedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_dateedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_dateedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_dateedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_dateedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_dateedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_dateedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_dateedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_dateedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_dateedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_dateedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_dateedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_dateedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_dateedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_dateedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_dateedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_dateedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_dateedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_dateedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_dateedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_dateedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_dateedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_dateedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_dateedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_dateedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_dateedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_dateedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_dateedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_dateedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_dateedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_dateedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_dateedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_dateedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_dateedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_dateedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_dateedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_dateedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_dateedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_dateedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_dateedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_dateedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_dateedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_dateedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_dateedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_dateedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_dateedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_dateedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_dateedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_dateedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_dateedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_dateedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_dateedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dateedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_dateedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_dateedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dateedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_dateedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_dateedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_dateedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_dateedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_dateedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_dateedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_dateedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_dateedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_dateedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_dateedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_dateedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dateedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dateedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dateedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dateedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dateedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_dateedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dateedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_dateedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dateedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dateedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dateedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dateedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dateedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dateedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dateedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_dateedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dateedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dateedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dateedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_dateedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_dateedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dateedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dateedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_dateedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dateedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dateedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_dateedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_dateedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_dateedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_dateedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dateedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_dateedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_dateedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_dateedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_dateedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_dateedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_dateedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_dateedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_dateedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_dateedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_dateedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_dateedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_dateedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_dateedit_size_hint(void* self) {
    return QDateEdit_SizeHint((QDateEdit*)self);
}

QSize* q_dateedit_qbase_size_hint(void* self) {
    return QDateEdit_QBaseSizeHint((QDateEdit*)self);
}

void q_dateedit_on_size_hint(void* self, QSize* (*slot)()) {
    QDateEdit_OnSizeHint((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_clear(void* self) {
    QDateEdit_Clear((QDateEdit*)self);
}

void q_dateedit_qbase_clear(void* self) {
    QDateEdit_QBaseClear((QDateEdit*)self);
}

void q_dateedit_on_clear(void* self, void (*slot)()) {
    QDateEdit_OnClear((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_step_by(void* self, int steps) {
    QDateEdit_StepBy((QDateEdit*)self, steps);
}

void q_dateedit_qbase_step_by(void* self, int steps) {
    QDateEdit_QBaseStepBy((QDateEdit*)self, steps);
}

void q_dateedit_on_step_by(void* self, void (*slot)(void*, int)) {
    QDateEdit_OnStepBy((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_event(void* self, void* event) {
    return QDateEdit_Event((QDateEdit*)self, (QEvent*)event);
}

bool q_dateedit_qbase_event(void* self, void* event) {
    return QDateEdit_QBaseEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QDateEdit_OnEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_key_press_event(void* self, void* event) {
    QDateEdit_KeyPressEvent((QDateEdit*)self, (QKeyEvent*)event);
}

void q_dateedit_qbase_key_press_event(void* self, void* event) {
    QDateEdit_QBaseKeyPressEvent((QDateEdit*)self, (QKeyEvent*)event);
}

void q_dateedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnKeyPressEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_wheel_event(void* self, void* event) {
    QDateEdit_WheelEvent((QDateEdit*)self, (QWheelEvent*)event);
}

void q_dateedit_qbase_wheel_event(void* self, void* event) {
    QDateEdit_QBaseWheelEvent((QDateEdit*)self, (QWheelEvent*)event);
}

void q_dateedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnWheelEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_focus_in_event(void* self, void* event) {
    QDateEdit_FocusInEvent((QDateEdit*)self, (QFocusEvent*)event);
}

void q_dateedit_qbase_focus_in_event(void* self, void* event) {
    QDateEdit_QBaseFocusInEvent((QDateEdit*)self, (QFocusEvent*)event);
}

void q_dateedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnFocusInEvent((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_focus_next_prev_child(void* self, bool next) {
    return QDateEdit_FocusNextPrevChild((QDateEdit*)self, next);
}

bool q_dateedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QDateEdit_QBaseFocusNextPrevChild((QDateEdit*)self, next);
}

void q_dateedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDateEdit_OnFocusNextPrevChild((QDateEdit*)self, (intptr_t)slot);
}

int64_t q_dateedit_validate(void* self, const char* input, int* pos) {
    return QDateEdit_Validate((QDateEdit*)self, qstring(input), pos);
}

int64_t q_dateedit_qbase_validate(void* self, const char* input, int* pos) {
    return QDateEdit_QBaseValidate((QDateEdit*)self, qstring(input), pos);
}

void q_dateedit_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QDateEdit_OnValidate((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_fixup(void* self, const char* input) {
    QDateEdit_Fixup((QDateEdit*)self, qstring(input));
}

void q_dateedit_qbase_fixup(void* self, const char* input) {
    QDateEdit_QBaseFixup((QDateEdit*)self, qstring(input));
}

void q_dateedit_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QDateEdit_OnFixup((QDateEdit*)self, (intptr_t)slot);
}

QDateTime* q_dateedit_date_time_from_text(void* self, const char* text) {
    return QDateEdit_DateTimeFromText((QDateEdit*)self, qstring(text));
}

QDateTime* q_dateedit_qbase_date_time_from_text(void* self, const char* text) {
    return QDateEdit_QBaseDateTimeFromText((QDateEdit*)self, qstring(text));
}

void q_dateedit_on_date_time_from_text(void* self, QDateTime* (*slot)(void*, const char*)) {
    QDateEdit_OnDateTimeFromText((QDateEdit*)self, (intptr_t)slot);
}

const char* q_dateedit_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateEdit_TextFromDateTime((QDateEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dateedit_qbase_text_from_date_time(void* self, void* dt) {
    libqt_string _str = QDateEdit_QBaseTextFromDateTime((QDateEdit*)self, (QDateTime*)dt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dateedit_on_text_from_date_time(void* self, const char* (*slot)(void*, void*)) {
    QDateEdit_OnTextFromDateTime((QDateEdit*)self, (intptr_t)slot);
}

int64_t q_dateedit_step_enabled(void* self) {
    return QDateEdit_StepEnabled((QDateEdit*)self);
}

int64_t q_dateedit_qbase_step_enabled(void* self) {
    return QDateEdit_QBaseStepEnabled((QDateEdit*)self);
}

void q_dateedit_on_step_enabled(void* self, int64_t (*slot)()) {
    QDateEdit_OnStepEnabled((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_mouse_press_event(void* self, void* event) {
    QDateEdit_MousePressEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_qbase_mouse_press_event(void* self, void* event) {
    QDateEdit_QBaseMousePressEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMousePressEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_paint_event(void* self, void* event) {
    QDateEdit_PaintEvent((QDateEdit*)self, (QPaintEvent*)event);
}

void q_dateedit_qbase_paint_event(void* self, void* event) {
    QDateEdit_QBasePaintEvent((QDateEdit*)self, (QPaintEvent*)event);
}

void q_dateedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnPaintEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_init_style_option(void* self, void* option) {
    QDateEdit_InitStyleOption((QDateEdit*)self, (QStyleOptionSpinBox*)option);
}

void q_dateedit_qbase_init_style_option(void* self, void* option) {
    QDateEdit_QBaseInitStyleOption((QDateEdit*)self, (QStyleOptionSpinBox*)option);
}

void q_dateedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInitStyleOption((QDateEdit*)self, (intptr_t)slot);
}

QSize* q_dateedit_minimum_size_hint(void* self) {
    return QDateEdit_MinimumSizeHint((QDateEdit*)self);
}

QSize* q_dateedit_qbase_minimum_size_hint(void* self) {
    return QDateEdit_QBaseMinimumSizeHint((QDateEdit*)self);
}

void q_dateedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDateEdit_OnMinimumSizeHint((QDateEdit*)self, (intptr_t)slot);
}

QVariant* q_dateedit_input_method_query(void* self, int64_t param1) {
    return QDateEdit_InputMethodQuery((QDateEdit*)self, param1);
}

QVariant* q_dateedit_qbase_input_method_query(void* self, int64_t param1) {
    return QDateEdit_QBaseInputMethodQuery((QDateEdit*)self, param1);
}

void q_dateedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDateEdit_OnInputMethodQuery((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_resize_event(void* self, void* event) {
    QDateEdit_ResizeEvent((QDateEdit*)self, (QResizeEvent*)event);
}

void q_dateedit_qbase_resize_event(void* self, void* event) {
    QDateEdit_QBaseResizeEvent((QDateEdit*)self, (QResizeEvent*)event);
}

void q_dateedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnResizeEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_key_release_event(void* self, void* event) {
    QDateEdit_KeyReleaseEvent((QDateEdit*)self, (QKeyEvent*)event);
}

void q_dateedit_qbase_key_release_event(void* self, void* event) {
    QDateEdit_QBaseKeyReleaseEvent((QDateEdit*)self, (QKeyEvent*)event);
}

void q_dateedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnKeyReleaseEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_focus_out_event(void* self, void* event) {
    QDateEdit_FocusOutEvent((QDateEdit*)self, (QFocusEvent*)event);
}

void q_dateedit_qbase_focus_out_event(void* self, void* event) {
    QDateEdit_QBaseFocusOutEvent((QDateEdit*)self, (QFocusEvent*)event);
}

void q_dateedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnFocusOutEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_context_menu_event(void* self, void* event) {
    QDateEdit_ContextMenuEvent((QDateEdit*)self, (QContextMenuEvent*)event);
}

void q_dateedit_qbase_context_menu_event(void* self, void* event) {
    QDateEdit_QBaseContextMenuEvent((QDateEdit*)self, (QContextMenuEvent*)event);
}

void q_dateedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnContextMenuEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_change_event(void* self, void* event) {
    QDateEdit_ChangeEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_qbase_change_event(void* self, void* event) {
    QDateEdit_QBaseChangeEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnChangeEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_close_event(void* self, void* event) {
    QDateEdit_CloseEvent((QDateEdit*)self, (QCloseEvent*)event);
}

void q_dateedit_qbase_close_event(void* self, void* event) {
    QDateEdit_QBaseCloseEvent((QDateEdit*)self, (QCloseEvent*)event);
}

void q_dateedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnCloseEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_hide_event(void* self, void* event) {
    QDateEdit_HideEvent((QDateEdit*)self, (QHideEvent*)event);
}

void q_dateedit_qbase_hide_event(void* self, void* event) {
    QDateEdit_QBaseHideEvent((QDateEdit*)self, (QHideEvent*)event);
}

void q_dateedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnHideEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_mouse_release_event(void* self, void* event) {
    QDateEdit_MouseReleaseEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_qbase_mouse_release_event(void* self, void* event) {
    QDateEdit_QBaseMouseReleaseEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseReleaseEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_mouse_move_event(void* self, void* event) {
    QDateEdit_MouseMoveEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_qbase_mouse_move_event(void* self, void* event) {
    QDateEdit_QBaseMouseMoveEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_timer_event(void* self, void* event) {
    QDateEdit_TimerEvent((QDateEdit*)self, (QTimerEvent*)event);
}

void q_dateedit_qbase_timer_event(void* self, void* event) {
    QDateEdit_QBaseTimerEvent((QDateEdit*)self, (QTimerEvent*)event);
}

void q_dateedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnTimerEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_show_event(void* self, void* event) {
    QDateEdit_ShowEvent((QDateEdit*)self, (QShowEvent*)event);
}

void q_dateedit_qbase_show_event(void* self, void* event) {
    QDateEdit_QBaseShowEvent((QDateEdit*)self, (QShowEvent*)event);
}

void q_dateedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnShowEvent((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_dev_type(void* self) {
    return QDateEdit_DevType((QDateEdit*)self);
}

int32_t q_dateedit_qbase_dev_type(void* self) {
    return QDateEdit_QBaseDevType((QDateEdit*)self);
}

void q_dateedit_on_dev_type(void* self, int32_t (*slot)()) {
    QDateEdit_OnDevType((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_set_visible(void* self, bool visible) {
    QDateEdit_SetVisible((QDateEdit*)self, visible);
}

void q_dateedit_qbase_set_visible(void* self, bool visible) {
    QDateEdit_QBaseSetVisible((QDateEdit*)self, visible);
}

void q_dateedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDateEdit_OnSetVisible((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_height_for_width(void* self, int param1) {
    return QDateEdit_HeightForWidth((QDateEdit*)self, param1);
}

int32_t q_dateedit_qbase_height_for_width(void* self, int param1) {
    return QDateEdit_QBaseHeightForWidth((QDateEdit*)self, param1);
}

void q_dateedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDateEdit_OnHeightForWidth((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_has_height_for_width(void* self) {
    return QDateEdit_HasHeightForWidth((QDateEdit*)self);
}

bool q_dateedit_qbase_has_height_for_width(void* self) {
    return QDateEdit_QBaseHasHeightForWidth((QDateEdit*)self);
}

void q_dateedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QDateEdit_OnHasHeightForWidth((QDateEdit*)self, (intptr_t)slot);
}

QPaintEngine* q_dateedit_paint_engine(void* self) {
    return QDateEdit_PaintEngine((QDateEdit*)self);
}

QPaintEngine* q_dateedit_qbase_paint_engine(void* self) {
    return QDateEdit_QBasePaintEngine((QDateEdit*)self);
}

void q_dateedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDateEdit_OnPaintEngine((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_mouse_double_click_event(void* self, void* event) {
    QDateEdit_MouseDoubleClickEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_qbase_mouse_double_click_event(void* self, void* event) {
    QDateEdit_QBaseMouseDoubleClickEvent((QDateEdit*)self, (QMouseEvent*)event);
}

void q_dateedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMouseDoubleClickEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_enter_event(void* self, void* event) {
    QDateEdit_EnterEvent((QDateEdit*)self, (QEnterEvent*)event);
}

void q_dateedit_qbase_enter_event(void* self, void* event) {
    QDateEdit_QBaseEnterEvent((QDateEdit*)self, (QEnterEvent*)event);
}

void q_dateedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnEnterEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_leave_event(void* self, void* event) {
    QDateEdit_LeaveEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_qbase_leave_event(void* self, void* event) {
    QDateEdit_QBaseLeaveEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnLeaveEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_move_event(void* self, void* event) {
    QDateEdit_MoveEvent((QDateEdit*)self, (QMoveEvent*)event);
}

void q_dateedit_qbase_move_event(void* self, void* event) {
    QDateEdit_QBaseMoveEvent((QDateEdit*)self, (QMoveEvent*)event);
}

void q_dateedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_tablet_event(void* self, void* event) {
    QDateEdit_TabletEvent((QDateEdit*)self, (QTabletEvent*)event);
}

void q_dateedit_qbase_tablet_event(void* self, void* event) {
    QDateEdit_QBaseTabletEvent((QDateEdit*)self, (QTabletEvent*)event);
}

void q_dateedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnTabletEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_action_event(void* self, void* event) {
    QDateEdit_ActionEvent((QDateEdit*)self, (QActionEvent*)event);
}

void q_dateedit_qbase_action_event(void* self, void* event) {
    QDateEdit_QBaseActionEvent((QDateEdit*)self, (QActionEvent*)event);
}

void q_dateedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnActionEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_drag_enter_event(void* self, void* event) {
    QDateEdit_DragEnterEvent((QDateEdit*)self, (QDragEnterEvent*)event);
}

void q_dateedit_qbase_drag_enter_event(void* self, void* event) {
    QDateEdit_QBaseDragEnterEvent((QDateEdit*)self, (QDragEnterEvent*)event);
}

void q_dateedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragEnterEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_drag_move_event(void* self, void* event) {
    QDateEdit_DragMoveEvent((QDateEdit*)self, (QDragMoveEvent*)event);
}

void q_dateedit_qbase_drag_move_event(void* self, void* event) {
    QDateEdit_QBaseDragMoveEvent((QDateEdit*)self, (QDragMoveEvent*)event);
}

void q_dateedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragMoveEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_drag_leave_event(void* self, void* event) {
    QDateEdit_DragLeaveEvent((QDateEdit*)self, (QDragLeaveEvent*)event);
}

void q_dateedit_qbase_drag_leave_event(void* self, void* event) {
    QDateEdit_QBaseDragLeaveEvent((QDateEdit*)self, (QDragLeaveEvent*)event);
}

void q_dateedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDragLeaveEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_drop_event(void* self, void* event) {
    QDateEdit_DropEvent((QDateEdit*)self, (QDropEvent*)event);
}

void q_dateedit_qbase_drop_event(void* self, void* event) {
    QDateEdit_QBaseDropEvent((QDateEdit*)self, (QDropEvent*)event);
}

void q_dateedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDropEvent((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateEdit_NativeEvent((QDateEdit*)self, qstring(eventType), message, result);
}

bool q_dateedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDateEdit_QBaseNativeEvent((QDateEdit*)self, qstring(eventType), message, result);
}

void q_dateedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDateEdit_OnNativeEvent((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_metric(void* self, int64_t param1) {
    return QDateEdit_Metric((QDateEdit*)self, param1);
}

int32_t q_dateedit_qbase_metric(void* self, int64_t param1) {
    return QDateEdit_QBaseMetric((QDateEdit*)self, param1);
}

void q_dateedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDateEdit_OnMetric((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_init_painter(void* self, void* painter) {
    QDateEdit_InitPainter((QDateEdit*)self, (QPainter*)painter);
}

void q_dateedit_qbase_init_painter(void* self, void* painter) {
    QDateEdit_QBaseInitPainter((QDateEdit*)self, (QPainter*)painter);
}

void q_dateedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInitPainter((QDateEdit*)self, (intptr_t)slot);
}

QPaintDevice* q_dateedit_redirected(void* self, void* offset) {
    return QDateEdit_Redirected((QDateEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_dateedit_qbase_redirected(void* self, void* offset) {
    return QDateEdit_QBaseRedirected((QDateEdit*)self, (QPoint*)offset);
}

void q_dateedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDateEdit_OnRedirected((QDateEdit*)self, (intptr_t)slot);
}

QPainter* q_dateedit_shared_painter(void* self) {
    return QDateEdit_SharedPainter((QDateEdit*)self);
}

QPainter* q_dateedit_qbase_shared_painter(void* self) {
    return QDateEdit_QBaseSharedPainter((QDateEdit*)self);
}

void q_dateedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDateEdit_OnSharedPainter((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_input_method_event(void* self, void* param1) {
    QDateEdit_InputMethodEvent((QDateEdit*)self, (QInputMethodEvent*)param1);
}

void q_dateedit_qbase_input_method_event(void* self, void* param1) {
    QDateEdit_QBaseInputMethodEvent((QDateEdit*)self, (QInputMethodEvent*)param1);
}

void q_dateedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnInputMethodEvent((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_event_filter(void* self, void* watched, void* event) {
    return QDateEdit_EventFilter((QDateEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dateedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QDateEdit_QBaseEventFilter((QDateEdit*)self, (QObject*)watched, (QEvent*)event);
}

void q_dateedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDateEdit_OnEventFilter((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_child_event(void* self, void* event) {
    QDateEdit_ChildEvent((QDateEdit*)self, (QChildEvent*)event);
}

void q_dateedit_qbase_child_event(void* self, void* event) {
    QDateEdit_QBaseChildEvent((QDateEdit*)self, (QChildEvent*)event);
}

void q_dateedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnChildEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_custom_event(void* self, void* event) {
    QDateEdit_CustomEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_qbase_custom_event(void* self, void* event) {
    QDateEdit_QBaseCustomEvent((QDateEdit*)self, (QEvent*)event);
}

void q_dateedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnCustomEvent((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_connect_notify(void* self, void* signal) {
    QDateEdit_ConnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

void q_dateedit_qbase_connect_notify(void* self, void* signal) {
    QDateEdit_QBaseConnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

void q_dateedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnConnectNotify((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_disconnect_notify(void* self, void* signal) {
    QDateEdit_DisconnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

void q_dateedit_qbase_disconnect_notify(void* self, void* signal) {
    QDateEdit_QBaseDisconnectNotify((QDateEdit*)self, (QMetaMethod*)signal);
}

void q_dateedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnDisconnectNotify((QDateEdit*)self, (intptr_t)slot);
}

QLineEdit* q_dateedit_line_edit(void* self) {
    return QDateEdit_LineEdit((QDateEdit*)self);
}

QLineEdit* q_dateedit_qbase_line_edit(void* self) {
    return QDateEdit_QBaseLineEdit((QDateEdit*)self);
}

void q_dateedit_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QDateEdit_OnLineEdit((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_set_line_edit(void* self, void* edit) {
    QDateEdit_SetLineEdit((QDateEdit*)self, (QLineEdit*)edit);
}

void q_dateedit_qbase_set_line_edit(void* self, void* edit) {
    QDateEdit_QBaseSetLineEdit((QDateEdit*)self, (QLineEdit*)edit);
}

void q_dateedit_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QDateEdit_OnSetLineEdit((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_update_micro_focus(void* self) {
    QDateEdit_UpdateMicroFocus((QDateEdit*)self);
}

void q_dateedit_qbase_update_micro_focus(void* self) {
    QDateEdit_QBaseUpdateMicroFocus((QDateEdit*)self);
}

void q_dateedit_on_update_micro_focus(void* self, void (*slot)()) {
    QDateEdit_OnUpdateMicroFocus((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_create(void* self) {
    QDateEdit_Create((QDateEdit*)self);
}

void q_dateedit_qbase_create(void* self) {
    QDateEdit_QBaseCreate((QDateEdit*)self);
}

void q_dateedit_on_create(void* self, void (*slot)()) {
    QDateEdit_OnCreate((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_destroy(void* self) {
    QDateEdit_Destroy((QDateEdit*)self);
}

void q_dateedit_qbase_destroy(void* self) {
    QDateEdit_QBaseDestroy((QDateEdit*)self);
}

void q_dateedit_on_destroy(void* self, void (*slot)()) {
    QDateEdit_OnDestroy((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_focus_next_child(void* self) {
    return QDateEdit_FocusNextChild((QDateEdit*)self);
}

bool q_dateedit_qbase_focus_next_child(void* self) {
    return QDateEdit_QBaseFocusNextChild((QDateEdit*)self);
}

void q_dateedit_on_focus_next_child(void* self, bool (*slot)()) {
    QDateEdit_OnFocusNextChild((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_focus_previous_child(void* self) {
    return QDateEdit_FocusPreviousChild((QDateEdit*)self);
}

bool q_dateedit_qbase_focus_previous_child(void* self) {
    return QDateEdit_QBaseFocusPreviousChild((QDateEdit*)self);
}

void q_dateedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QDateEdit_OnFocusPreviousChild((QDateEdit*)self, (intptr_t)slot);
}

QObject* q_dateedit_sender(void* self) {
    return QDateEdit_Sender((QDateEdit*)self);
}

QObject* q_dateedit_qbase_sender(void* self) {
    return QDateEdit_QBaseSender((QDateEdit*)self);
}

void q_dateedit_on_sender(void* self, QObject* (*slot)()) {
    QDateEdit_OnSender((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_sender_signal_index(void* self) {
    return QDateEdit_SenderSignalIndex((QDateEdit*)self);
}

int32_t q_dateedit_qbase_sender_signal_index(void* self) {
    return QDateEdit_QBaseSenderSignalIndex((QDateEdit*)self);
}

void q_dateedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDateEdit_OnSenderSignalIndex((QDateEdit*)self, (intptr_t)slot);
}

int32_t q_dateedit_receivers(void* self, const char* signal) {
    return QDateEdit_Receivers((QDateEdit*)self, signal);
}

int32_t q_dateedit_qbase_receivers(void* self, const char* signal) {
    return QDateEdit_QBaseReceivers((QDateEdit*)self, signal);
}

void q_dateedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDateEdit_OnReceivers((QDateEdit*)self, (intptr_t)slot);
}

bool q_dateedit_is_signal_connected(void* self, void* signal) {
    return QDateEdit_IsSignalConnected((QDateEdit*)self, (QMetaMethod*)signal);
}

bool q_dateedit_qbase_is_signal_connected(void* self, void* signal) {
    return QDateEdit_QBaseIsSignalConnected((QDateEdit*)self, (QMetaMethod*)signal);
}

void q_dateedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDateEdit_OnIsSignalConnected((QDateEdit*)self, (intptr_t)slot);
}

void q_dateedit_delete(void* self) {
    QDateEdit_Delete((QDateEdit*)(self));
}
