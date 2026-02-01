#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEITEMDELEGATE_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html)

/// k_fileitemdelegate_new constructs a new KFileItemDelegate object.
///
KFileItemDelegate* k_fileitemdelegate_new();

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html)

/// k_fileitemdelegate_new2 constructs a new KFileItemDelegate object.
///
/// @param parent QObject*
///
KFileItemDelegate* k_fileitemdelegate_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFileItemDelegate*
///
const QMetaObject* k_fileitemdelegate_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback const QMetaObject* func()
///
void k_fileitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
///
const QMetaObject* k_fileitemdelegate_qbase_meta_object(void* self);

/// @param self KFileItemDelegate*
/// @param param1 const char*
///
void* k_fileitemdelegate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback void* func(KFileItemDelegate* self, const char* param1)
///
void k_fileitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param param1 const char*
///
void* k_fileitemdelegate_qbase_metacast(void* self, const char* param1);

/// @param self KFileItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback int32_t func(KFileItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_fileitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_fileitemdelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#sizeHint)
///
/// @param self KFileItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_fileitemdelegate_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback QSize* func(KFileItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_fileitemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#paint)
///
/// @param self KFileItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_fileitemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_fileitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#createEditor)
///
/// @param self KFileItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_fileitemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback QWidget* func(KFileItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_fileitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#editorEvent)
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_fileitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback bool func(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_fileitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setEditorData)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_fileitemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_fileitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_fileitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setModelData)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_fileitemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void k_fileitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_fileitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#updateEditorGeometry)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_fileitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_fileitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShowInformation)
///
/// @param self KFileItemDelegate*
/// @param list libqt_list of enum KFileItemDelegate__Information
///
void k_fileitemdelegate_set_show_information(void* self, libqt_list /* of enum KFileItemDelegate__Information */ list);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShowInformation)
///
/// @param self KFileItemDelegate*
/// @param information enum KFileItemDelegate__Information
///
void k_fileitemdelegate_set_show_information2(void* self, int32_t information);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#showInformation)
///
/// @param self KFileItemDelegate*
///
/// @return libqt_list of enum KFileItemDelegate__Information
///
libqt_list k_fileitemdelegate_show_information(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShadowColor)
///
/// @param self KFileItemDelegate*
/// @param color QColor*
///
void k_fileitemdelegate_set_shadow_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#shadowColor)
///
/// @param self KFileItemDelegate*
///
QColor* k_fileitemdelegate_shadow_color(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShadowOffset)
///
/// @param self KFileItemDelegate*
/// @param offset QPointF*
///
void k_fileitemdelegate_set_shadow_offset(void* self, void* offset);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#shadowOffset)
///
/// @param self KFileItemDelegate*
///
QPointF* k_fileitemdelegate_shadow_offset(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShadowBlur)
///
/// @param self KFileItemDelegate*
/// @param radius double
///
void k_fileitemdelegate_set_shadow_blur(void* self, double radius);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#shadowBlur)
///
/// @param self KFileItemDelegate*
///
double k_fileitemdelegate_shadow_blur(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setMaximumSize)
///
/// @param self KFileItemDelegate*
/// @param size QSize*
///
void k_fileitemdelegate_set_maximum_size(void* self, void* size);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#maximumSize)
///
/// @param self KFileItemDelegate*
///
QSize* k_fileitemdelegate_maximum_size(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setShowToolTipWhenElided)
///
/// @param self KFileItemDelegate*
/// @param showToolTip bool
///
void k_fileitemdelegate_set_show_tool_tip_when_elided(void* self, bool showToolTip);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#showToolTipWhenElided)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_show_tool_tip_when_elided(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#iconRect)
///
/// @param self KFileItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QRect* k_fileitemdelegate_icon_rect(void* self, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setWrapMode)
///
/// @param self KFileItemDelegate*
/// @param wrapMode enum QTextOption__WrapMode
///
void k_fileitemdelegate_set_wrap_mode(void* self, int32_t wrapMode);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#wrapMode)
///
/// @param self KFileItemDelegate*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_fileitemdelegate_wrap_mode(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setJobTransfersVisible)
///
/// @param self KFileItemDelegate*
/// @param jobTransfersVisible bool
///
void k_fileitemdelegate_set_job_transfers_visible(void* self, bool jobTransfersVisible);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#jobTransfersVisible)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_job_transfers_visible(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#eventFilter)
///
/// @param self KFileItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool k_fileitemdelegate_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback bool func(KFileItemDelegate* self, QObject* object, QEvent* event)
///
void k_fileitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool k_fileitemdelegate_qbase_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#selectionEmblemRect)
///
/// @param self KFileItemDelegate*
///
QRect* k_fileitemdelegate_selection_emblem_rect(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#setSelectionEmblemRect)
///
/// @param self KFileItemDelegate*
/// @param rect QRect*
/// @param iconSize int
///
void k_fileitemdelegate_set_selection_emblem_rect(void* self, void* rect, int iconSize);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#fileItem)
///
/// @param self KFileItemDelegate*
/// @param index QModelIndex*
///
KFileItem* k_fileitemdelegate_file_item(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#helpEvent)
///
/// @param self KFileItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_fileitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFileItemDelegate*
/// @param callback bool func(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_fileitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#helpEvent)
///
/// Base class method implementation
///
/// @param self KFileItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_fileitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#shape)
///
/// @param self KFileItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QRegion* k_fileitemdelegate_shape(void* self, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_fileitemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_fileitemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
///
void k_fileitemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor)
///
void k_fileitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
///
void k_fileitemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor)
///
void k_fileitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KFileItemDelegate*
/// @param param1 QModelIndex*
///
void k_fileitemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QModelIndex* param1)
///
void k_fileitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_fileitemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void k_fileitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItemDelegate*
///
const char* k_fileitemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFileItemDelegate*
/// @param name char*
///
void k_fileitemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFileItemDelegate*
/// @param b bool
///
bool k_fileitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFileItemDelegate*
///
QThread* k_fileitemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileItemDelegate*
/// @param thread QThread*
///
bool k_fileitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemDelegate*
/// @param interval int
///
int32_t k_fileitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t k_fileitemdelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileItemDelegate*
/// @param id int
///
void k_fileitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileItemDelegate*
/// @param id enum Qt__TimerId
///
void k_fileitemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFileItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_fileitemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFileItemDelegate*
/// @param parent QObject*
///
void k_fileitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFileItemDelegate*
/// @param filterObj QObject*
///
void k_fileitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFileItemDelegate*
/// @param obj QObject*
///
void k_fileitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_fileitemdelegate_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_fileitemdelegate_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_fileitemdelegate_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileitemdelegate_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_fileitemdelegate_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
///
bool k_fileitemdelegate_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
/// @param receiver QObject*
///
bool k_fileitemdelegate_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_fileitemdelegate_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFileItemDelegate*
///
void k_fileitemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFileItemDelegate*
///
void k_fileitemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFileItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_fileitemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFileItemDelegate*
/// @param name const char*
///
QVariant* k_fileitemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileItemDelegate*
///
const char** k_fileitemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileItemDelegate*
///
QBindingStorage* k_fileitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileItemDelegate*
///
const QBindingStorage* k_fileitemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemDelegate*
///
void k_fileitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self)
///
void k_fileitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFileItemDelegate*
///
QObject* k_fileitemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFileItemDelegate*
/// @param classname const char*
///
bool k_fileitemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFileItemDelegate*
///
void k_fileitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_fileitemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_fileitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_fileitemdelegate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_fileitemdelegate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_fileitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
/// @param signal const char*
///
bool k_fileitemdelegate_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_fileitemdelegate_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileitemdelegate_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fileitemdelegate_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemDelegate*
/// @param param1 QObject*
///
void k_fileitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QObject* param1)
///
void k_fileitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_fileitemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_fileitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_fileitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_fileitemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_fileitemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback int* func()
///
void k_fileitemdelegate_on_painting_roles(void* self, int* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
///
bool k_fileitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
///
bool k_fileitemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback bool func(KFileItemDelegate* self, QEvent* event)
///
void k_fileitemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QTimerEvent*
///
void k_fileitemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QTimerEvent*
///
void k_fileitemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QTimerEvent* event)
///
void k_fileitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QChildEvent*
///
void k_fileitemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QChildEvent*
///
void k_fileitemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QChildEvent* event)
///
void k_fileitemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
///
void k_fileitemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param event QEvent*
///
void k_fileitemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QEvent* event)
///
void k_fileitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
void k_fileitemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
void k_fileitemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QMetaMethod* signal)
///
void k_fileitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
void k_fileitemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
void k_fileitemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, QMetaMethod* signal)
///
void k_fileitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
///
QObject* k_fileitemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
///
QObject* k_fileitemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback QObject* func()
///
void k_fileitemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
///
int32_t k_fileitemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
///
int32_t k_fileitemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback int32_t func()
///
void k_fileitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal const char*
///
int32_t k_fileitemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal const char*
///
int32_t k_fileitemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback int32_t func(KFileItemDelegate* self, const char* signal)
///
void k_fileitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
bool k_fileitemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param signal QMetaMethod*
///
bool k_fileitemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemDelegate*
/// @param callback bool func(KFileItemDelegate* self, QMetaMethod* signal)
///
void k_fileitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFileItemDelegate*
/// @param callback void func(KFileItemDelegate* self, const char* objectName)
///
void k_fileitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#dtor.KFileItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItemDelegate*
///
void k_fileitemdelegate_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemdelegate.html#public-types)

