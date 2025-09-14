#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKENCODINGFILEDIALOG_H
#define SRC_EXTRAS_KIOQT6C_LIBKENCODINGFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kencodingfiledialog.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KEncodingFileDialog*
const QMetaObject* k_encodingfiledialog_meta_object(void* self);

/// @param self KEncodingFileDialog*
/// @param param1 const char*
void* k_encodingfiledialog_metacast(void* self, const char* param1);

/// @param self KEncodingFileDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_encodingfiledialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_encodingfiledialog_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding();

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#sizeHint)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_encodingfiledialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_encodingfiledialog_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_name_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenFileNamesAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_file_names_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_url_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getOpenUrlsAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_open_urls_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveFileNameAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_file_name_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
/// @param encoding const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding1(const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding2(const char* encoding, void* startDir);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding3(const char* encoding, void* startDir, const char* filter);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding4(const char* encoding, void* startDir, const char* filter, void* parent);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog.html#getSaveUrlAndEncoding)
///
/// @param encoding const char*
/// @param startDir QUrl*
/// @param filter const char*
/// @param parent QWidget*
/// @param title const char*
KEncodingFileDialog__Result* k_encodingfiledialog_get_save_url_and_encoding5(const char* encoding, void* startDir, const char* filter, void* parent, const char* title);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// @param self KEncodingFileDialog*
/// @param visible bool
void k_encodingfiledialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KEncodingFileDialog*
/// @param sizeGripEnabled bool
void k_encodingfiledialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KEncodingFileDialog*
/// @param modal bool
void k_encodingfiledialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KEncodingFileDialog*
/// @param r int
void k_encodingfiledialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KEncodingFileDialog*
/// @param result int
void k_encodingfiledialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, int result)
void k_encodingfiledialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self)
void k_encodingfiledialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self)
void k_encodingfiledialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// @param self KEncodingFileDialog*
/// @param param1 int
void k_encodingfiledialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_reject(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KEncodingFileDialog*
uintptr_t k_encodingfiledialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KEncodingFileDialog*
uintptr_t k_encodingfiledialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KEncodingFileDialog*
uintptr_t k_encodingfiledialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KEncodingFileDialog*
QStyle* k_encodingfiledialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KEncodingFileDialog*
/// @param style QStyle*
void k_encodingfiledialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KEncodingFileDialog*
///
/// @return enum Qt__WindowModality
int32_t k_encodingfiledialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KEncodingFileDialog*
/// @param windowModality enum Qt__WindowModality
void k_encodingfiledialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
bool k_encodingfiledialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KEncodingFileDialog*
/// @param enabled bool
void k_encodingfiledialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KEncodingFileDialog*
/// @param disabled bool
void k_encodingfiledialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KEncodingFileDialog*
/// @param windowModified bool
void k_encodingfiledialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KEncodingFileDialog*
QRect* k_encodingfiledialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KEncodingFileDialog*
const QRect* k_encodingfiledialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KEncodingFileDialog*
QRect* k_encodingfiledialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KEncodingFileDialog*
QPoint* k_encodingfiledialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KEncodingFileDialog*
QRect* k_encodingfiledialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KEncodingFileDialog*
QRect* k_encodingfiledialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KEncodingFileDialog*
QRegion* k_encodingfiledialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KEncodingFileDialog*
/// @param minimumSize QSize*
void k_encodingfiledialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KEncodingFileDialog*
/// @param minw int
/// @param minh int
void k_encodingfiledialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KEncodingFileDialog*
/// @param maximumSize QSize*
void k_encodingfiledialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KEncodingFileDialog*
/// @param maxw int
/// @param maxh int
void k_encodingfiledialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KEncodingFileDialog*
/// @param minw int
void k_encodingfiledialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KEncodingFileDialog*
/// @param minh int
void k_encodingfiledialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KEncodingFileDialog*
/// @param maxw int
void k_encodingfiledialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KEncodingFileDialog*
/// @param maxh int
void k_encodingfiledialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KEncodingFileDialog*
/// @param sizeIncrement QSize*
void k_encodingfiledialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KEncodingFileDialog*
/// @param w int
/// @param h int
void k_encodingfiledialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KEncodingFileDialog*
QSize* k_encodingfiledialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KEncodingFileDialog*
/// @param baseSize QSize*
void k_encodingfiledialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KEncodingFileDialog*
/// @param basew int
/// @param baseh int
void k_encodingfiledialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KEncodingFileDialog*
/// @param fixedSize QSize*
void k_encodingfiledialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KEncodingFileDialog*
/// @param w int
/// @param h int
void k_encodingfiledialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KEncodingFileDialog*
/// @param w int
void k_encodingfiledialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KEncodingFileDialog*
/// @param h int
void k_encodingfiledialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPointF*
QPointF* k_encodingfiledialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPoint*
QPoint* k_encodingfiledialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPointF*
QPointF* k_encodingfiledialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPoint*
QPoint* k_encodingfiledialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPointF*
QPointF* k_encodingfiledialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPoint*
QPoint* k_encodingfiledialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPointF*
QPointF* k_encodingfiledialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPoint*
QPoint* k_encodingfiledialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_encodingfiledialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_encodingfiledialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_encodingfiledialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_encodingfiledialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KEncodingFileDialog*
const QPalette* k_encodingfiledialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KEncodingFileDialog*
/// @param palette QPalette*
void k_encodingfiledialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KEncodingFileDialog*
/// @param backgroundRole enum QPalette__ColorRole
void k_encodingfiledialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KEncodingFileDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_encodingfiledialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KEncodingFileDialog*
/// @param foregroundRole enum QPalette__ColorRole
void k_encodingfiledialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KEncodingFileDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_encodingfiledialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KEncodingFileDialog*
const QFont* k_encodingfiledialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KEncodingFileDialog*
/// @param font QFont*
void k_encodingfiledialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KEncodingFileDialog*
QFontMetrics* k_encodingfiledialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KEncodingFileDialog*
QFontInfo* k_encodingfiledialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KEncodingFileDialog*
QCursor* k_encodingfiledialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KEncodingFileDialog*
/// @param cursor QCursor*
void k_encodingfiledialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KEncodingFileDialog*
/// @param enable bool
void k_encodingfiledialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KEncodingFileDialog*
/// @param enable bool
void k_encodingfiledialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KEncodingFileDialog*
/// @param mask QBitmap*
void k_encodingfiledialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KEncodingFileDialog*
/// @param mask QRegion*
void k_encodingfiledialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KEncodingFileDialog*
QRegion* k_encodingfiledialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param target QPaintDevice*
void k_encodingfiledialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param painter QPainter*
void k_encodingfiledialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KEncodingFileDialog*
QPixmap* k_encodingfiledialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KEncodingFileDialog*
QGraphicsEffect* k_encodingfiledialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KEncodingFileDialog*
/// @param effect QGraphicsEffect*
void k_encodingfiledialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KEncodingFileDialog*
/// @param typeVal enum Qt__GestureType
void k_encodingfiledialog_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KEncodingFileDialog*
/// @param typeVal enum Qt__GestureType
void k_encodingfiledialog_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KEncodingFileDialog*
/// @param windowTitle const char*
void k_encodingfiledialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KEncodingFileDialog*
/// @param styleSheet const char*
void k_encodingfiledialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KEncodingFileDialog*
/// @param icon QIcon*
void k_encodingfiledialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KEncodingFileDialog*
QIcon* k_encodingfiledialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KEncodingFileDialog*
/// @param windowIconText const char*
void k_encodingfiledialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KEncodingFileDialog*
/// @param windowRole const char*
void k_encodingfiledialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KEncodingFileDialog*
/// @param filePath const char*
void k_encodingfiledialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KEncodingFileDialog*
/// @param level double
void k_encodingfiledialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KEncodingFileDialog*
double k_encodingfiledialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KEncodingFileDialog*
/// @param toolTip const char*
void k_encodingfiledialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KEncodingFileDialog*
/// @param msec int
void k_encodingfiledialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KEncodingFileDialog*
/// @param statusTip const char*
void k_encodingfiledialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KEncodingFileDialog*
/// @param whatsThis const char*
void k_encodingfiledialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KEncodingFileDialog*
/// @param name const char*
void k_encodingfiledialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KEncodingFileDialog*
/// @param description const char*
void k_encodingfiledialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KEncodingFileDialog*
/// @param direction enum Qt__LayoutDirection
void k_encodingfiledialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KEncodingFileDialog*
///
/// @return enum Qt__LayoutDirection
int32_t k_encodingfiledialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KEncodingFileDialog*
/// @param locale QLocale*
void k_encodingfiledialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KEncodingFileDialog*
QLocale* k_encodingfiledialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KEncodingFileDialog*
/// @param reason enum Qt__FocusReason
void k_encodingfiledialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KEncodingFileDialog*
///
/// @return enum Qt__FocusPolicy
int32_t k_encodingfiledialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KEncodingFileDialog*
/// @param policy enum Qt__FocusPolicy
void k_encodingfiledialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_encodingfiledialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KEncodingFileDialog*
/// @param focusProxy QWidget*
void k_encodingfiledialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KEncodingFileDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_encodingfiledialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KEncodingFileDialog*
/// @param policy enum Qt__ContextMenuPolicy
void k_encodingfiledialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KEncodingFileDialog*
/// @param param1 QCursor*
void k_encodingfiledialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KEncodingFileDialog*
/// @param key QKeySequence*
int32_t k_encodingfiledialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KEncodingFileDialog*
/// @param id int
void k_encodingfiledialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KEncodingFileDialog*
/// @param id int
void k_encodingfiledialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KEncodingFileDialog*
/// @param id int
void k_encodingfiledialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_encodingfiledialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_encodingfiledialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KEncodingFileDialog*
/// @param enable bool
void k_encodingfiledialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KEncodingFileDialog*
QGraphicsProxyWidget* k_encodingfiledialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KEncodingFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_encodingfiledialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KEncodingFileDialog*
/// @param param1 QRect*
void k_encodingfiledialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KEncodingFileDialog*
/// @param param1 QRegion*
void k_encodingfiledialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KEncodingFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_encodingfiledialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KEncodingFileDialog*
/// @param param1 QRect*
void k_encodingfiledialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KEncodingFileDialog*
/// @param param1 QRegion*
void k_encodingfiledialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KEncodingFileDialog*
/// @param hidden bool
void k_encodingfiledialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
void k_encodingfiledialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KEncodingFileDialog*
/// @param x int
/// @param y int
void k_encodingfiledialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KEncodingFileDialog*
/// @param param1 QPoint*
void k_encodingfiledialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KEncodingFileDialog*
/// @param w int
/// @param h int
void k_encodingfiledialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KEncodingFileDialog*
/// @param param1 QSize*
void k_encodingfiledialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KEncodingFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_encodingfiledialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KEncodingFileDialog*
/// @param geometry QRect*
void k_encodingfiledialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
char* k_encodingfiledialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KEncodingFileDialog*
/// @param geometry const char*
bool k_encodingfiledialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KEncodingFileDialog*
/// @param param1 QWidget*
bool k_encodingfiledialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KEncodingFileDialog*
///
/// @return flag of enum Qt__WindowState
int32_t k_encodingfiledialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KEncodingFileDialog*
/// @param state flag of enum Qt__WindowState
void k_encodingfiledialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KEncodingFileDialog*
/// @param state flag of enum Qt__WindowState
void k_encodingfiledialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KEncodingFileDialog*
QSizePolicy* k_encodingfiledialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KEncodingFileDialog*
/// @param sizePolicy QSizePolicy*
void k_encodingfiledialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KEncodingFileDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_encodingfiledialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self KEncodingFileDialog*
/// @param param1 int
int32_t k_encodingfiledialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KEncodingFileDialog*
QRegion* k_encodingfiledialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KEncodingFileDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_encodingfiledialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KEncodingFileDialog*
/// @param margins QMargins*
void k_encodingfiledialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KEncodingFileDialog*
QMargins* k_encodingfiledialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KEncodingFileDialog*
QRect* k_encodingfiledialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KEncodingFileDialog*
QLayout* k_encodingfiledialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KEncodingFileDialog*
/// @param layout QLayout*
void k_encodingfiledialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KEncodingFileDialog*
/// @param parent QWidget*
void k_encodingfiledialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KEncodingFileDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_encodingfiledialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KEncodingFileDialog*
/// @param dx int
/// @param dy int
void k_encodingfiledialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KEncodingFileDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_encodingfiledialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KEncodingFileDialog*
/// @param on bool
void k_encodingfiledialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KEncodingFileDialog*
/// @param action QAction*
void k_encodingfiledialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KEncodingFileDialog*
/// @param actions libqt_list /* of QAction* */
void k_encodingfiledialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KEncodingFileDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_encodingfiledialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KEncodingFileDialog*
/// @param before QAction*
/// @param action QAction*
void k_encodingfiledialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KEncodingFileDialog*
/// @param action QAction*
void k_encodingfiledialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KEncodingFileDialog*
libqt_list /* of QAction* */ k_encodingfiledialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KEncodingFileDialog*
/// @param text const char*
QAction* k_encodingfiledialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KEncodingFileDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* k_encodingfiledialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KEncodingFileDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_encodingfiledialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KEncodingFileDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_encodingfiledialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KEncodingFileDialog*
QWidget* k_encodingfiledialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KEncodingFileDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_encodingfiledialog_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KEncodingFileDialog*
///
/// @return flag of enum Qt__WindowType
int64_t k_encodingfiledialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__WindowType
void k_encodingfiledialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KEncodingFileDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_encodingfiledialog_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KEncodingFileDialog*
///
/// @return enum Qt__WindowType
int64_t k_encodingfiledialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_encodingfiledialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KEncodingFileDialog*
/// @param x int
/// @param y int
QWidget* k_encodingfiledialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KEncodingFileDialog*
/// @param p QPoint*
QWidget* k_encodingfiledialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KEncodingFileDialog*
/// @param p QPointF*
QWidget* k_encodingfiledialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__WidgetAttribute
void k_encodingfiledialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__WidgetAttribute
bool k_encodingfiledialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self KEncodingFileDialog*
QPaintEngine* k_encodingfiledialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KEncodingFileDialog*
/// @param child QWidget*
bool k_encodingfiledialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KEncodingFileDialog*
/// @param enabled bool
void k_encodingfiledialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KEncodingFileDialog*
QBackingStore* k_encodingfiledialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KEncodingFileDialog*
QWindow* k_encodingfiledialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KEncodingFileDialog*
QScreen* k_encodingfiledialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KEncodingFileDialog*
/// @param screen QScreen*
void k_encodingfiledialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_encodingfiledialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KEncodingFileDialog*
/// @param title const char*
void k_encodingfiledialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, const char* title)
void k_encodingfiledialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KEncodingFileDialog*
/// @param icon QIcon*
void k_encodingfiledialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, QIcon* icon)
void k_encodingfiledialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KEncodingFileDialog*
/// @param iconText const char*
void k_encodingfiledialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, const char* iconText)
void k_encodingfiledialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KEncodingFileDialog*
/// @param pos QPoint*
void k_encodingfiledialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, QPoint* pos)
void k_encodingfiledialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_encodingfiledialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KEncodingFileDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_encodingfiledialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KEncodingFileDialog*
/// @param hints flag of enum Qt__InputMethodHint
void k_encodingfiledialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_encodingfiledialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_encodingfiledialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_encodingfiledialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_encodingfiledialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_encodingfiledialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KEncodingFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_encodingfiledialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KEncodingFileDialog*
/// @param rectangle QRect*
QPixmap* k_encodingfiledialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KEncodingFileDialog*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_encodingfiledialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KEncodingFileDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_encodingfiledialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KEncodingFileDialog*
/// @param id int
/// @param enable bool
void k_encodingfiledialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KEncodingFileDialog*
/// @param id int
/// @param enable bool
void k_encodingfiledialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_encodingfiledialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KEncodingFileDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_encodingfiledialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_encodingfiledialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_encodingfiledialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char* k_encodingfiledialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KEncodingFileDialog*
/// @param name char*
void k_encodingfiledialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KEncodingFileDialog*
/// @param b bool
bool k_encodingfiledialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KEncodingFileDialog*
QThread* k_encodingfiledialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KEncodingFileDialog*
/// @param thread QThread*
bool k_encodingfiledialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KEncodingFileDialog*
/// @param interval int
int32_t k_encodingfiledialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KEncodingFileDialog*
/// @param id int
void k_encodingfiledialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KEncodingFileDialog*
/// @param id enum Qt__TimerId
void k_encodingfiledialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KEncodingFileDialog*
libqt_list /* of QObject* */ k_encodingfiledialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KEncodingFileDialog*
/// @param filterObj QObject*
void k_encodingfiledialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KEncodingFileDialog*
/// @param obj QObject*
void k_encodingfiledialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_encodingfiledialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KEncodingFileDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_encodingfiledialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_encodingfiledialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_encodingfiledialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KEncodingFileDialog*
/// @param name const char*
/// @param value QVariant*
bool k_encodingfiledialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KEncodingFileDialog*
/// @param name const char*
QVariant* k_encodingfiledialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog*
const char** k_encodingfiledialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KEncodingFileDialog*
QBindingStorage* k_encodingfiledialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KEncodingFileDialog*
const QBindingStorage* k_encodingfiledialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self)
void k_encodingfiledialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KEncodingFileDialog*
QObject* k_encodingfiledialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KEncodingFileDialog*
/// @param classname const char*
bool k_encodingfiledialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KEncodingFileDialog*
void k_encodingfiledialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KEncodingFileDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_encodingfiledialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KEncodingFileDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_encodingfiledialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_encodingfiledialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KEncodingFileDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_encodingfiledialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEncodingFileDialog*
/// @param param1 QObject*
void k_encodingfiledialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, QObject* param1)
void k_encodingfiledialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KEncodingFileDialog*
bool k_encodingfiledialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KEncodingFileDialog*
double k_encodingfiledialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KEncodingFileDialog*
double k_encodingfiledialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KEncodingFileDialog*
int32_t k_encodingfiledialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_encodingfiledialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_encodingfiledialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KEncodingFileDialog*
/// @param callback void func(KEncodingFileDialog* self, const char* objectName)
void k_encodingfiledialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// https://api.kde.org/kencodingfiledialog-result.html

