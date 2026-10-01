#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBABSTRACTANNOTATIONITEMDELEGATE_H
#define EXTRAS_KTEXTEDITOR_LIBABSTRACTANNOTATIONITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html)

/// k_texteditor__styleoptionannotationitem_new constructs a new KTextEditor::StyleOptionAnnotationItem object.
///
KTextEditor__StyleOptionAnnotationItem* k_texteditor__styleoptionannotationitem_new();

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html)

/// k_texteditor__styleoptionannotationitem_new2 constructs a new KTextEditor::StyleOptionAnnotationItem object.
///
/// @param other KTextEditor__StyleOptionAnnotationItem*
///
KTextEditor__StyleOptionAnnotationItem* k_texteditor__styleoptionannotationitem_new2(const void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
int32_t k_texteditor__styleoptionannotationitem_wrapped_line(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param wrappedLine int
///
void k_texteditor__styleoptionannotationitem_set_wrapped_line(void* self, int wrappedLine);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
int32_t k_texteditor__styleoptionannotationitem_wrapped_line_count(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param wrappedLineCount int
///
void k_texteditor__styleoptionannotationitem_set_wrapped_line_count(void* self, int wrappedLineCount);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
int32_t k_texteditor__styleoptionannotationitem_visible_wrapped_line_in_group(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param visibleWrappedLineInGroup int
///
void k_texteditor__styleoptionannotationitem_set_visible_wrapped_line_in_group(void* self, int visibleWrappedLineInGroup);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
KTextEditor__View* k_texteditor__styleoptionannotationitem_view(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param view KTextEditor__View*
///
void k_texteditor__styleoptionannotationitem_set_view(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QSize* k_texteditor__styleoptionannotationitem_decoration_size(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param decorationSize QSize*
///
void k_texteditor__styleoptionannotationitem_set_decoration_size(void* self, void* decorationSize);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QFontMetricsF* k_texteditor__styleoptionannotationitem_content_font_metrics(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param contentFontMetrics QFontMetricsF*
///
void k_texteditor__styleoptionannotationitem_set_content_font_metrics(void* self, void* contentFontMetrics);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
/// @return flag of enum KTextEditor__StyleOptionAnnotationItem__AnnotationItemGroupPosition
///
int32_t k_texteditor__styleoptionannotationitem_annotation_item_grouping_position(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param annotationItemGroupingPosition flag of enum KTextEditor__StyleOptionAnnotationItem__AnnotationItemGroupPosition
///
void k_texteditor__styleoptionannotationitem_set_annotation_item_grouping_position(void* self, int32_t annotationItemGroupingPosition);

/// [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#operator-eq)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param param1 KTextEditor__StyleOptionAnnotationItem*
///
void k_texteditor__styleoptionannotationitem_operator_assign(void* self, const void* param1);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
int32_t k_texteditor__styleoptionannotationitem_version(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param version int
///
void k_texteditor__styleoptionannotationitem_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
int32_t k_texteditor__styleoptionannotationitem_type(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param type int
///
void k_texteditor__styleoptionannotationitem_set_type(void* self, int type);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
/// @return flag of enum QStyle__StateFlag
///
int32_t k_texteditor__styleoptionannotationitem_state(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param state flag of enum QStyle__StateFlag
///
void k_texteditor__styleoptionannotationitem_set_state(void* self, int32_t state);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_texteditor__styleoptionannotationitem_direction(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param direction enum Qt__LayoutDirection
///
void k_texteditor__styleoptionannotationitem_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QRect* k_texteditor__styleoptionannotationitem_rect(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param rect QRect*
///
void k_texteditor__styleoptionannotationitem_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QFontMetrics* k_texteditor__styleoptionannotationitem_font_metrics(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param fontMetrics QFontMetrics*
///
void k_texteditor__styleoptionannotationitem_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QPalette* k_texteditor__styleoptionannotationitem_palette(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param palette QPalette*
///
void k_texteditor__styleoptionannotationitem_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self const KTextEditor__StyleOptionAnnotationItem*
///
QObject* k_texteditor__styleoptionannotationitem_style_object(const void* self);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param styleObject QObject*
///
void k_texteditor__styleoptionannotationitem_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
/// @param w QWidget*
///
void k_texteditor__styleoptionannotationitem_init_from(void* self, const void* w);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__StyleOptionAnnotationItem*
///
void k_texteditor__styleoptionannotationitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
const QMetaObject* k_texteditor__abstractannotationitemdelegate_meta_object(const void* self);

/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param param1 const char*
///
void* k_texteditor__abstractannotationitemdelegate_metacast(void* self, const char* param1);

/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__abstractannotationitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__abstractannotationitemdelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param model KTextEditor__AnnotationModel*
/// @param line int
///
void k_texteditor__abstractannotationitemdelegate_size_hint_changed(void* self, void* model, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param callback void func(KTextEditor__AbstractAnnotationItemDelegate* self, KTextEditor__AnnotationModel* model, int line)
///
void k_texteditor__abstractannotationitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__abstractannotationitemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__abstractannotationitemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param event QEvent*
///
bool k_texteditor__abstractannotationitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__abstractannotationitemdelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
const char* k_texteditor__abstractannotationitemdelegate_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param name const char*
///
void k_texteditor__abstractannotationitemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
bool k_texteditor__abstractannotationitemdelegate_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
bool k_texteditor__abstractannotationitemdelegate_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
bool k_texteditor__abstractannotationitemdelegate_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
bool k_texteditor__abstractannotationitemdelegate_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param b bool
///
bool k_texteditor__abstractannotationitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
QThread* k_texteditor__abstractannotationitemdelegate_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param thread QThread*
///
bool k_texteditor__abstractannotationitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param interval int
///
int32_t k_texteditor__abstractannotationitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__abstractannotationitemdelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param id int
///
void k_texteditor__abstractannotationitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param id enum Qt__TimerId
///
void k_texteditor__abstractannotationitemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__abstractannotationitemdelegate_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param parent QObject*
///
void k_texteditor__abstractannotationitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param filterObj QObject*
///
void k_texteditor__abstractannotationitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param obj QObject*
///
void k_texteditor__abstractannotationitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param receiver QObject*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__abstractannotationitemdelegate_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__abstractannotationitemdelegate_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__abstractannotationitemdelegate_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param name const char*
///
QVariant* k_texteditor__abstractannotationitemdelegate_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
const char** k_texteditor__abstractannotationitemdelegate_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
///
QBindingStorage* k_texteditor__abstractannotationitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
const QBindingStorage* k_texteditor__abstractannotationitemdelegate_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__abstractannotationitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param callback void func(KTextEditor__AbstractAnnotationItemDelegate* self)
///
void k_texteditor__abstractannotationitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
///
QObject* k_texteditor__abstractannotationitemdelegate_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param classname const char*
///
bool k_texteditor__abstractannotationitemdelegate_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__abstractannotationitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__abstractannotationitemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__abstractannotationitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param signal const char*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTextEditor__AbstractAnnotationItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__abstractannotationitemdelegate_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param param1 QObject*
///
void k_texteditor__abstractannotationitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param callback void func(KTextEditor__AbstractAnnotationItemDelegate* self, QObject* param1)
///
void k_texteditor__abstractannotationitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
/// @param callback void func(KTextEditor__AbstractAnnotationItemDelegate* self, const char* objectName)
///
void k_texteditor__abstractannotationitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__abstractannotationitemdelegate_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractannotationitemdelegate.html#public-types)

typedef enum {
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_STYLEOPTIONTYPE_TYPE = 0
} KTextEditor__StyleOptionAnnotationItem__StyleOptionType;

/// [Upstream resources](https://api.kde.org/abstractannotationitemdelegate.html#public-types)

typedef enum {
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_STYLEOPTIONVERSION_VERSION = 1
} KTextEditor__StyleOptionAnnotationItem__StyleOptionVersion;

/// [Upstream resources](https://api.kde.org/abstractannotationitemdelegate.html#public-types)

typedef enum {
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_ANNOTATIONITEMGROUPPOSITION_INVALIDGROUPPOSITION = 0,
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_ANNOTATIONITEMGROUPPOSITION_INGROUP = 1,
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_ANNOTATIONITEMGROUPPOSITION_GROUPBEGIN = 2,
    KTEXTEDITOR_STYLEOPTIONANNOTATIONITEM_ANNOTATIONITEMGROUPPOSITION_GROUPEND = 4
} KTextEditor__StyleOptionAnnotationItem__AnnotationItemGroupPosition;

#endif
