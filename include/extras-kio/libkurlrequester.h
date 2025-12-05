#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKURLREQUESTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKURLREQUESTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurlrequester.html)

/// k_urlrequester_new constructs a new KUrlRequester object.
///
/// @param parent QWidget*
///
KUrlRequester* k_urlrequester_new(void* parent);

/// [Upstream resources](https://api.kde.org/kurlrequester.html)

/// k_urlrequester_new2 constructs a new KUrlRequester object.
///
KUrlRequester* k_urlrequester_new2();

/// [Upstream resources](https://api.kde.org/kurlrequester.html)

/// k_urlrequester_new3 constructs a new KUrlRequester object.
///
/// @param url QUrl*
///
KUrlRequester* k_urlrequester_new3(void* url);

/// [Upstream resources](https://api.kde.org/kurlrequester.html)

/// k_urlrequester_new4 constructs a new KUrlRequester object.
///
/// @param editWidget QWidget*
/// @param parent QWidget*
///
KUrlRequester* k_urlrequester_new4(void* editWidget, void* parent);

/// [Upstream resources](https://api.kde.org/kurlrequester.html)

/// k_urlrequester_new5 constructs a new KUrlRequester object.
///
/// @param url QUrl*
/// @param parent QWidget*
///
KUrlRequester* k_urlrequester_new5(void* url, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUrlRequester*
///
const QMetaObject* k_urlrequester_meta_object(void* self);

/// @param self KUrlRequester*
/// @param param1 const char*
///
void* k_urlrequester_metacast(void* self, const char* param1);

/// @param self KUrlRequester*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlrequester_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlRequester*
/// @param callback int32_t func(KUrlRequester* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_urlrequester_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlRequester*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlrequester_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_urlrequester_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#url)
///
/// @param self KUrlRequester*
///
QUrl* k_urlrequester_url(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#startDir)
///
/// @param self KUrlRequester*
///
QUrl* k_urlrequester_start_dir(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_text(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setMode)
///
/// @param self KUrlRequester*
/// @param mode flag of enum KFile__Mode
///
void k_urlrequester_set_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#mode)
///
/// @param self KUrlRequester*
///
/// @return flag of enum KFile__Mode
///
int32_t k_urlrequester_mode(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setAcceptMode)
///
/// @param self KUrlRequester*
/// @param m enum QFileDialog__AcceptMode
///
void k_urlrequester_set_accept_mode(void* self, int32_t m);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#acceptMode)
///
/// @param self KUrlRequester*
///
/// @return enum QFileDialog__AcceptMode
///
int32_t k_urlrequester_accept_mode(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setNameFilters)
///
/// @param self KUrlRequester*
/// @param filters const char**
///
void k_urlrequester_set_name_filters(void* self, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setNameFilter)
///
/// @param self KUrlRequester*
/// @param filter const char*
///
void k_urlrequester_set_name_filter(void* self, const char* filter);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#nameFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char** k_urlrequester_name_filters(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setMimeTypeFilters)
///
/// @param self KUrlRequester*
/// @param mimeTypes const char**
///
void k_urlrequester_set_mime_type_filters(void* self, const char* mimeTypes[static 1]);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#mimeTypeFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char** k_urlrequester_mime_type_filters(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// @param self KUrlRequester*
///
QFileDialog* k_urlrequester_file_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// Allows for overriding the related default method
///
/// @param self KUrlRequester*
/// @param callback QFileDialog* func()
///
void k_urlrequester_on_file_dialog(void* self, QFileDialog* (*callback)());

/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// Base class method implementation
///
/// @param self KUrlRequester*
///
QFileDialog* k_urlrequester_qbase_file_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#lineEdit)
///
/// @param self KUrlRequester*
///
KLineEdit* k_urlrequester_line_edit(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#comboBox)
///
/// @param self KUrlRequester*
///
KComboBox* k_urlrequester_combo_box(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#button)
///
/// @param self KUrlRequester*
///
QPushButton* k_urlrequester_button(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#completionObject)
///
/// @param self KUrlRequester*
///
KUrlCompletion* k_urlrequester_completion_object(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#customEditor)
///
/// @param self KUrlRequester*
///
const KEditListWidget__CustomEditor* k_urlrequester_custom_editor(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_placeholder_text(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setPlaceholderText)
///
/// @param self KUrlRequester*
/// @param msg const char*
///
void k_urlrequester_set_placeholder_text(void* self, const char* msg);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialogModality)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__WindowModality
///
int32_t k_urlrequester_file_dialog_modality(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setFileDialogModality)
///
/// @param self KUrlRequester*
/// @param modality enum Qt__WindowModality
///
void k_urlrequester_set_file_dialog_modality(void* self, int32_t modality);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setUrl)
///
/// @param self KUrlRequester*
/// @param url QUrl*
///
void k_urlrequester_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setStartDir)
///
/// @param self KUrlRequester*
/// @param startDir QUrl*
///
void k_urlrequester_set_start_dir(void* self, void* startDir);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#setText)
///
/// @param self KUrlRequester*
/// @param text const char*
///
void k_urlrequester_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#clear)
///
/// @param self KUrlRequester*
///
void k_urlrequester_clear(void* self);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#textChanged)
///
/// @param self KUrlRequester*
/// @param param1 const char*
///
void k_urlrequester_text_changed(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#textChanged)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* param1)
///
void k_urlrequester_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#textEdited)
///
/// @param self KUrlRequester*
/// @param param1 const char*
///
void k_urlrequester_text_edited(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#textEdited)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* param1)
///
void k_urlrequester_on_text_edited(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#returnPressed)
///
/// @param self KUrlRequester*
/// @param text const char*
///
void k_urlrequester_return_pressed(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#returnPressed)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* text)
///
void k_urlrequester_on_return_pressed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#openFileDialog)
///
/// @param self KUrlRequester*
/// @param param1 KUrlRequester*
///
void k_urlrequester_open_file_dialog(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#openFileDialog)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, KUrlRequester* param1)
///
void k_urlrequester_on_open_file_dialog(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#urlSelected)
///
/// @param self KUrlRequester*
/// @param param1 QUrl*
///
void k_urlrequester_url_selected(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#urlSelected)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QUrl* param1)
///
void k_urlrequester_on_url_selected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// @param self KUrlRequester*
/// @param e QEvent*
///
void k_urlrequester_change_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QEvent* e)
///
void k_urlrequester_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// Base class method implementation
///
/// @param self KUrlRequester*
/// @param e QEvent*
///
void k_urlrequester_qbase_change_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// @param self KUrlRequester*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_urlrequester_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KUrlRequester*
/// @param callback bool func(KUrlRequester* self, QObject* obj, QEvent* ev)
///
void k_urlrequester_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KUrlRequester*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_urlrequester_qbase_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_urlrequester_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_urlrequester_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KUrlRequester*
///
uintptr_t k_urlrequester_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KUrlRequester*
///
void k_urlrequester_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KUrlRequester*
///
uintptr_t k_urlrequester_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KUrlRequester*
///
uintptr_t k_urlrequester_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KUrlRequester*
///
QStyle* k_urlrequester_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KUrlRequester*
/// @param style QStyle*
///
void k_urlrequester_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__WindowModality
///
int32_t k_urlrequester_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KUrlRequester*
/// @param windowModality enum Qt__WindowModality
///
void k_urlrequester_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
///
bool k_urlrequester_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KUrlRequester*
/// @param enabled bool
///
void k_urlrequester_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KUrlRequester*
/// @param disabled bool
///
void k_urlrequester_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KUrlRequester*
/// @param windowModified bool
///
void k_urlrequester_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KUrlRequester*
///
QRect* k_urlrequester_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KUrlRequester*
///
const QRect* k_urlrequester_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KUrlRequester*
///
QRect* k_urlrequester_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KUrlRequester*
///
QPoint* k_urlrequester_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KUrlRequester*
///
QRect* k_urlrequester_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KUrlRequester*
///
QRect* k_urlrequester_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KUrlRequester*
///
QRegion* k_urlrequester_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlRequester*
/// @param minimumSize QSize*
///
void k_urlrequester_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlRequester*
/// @param minw int
/// @param minh int
///
void k_urlrequester_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlRequester*
/// @param maximumSize QSize*
///
void k_urlrequester_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlRequester*
/// @param maxw int
/// @param maxh int
///
void k_urlrequester_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KUrlRequester*
/// @param minw int
///
void k_urlrequester_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KUrlRequester*
/// @param minh int
///
void k_urlrequester_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KUrlRequester*
/// @param maxw int
///
void k_urlrequester_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KUrlRequester*
/// @param maxh int
///
void k_urlrequester_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlRequester*
/// @param sizeIncrement QSize*
///
void k_urlrequester_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlRequester*
/// @param w int
/// @param h int
///
void k_urlrequester_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlRequester*
/// @param baseSize QSize*
///
void k_urlrequester_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlRequester*
/// @param basew int
/// @param baseh int
///
void k_urlrequester_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlRequester*
/// @param fixedSize QSize*
///
void k_urlrequester_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlRequester*
/// @param w int
/// @param h int
///
void k_urlrequester_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KUrlRequester*
/// @param w int
///
void k_urlrequester_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KUrlRequester*
/// @param h int
///
void k_urlrequester_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlRequester*
/// @param param1 QPointF*
///
QPointF* k_urlrequester_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlRequester*
/// @param param1 QPoint*
///
QPoint* k_urlrequester_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlRequester*
/// @param param1 QPointF*
///
QPointF* k_urlrequester_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlRequester*
/// @param param1 QPoint*
///
QPoint* k_urlrequester_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlRequester*
/// @param param1 QPointF*
///
QPointF* k_urlrequester_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlRequester*
/// @param param1 QPoint*
///
QPoint* k_urlrequester_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlRequester*
/// @param param1 QPointF*
///
QPointF* k_urlrequester_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlRequester*
/// @param param1 QPoint*
///
QPoint* k_urlrequester_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlrequester_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlrequester_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlrequester_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlrequester_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KUrlRequester*
///
const QPalette* k_urlrequester_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KUrlRequester*
/// @param palette QPalette*
///
void k_urlrequester_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KUrlRequester*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_urlrequester_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KUrlRequester*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlrequester_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KUrlRequester*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_urlrequester_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KUrlRequester*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlrequester_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KUrlRequester*
///
const QFont* k_urlrequester_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KUrlRequester*
/// @param font QFont*
///
void k_urlrequester_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KUrlRequester*
///
QFontMetrics* k_urlrequester_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KUrlRequester*
///
QFontInfo* k_urlrequester_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KUrlRequester*
///
QCursor* k_urlrequester_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KUrlRequester*
/// @param cursor QCursor*
///
void k_urlrequester_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KUrlRequester*
///
void k_urlrequester_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KUrlRequester*
/// @param enable bool
///
void k_urlrequester_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KUrlRequester*
/// @param enable bool
///
void k_urlrequester_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlRequester*
/// @param mask QBitmap*
///
void k_urlrequester_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlRequester*
/// @param mask QRegion*
///
void k_urlrequester_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KUrlRequester*
///
QRegion* k_urlrequester_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KUrlRequester*
///
void k_urlrequester_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param target QPaintDevice*
///
void k_urlrequester_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param painter QPainter*
///
void k_urlrequester_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlRequester*
///
QPixmap* k_urlrequester_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KUrlRequester*
///
QGraphicsEffect* k_urlrequester_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KUrlRequester*
/// @param effect QGraphicsEffect*
///
void k_urlrequester_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlRequester*
/// @param type enum Qt__GestureType
///
void k_urlrequester_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KUrlRequester*
/// @param type enum Qt__GestureType
///
void k_urlrequester_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KUrlRequester*
/// @param windowTitle const char*
///
void k_urlrequester_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KUrlRequester*
/// @param styleSheet const char*
///
void k_urlrequester_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KUrlRequester*
/// @param icon QIcon*
///
void k_urlrequester_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KUrlRequester*
///
QIcon* k_urlrequester_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KUrlRequester*
/// @param windowIconText const char*
///
void k_urlrequester_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KUrlRequester*
/// @param windowRole const char*
///
void k_urlrequester_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KUrlRequester*
/// @param filePath const char*
///
void k_urlrequester_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KUrlRequester*
/// @param level double
///
void k_urlrequester_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KUrlRequester*
///
double k_urlrequester_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KUrlRequester*
/// @param toolTip const char*
///
void k_urlrequester_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KUrlRequester*
/// @param msec int
///
void k_urlrequester_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KUrlRequester*
/// @param statusTip const char*
///
void k_urlrequester_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KUrlRequester*
/// @param whatsThis const char*
///
void k_urlrequester_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KUrlRequester*
/// @param name const char*
///
void k_urlrequester_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KUrlRequester*
/// @param description const char*
///
void k_urlrequester_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KUrlRequester*
/// @param direction enum Qt__LayoutDirection
///
void k_urlrequester_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_urlrequester_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KUrlRequester*
///
void k_urlrequester_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KUrlRequester*
/// @param locale QLocale*
///
void k_urlrequester_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KUrlRequester*
///
QLocale* k_urlrequester_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KUrlRequester*
///
void k_urlrequester_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlRequester*
///
void k_urlrequester_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KUrlRequester*
///
void k_urlrequester_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KUrlRequester*
///
void k_urlrequester_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlRequester*
/// @param reason enum Qt__FocusReason
///
void k_urlrequester_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_urlrequester_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KUrlRequester*
/// @param policy enum Qt__FocusPolicy
///
void k_urlrequester_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_urlrequester_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KUrlRequester*
/// @param focusProxy QWidget*
///
void k_urlrequester_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_urlrequester_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KUrlRequester*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_urlrequester_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlRequester*
///
void k_urlrequester_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlRequester*
/// @param param1 QCursor*
///
void k_urlrequester_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KUrlRequester*
///
void k_urlrequester_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KUrlRequester*
///
void k_urlrequester_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KUrlRequester*
///
void k_urlrequester_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlRequester*
/// @param key QKeySequence*
///
int32_t k_urlrequester_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KUrlRequester*
/// @param id int
///
void k_urlrequester_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlRequester*
/// @param id int
///
void k_urlrequester_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlRequester*
/// @param id int
///
void k_urlrequester_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_urlrequester_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_urlrequester_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KUrlRequester*
/// @param enable bool
///
void k_urlrequester_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KUrlRequester*
///
QGraphicsProxyWidget* k_urlrequester_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlRequester*
///
void k_urlrequester_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlRequester*
///
void k_urlrequester_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlrequester_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlRequester*
/// @param param1 QRect*
///
void k_urlrequester_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlRequester*
/// @param param1 QRegion*
///
void k_urlrequester_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlrequester_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlRequester*
/// @param param1 QRect*
///
void k_urlrequester_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlRequester*
/// @param param1 QRegion*
///
void k_urlrequester_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KUrlRequester*
/// @param hidden bool
///
void k_urlrequester_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KUrlRequester*
///
void k_urlrequester_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KUrlRequester*
///
void k_urlrequester_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KUrlRequester*
///
void k_urlrequester_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KUrlRequester*
///
void k_urlrequester_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KUrlRequester*
///
void k_urlrequester_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KUrlRequester*
///
void k_urlrequester_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KUrlRequester*
///
void k_urlrequester_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KUrlRequester*
///
void k_urlrequester_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
///
void k_urlrequester_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlRequester*
/// @param x int
/// @param y int
///
void k_urlrequester_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlRequester*
/// @param param1 QPoint*
///
void k_urlrequester_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlRequester*
/// @param w int
/// @param h int
///
void k_urlrequester_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlRequester*
/// @param param1 QSize*
///
void k_urlrequester_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlrequester_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlRequester*
/// @param geometry QRect*
///
void k_urlrequester_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
char* k_urlrequester_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KUrlRequester*
/// @param geometry const char*
///
bool k_urlrequester_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KUrlRequester*
///
void k_urlrequester_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KUrlRequester*
/// @param param1 QWidget*
///
bool k_urlrequester_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KUrlRequester*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_urlrequester_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KUrlRequester*
/// @param state flag of enum Qt__WindowState
///
void k_urlrequester_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KUrlRequester*
/// @param state flag of enum Qt__WindowState
///
void k_urlrequester_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KUrlRequester*
///
QSizePolicy* k_urlrequester_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlRequester*
/// @param sizePolicy QSizePolicy*
///
void k_urlrequester_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlRequester*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_urlrequester_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KUrlRequester*
///
QRegion* k_urlrequester_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlRequester*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_urlrequester_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlRequester*
/// @param margins QMargins*
///
void k_urlrequester_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KUrlRequester*
///
QMargins* k_urlrequester_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KUrlRequester*
///
QRect* k_urlrequester_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KUrlRequester*
///
QLayout* k_urlrequester_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KUrlRequester*
/// @param layout QLayout*
///
void k_urlrequester_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KUrlRequester*
///
void k_urlrequester_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlRequester*
/// @param parent QWidget*
///
void k_urlrequester_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlRequester*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_urlrequester_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlRequester*
/// @param dx int
/// @param dy int
///
void k_urlrequester_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlRequester*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_urlrequester_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KUrlRequester*
/// @param on bool
///
void k_urlrequester_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlRequester*
/// @param action QAction*
///
void k_urlrequester_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KUrlRequester*
/// @param actions libqt_list /* of QAction* */
///
void k_urlrequester_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KUrlRequester*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_urlrequester_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KUrlRequester*
/// @param before QAction*
/// @param action QAction*
///
void k_urlrequester_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KUrlRequester*
/// @param action QAction*
///
void k_urlrequester_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KUrlRequester*
///
libqt_list /* of QAction* */ k_urlrequester_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlRequester*
/// @param text const char*
///
QAction* k_urlrequester_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlRequester*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_urlrequester_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlRequester*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlrequester_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlRequester*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlrequester_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KUrlRequester*
///
QWidget* k_urlrequester_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KUrlRequester*
/// @param type flag of enum Qt__WindowType
///
void k_urlrequester_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KUrlRequester*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_urlrequester_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__WindowType
///
void k_urlrequester_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KUrlRequester*
/// @param type flag of enum Qt__WindowType
///
void k_urlrequester_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KUrlRequester*
///
/// @return enum Qt__WindowType
///
int64_t k_urlrequester_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_urlrequester_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlRequester*
/// @param x int
/// @param y int
///
QWidget* k_urlrequester_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlRequester*
/// @param p QPoint*
///
QWidget* k_urlrequester_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlRequester*
/// @param p QPointF*
///
QWidget* k_urlrequester_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__WidgetAttribute
///
void k_urlrequester_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_urlrequester_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KUrlRequester*
///
void k_urlrequester_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KUrlRequester*
/// @param child QWidget*
///
bool k_urlrequester_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KUrlRequester*
/// @param enabled bool
///
void k_urlrequester_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KUrlRequester*
///
QBackingStore* k_urlrequester_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KUrlRequester*
///
QWindow* k_urlrequester_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KUrlRequester*
///
QScreen* k_urlrequester_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KUrlRequester*
/// @param screen QScreen*
///
void k_urlrequester_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_urlrequester_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlRequester*
/// @param title const char*
///
void k_urlrequester_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* title)
///
void k_urlrequester_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlRequester*
/// @param icon QIcon*
///
void k_urlrequester_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QIcon* icon)
///
void k_urlrequester_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlRequester*
/// @param iconText const char*
///
void k_urlrequester_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* iconText)
///
void k_urlrequester_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlRequester*
/// @param pos QPoint*
///
void k_urlrequester_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QPoint* pos)
///
void k_urlrequester_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KUrlRequester*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_urlrequester_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KUrlRequester*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_urlrequester_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_urlrequester_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlrequester_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlrequester_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_urlrequester_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlrequester_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlrequester_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlRequester*
/// @param rectangle QRect*
///
QPixmap* k_urlrequester_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlRequester*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_urlrequester_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlRequester*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_urlrequester_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlRequester*
/// @param id int
/// @param enable bool
///
void k_urlrequester_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlRequester*
/// @param id int
/// @param enable bool
///
void k_urlrequester_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_urlrequester_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_urlrequester_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_urlrequester_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_urlrequester_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char* k_urlrequester_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlRequester*
/// @param name char*
///
void k_urlrequester_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlRequester*
/// @param b bool
///
bool k_urlrequester_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlRequester*
///
QThread* k_urlrequester_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlRequester*
/// @param thread QThread*
///
bool k_urlrequester_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlRequester*
/// @param interval int
///
int32_t k_urlrequester_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlRequester*
/// @param id int
///
void k_urlrequester_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlRequester*
/// @param id enum Qt__TimerId
///
void k_urlrequester_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlRequester*
///
libqt_list /* of QObject* */ k_urlrequester_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlRequester*
/// @param filterObj QObject*
///
void k_urlrequester_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlRequester*
/// @param obj QObject*
///
void k_urlrequester_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_urlrequester_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlRequester*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_urlrequester_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_urlrequester_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_urlrequester_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlRequester*
///
void k_urlrequester_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlRequester*
///
void k_urlrequester_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlRequester*
/// @param name const char*
/// @param value QVariant*
///
bool k_urlrequester_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlRequester*
/// @param name const char*
///
QVariant* k_urlrequester_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlRequester*
///
const char** k_urlrequester_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlRequester*
///
QBindingStorage* k_urlrequester_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlRequester*
///
const QBindingStorage* k_urlrequester_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlRequester*
///
void k_urlrequester_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self)
///
void k_urlrequester_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlRequester*
///
QObject* k_urlrequester_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlRequester*
/// @param classname const char*
///
bool k_urlrequester_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlRequester*
///
void k_urlrequester_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlRequester*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_urlrequester_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlRequester*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_urlrequester_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_urlrequester_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlRequester*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_urlrequester_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlRequester*
/// @param param1 QObject*
///
void k_urlrequester_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QObject* param1)
///
void k_urlrequester_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KUrlRequester*
///
bool k_urlrequester_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KUrlRequester*
///
double k_urlrequester_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KUrlRequester*
///
double k_urlrequester_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_urlrequester_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_urlrequester_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback int32_t func()
///
void k_urlrequester_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param visible bool
///
void k_urlrequester_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param visible bool
///
void k_urlrequester_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, bool visible)
///
void k_urlrequester_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QSize* func()
///
void k_urlrequester_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
QSize* k_urlrequester_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QSize* func()
///
void k_urlrequester_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 int
///
int32_t k_urlrequester_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 int
///
int32_t k_urlrequester_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback int32_t func(KUrlRequester* self, int param1)
///
void k_urlrequester_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func()
///
void k_urlrequester_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
QPaintEngine* k_urlrequester_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
QPaintEngine* k_urlrequester_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QPaintEngine* func()
///
void k_urlrequester_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
bool k_urlrequester_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
bool k_urlrequester_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func(KUrlRequester* self, QEvent* event)
///
void k_urlrequester_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMouseEvent* event)
///
void k_urlrequester_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMouseEvent* event)
///
void k_urlrequester_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMouseEvent* event)
///
void k_urlrequester_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMouseEvent*
///
void k_urlrequester_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMouseEvent* event)
///
void k_urlrequester_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QWheelEvent*
///
void k_urlrequester_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QWheelEvent*
///
void k_urlrequester_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QWheelEvent* event)
///
void k_urlrequester_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QKeyEvent*
///
void k_urlrequester_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QKeyEvent*
///
void k_urlrequester_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QKeyEvent* event)
///
void k_urlrequester_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QKeyEvent*
///
void k_urlrequester_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QKeyEvent*
///
void k_urlrequester_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QKeyEvent* event)
///
void k_urlrequester_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QFocusEvent*
///
void k_urlrequester_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QFocusEvent*
///
void k_urlrequester_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QFocusEvent* event)
///
void k_urlrequester_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QFocusEvent*
///
void k_urlrequester_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QFocusEvent*
///
void k_urlrequester_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QFocusEvent* event)
///
void k_urlrequester_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEnterEvent*
///
void k_urlrequester_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEnterEvent*
///
void k_urlrequester_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QEnterEvent* event)
///
void k_urlrequester_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
void k_urlrequester_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
void k_urlrequester_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QEvent* event)
///
void k_urlrequester_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QPaintEvent*
///
void k_urlrequester_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QPaintEvent*
///
void k_urlrequester_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QPaintEvent* event)
///
void k_urlrequester_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMoveEvent*
///
void k_urlrequester_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QMoveEvent*
///
void k_urlrequester_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMoveEvent* event)
///
void k_urlrequester_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QResizeEvent*
///
void k_urlrequester_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QResizeEvent*
///
void k_urlrequester_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QResizeEvent* event)
///
void k_urlrequester_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QCloseEvent*
///
void k_urlrequester_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QCloseEvent*
///
void k_urlrequester_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QCloseEvent* event)
///
void k_urlrequester_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QContextMenuEvent*
///
void k_urlrequester_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QContextMenuEvent*
///
void k_urlrequester_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QContextMenuEvent* event)
///
void k_urlrequester_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QTabletEvent*
///
void k_urlrequester_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QTabletEvent*
///
void k_urlrequester_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QTabletEvent* event)
///
void k_urlrequester_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QActionEvent*
///
void k_urlrequester_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QActionEvent*
///
void k_urlrequester_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QActionEvent* event)
///
void k_urlrequester_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragEnterEvent*
///
void k_urlrequester_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragEnterEvent*
///
void k_urlrequester_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QDragEnterEvent* event)
///
void k_urlrequester_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragMoveEvent*
///
void k_urlrequester_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragMoveEvent*
///
void k_urlrequester_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QDragMoveEvent* event)
///
void k_urlrequester_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragLeaveEvent*
///
void k_urlrequester_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDragLeaveEvent*
///
void k_urlrequester_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QDragLeaveEvent* event)
///
void k_urlrequester_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDropEvent*
///
void k_urlrequester_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QDropEvent*
///
void k_urlrequester_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QDropEvent* event)
///
void k_urlrequester_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QShowEvent*
///
void k_urlrequester_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QShowEvent*
///
void k_urlrequester_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QShowEvent* event)
///
void k_urlrequester_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QHideEvent*
///
void k_urlrequester_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QHideEvent*
///
void k_urlrequester_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QHideEvent* event)
///
void k_urlrequester_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlrequester_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlrequester_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func(KUrlRequester* self, const char* eventType, void* message, intptr_t* result)
///
void k_urlrequester_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlrequester_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlrequester_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback int32_t func(KUrlRequester* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_urlrequester_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param painter QPainter*
///
void k_urlrequester_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param painter QPainter*
///
void k_urlrequester_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QPainter* painter)
///
void k_urlrequester_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param offset QPoint*
///
QPaintDevice* k_urlrequester_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param offset QPoint*
///
QPaintDevice* k_urlrequester_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QPaintDevice* func(KUrlRequester* self, QPoint* offset)
///
void k_urlrequester_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
QPainter* k_urlrequester_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
QPainter* k_urlrequester_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QPainter* func()
///
void k_urlrequester_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 QInputMethodEvent*
///
void k_urlrequester_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 QInputMethodEvent*
///
void k_urlrequester_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QInputMethodEvent* param1)
///
void k_urlrequester_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlrequester_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlrequester_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QVariant* func(KUrlRequester* self, enum Qt__InputMethodQuery param1)
///
void k_urlrequester_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param next bool
///
bool k_urlrequester_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param next bool
///
bool k_urlrequester_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func(KUrlRequester* self, bool next)
///
void k_urlrequester_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QTimerEvent*
///
void k_urlrequester_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QTimerEvent*
///
void k_urlrequester_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QTimerEvent* event)
///
void k_urlrequester_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QChildEvent*
///
void k_urlrequester_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QChildEvent*
///
void k_urlrequester_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QChildEvent* event)
///
void k_urlrequester_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
void k_urlrequester_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param event QEvent*
///
void k_urlrequester_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QEvent* event)
///
void k_urlrequester_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
void k_urlrequester_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
void k_urlrequester_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMetaMethod* signal)
///
void k_urlrequester_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
void k_urlrequester_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
void k_urlrequester_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, QMetaMethod* signal)
///
void k_urlrequester_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func()
///
void k_urlrequester_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func()
///
void k_urlrequester_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
void k_urlrequester_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback void func()
///
void k_urlrequester_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func()
///
void k_urlrequester_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
bool k_urlrequester_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func()
///
void k_urlrequester_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
QObject* k_urlrequester_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
QObject* k_urlrequester_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback QObject* func()
///
void k_urlrequester_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
///
int32_t k_urlrequester_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback int32_t func()
///
void k_urlrequester_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal const char*
///
int32_t k_urlrequester_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal const char*
///
int32_t k_urlrequester_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback int32_t func(KUrlRequester* self, const char* signal)
///
void k_urlrequester_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
bool k_urlrequester_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param signal QMetaMethod*
///
bool k_urlrequester_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback bool func(KUrlRequester* self, QMetaMethod* signal)
///
void k_urlrequester_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlRequester*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlrequester_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlrequester_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlRequester*
/// @param callback double func(KUrlRequester* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_urlrequester_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlRequester*
/// @param callback void func(KUrlRequester* self, const char* objectName)
///
void k_urlrequester_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlrequester.html#dtor.KUrlRequester)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlRequester*
///
void k_urlrequester_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurlcomborequester.html)

