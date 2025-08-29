#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTIMECOMBOBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTIMECOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/ktimecombobox.html

/// k_timecombobox_new constructs a new KTimeComboBox object.
///
/// @param parent QWidget*
KTimeComboBox* k_timecombobox_new(void* parent);

/// k_timecombobox_new2 constructs a new KTimeComboBox object.
///
KTimeComboBox* k_timecombobox_new2();

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KTimeComboBox*
const QMetaObject* k_timecombobox_meta_object(void* self);

/// @param self KTimeComboBox*
/// @param param1 const char*
void* k_timecombobox_metacast(void* self, const char* param1);

/// @param self KTimeComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_timecombobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func(KTimeComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_timecombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_timecombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_timecombobox_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#time)
///
/// @param self KTimeComboBox*
QTime* k_timecombobox_time(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#isValid)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_valid(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#isNull)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_null(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#options)
///
/// @param self KTimeComboBox*
///
/// @return flag of enum KTimeComboBox__Option
int32_t k_timecombobox_options(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#displayFormat)
///
/// @param self KTimeComboBox*
///
/// @return enum QLocale__FormatType
int32_t k_timecombobox_display_format(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#minimumTime)
///
/// @param self KTimeComboBox*
QTime* k_timecombobox_minimum_time(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resetMinimumTime)
///
/// @param self KTimeComboBox*
void k_timecombobox_reset_minimum_time(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#maximumTime)
///
/// @param self KTimeComboBox*
QTime* k_timecombobox_maximum_time(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resetMaximumTime)
///
/// @param self KTimeComboBox*
void k_timecombobox_reset_maximum_time(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeRange)
///
/// @param self KTimeComboBox*
/// @param minTime QTime*
/// @param maxTime QTime*
void k_timecombobox_set_time_range(void* self, void* minTime, void* maxTime);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resetTimeRange)
///
/// @param self KTimeComboBox*
void k_timecombobox_reset_time_range(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeListInterval)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_time_list_interval(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeList)
///
/// @param self KTimeComboBox*
libqt_list /* of QTime* */ k_timecombobox_time_list(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeEntered)
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_time_entered(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeEntered)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTime* time)
void k_timecombobox_on_time_entered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeChanged)
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_time_changed(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTime* time)
void k_timecombobox_on_time_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeEdited)
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_time_edited(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#timeEdited)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTime* time)
void k_timecombobox_on_time_edited(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTime)
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_set_time(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setOptions)
///
/// @param self KTimeComboBox*
/// @param options flag of enum KTimeComboBox__Option
void k_timecombobox_set_options(void* self, int32_t options);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setDisplayFormat)
///
/// @param self KTimeComboBox*
/// @param format enum QLocale__FormatType
void k_timecombobox_set_display_format(void* self, int32_t format);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setMinimumTime)
///
/// @param self KTimeComboBox*
/// @param minTime QTime*
void k_timecombobox_set_minimum_time(void* self, void* minTime);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setMaximumTime)
///
/// @param self KTimeComboBox*
/// @param maxTime QTime*
void k_timecombobox_set_maximum_time(void* self, void* maxTime);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeListInterval)
///
/// @param self KTimeComboBox*
/// @param minutes int
void k_timecombobox_set_time_list_interval(void* self, int minutes);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeList)
///
/// @param self KTimeComboBox*
/// @param timeList libqt_list /* of QTime* */
void k_timecombobox_set_time_list(void* self, libqt_list timeList);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#eventFilter)
///
/// @param self KTimeComboBox*
/// @param object QObject*
/// @param event QEvent*
bool k_timecombobox_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback bool func(KTimeComboBox* self, QObject* object, QEvent* event)
void k_timecombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param object QObject*
/// @param event QEvent*
bool k_timecombobox_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#showPopup)
///
/// @param self KTimeComboBox*
void k_timecombobox_show_popup(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#showPopup)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func()
void k_timecombobox_on_show_popup(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#showPopup)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
void k_timecombobox_qbase_show_popup(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#hidePopup)
///
/// @param self KTimeComboBox*
void k_timecombobox_hide_popup(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#hidePopup)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func()
void k_timecombobox_on_hide_popup(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#hidePopup)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
void k_timecombobox_qbase_hide_popup(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#mousePressEvent)
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMouseEvent* event)
void k_timecombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#wheelEvent)
///
/// @param self KTimeComboBox*
/// @param event QWheelEvent*
void k_timecombobox_wheel_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QWheelEvent* event)
void k_timecombobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QWheelEvent*
void k_timecombobox_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#keyPressEvent)
///
/// @param self KTimeComboBox*
/// @param event QKeyEvent*
void k_timecombobox_key_press_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QKeyEvent* event)
void k_timecombobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QKeyEvent*
void k_timecombobox_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusInEvent)
///
/// @param self KTimeComboBox*
/// @param event QFocusEvent*
void k_timecombobox_focus_in_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QFocusEvent* event)
void k_timecombobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QFocusEvent*
void k_timecombobox_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusOutEvent)
///
/// @param self KTimeComboBox*
/// @param event QFocusEvent*
void k_timecombobox_focus_out_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QFocusEvent* event)
void k_timecombobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QFocusEvent*
void k_timecombobox_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resizeEvent)
///
/// @param self KTimeComboBox*
/// @param event QResizeEvent*
void k_timecombobox_resize_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QResizeEvent* event)
void k_timecombobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param event QResizeEvent*
void k_timecombobox_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#assignTime)
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_assign_time(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#assignTime)
///
/// Allows for overriding the related default method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTime* time)
void k_timecombobox_on_assign_time(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#assignTime)
///
/// Base class method implementation
///
/// @param self KTimeComboBox*
/// @param time QTime*
void k_timecombobox_qbase_assign_time(void* self, void* time);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_timecombobox_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_timecombobox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeRange)
///
/// @param self KTimeComboBox*
/// @param minTime QTime*
/// @param maxTime QTime*
/// @param minWarnMsg const char*
void k_timecombobox_set_time_range3(void* self, void* minTime, void* maxTime, const char* minWarnMsg);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeRange)
///
/// @param self KTimeComboBox*
/// @param minTime QTime*
/// @param maxTime QTime*
/// @param minWarnMsg const char*
/// @param maxWarnMsg const char*
void k_timecombobox_set_time_range4(void* self, void* minTime, void* maxTime, const char* minWarnMsg, const char* maxWarnMsg);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setMinimumTime)
///
/// @param self KTimeComboBox*
/// @param minTime QTime*
/// @param minWarnMsg const char*
void k_timecombobox_set_minimum_time2(void* self, void* minTime, const char* minWarnMsg);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setMaximumTime)
///
/// @param self KTimeComboBox*
/// @param maxTime QTime*
/// @param maxWarnMsg const char*
void k_timecombobox_set_maximum_time2(void* self, void* maxTime, const char* maxWarnMsg);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeList)
///
/// @param self KTimeComboBox*
/// @param timeList libqt_list /* of QTime* */
/// @param minWarnMsg const char*
void k_timecombobox_set_time_list2(void* self, libqt_list timeList, const char* minWarnMsg);

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#setTimeList)
///
/// @param self KTimeComboBox*
/// @param timeList libqt_list /* of QTime* */
/// @param minWarnMsg const char*
/// @param maxWarnMsg const char*
void k_timecombobox_set_time_list3(void* self, libqt_list timeList, const char* minWarnMsg, const char* maxWarnMsg);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self KTimeComboBox*
/// @param maxItems int
void k_timecombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self KTimeComboBox*
/// @param max int
void k_timecombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self KTimeComboBox*
bool k_timecombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self KTimeComboBox*
/// @param enable bool
void k_timecombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self KTimeComboBox*
/// @param frame bool
void k_timecombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self KTimeComboBox*
bool k_timecombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KTimeComboBox*
/// @param text const char*
int32_t k_timecombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KTimeComboBox*
/// @param data QVariant*
int32_t k_timecombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self KTimeComboBox*
///
/// @return enum QComboBox__InsertPolicy
int32_t k_timecombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self KTimeComboBox*
/// @param policy enum QComboBox__InsertPolicy
void k_timecombobox_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self KTimeComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
int32_t k_timecombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self KTimeComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
void k_timecombobox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self KTimeComboBox*
/// @param characters int
void k_timecombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self KTimeComboBox*
/// @param size QSize*
void k_timecombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self KTimeComboBox*
/// @param placeholderText const char*
void k_timecombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// @param self KTimeComboBox*
/// @param editable bool
void k_timecombobox_set_editable(void* self, bool editable);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// @param self KTimeComboBox*
/// @param edit QLineEdit*
void k_timecombobox_set_line_edit(void* self, void* edit);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self KTimeComboBox*
QLineEdit* k_timecombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self KTimeComboBox*
/// @param v QValidator*
void k_timecombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self KTimeComboBox*
const QValidator* k_timecombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self KTimeComboBox*
/// @param c QCompleter*
void k_timecombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self KTimeComboBox*
QCompleter* k_timecombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self KTimeComboBox*
QAbstractItemDelegate* k_timecombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self KTimeComboBox*
/// @param delegate QAbstractItemDelegate*
void k_timecombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self KTimeComboBox*
QAbstractItemModel* k_timecombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self KTimeComboBox*
QModelIndex* k_timecombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self KTimeComboBox*
/// @param index QModelIndex*
void k_timecombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self KTimeComboBox*
/// @param visibleColumn int
void k_timecombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KTimeComboBox*
QVariant* k_timecombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
/// @param index int
const char* k_timecombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self KTimeComboBox*
/// @param index int
QIcon* k_timecombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KTimeComboBox*
/// @param index int
QVariant* k_timecombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KTimeComboBox*
/// @param text const char*
void k_timecombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
/// @param text const char*
void k_timecombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self KTimeComboBox*
/// @param texts const char**
void k_timecombobox_add_items(void* self, const char* texts[]);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param text const char*
void k_timecombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
void k_timecombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param texts const char**
void k_timecombobox_insert_items(void* self, int index, const char* texts[]);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param text const char*
void k_timecombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param icon QIcon*
void k_timecombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param value QVariant*
void k_timecombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self KTimeComboBox*
QAbstractItemView* k_timecombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self KTimeComboBox*
/// @param itemView QAbstractItemView*
void k_timecombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self KTimeComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
QVariant* k_timecombobox_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self KTimeComboBox*
void k_timecombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self KTimeComboBox*
void k_timecombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self KTimeComboBox*
/// @param text const char*
void k_timecombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self KTimeComboBox*
/// @param text const char*
void k_timecombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KTimeComboBox*
/// @param param1 const char*
void k_timecombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* param1)
void k_timecombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, int index)
void k_timecombobox_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KTimeComboBox*
/// @param param1 const char*
void k_timecombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* param1)
void k_timecombobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, int index)
void k_timecombobox_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KTimeComboBox*
/// @param param1 const char*
void k_timecombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* param1)
void k_timecombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KTimeComboBox*
/// @param index int
void k_timecombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, int index)
void k_timecombobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KTimeComboBox*
/// @param param1 const char*
void k_timecombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* param1)
void k_timecombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KTimeComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
int32_t k_timecombobox_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KTimeComboBox*
/// @param data QVariant*
/// @param role int
int32_t k_timecombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KTimeComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
int32_t k_timecombobox_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KTimeComboBox*
/// @param role int
QVariant* k_timecombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param role int
QVariant* k_timecombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KTimeComboBox*
/// @param text const char*
/// @param userData QVariant*
void k_timecombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
void k_timecombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
void k_timecombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
void k_timecombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KTimeComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
void k_timecombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTimeComboBox*
uintptr_t k_timecombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTimeComboBox*
void k_timecombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTimeComboBox*
uintptr_t k_timecombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTimeComboBox*
uintptr_t k_timecombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTimeComboBox*
QStyle* k_timecombobox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTimeComboBox*
/// @param style QStyle*
void k_timecombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTimeComboBox*
///
/// @return enum Qt__WindowModality
int32_t k_timecombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTimeComboBox*
/// @param windowModality enum Qt__WindowModality
void k_timecombobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
bool k_timecombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTimeComboBox*
/// @param enabled bool
void k_timecombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTimeComboBox*
/// @param disabled bool
void k_timecombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTimeComboBox*
/// @param windowModified bool
void k_timecombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTimeComboBox*
QRect* k_timecombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTimeComboBox*
const QRect* k_timecombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTimeComboBox*
QRect* k_timecombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTimeComboBox*
QPoint* k_timecombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTimeComboBox*
QRect* k_timecombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTimeComboBox*
QRect* k_timecombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTimeComboBox*
QRegion* k_timecombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTimeComboBox*
/// @param minimumSize QSize*
void k_timecombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTimeComboBox*
/// @param minw int
/// @param minh int
void k_timecombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTimeComboBox*
/// @param maximumSize QSize*
void k_timecombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTimeComboBox*
/// @param maxw int
/// @param maxh int
void k_timecombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTimeComboBox*
/// @param minw int
void k_timecombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTimeComboBox*
/// @param minh int
void k_timecombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTimeComboBox*
/// @param maxw int
void k_timecombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTimeComboBox*
/// @param maxh int
void k_timecombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTimeComboBox*
/// @param sizeIncrement QSize*
void k_timecombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTimeComboBox*
/// @param w int
/// @param h int
void k_timecombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTimeComboBox*
/// @param baseSize QSize*
void k_timecombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTimeComboBox*
/// @param basew int
/// @param baseh int
void k_timecombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTimeComboBox*
/// @param fixedSize QSize*
void k_timecombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTimeComboBox*
/// @param w int
/// @param h int
void k_timecombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTimeComboBox*
/// @param w int
void k_timecombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTimeComboBox*
/// @param h int
void k_timecombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTimeComboBox*
/// @param param1 QPointF*
QPointF* k_timecombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTimeComboBox*
/// @param param1 QPoint*
QPoint* k_timecombobox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTimeComboBox*
/// @param param1 QPointF*
QPointF* k_timecombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTimeComboBox*
/// @param param1 QPoint*
QPoint* k_timecombobox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTimeComboBox*
/// @param param1 QPointF*
QPointF* k_timecombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTimeComboBox*
/// @param param1 QPoint*
QPoint* k_timecombobox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTimeComboBox*
/// @param param1 QPointF*
QPointF* k_timecombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTimeComboBox*
/// @param param1 QPoint*
QPoint* k_timecombobox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_timecombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_timecombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_timecombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_timecombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTimeComboBox*
const QPalette* k_timecombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTimeComboBox*
/// @param palette QPalette*
void k_timecombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTimeComboBox*
/// @param backgroundRole enum QPalette__ColorRole
void k_timecombobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTimeComboBox*
///
/// @return enum QPalette__ColorRole
int32_t k_timecombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTimeComboBox*
/// @param foregroundRole enum QPalette__ColorRole
void k_timecombobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTimeComboBox*
///
/// @return enum QPalette__ColorRole
int32_t k_timecombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTimeComboBox*
const QFont* k_timecombobox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTimeComboBox*
/// @param font QFont*
void k_timecombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTimeComboBox*
QFontMetrics* k_timecombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTimeComboBox*
QFontInfo* k_timecombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTimeComboBox*
QCursor* k_timecombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTimeComboBox*
/// @param cursor QCursor*
void k_timecombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTimeComboBox*
void k_timecombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTimeComboBox*
/// @param enable bool
void k_timecombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTimeComboBox*
bool k_timecombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTimeComboBox*
bool k_timecombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTimeComboBox*
/// @param enable bool
void k_timecombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTimeComboBox*
bool k_timecombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTimeComboBox*
/// @param mask QBitmap*
void k_timecombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTimeComboBox*
/// @param mask QRegion*
void k_timecombobox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTimeComboBox*
QRegion* k_timecombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTimeComboBox*
void k_timecombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param target QPaintDevice*
void k_timecombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
void k_timecombobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTimeComboBox*
QPixmap* k_timecombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTimeComboBox*
QGraphicsEffect* k_timecombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTimeComboBox*
/// @param effect QGraphicsEffect*
void k_timecombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTimeComboBox*
/// @param typeVal enum Qt__GestureType
void k_timecombobox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTimeComboBox*
/// @param typeVal enum Qt__GestureType
void k_timecombobox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTimeComboBox*
/// @param windowTitle const char*
void k_timecombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTimeComboBox*
/// @param styleSheet const char*
void k_timecombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
void k_timecombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTimeComboBox*
QIcon* k_timecombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTimeComboBox*
/// @param windowIconText const char*
void k_timecombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTimeComboBox*
/// @param windowRole const char*
void k_timecombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTimeComboBox*
/// @param filePath const char*
void k_timecombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTimeComboBox*
/// @param level double
void k_timecombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTimeComboBox*
double k_timecombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTimeComboBox*
/// @param toolTip const char*
void k_timecombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTimeComboBox*
/// @param msec int
void k_timecombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTimeComboBox*
/// @param statusTip const char*
void k_timecombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTimeComboBox*
/// @param whatsThis const char*
void k_timecombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTimeComboBox*
/// @param name const char*
void k_timecombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTimeComboBox*
/// @param description const char*
void k_timecombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTimeComboBox*
/// @param direction enum Qt__LayoutDirection
void k_timecombobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTimeComboBox*
///
/// @return enum Qt__LayoutDirection
int32_t k_timecombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTimeComboBox*
void k_timecombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTimeComboBox*
/// @param locale QLocale*
void k_timecombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTimeComboBox*
QLocale* k_timecombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTimeComboBox*
void k_timecombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTimeComboBox*
void k_timecombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTimeComboBox*
void k_timecombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTimeComboBox*
void k_timecombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTimeComboBox*
/// @param reason enum Qt__FocusReason
void k_timecombobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTimeComboBox*
///
/// @return enum Qt__FocusPolicy
int32_t k_timecombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTimeComboBox*
/// @param policy enum Qt__FocusPolicy
void k_timecombobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTimeComboBox*
bool k_timecombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_timecombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTimeComboBox*
/// @param focusProxy QWidget*
void k_timecombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTimeComboBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_timecombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTimeComboBox*
/// @param policy enum Qt__ContextMenuPolicy
void k_timecombobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTimeComboBox*
void k_timecombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTimeComboBox*
/// @param param1 QCursor*
void k_timecombobox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTimeComboBox*
void k_timecombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTimeComboBox*
void k_timecombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTimeComboBox*
void k_timecombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTimeComboBox*
/// @param key QKeySequence*
int32_t k_timecombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTimeComboBox*
/// @param id int
void k_timecombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTimeComboBox*
/// @param id int
void k_timecombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTimeComboBox*
/// @param id int
void k_timecombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_timecombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_timecombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTimeComboBox*
bool k_timecombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTimeComboBox*
/// @param enable bool
void k_timecombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTimeComboBox*
QGraphicsProxyWidget* k_timecombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTimeComboBox*
void k_timecombobox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTimeComboBox*
void k_timecombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTimeComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_timecombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTimeComboBox*
/// @param param1 QRect*
void k_timecombobox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTimeComboBox*
/// @param param1 QRegion*
void k_timecombobox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTimeComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_timecombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTimeComboBox*
/// @param param1 QRect*
void k_timecombobox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTimeComboBox*
/// @param param1 QRegion*
void k_timecombobox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTimeComboBox*
/// @param hidden bool
void k_timecombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTimeComboBox*
void k_timecombobox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTimeComboBox*
void k_timecombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTimeComboBox*
void k_timecombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTimeComboBox*
void k_timecombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTimeComboBox*
void k_timecombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTimeComboBox*
void k_timecombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTimeComboBox*
bool k_timecombobox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTimeComboBox*
void k_timecombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTimeComboBox*
void k_timecombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
void k_timecombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTimeComboBox*
/// @param x int
/// @param y int
void k_timecombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTimeComboBox*
/// @param param1 QPoint*
void k_timecombobox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTimeComboBox*
/// @param w int
/// @param h int
void k_timecombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTimeComboBox*
/// @param param1 QSize*
void k_timecombobox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTimeComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_timecombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTimeComboBox*
/// @param geometry QRect*
void k_timecombobox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
char* k_timecombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTimeComboBox*
/// @param geometry const char*
bool k_timecombobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTimeComboBox*
void k_timecombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTimeComboBox*
/// @param param1 QWidget*
bool k_timecombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTimeComboBox*
///
/// @return flag of enum Qt__WindowState
int32_t k_timecombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTimeComboBox*
/// @param state flag of enum Qt__WindowState
void k_timecombobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTimeComboBox*
/// @param state flag of enum Qt__WindowState
void k_timecombobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTimeComboBox*
QSizePolicy* k_timecombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTimeComboBox*
/// @param sizePolicy QSizePolicy*
void k_timecombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTimeComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_timecombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTimeComboBox*
QRegion* k_timecombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTimeComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_timecombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTimeComboBox*
/// @param margins QMargins*
void k_timecombobox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTimeComboBox*
QMargins* k_timecombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTimeComboBox*
QRect* k_timecombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTimeComboBox*
QLayout* k_timecombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTimeComboBox*
/// @param layout QLayout*
void k_timecombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTimeComboBox*
void k_timecombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTimeComboBox*
/// @param parent QWidget*
void k_timecombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTimeComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_timecombobox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTimeComboBox*
/// @param dx int
/// @param dy int
void k_timecombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTimeComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_timecombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTimeComboBox*
bool k_timecombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTimeComboBox*
/// @param on bool
void k_timecombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTimeComboBox*
/// @param action QAction*
void k_timecombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTimeComboBox*
/// @param actions libqt_list /* of QAction* */
void k_timecombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTimeComboBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_timecombobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTimeComboBox*
/// @param before QAction*
/// @param action QAction*
void k_timecombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTimeComboBox*
/// @param action QAction*
void k_timecombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTimeComboBox*
libqt_list /* of QAction* */ k_timecombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTimeComboBox*
/// @param text const char*
QAction* k_timecombobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
/// @param text const char*
QAction* k_timecombobox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTimeComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_timecombobox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_timecombobox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTimeComboBox*
QWidget* k_timecombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTimeComboBox*
/// @param typeVal flag of enum Qt__WindowType
void k_timecombobox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTimeComboBox*
///
/// @return flag of enum Qt__WindowType
int64_t k_timecombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__WindowType
void k_timecombobox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTimeComboBox*
/// @param typeVal flag of enum Qt__WindowType
void k_timecombobox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTimeComboBox*
///
/// @return enum Qt__WindowType
int64_t k_timecombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_timecombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTimeComboBox*
/// @param x int
/// @param y int
QWidget* k_timecombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTimeComboBox*
/// @param p QPoint*
QWidget* k_timecombobox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTimeComboBox*
/// @param p QPointF*
QWidget* k_timecombobox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__WidgetAttribute
void k_timecombobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__WidgetAttribute
bool k_timecombobox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTimeComboBox*
void k_timecombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTimeComboBox*
/// @param child QWidget*
bool k_timecombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTimeComboBox*
bool k_timecombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTimeComboBox*
/// @param enabled bool
void k_timecombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTimeComboBox*
QBackingStore* k_timecombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTimeComboBox*
QWindow* k_timecombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTimeComboBox*
QScreen* k_timecombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTimeComboBox*
/// @param screen QScreen*
void k_timecombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_timecombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTimeComboBox*
/// @param title const char*
void k_timecombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* title)
void k_timecombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTimeComboBox*
/// @param icon QIcon*
void k_timecombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QIcon* icon)
void k_timecombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTimeComboBox*
/// @param iconText const char*
void k_timecombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* iconText)
void k_timecombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTimeComboBox*
/// @param pos QPoint*
void k_timecombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QPoint* pos)
void k_timecombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTimeComboBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_timecombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTimeComboBox*
/// @param hints flag of enum Qt__InputMethodHint
void k_timecombobox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_timecombobox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_timecombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_timecombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_timecombobox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_timecombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_timecombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTimeComboBox*
/// @param rectangle QRect*
QPixmap* k_timecombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTimeComboBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_timecombobox_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTimeComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_timecombobox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTimeComboBox*
/// @param id int
/// @param enable bool
void k_timecombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTimeComboBox*
/// @param id int
/// @param enable bool
void k_timecombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_timecombobox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_timecombobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_timecombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_timecombobox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char* k_timecombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTimeComboBox*
/// @param name char*
void k_timecombobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTimeComboBox*
bool k_timecombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTimeComboBox*
bool k_timecombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTimeComboBox*
/// @param b bool
bool k_timecombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTimeComboBox*
QThread* k_timecombobox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTimeComboBox*
/// @param thread QThread*
bool k_timecombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTimeComboBox*
/// @param interval int
int32_t k_timecombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTimeComboBox*
/// @param id int
void k_timecombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTimeComboBox*
/// @param id enum Qt__TimerId
void k_timecombobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTimeComboBox*
libqt_list /* of QObject* */ k_timecombobox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTimeComboBox*
/// @param filterObj QObject*
void k_timecombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTimeComboBox*
/// @param obj QObject*
void k_timecombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_timecombobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTimeComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_timecombobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_timecombobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_timecombobox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTimeComboBox*
void k_timecombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTimeComboBox*
void k_timecombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTimeComboBox*
/// @param name const char*
/// @param value QVariant*
bool k_timecombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTimeComboBox*
/// @param name const char*
QVariant* k_timecombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTimeComboBox*
const char** k_timecombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTimeComboBox*
QBindingStorage* k_timecombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTimeComboBox*
const QBindingStorage* k_timecombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTimeComboBox*
void k_timecombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self)
void k_timecombobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTimeComboBox*
QObject* k_timecombobox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTimeComboBox*
/// @param classname const char*
bool k_timecombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTimeComboBox*
void k_timecombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTimeComboBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_timecombobox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTimeComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_timecombobox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_timecombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTimeComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_timecombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTimeComboBox*
/// @param param1 QObject*
void k_timecombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QObject* param1)
void k_timecombobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTimeComboBox*
bool k_timecombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTimeComboBox*
double k_timecombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTimeComboBox*
double k_timecombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_timecombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_timecombobox_encode_metric_f(int32_t metric, double value);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param model QAbstractItemModel*
void k_timecombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param model QAbstractItemModel*
void k_timecombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QAbstractItemModel* model)
void k_timecombobox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_qbase_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QSize* func()
void k_timecombobox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
QSize* k_timecombobox_qbase_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QSize* func()
void k_timecombobox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
bool k_timecombobox_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
bool k_timecombobox_qbase_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func(KTimeComboBox* self, QEvent* event)
void k_timecombobox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_timecombobox_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_timecombobox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QVariant* func(KTimeComboBox* self, enum Qt__InputMethodQuery param1)
void k_timecombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QEvent*
void k_timecombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QEvent*
void k_timecombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QEvent* e)
void k_timecombobox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QPaintEvent*
void k_timecombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QPaintEvent*
void k_timecombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QPaintEvent* e)
void k_timecombobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QShowEvent*
void k_timecombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QShowEvent*
void k_timecombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QShowEvent* e)
void k_timecombobox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QHideEvent*
void k_timecombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QHideEvent*
void k_timecombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QHideEvent* e)
void k_timecombobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QMouseEvent*
void k_timecombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QMouseEvent*
void k_timecombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMouseEvent* e)
void k_timecombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QKeyEvent*
void k_timecombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QKeyEvent*
void k_timecombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QKeyEvent* e)
void k_timecombobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QContextMenuEvent*
void k_timecombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param e QContextMenuEvent*
void k_timecombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QContextMenuEvent* e)
void k_timecombobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 QInputMethodEvent*
void k_timecombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 QInputMethodEvent*
void k_timecombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QInputMethodEvent* param1)
void k_timecombobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param option QStyleOptionComboBox*
void k_timecombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param option QStyleOptionComboBox*
void k_timecombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QStyleOptionComboBox* option)
void k_timecombobox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func()
void k_timecombobox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param visible bool
void k_timecombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param visible bool
void k_timecombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, bool visible)
void k_timecombobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 int
int32_t k_timecombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 int
int32_t k_timecombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func(KTimeComboBox* self, int param1)
void k_timecombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func()
void k_timecombobox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
QPaintEngine* k_timecombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
QPaintEngine* k_timecombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QPaintEngine* func()
void k_timecombobox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMouseEvent* event)
void k_timecombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMouseEvent*
void k_timecombobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMouseEvent* event)
void k_timecombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEnterEvent*
void k_timecombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEnterEvent*
void k_timecombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QEnterEvent* event)
void k_timecombobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
void k_timecombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
void k_timecombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QEvent* event)
void k_timecombobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMoveEvent*
void k_timecombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QMoveEvent*
void k_timecombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMoveEvent* event)
void k_timecombobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QCloseEvent*
void k_timecombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QCloseEvent*
void k_timecombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QCloseEvent* event)
void k_timecombobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QTabletEvent*
void k_timecombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QTabletEvent*
void k_timecombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTabletEvent* event)
void k_timecombobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QActionEvent*
void k_timecombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QActionEvent*
void k_timecombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QActionEvent* event)
void k_timecombobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragEnterEvent*
void k_timecombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragEnterEvent*
void k_timecombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QDragEnterEvent* event)
void k_timecombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragMoveEvent*
void k_timecombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragMoveEvent*
void k_timecombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QDragMoveEvent* event)
void k_timecombobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragLeaveEvent*
void k_timecombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDragLeaveEvent*
void k_timecombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QDragLeaveEvent* event)
void k_timecombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDropEvent*
void k_timecombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QDropEvent*
void k_timecombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QDropEvent* event)
void k_timecombobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_timecombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_timecombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func(KTimeComboBox* self, const char* eventType, void* message, intptr_t* result)
void k_timecombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_timecombobox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_timecombobox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func(KTimeComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_timecombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
void k_timecombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param painter QPainter*
void k_timecombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QPainter* painter)
void k_timecombobox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param offset QPoint*
QPaintDevice* k_timecombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param offset QPoint*
QPaintDevice* k_timecombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QPaintDevice* func(KTimeComboBox* self, QPoint* offset)
void k_timecombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
QPainter* k_timecombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
QPainter* k_timecombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QPainter* func()
void k_timecombobox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param next bool
bool k_timecombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param next bool
bool k_timecombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func(KTimeComboBox* self, bool next)
void k_timecombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QTimerEvent*
void k_timecombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QTimerEvent*
void k_timecombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QTimerEvent* event)
void k_timecombobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QChildEvent*
void k_timecombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QChildEvent*
void k_timecombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QChildEvent* event)
void k_timecombobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
void k_timecombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param event QEvent*
void k_timecombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QEvent* event)
void k_timecombobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
void k_timecombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
void k_timecombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMetaMethod* signal)
void k_timecombobox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
void k_timecombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
void k_timecombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, QMetaMethod* signal)
void k_timecombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func()
void k_timecombobox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func()
void k_timecombobox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
void k_timecombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback void func()
void k_timecombobox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func()
void k_timecombobox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
bool k_timecombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func()
void k_timecombobox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
QObject* k_timecombobox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
QObject* k_timecombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback QObject* func()
void k_timecombobox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
int32_t k_timecombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func()
void k_timecombobox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal const char*
int32_t k_timecombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal const char*
int32_t k_timecombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback int32_t func(KTimeComboBox* self, const char* signal)
void k_timecombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
bool k_timecombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param signal QMetaMethod*
bool k_timecombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback bool func(KTimeComboBox* self, QMetaMethod* signal)
void k_timecombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTimeComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_timecombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_timecombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTimeComboBox*
/// @param callback double func(KTimeComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_timecombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTimeComboBox*
/// @param callback void func(KTimeComboBox* self, const char* objectName)
void k_timecombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/ktimecombobox.html#dtor.KTimeComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self KTimeComboBox*
void k_timecombobox_delete(void* self);

/// https://api-staging.kde.org/ktimecombobox.html#types

typedef enum {
    KTIMECOMBOBOX_OPTION_EDITTIME = 1,
    KTIMECOMBOBOX_OPTION_SELECTTIME = 2,
    KTIMECOMBOBOX_OPTION_FORCETIME = 4,
    KTIMECOMBOBOX_OPTION_WARNONINVALID = 8
} KTimeComboBox__Option;

#endif
