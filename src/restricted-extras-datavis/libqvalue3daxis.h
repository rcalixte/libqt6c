#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html)

/// q_value3daxis_new constructs a new QValue3DAxis object.
///
QValue3DAxis* q_value3daxis_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html)

/// q_value3daxis_new2 constructs a new QValue3DAxis object.
///
/// @param parent QObject*
///
QValue3DAxis* q_value3daxis_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QValue3DAxis*
///
const QMetaObject* q_value3daxis_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QValue3DAxis*
/// @param callback const QMetaObject* func(const QValue3DAxis* self)
///
void q_value3daxis_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QValue3DAxis*
///
const QMetaObject* q_value3daxis_super_meta_object(const void* self);

/// @param self QValue3DAxis*
/// @param param1 const char*
///
void* q_value3daxis_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QValue3DAxis*
/// @param callback void* func(QValue3DAxis* self, const char* param1)
///
void q_value3daxis_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QValue3DAxis*
/// @param param1 const char*
///
void* q_value3daxis_super_metacast(void* self, const char* param1);

/// @param self QValue3DAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_value3daxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QValue3DAxis*
/// @param callback int32_t func(QValue3DAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_value3daxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QValue3DAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_value3daxis_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_value3daxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setSegmentCount)
///
/// @param self QValue3DAxis*
/// @param count int
///
void q_value3daxis_set_segment_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCount)
///
/// @param self const QValue3DAxis*
///
int32_t q_value3daxis_segment_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setSubSegmentCount)
///
/// @param self QValue3DAxis*
/// @param count int
///
void q_value3daxis_set_sub_segment_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCount)
///
/// @param self const QValue3DAxis*
///
int32_t q_value3daxis_sub_segment_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setLabelFormat)
///
/// @param self QValue3DAxis*
/// @param format const char*
///
void q_value3daxis_set_label_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QValue3DAxis*
///
const char* q_value3daxis_label_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setFormatter)
///
/// @param self QValue3DAxis*
/// @param formatter QValue3DAxisFormatter*
///
void q_value3daxis_set_formatter(void* self, void* formatter);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatter)
///
/// @param self const QValue3DAxis*
///
QValue3DAxisFormatter* q_value3daxis_formatter(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setReversed)
///
/// @param self QValue3DAxis*
/// @param enable bool
///
void q_value3daxis_set_reversed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversed)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_reversed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCountChanged)
///
/// @param self QValue3DAxis*
/// @param count int
///
void q_value3daxis_segment_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCountChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, int count)
///
void q_value3daxis_on_segment_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCountChanged)
///
/// @param self QValue3DAxis*
/// @param count int
///
void q_value3daxis_sub_segment_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCountChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, int count)
///
void q_value3daxis_on_sub_segment_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormatChanged)
///
/// @param self QValue3DAxis*
/// @param format const char*
///
void q_value3daxis_label_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormatChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, const char* format)
///
void q_value3daxis_on_label_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatterChanged)
///
/// @param self QValue3DAxis*
/// @param formatter QValue3DAxisFormatter*
///
void q_value3daxis_formatter_changed(void* self, void* formatter);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatterChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QValue3DAxisFormatter* formatter)
///
void q_value3daxis_on_formatter_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversedChanged)
///
/// @param self QValue3DAxis*
/// @param enable bool
///
void q_value3daxis_reversed_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversedChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, bool enable)
///
void q_value3daxis_on_reversed_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_value3daxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_value3daxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitle)
///
/// @param self QValue3DAxis*
/// @param title const char*
///
void q_value3daxis_set_title(void* self, const char* title);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QValue3DAxis*
///
const char* q_value3daxis_title(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setLabels)
///
/// @param self QValue3DAxis*
/// @param labels const char**
///
void q_value3daxis_set_labels(void* self, const char* labels[static 1]);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QValue3DAxis*
///
const char** q_value3daxis_labels(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientation)
///
/// @param self const QValue3DAxis*
///
/// @return enum QAbstract3DAxis__AxisOrientation
///
int32_t q_value3daxis_orientation(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#type)
///
/// @param self const QValue3DAxis*
///
/// @return enum QAbstract3DAxis__AxisType
///
int32_t q_value3daxis_type(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setMin)
///
/// @param self QValue3DAxis*
/// @param min float
///
void q_value3daxis_set_min(void* self, float min);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#min)
///
/// @param self const QValue3DAxis*
///
float q_value3daxis_min(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setMax)
///
/// @param self QValue3DAxis*
/// @param max float
///
void q_value3daxis_set_max(void* self, float max);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#max)
///
/// @param self const QValue3DAxis*
///
float q_value3daxis_max(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setAutoAdjustRange)
///
/// @param self QValue3DAxis*
/// @param autoAdjust bool
///
void q_value3daxis_set_auto_adjust_range(void* self, bool autoAdjust);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isAutoAdjustRange)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_auto_adjust_range(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setRange)
///
/// @param self QValue3DAxis*
/// @param min float
/// @param max float
///
void q_value3daxis_set_range(void* self, float min, float max);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setLabelAutoRotation)
///
/// @param self QValue3DAxis*
/// @param angle float
///
void q_value3daxis_set_label_auto_rotation(void* self, float angle);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotation)
///
/// @param self const QValue3DAxis*
///
float q_value3daxis_label_auto_rotation(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitleVisible)
///
/// @param self QValue3DAxis*
/// @param visible bool
///
void q_value3daxis_set_title_visible(void* self, bool visible);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isTitleVisible)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_title_visible(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitleFixed)
///
/// @param self QValue3DAxis*
/// @param fixed bool
///
void q_value3daxis_set_title_fixed(void* self, bool fixed);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isTitleFixed)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_title_fixed(const void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleChanged)
///
/// @param self QValue3DAxis*
/// @param newTitle const char*
///
void q_value3daxis_title_changed(void* self, const char* newTitle);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, const char* newTitle)
///
void q_value3daxis_on_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelsChanged)
///
/// @param self QValue3DAxis*
///
void q_value3daxis_labels_changed(void* self);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelsChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self)
///
void q_value3daxis_on_labels_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientationChanged)
///
/// @param self QValue3DAxis*
/// @param orientation enum QAbstract3DAxis__AxisOrientation
///
void q_value3daxis_orientation_changed(void* self, int32_t orientation);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientationChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, enum QAbstract3DAxis__AxisOrientation orientation)
///
void q_value3daxis_on_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#minChanged)
///
/// @param self QValue3DAxis*
/// @param value float
///
void q_value3daxis_min_changed(void* self, float value);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#minChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, float value)
///
void q_value3daxis_on_min_changed(void* self, void (*callback)(void*, float));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#maxChanged)
///
/// @param self QValue3DAxis*
/// @param value float
///
void q_value3daxis_max_changed(void* self, float value);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#maxChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, float value)
///
void q_value3daxis_on_max_changed(void* self, void (*callback)(void*, float));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#rangeChanged)
///
/// @param self QValue3DAxis*
/// @param min float
/// @param max float
///
void q_value3daxis_range_changed(void* self, float min, float max);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#rangeChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, float min, float max)
///
void q_value3daxis_on_range_changed(void* self, void (*callback)(void*, float, float));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#autoAdjustRangeChanged)
///
/// @param self QValue3DAxis*
/// @param autoAdjust bool
///
void q_value3daxis_auto_adjust_range_changed(void* self, bool autoAdjust);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#autoAdjustRangeChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, bool autoAdjust)
///
void q_value3daxis_on_auto_adjust_range_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotationChanged)
///
/// @param self QValue3DAxis*
/// @param angle float
///
void q_value3daxis_label_auto_rotation_changed(void* self, float angle);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotationChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, float angle)
///
void q_value3daxis_on_label_auto_rotation_changed(void* self, void (*callback)(void*, float));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleVisibilityChanged)
///
/// @param self QValue3DAxis*
/// @param visible bool
///
void q_value3daxis_title_visibility_changed(void* self, bool visible);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleVisibilityChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, bool visible)
///
void q_value3daxis_on_title_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleFixedChanged)
///
/// @param self QValue3DAxis*
/// @param fixed bool
///
void q_value3daxis_title_fixed_changed(void* self, bool fixed);