/// k_encodingfiledialog__result_new constructs a new KEncodingFileDialog::Result object.
///
/// @param param1 KEncodingFileDialog__Result*
KEncodingFileDialog__Result* k_encodingfiledialog__result_new(void* param1);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#fileNames-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog__Result*
const char** k_encodingfiledialog__result_file_names(void* self);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#fileNames-var)
///
/// @param self KEncodingFileDialog__Result*
/// @param fileNames const char**
void k_encodingfiledialog__result_set_file_names(void* self, const char* fileNames[]);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#URLs-var)
///
/// @param self KEncodingFileDialog__Result*
libqt_list /* of QUrl* */ k_encodingfiledialog__result_u_r_ls(void* self);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#URLs-var)
///
/// @param self KEncodingFileDialog__Result*
/// @param URLs libqt_list /* of QUrl* */
void k_encodingfiledialog__result_set_u_r_ls(void* self, libqt_list URLs);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#encoding-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingFileDialog__Result*
const char* k_encodingfiledialog__result_encoding(void* self);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#encoding-var)
///
/// @param self KEncodingFileDialog__Result*
/// @param encoding const char*
void k_encodingfiledialog__result_set_encoding(void* self, const char* encoding);

/// [Qt documentation](https://api.kde.org/kencodingfiledialog-result.html#operator-eq)
///
/// @param self KEncodingFileDialog__Result*
/// @param param1 KEncodingFileDialog__Result*
void k_encodingfiledialog__result_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KEncodingFileDialog__Result*
void k_encodingfiledialog__result_delete(void* self);

#endif