/// k_urlcomborequester_new constructs a new KUrlComboRequester object.
///
/// @param parent QWidget*
///
KUrlComboRequester* k_urlcomborequester_new(void* parent);

/// [Upstream resources](https://api.kde.org/kurlcomborequester.html)

/// k_urlcomborequester_new2 constructs a new KUrlComboRequester object.
///
KUrlComboRequester* k_urlcomborequester_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUrlComboRequester*
///
const QMetaObject* k_urlcomborequester_meta_object(void* self);

/// @param self KUrlComboRequester*
/// @param param1 const char*
///
void* k_urlcomborequester_metacast(void* self, const char* param1);

/// @param self KUrlComboRequester*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcomborequester_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func(KUrlComboRequester* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_urlcomborequester_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlComboRequester*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcomborequester_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_urlcomborequester_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_urlcomborequester_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_urlcomborequester_tr3(const char* s, const char* c, int n);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#url)
///
/// @param self KUrlComboRequester*
///
QUrl* k_urlcomborequester_url(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#startDir)
///
/// @param self KUrlComboRequester*
///
QUrl* k_urlcomborequester_start_dir(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_text(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setMode)
///
/// @param self KUrlComboRequester*
/// @param mode flag of enum KFile__Mode
///
void k_urlcomborequester_set_mode(void* self, int32_t mode);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#mode)
///
/// @param self KUrlComboRequester*
///
/// @return flag of enum KFile__Mode
///
int32_t k_urlcomborequester_mode(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setAcceptMode)
///
/// @param self KUrlComboRequester*
/// @param m enum QFileDialog__AcceptMode
///
void k_urlcomborequester_set_accept_mode(void* self, int32_t m);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#acceptMode)
///
/// @param self KUrlComboRequester*
///
/// @return enum QFileDialog__AcceptMode
///
int32_t k_urlcomborequester_accept_mode(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setNameFilters)
///
/// @param self KUrlComboRequester*
/// @param filters const char**
///
void k_urlcomborequester_set_name_filters(void* self, const char* filters[static 1]);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setNameFilter)
///
/// @param self KUrlComboRequester*
/// @param filter const char*
///
void k_urlcomborequester_set_name_filter(void* self, const char* filter);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#nameFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char** k_urlcomborequester_name_filters(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setMimeTypeFilters)
///
/// @param self KUrlComboRequester*
/// @param mimeTypes const char**
///
void k_urlcomborequester_set_mime_type_filters(void* self, const char* mimeTypes[static 1]);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#mimeTypeFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char** k_urlcomborequester_mime_type_filters(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#lineEdit)
///
/// @param self KUrlComboRequester*
///
KLineEdit* k_urlcomborequester_line_edit(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#comboBox)
///
/// @param self KUrlComboRequester*
///
KComboBox* k_urlcomborequester_combo_box(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#button)
///
/// @param self KUrlComboRequester*
///
QPushButton* k_urlcomborequester_button(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#completionObject)
///
/// @param self KUrlComboRequester*
///
KUrlCompletion* k_urlcomborequester_completion_object(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#customEditor)
///
/// @param self KUrlComboRequester*
///
const KEditListWidget__CustomEditor* k_urlcomborequester_custom_editor(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_placeholder_text(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setPlaceholderText)
///
/// @param self KUrlComboRequester*
/// @param msg const char*
///
void k_urlcomborequester_set_placeholder_text(void* self, const char* msg);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialogModality)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__WindowModality
///
int32_t k_urlcomborequester_file_dialog_modality(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setFileDialogModality)
///
/// @param self KUrlComboRequester*
/// @param modality enum Qt__WindowModality
///
void k_urlcomborequester_set_file_dialog_modality(void* self, int32_t modality);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setUrl)
///
/// @param self KUrlComboRequester*
/// @param url QUrl*
///
void k_urlcomborequester_set_url(void* self, void* url);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setStartDir)
///
/// @param self KUrlComboRequester*
/// @param startDir QUrl*
///
void k_urlcomborequester_set_start_dir(void* self, void* startDir);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#setText)
///
/// @param self KUrlComboRequester*
/// @param text const char*
///
void k_urlcomborequester_set_text(void* self, const char* text);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#clear)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_clear(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#textChanged)
///
/// @param self KUrlComboRequester*
/// @param param1 const char*
///
void k_urlcomborequester_text_changed(void* self, const char* param1);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#textChanged)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* param1)
///
void k_urlcomborequester_on_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#textEdited)
///
/// @param self KUrlComboRequester*
/// @param param1 const char*
///
void k_urlcomborequester_text_edited(void* self, const char* param1);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#textEdited)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* param1)
///
void k_urlcomborequester_on_text_edited(void* self, void (*callback)(void*, const char*));

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#returnPressed)
///
/// @param self KUrlComboRequester*
/// @param text const char*
///
void k_urlcomborequester_return_pressed(void* self, const char* text);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#returnPressed)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* text)
///
void k_urlcomborequester_on_return_pressed(void* self, void (*callback)(void*, const char*));

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#openFileDialog)
///
/// @param self KUrlComboRequester*
/// @param param1 KUrlRequester*
///
void k_urlcomborequester_open_file_dialog(void* self, void* param1);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#openFileDialog)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, KUrlRequester* param1)
///
void k_urlcomborequester_on_open_file_dialog(void* self, void (*callback)(void*, void*));

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#urlSelected)
///
/// @param self KUrlComboRequester*
/// @param param1 QUrl*
///
void k_urlcomborequester_url_selected(void* self, void* param1);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#urlSelected)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QUrl* param1)
///
void k_urlcomborequester_on_url_selected(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KUrlComboRequester*
///
uintptr_t k_urlcomborequester_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KUrlComboRequester*
///
uintptr_t k_urlcomborequester_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KUrlComboRequester*
///
uintptr_t k_urlcomborequester_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KUrlComboRequester*
///
QStyle* k_urlcomborequester_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KUrlComboRequester*
/// @param style QStyle*
///
void k_urlcomborequester_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__WindowModality
///
int32_t k_urlcomborequester_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KUrlComboRequester*
/// @param windowModality enum Qt__WindowModality
///
void k_urlcomborequester_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
///
bool k_urlcomborequester_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KUrlComboRequester*
/// @param enabled bool
///
void k_urlcomborequester_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KUrlComboRequester*
/// @param disabled bool
///
void k_urlcomborequester_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KUrlComboRequester*
/// @param windowModified bool
///
void k_urlcomborequester_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KUrlComboRequester*
///
QRect* k_urlcomborequester_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KUrlComboRequester*
///
const QRect* k_urlcomborequester_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KUrlComboRequester*
///
QRect* k_urlcomborequester_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KUrlComboRequester*
///
QPoint* k_urlcomborequester_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KUrlComboRequester*
///
QRect* k_urlcomborequester_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KUrlComboRequester*
///
QRect* k_urlcomborequester_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KUrlComboRequester*
///
QRegion* k_urlcomborequester_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlComboRequester*
/// @param minimumSize QSize*
///
void k_urlcomborequester_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlComboRequester*
/// @param minw int
/// @param minh int
///
void k_urlcomborequester_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlComboRequester*
/// @param maximumSize QSize*
///
void k_urlcomborequester_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlComboRequester*
/// @param maxw int
/// @param maxh int
///
void k_urlcomborequester_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KUrlComboRequester*
/// @param minw int
///
void k_urlcomborequester_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KUrlComboRequester*
/// @param minh int
///
void k_urlcomborequester_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KUrlComboRequester*
/// @param maxw int
///
void k_urlcomborequester_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KUrlComboRequester*
/// @param maxh int
///
void k_urlcomborequester_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlComboRequester*
/// @param sizeIncrement QSize*
///
void k_urlcomborequester_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlComboRequester*
/// @param w int
/// @param h int
///
void k_urlcomborequester_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlComboRequester*
/// @param baseSize QSize*
///
void k_urlcomborequester_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlComboRequester*
/// @param basew int
/// @param baseh int
///
void k_urlcomborequester_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlComboRequester*
/// @param fixedSize QSize*
///
void k_urlcomborequester_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlComboRequester*
/// @param w int
/// @param h int
///
void k_urlcomborequester_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KUrlComboRequester*
/// @param w int
///
void k_urlcomborequester_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KUrlComboRequester*
/// @param h int
///
void k_urlcomborequester_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlComboRequester*
/// @param param1 QPointF*
///
QPointF* k_urlcomborequester_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlComboRequester*
/// @param param1 QPoint*
///
QPoint* k_urlcomborequester_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlComboRequester*
/// @param param1 QPointF*
///
QPointF* k_urlcomborequester_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlComboRequester*
/// @param param1 QPoint*
///
QPoint* k_urlcomborequester_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlComboRequester*
/// @param param1 QPointF*
///
QPointF* k_urlcomborequester_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlComboRequester*
/// @param param1 QPoint*
///
QPoint* k_urlcomborequester_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlComboRequester*
/// @param param1 QPointF*
///
QPointF* k_urlcomborequester_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlComboRequester*
/// @param param1 QPoint*
///
QPoint* k_urlcomborequester_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlcomborequester_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlcomborequester_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlcomborequester_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlcomborequester_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KUrlComboRequester*
///
const QPalette* k_urlcomborequester_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KUrlComboRequester*
/// @param palette QPalette*
///
void k_urlcomborequester_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KUrlComboRequester*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_urlcomborequester_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KUrlComboRequester*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlcomborequester_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KUrlComboRequester*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_urlcomborequester_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KUrlComboRequester*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlcomborequester_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KUrlComboRequester*
///
const QFont* k_urlcomborequester_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KUrlComboRequester*
/// @param font QFont*
///
void k_urlcomborequester_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KUrlComboRequester*
///
QFontMetrics* k_urlcomborequester_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KUrlComboRequester*
///
QFontInfo* k_urlcomborequester_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KUrlComboRequester*
///
QCursor* k_urlcomborequester_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KUrlComboRequester*
/// @param cursor QCursor*
///
void k_urlcomborequester_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KUrlComboRequester*
/// @param enable bool
///
void k_urlcomborequester_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KUrlComboRequester*
/// @param enable bool
///
void k_urlcomborequester_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlComboRequester*
/// @param mask QBitmap*
///
void k_urlcomborequester_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlComboRequester*
/// @param mask QRegion*
///
void k_urlcomborequester_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KUrlComboRequester*
///
QRegion* k_urlcomborequester_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param target QPaintDevice*
///
void k_urlcomborequester_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
///
void k_urlcomborequester_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlComboRequester*
///
QPixmap* k_urlcomborequester_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KUrlComboRequester*
///
QGraphicsEffect* k_urlcomborequester_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KUrlComboRequester*
/// @param effect QGraphicsEffect*
///
void k_urlcomborequester_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlComboRequester*
/// @param type enum Qt__GestureType
///
void k_urlcomborequester_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KUrlComboRequester*
/// @param type enum Qt__GestureType
///
void k_urlcomborequester_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KUrlComboRequester*
/// @param windowTitle const char*
///
void k_urlcomborequester_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KUrlComboRequester*
/// @param styleSheet const char*
///
void k_urlcomborequester_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KUrlComboRequester*
/// @param icon QIcon*
///
void k_urlcomborequester_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KUrlComboRequester*
///
QIcon* k_urlcomborequester_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KUrlComboRequester*
/// @param windowIconText const char*
///
void k_urlcomborequester_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KUrlComboRequester*
/// @param windowRole const char*
///
void k_urlcomborequester_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KUrlComboRequester*
/// @param filePath const char*
///
void k_urlcomborequester_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KUrlComboRequester*
/// @param level double
///
void k_urlcomborequester_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KUrlComboRequester*
///
double k_urlcomborequester_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KUrlComboRequester*
/// @param toolTip const char*
///
void k_urlcomborequester_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KUrlComboRequester*
/// @param msec int
///
void k_urlcomborequester_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KUrlComboRequester*
/// @param statusTip const char*
///
void k_urlcomborequester_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KUrlComboRequester*
/// @param whatsThis const char*
///
void k_urlcomborequester_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KUrlComboRequester*
/// @param name const char*
///
void k_urlcomborequester_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KUrlComboRequester*
/// @param description const char*
///
void k_urlcomborequester_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KUrlComboRequester*
/// @param direction enum Qt__LayoutDirection
///
void k_urlcomborequester_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_urlcomborequester_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KUrlComboRequester*
/// @param locale QLocale*
///
void k_urlcomborequester_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KUrlComboRequester*
///
QLocale* k_urlcomborequester_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlComboRequester*
/// @param reason enum Qt__FocusReason
///
void k_urlcomborequester_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_urlcomborequester_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KUrlComboRequester*
/// @param policy enum Qt__FocusPolicy
///
void k_urlcomborequester_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_urlcomborequester_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KUrlComboRequester*
/// @param focusProxy QWidget*
///
void k_urlcomborequester_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_urlcomborequester_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KUrlComboRequester*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_urlcomborequester_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlComboRequester*
/// @param param1 QCursor*
///
void k_urlcomborequester_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlComboRequester*
/// @param key QKeySequence*
///
int32_t k_urlcomborequester_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KUrlComboRequester*
/// @param id int
///
void k_urlcomborequester_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlComboRequester*
/// @param id int
///
void k_urlcomborequester_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlComboRequester*
/// @param id int
///
void k_urlcomborequester_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_urlcomborequester_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_urlcomborequester_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KUrlComboRequester*
/// @param enable bool
///
void k_urlcomborequester_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KUrlComboRequester*
///
QGraphicsProxyWidget* k_urlcomborequester_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcomborequester_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboRequester*
/// @param param1 QRect*
///
void k_urlcomborequester_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboRequester*
/// @param param1 QRegion*
///
void k_urlcomborequester_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcomborequester_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboRequester*
/// @param param1 QRect*
///
void k_urlcomborequester_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboRequester*
/// @param param1 QRegion*
///
void k_urlcomborequester_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KUrlComboRequester*
/// @param hidden bool
///
void k_urlcomborequester_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
///
void k_urlcomborequester_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlComboRequester*
/// @param x int
/// @param y int
///
void k_urlcomborequester_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlComboRequester*
/// @param param1 QPoint*
///
void k_urlcomborequester_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlComboRequester*
/// @param w int
/// @param h int
///
void k_urlcomborequester_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlComboRequester*
/// @param param1 QSize*
///
void k_urlcomborequester_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlComboRequester*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcomborequester_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlComboRequester*
/// @param geometry QRect*
///
void k_urlcomborequester_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
char* k_urlcomborequester_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KUrlComboRequester*
/// @param geometry const char*
///
bool k_urlcomborequester_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KUrlComboRequester*
/// @param param1 QWidget*
///
bool k_urlcomborequester_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KUrlComboRequester*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_urlcomborequester_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KUrlComboRequester*
/// @param state flag of enum Qt__WindowState
///
void k_urlcomborequester_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KUrlComboRequester*
/// @param state flag of enum Qt__WindowState
///
void k_urlcomborequester_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KUrlComboRequester*
///
QSizePolicy* k_urlcomborequester_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlComboRequester*
/// @param sizePolicy QSizePolicy*
///
void k_urlcomborequester_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlComboRequester*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_urlcomborequester_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KUrlComboRequester*
///
QRegion* k_urlcomborequester_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlComboRequester*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_urlcomborequester_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlComboRequester*
/// @param margins QMargins*
///
void k_urlcomborequester_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KUrlComboRequester*
///
QMargins* k_urlcomborequester_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KUrlComboRequester*
///
QRect* k_urlcomborequester_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KUrlComboRequester*
///
QLayout* k_urlcomborequester_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KUrlComboRequester*
/// @param layout QLayout*
///
void k_urlcomborequester_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlComboRequester*
/// @param parent QWidget*
///
void k_urlcomborequester_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlComboRequester*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_urlcomborequester_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlComboRequester*
/// @param dx int
/// @param dy int
///
void k_urlcomborequester_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlComboRequester*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_urlcomborequester_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KUrlComboRequester*
/// @param on bool
///
void k_urlcomborequester_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboRequester*
/// @param action QAction*
///
void k_urlcomborequester_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KUrlComboRequester*
/// @param actions libqt_list /* of QAction* */
///
void k_urlcomborequester_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KUrlComboRequester*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_urlcomborequester_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KUrlComboRequester*
/// @param before QAction*
/// @param action QAction*
///
void k_urlcomborequester_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KUrlComboRequester*
/// @param action QAction*
///
void k_urlcomborequester_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KUrlComboRequester*
///
libqt_list /* of QAction* */ k_urlcomborequester_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboRequester*
/// @param text const char*
///
QAction* k_urlcomborequester_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboRequester*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_urlcomborequester_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboRequester*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlcomborequester_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboRequester*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlcomborequester_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KUrlComboRequester*
///
QWidget* k_urlcomborequester_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KUrlComboRequester*
/// @param type flag of enum Qt__WindowType
///
void k_urlcomborequester_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KUrlComboRequester*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_urlcomborequester_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__WindowType
///
void k_urlcomborequester_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KUrlComboRequester*
/// @param type flag of enum Qt__WindowType
///
void k_urlcomborequester_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KUrlComboRequester*
///
/// @return enum Qt__WindowType
///
int64_t k_urlcomborequester_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_urlcomborequester_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboRequester*
/// @param x int
/// @param y int
///
QWidget* k_urlcomborequester_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboRequester*
/// @param p QPoint*
///
QWidget* k_urlcomborequester_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboRequester*
/// @param p QPointF*
///
QWidget* k_urlcomborequester_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__WidgetAttribute
///
void k_urlcomborequester_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_urlcomborequester_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KUrlComboRequester*
/// @param child QWidget*
///
bool k_urlcomborequester_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KUrlComboRequester*
/// @param enabled bool
///
void k_urlcomborequester_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KUrlComboRequester*
///
QBackingStore* k_urlcomborequester_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KUrlComboRequester*
///
QWindow* k_urlcomborequester_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KUrlComboRequester*
///
QScreen* k_urlcomborequester_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KUrlComboRequester*
/// @param screen QScreen*
///
void k_urlcomborequester_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_urlcomborequester_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlComboRequester*
/// @param title const char*
///
void k_urlcomborequester_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* title)
///
void k_urlcomborequester_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlComboRequester*
/// @param icon QIcon*
///
void k_urlcomborequester_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QIcon* icon)
///
void k_urlcomborequester_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlComboRequester*
/// @param iconText const char*
///
void k_urlcomborequester_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* iconText)
///
void k_urlcomborequester_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlComboRequester*
/// @param pos QPoint*
///
void k_urlcomborequester_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QPoint* pos)
///
void k_urlcomborequester_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KUrlComboRequester*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_urlcomborequester_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KUrlComboRequester*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_urlcomborequester_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_urlcomborequester_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlcomborequester_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlcomborequester_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_urlcomborequester_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlcomborequester_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlcomborequester_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlComboRequester*
/// @param rectangle QRect*
///
QPixmap* k_urlcomborequester_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlComboRequester*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_urlcomborequester_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlComboRequester*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_urlcomborequester_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlComboRequester*
/// @param id int
/// @param enable bool
///
void k_urlcomborequester_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlComboRequester*
/// @param id int
/// @param enable bool
///
void k_urlcomborequester_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_urlcomborequester_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_urlcomborequester_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_urlcomborequester_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_urlcomborequester_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char* k_urlcomborequester_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlComboRequester*
/// @param name char*
///
void k_urlcomborequester_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlComboRequester*
/// @param b bool
///
bool k_urlcomborequester_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlComboRequester*
///
QThread* k_urlcomborequester_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlComboRequester*
/// @param thread QThread*
///
bool k_urlcomborequester_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlComboRequester*
/// @param interval int
///
int32_t k_urlcomborequester_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlComboRequester*
/// @param id int
///
void k_urlcomborequester_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlComboRequester*
/// @param id enum Qt__TimerId
///
void k_urlcomborequester_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlComboRequester*
///
libqt_list /* of QObject* */ k_urlcomborequester_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlComboRequester*
/// @param filterObj QObject*
///
void k_urlcomborequester_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlComboRequester*
/// @param obj QObject*
///
void k_urlcomborequester_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_urlcomborequester_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlComboRequester*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_urlcomborequester_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_urlcomborequester_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_urlcomborequester_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlComboRequester*
/// @param name const char*
/// @param value QVariant*
///
bool k_urlcomborequester_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlComboRequester*
/// @param name const char*
///
QVariant* k_urlcomborequester_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboRequester*
///
const char** k_urlcomborequester_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlComboRequester*
///
QBindingStorage* k_urlcomborequester_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlComboRequester*
///
const QBindingStorage* k_urlcomborequester_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self)
///
void k_urlcomborequester_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlComboRequester*
///
QObject* k_urlcomborequester_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlComboRequester*
/// @param classname const char*
///
bool k_urlcomborequester_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlComboRequester*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_urlcomborequester_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlComboRequester*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_urlcomborequester_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_urlcomborequester_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlComboRequester*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_urlcomborequester_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboRequester*
/// @param param1 QObject*
///
void k_urlcomborequester_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QObject* param1)
///
void k_urlcomborequester_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KUrlComboRequester*
///
double k_urlcomborequester_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KUrlComboRequester*
///
double k_urlcomborequester_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_urlcomborequester_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_urlcomborequester_encode_metric_f(int32_t metric, double value);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QFileDialog* k_urlcomborequester_file_dialog(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QFileDialog* k_urlcomborequester_qbase_file_dialog(void* self);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#fileDialog)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QFileDialog* func()
///
void k_urlcomborequester_on_file_dialog(void* self, QFileDialog* (*callback)());

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param e QEvent*
///
void k_urlcomborequester_change_event(void* self, void* e);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param e QEvent*
///
void k_urlcomborequester_qbase_change_event(void* self, void* e);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QEvent* e)
///
void k_urlcomborequester_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_urlcomborequester_event_filter(void* self, void* obj, void* ev);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param obj QObject*
/// @param ev QEvent*
///
bool k_urlcomborequester_qbase_event_filter(void* self, void* obj, void* ev);