typedef enum {
    KFILEITEMDELEGATE_INFORMATION_NOINFORMATION = 0,
    KFILEITEMDELEGATE_INFORMATION_SIZE = 1,
    KFILEITEMDELEGATE_INFORMATION_PERMISSIONS = 2,
    KFILEITEMDELEGATE_INFORMATION_OCTALPERMISSIONS = 3,
    KFILEITEMDELEGATE_INFORMATION_OWNER = 4,
    KFILEITEMDELEGATE_INFORMATION_OWNERANDGROUP = 5,
    KFILEITEMDELEGATE_INFORMATION_CREATIONTIME = 6,
    KFILEITEMDELEGATE_INFORMATION_MODIFICATIONTIME = 7,
    KFILEITEMDELEGATE_INFORMATION_ACCESSTIME = 8,
    KFILEITEMDELEGATE_INFORMATION_MIMETYPE = 9,
    KFILEITEMDELEGATE_INFORMATION_FRIENDLYMIMETYPE = 10,
    KFILEITEMDELEGATE_INFORMATION_LINKDEST = 11,
    KFILEITEMDELEGATE_INFORMATION_LOCALPATHORURL = 12,
    KFILEITEMDELEGATE_INFORMATION_COMMENT = 13
} KFileItemDelegate__Information;

#endif