/// Inherited from QAbstract3DAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleFixedChanged)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, bool fixed)
///
void q_value3daxis_on_title_fixed_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QValue3DAxis*
///
const char* q_value3daxis_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QValue3DAxis*
/// @param name const char*
///
void q_value3daxis_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QValue3DAxis*
/// @param b bool
///
bool q_value3daxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QValue3DAxis*
///
QThread* q_value3daxis_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValue3DAxis*
/// @param thread QThread*
///
bool q_value3daxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValue3DAxis*
/// @param interval int
///
int32_t q_value3daxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValue3DAxis*
/// @param time int64_t of nanoseconds
///
int32_t q_value3daxis_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValue3DAxis*
/// @param id int
///
void q_value3daxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValue3DAxis*
/// @param id enum Qt__TimerId
///
void q_value3daxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QValue3DAxis*
///
/// @return libqt_list of QObject*
///
libqt_list q_value3daxis_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QValue3DAxis*
/// @param parent QObject*
///
void q_value3daxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QValue3DAxis*
/// @param filterObj QObject*
///
void q_value3daxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QValue3DAxis*
/// @param obj QObject*
///
void q_value3daxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_value3daxis_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_value3daxis_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QValue3DAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_value3daxis_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_value3daxis_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_value3daxis_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
///
bool q_value3daxis_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
/// @param receiver QObject*
///
bool q_value3daxis_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_value3daxis_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QValue3DAxis*
///
void q_value3daxis_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QValue3DAxis*
///
void q_value3daxis_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QValue3DAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_value3daxis_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QValue3DAxis*
/// @param name const char*
///
QVariant* q_value3daxis_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QValue3DAxis*
///
const char** q_value3daxis_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValue3DAxis*
///
QBindingStorage* q_value3daxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QValue3DAxis*
///
const QBindingStorage* q_value3daxis_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValue3DAxis*
///
void q_value3daxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self)
///
void q_value3daxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QValue3DAxis*
///
QObject* q_value3daxis_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QValue3DAxis*
/// @param classname const char*
///
bool q_value3daxis_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QValue3DAxis*
///
void q_value3daxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValue3DAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_value3daxis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValue3DAxis*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_value3daxis_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_value3daxis_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_value3daxis_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QValue3DAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_value3daxis_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
/// @param signal const char*
///
bool q_value3daxis_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_value3daxis_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_value3daxis_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValue3DAxis*
/// @param receiver QObject*
/// @param member const char*
///
bool q_value3daxis_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValue3DAxis*
/// @param param1 QObject*
///
void q_value3daxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QObject* param1)
///
void q_value3daxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QEvent*
///
bool q_value3daxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QEvent*
///
bool q_value3daxis_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback bool func(QValue3DAxis* self, QEvent* event)
///
void q_value3daxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_value3daxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_value3daxis_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback bool func(QValue3DAxis* self, QObject* watched, QEvent* event)
///
void q_value3daxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QTimerEvent*
///
void q_value3daxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QTimerEvent*
///
void q_value3daxis_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QTimerEvent* event)
///
void q_value3daxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QChildEvent*
///
void q_value3daxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QChildEvent*
///
void q_value3daxis_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QChildEvent* event)
///
void q_value3daxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QEvent*
///
void q_value3daxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param event QEvent*
///
void q_value3daxis_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QEvent* event)
///
void q_value3daxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param signal QMetaMethod*
///
void q_value3daxis_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param signal QMetaMethod*
///
void q_value3daxis_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QMetaMethod* signal)
///
void q_value3daxis_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValue3DAxis*
/// @param signal QMetaMethod*
///
void q_value3daxis_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param signal QMetaMethod*
///
void q_value3daxis_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, QMetaMethod* signal)
///
void q_value3daxis_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValue3DAxis*
///
QObject* q_value3daxis_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValue3DAxis*
///
QObject* q_value3daxis_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback QObject* func(QValue3DAxis* self)
///
void q_value3daxis_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValue3DAxis*
///
int32_t q_value3daxis_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValue3DAxis*
///
int32_t q_value3daxis_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback int32_t func(QValue3DAxis* self)
///
void q_value3daxis_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValue3DAxis*
/// @param signal const char*
///
int32_t q_value3daxis_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValue3DAxis*
/// @param signal const char*
///
int32_t q_value3daxis_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback int32_t func(QValue3DAxis* self, const char* signal)
///
void q_value3daxis_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValue3DAxis*
/// @param signal QMetaMethod*
///
bool q_value3daxis_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValue3DAxis*
/// @param signal QMetaMethod*
///
bool q_value3daxis_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValue3DAxis*
/// @param callback bool func(QValue3DAxis* self, QMetaMethod* signal)
///
void q_value3daxis_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QValue3DAxis*
/// @param callback void func(QValue3DAxis* self, const char* objectName)
///
void q_value3daxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#dtor.QValue3DAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QValue3DAxis*
///
void q_value3daxis_delete(void* self);

#endif