/// Inherited from KUrlRequester
///
/// [Upstream resources](https://api.kde.org/kurlrequester.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func(KUrlComboRequester* self, QObject* obj, QEvent* ev)
///
void k_urlcomborequester_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func()
///
void k_urlcomborequester_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param visible bool
///
void k_urlcomborequester_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param visible bool
///
void k_urlcomborequester_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, bool visible)
///
void k_urlcomborequester_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QSize* func()
///
void k_urlcomborequester_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QSize* k_urlcomborequester_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QSize* func()
///
void k_urlcomborequester_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 int
///
int32_t k_urlcomborequester_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 int
///
int32_t k_urlcomborequester_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func(KUrlComboRequester* self, int param1)
///
void k_urlcomborequester_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func()
///
void k_urlcomborequester_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QPaintEngine* k_urlcomborequester_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QPaintEngine* k_urlcomborequester_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QPaintEngine* func()
///
void k_urlcomborequester_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
bool k_urlcomborequester_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
bool k_urlcomborequester_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func(KUrlComboRequester* self, QEvent* event)
///
void k_urlcomborequester_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMouseEvent* event)
///
void k_urlcomborequester_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMouseEvent* event)
///
void k_urlcomborequester_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMouseEvent* event)
///
void k_urlcomborequester_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMouseEvent*
///
void k_urlcomborequester_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMouseEvent* event)
///
void k_urlcomborequester_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QWheelEvent*
///
void k_urlcomborequester_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QWheelEvent*
///
void k_urlcomborequester_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QWheelEvent* event)
///
void k_urlcomborequester_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QKeyEvent*
///
void k_urlcomborequester_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QKeyEvent*
///
void k_urlcomborequester_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QKeyEvent* event)
///
void k_urlcomborequester_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QKeyEvent*
///
void k_urlcomborequester_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QKeyEvent*
///
void k_urlcomborequester_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QKeyEvent* event)
///
void k_urlcomborequester_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QFocusEvent*
///
void k_urlcomborequester_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QFocusEvent*
///
void k_urlcomborequester_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QFocusEvent* event)
///
void k_urlcomborequester_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QFocusEvent*
///
void k_urlcomborequester_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QFocusEvent*
///
void k_urlcomborequester_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QFocusEvent* event)
///
void k_urlcomborequester_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEnterEvent*
///
void k_urlcomborequester_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEnterEvent*
///
void k_urlcomborequester_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QEnterEvent* event)
///
void k_urlcomborequester_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
void k_urlcomborequester_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
void k_urlcomborequester_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QEvent* event)
///
void k_urlcomborequester_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QPaintEvent*
///
void k_urlcomborequester_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QPaintEvent*
///
void k_urlcomborequester_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QPaintEvent* event)
///
void k_urlcomborequester_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMoveEvent*
///
void k_urlcomborequester_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QMoveEvent*
///
void k_urlcomborequester_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMoveEvent* event)
///
void k_urlcomborequester_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QResizeEvent*
///
void k_urlcomborequester_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QResizeEvent*
///
void k_urlcomborequester_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QResizeEvent* event)
///
void k_urlcomborequester_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QCloseEvent*
///
void k_urlcomborequester_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QCloseEvent*
///
void k_urlcomborequester_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QCloseEvent* event)
///
void k_urlcomborequester_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QContextMenuEvent*
///
void k_urlcomborequester_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QContextMenuEvent*
///
void k_urlcomborequester_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QContextMenuEvent* event)
///
void k_urlcomborequester_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QTabletEvent*
///
void k_urlcomborequester_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QTabletEvent*
///
void k_urlcomborequester_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QTabletEvent* event)
///
void k_urlcomborequester_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QActionEvent*
///
void k_urlcomborequester_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QActionEvent*
///
void k_urlcomborequester_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QActionEvent* event)
///
void k_urlcomborequester_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragEnterEvent*
///
void k_urlcomborequester_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragEnterEvent*
///
void k_urlcomborequester_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QDragEnterEvent* event)
///
void k_urlcomborequester_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragMoveEvent*
///
void k_urlcomborequester_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragMoveEvent*
///
void k_urlcomborequester_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QDragMoveEvent* event)
///
void k_urlcomborequester_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragLeaveEvent*
///
void k_urlcomborequester_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDragLeaveEvent*
///
void k_urlcomborequester_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QDragLeaveEvent* event)
///
void k_urlcomborequester_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDropEvent*
///
void k_urlcomborequester_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QDropEvent*
///
void k_urlcomborequester_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QDropEvent* event)
///
void k_urlcomborequester_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QShowEvent*
///
void k_urlcomborequester_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QShowEvent*
///
void k_urlcomborequester_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QShowEvent* event)
///
void k_urlcomborequester_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QHideEvent*
///
void k_urlcomborequester_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QHideEvent*
///
void k_urlcomborequester_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QHideEvent* event)
///
void k_urlcomborequester_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlcomborequester_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlcomborequester_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func(KUrlComboRequester* self, const char* eventType, void* message, intptr_t* result)
///
void k_urlcomborequester_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlcomborequester_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlcomborequester_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func(KUrlComboRequester* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_urlcomborequester_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
///
void k_urlcomborequester_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param painter QPainter*
///
void k_urlcomborequester_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QPainter* painter)
///
void k_urlcomborequester_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param offset QPoint*
///
QPaintDevice* k_urlcomborequester_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param offset QPoint*
///
QPaintDevice* k_urlcomborequester_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QPaintDevice* func(KUrlComboRequester* self, QPoint* offset)
///
void k_urlcomborequester_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QPainter* k_urlcomborequester_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QPainter* k_urlcomborequester_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QPainter* func()
///
void k_urlcomborequester_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 QInputMethodEvent*
///
void k_urlcomborequester_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 QInputMethodEvent*
///
void k_urlcomborequester_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QInputMethodEvent* param1)
///
void k_urlcomborequester_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlcomborequester_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlcomborequester_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QVariant* func(KUrlComboRequester* self, enum Qt__InputMethodQuery param1)
///
void k_urlcomborequester_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param next bool
///
bool k_urlcomborequester_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param next bool
///
bool k_urlcomborequester_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func(KUrlComboRequester* self, bool next)
///
void k_urlcomborequester_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QTimerEvent*
///
void k_urlcomborequester_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QTimerEvent*
///
void k_urlcomborequester_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QTimerEvent* event)
///
void k_urlcomborequester_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QChildEvent*
///
void k_urlcomborequester_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QChildEvent*
///
void k_urlcomborequester_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QChildEvent* event)
///
void k_urlcomborequester_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
void k_urlcomborequester_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param event QEvent*
///
void k_urlcomborequester_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QEvent* event)
///
void k_urlcomborequester_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
void k_urlcomborequester_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
void k_urlcomborequester_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMetaMethod* signal)
///
void k_urlcomborequester_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
void k_urlcomborequester_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
void k_urlcomborequester_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, QMetaMethod* signal)
///
void k_urlcomborequester_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func()
///
void k_urlcomborequester_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func()
///
void k_urlcomborequester_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback void func()
///
void k_urlcomborequester_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func()
///
void k_urlcomborequester_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
bool k_urlcomborequester_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func()
///
void k_urlcomborequester_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
QObject* k_urlcomborequester_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
QObject* k_urlcomborequester_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback QObject* func()
///
void k_urlcomborequester_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
///
int32_t k_urlcomborequester_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func()
///
void k_urlcomborequester_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal const char*
///
int32_t k_urlcomborequester_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal const char*
///
int32_t k_urlcomborequester_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback int32_t func(KUrlComboRequester* self, const char* signal)
///
void k_urlcomborequester_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
bool k_urlcomborequester_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param signal QMetaMethod*
///
bool k_urlcomborequester_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback bool func(KUrlComboRequester* self, QMetaMethod* signal)
///
void k_urlcomborequester_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlcomborequester_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlcomborequester_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboRequester*
/// @param callback double func(KUrlComboRequester* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_urlcomborequester_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlComboRequester*
/// @param callback void func(KUrlComboRequester* self, const char* objectName)
///
void k_urlcomborequester_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlcomborequester.html#dtor.KUrlComboRequester)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlComboRequester*
///
void k_urlcomborequester_delete(void* self);

#endif
