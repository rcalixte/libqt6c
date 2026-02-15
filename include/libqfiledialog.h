#pragma once
#ifndef SRC_QT6C_LIBQFILEDIALOG_H
#define SRC_QT6C_LIBQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new constructs a new QFileDialog object.
///
/// @param parent QWidget*
///
QFileDialog* q_filedialog_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new2 constructs a new QFileDialog object.
///
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
QFileDialog* q_filedialog_new2(void* parent, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new3 constructs a new QFileDialog object.
///
QFileDialog* q_filedialog_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new4 constructs a new QFileDialog object.
///
/// @param parent QWidget*
/// @param caption const char*
///
QFileDialog* q_filedialog_new4(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new5 constructs a new QFileDialog object.
///
/// @param parent QWidget*
/// @param caption const char*
/// @param directory const char*
///
QFileDialog* q_filedialog_new5(void* parent, const char* caption, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html)

/// q_filedialog_new6 constructs a new QFileDialog object.
///
/// @param parent QWidget*
/// @param caption const char*
/// @param directory const char*
/// @param filter const char*
///
QFileDialog* q_filedialog_new6(void* parent, const char* caption, const char* directory, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFileDialog*
///
const QMetaObject* q_filedialog_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback const QMetaObject* func()
///
void q_filedialog_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QFileDialog*
///
const QMetaObject* q_filedialog_qbase_meta_object(void* self);

/// @param self QFileDialog*
/// @param param1 const char*
///
void* q_filedialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback void* func(QFileDialog* self, const char* param1)
///
void q_filedialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFileDialog*
/// @param param1 const char*
///
void* q_filedialog_qbase_metacast(void* self, const char* param1);

/// @param self QFileDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_filedialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback int32_t func(QFileDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_filedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFileDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_filedialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_filedialog_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// @param self QFileDialog*
/// @param directory const char*
///
void q_filedialog_set_directory(void* self, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// @param self QFileDialog*
/// @param directory QDir*
///
void q_filedialog_set_directory2(void* self, void* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directory)
///
/// @param self QFileDialog*
///
QDir* q_filedialog_directory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDirectoryUrl)
///
/// @param self QFileDialog*
/// @param directory QUrl*
///
void q_filedialog_set_directory_url(void* self, void* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrl)
///
/// @param self QFileDialog*
///
QUrl* q_filedialog_directory_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectFile)
///
/// @param self QFileDialog*
/// @param filename const char*
///
void q_filedialog_select_file(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedFiles)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_selected_files(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectUrl)
///
/// @param self QFileDialog*
/// @param url QUrl*
///
void q_filedialog_select_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedUrls)
///
/// @param self QFileDialog*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_selected_urls(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilter)
///
/// @param self QFileDialog*
/// @param filter const char*
///
void q_filedialog_set_name_filter(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilters)
///
/// @param self QFileDialog*
/// @param filters const char**
///
void q_filedialog_set_name_filters(void* self, const char* filters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#nameFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_name_filters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectNameFilter)
///
/// @param self QFileDialog*
/// @param filter const char*
///
void q_filedialog_select_name_filter(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedMimeTypeFilter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_selected_mime_type_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectedNameFilter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_selected_name_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setMimeTypeFilters)
///
/// @param self QFileDialog*
/// @param filters const char**
///
void q_filedialog_set_mime_type_filters(void* self, const char* filters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#mimeTypeFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_mime_type_filters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#selectMimeTypeFilter)
///
/// @param self QFileDialog*
/// @param filter const char*
///
void q_filedialog_select_mime_type_filter(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filter)
///
/// @param self QFileDialog*
///
/// @return flag of enum QDir__Filter
///
int32_t q_filedialog_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setFilter)
///
/// @param self QFileDialog*
/// @param filters flag of enum QDir__Filter
///
void q_filedialog_set_filter(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setViewMode)
///
/// @param self QFileDialog*
/// @param mode enum QFileDialog__ViewMode
///
void q_filedialog_set_view_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#viewMode)
///
/// @param self QFileDialog*
///
/// @return enum QFileDialog__ViewMode
///
int32_t q_filedialog_view_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setFileMode)
///
/// @param self QFileDialog*
/// @param mode enum QFileDialog__FileMode
///
void q_filedialog_set_file_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileMode)
///
/// @param self QFileDialog*
///
/// @return enum QFileDialog__FileMode
///
int32_t q_filedialog_file_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setAcceptMode)
///
/// @param self QFileDialog*
/// @param mode enum QFileDialog__AcceptMode
///
void q_filedialog_set_accept_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#acceptMode)
///
/// @param self QFileDialog*
///
/// @return enum QFileDialog__AcceptMode
///
int32_t q_filedialog_accept_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setSidebarUrls)
///
/// @param self QFileDialog*
/// @param urls libqt_list of QUrl*
///
void q_filedialog_set_sidebar_urls(void* self, libqt_list urls);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#sidebarUrls)
///
/// @param self QFileDialog*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_sidebar_urls(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
char* q_filedialog_save_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#restoreState)
///
/// @param self QFileDialog*
/// @param state char*
///
bool q_filedialog_restore_state(void* self, char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setDefaultSuffix)
///
/// @param self QFileDialog*
/// @param suffix const char*
///
void q_filedialog_set_default_suffix(void* self, const char* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#defaultSuffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_default_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setHistory)
///
/// @param self QFileDialog*
/// @param paths const char**
///
void q_filedialog_set_history(void* self, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#history)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_history(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setItemDelegate)
///
/// @param self QFileDialog*
/// @param delegate QAbstractItemDelegate*
///
void q_filedialog_set_item_delegate(void* self, void* delegate);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#itemDelegate)
///
/// @param self QFileDialog*
///
QAbstractItemDelegate* q_filedialog_item_delegate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setIconProvider)
///
/// @param self QFileDialog*
/// @param provider QAbstractFileIconProvider*
///
void q_filedialog_set_icon_provider(void* self, void* provider);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#iconProvider)
///
/// @param self QFileDialog*
///
QAbstractFileIconProvider* q_filedialog_icon_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setLabelText)
///
/// @param self QFileDialog*
/// @param label enum QFileDialog__DialogLabel
/// @param text const char*
///
void q_filedialog_set_label_text(void* self, int32_t label, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#labelText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
/// @param label enum QFileDialog__DialogLabel
///
const char* q_filedialog_label_text(void* self, int32_t label);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setSupportedSchemes)
///
/// @param self QFileDialog*
/// @param schemes const char**
///
void q_filedialog_set_supported_schemes(void* self, const char* schemes[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#supportedSchemes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_supported_schemes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setProxyModel)
///
/// @param self QFileDialog*
/// @param model QAbstractProxyModel*
///
void q_filedialog_set_proxy_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#proxyModel)
///
/// @param self QFileDialog*
///
QAbstractProxyModel* q_filedialog_proxy_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// @param self QFileDialog*
/// @param option enum QFileDialog__Option
///
void q_filedialog_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#testOption)
///
/// @param self QFileDialog*
/// @param option enum QFileDialog__Option
///
bool q_filedialog_test_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOptions)
///
/// @param self QFileDialog*
/// @param options flag of enum QFileDialog__Option
///
void q_filedialog_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#options)
///
/// @param self QFileDialog*
///
/// @return flag of enum QFileDialog__Option
///
int32_t q_filedialog_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// @param self QFileDialog*
/// @param visible bool
///
void q_filedialog_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, bool visible)
///
void q_filedialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// Base class method implementation
///
/// @param self QFileDialog*
/// @param visible bool
///
void q_filedialog_qbase_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
///
/// @param self QFileDialog*
/// @param file const char*
///
void q_filedialog_file_selected(void* self, const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* file)
///
void q_filedialog_on_file_selected(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
///
/// @param self QFileDialog*
/// @param files const char**
///
void q_filedialog_files_selected(void* self, const char* files[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char** files)
///
void q_filedialog_on_files_selected(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
///
/// @param self QFileDialog*
/// @param path const char*
///
void q_filedialog_current_changed(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* path)
///
void q_filedialog_on_current_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
///
/// @param self QFileDialog*
/// @param directory const char*
///
void q_filedialog_directory_entered(void* self, const char* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* directory)
///
void q_filedialog_on_directory_entered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
///
/// @param self QFileDialog*
/// @param url QUrl*
///
void q_filedialog_url_selected(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QUrl* url)
///
void q_filedialog_on_url_selected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
///
/// @param self QFileDialog*
/// @param urls libqt_list of QUrl*
///
void q_filedialog_urls_selected(void* self, libqt_list urls);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, libqt_list of QUrl* urls)
///
void q_filedialog_on_urls_selected(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
///
/// @param self QFileDialog*
/// @param url QUrl*
///
void q_filedialog_current_url_changed(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QUrl* url)
///
void q_filedialog_on_current_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
///
/// @param self QFileDialog*
/// @param directory QUrl*
///
void q_filedialog_directory_url_entered(void* self, void* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QUrl* directory)
///
void q_filedialog_on_directory_url_entered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
///
/// @param self QFileDialog*
/// @param filter const char*
///
void q_filedialog_filter_selected(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* filter)
///
void q_filedialog_on_filter_selected(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_filedialog_get_open_file_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
QUrl* q_filedialog_get_open_file_url();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_filedialog_get_save_file_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
QUrl* q_filedialog_get_save_file_url();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_filedialog_get_existing_directory();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
QUrl* q_filedialog_get_existing_directory_url();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_filedialog_get_open_file_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_get_open_file_urls();

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
///
/// @param fileContent char*
/// @param fileNameHint const char*
///
void q_filedialog_save_file_content(char* fileContent, const char* fileNameHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// @param self QFileDialog*
/// @param result int
///
void q_filedialog_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, int result)
///
void q_filedialog_on_done(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// Base class method implementation
///
/// @param self QFileDialog*
/// @param result int
///
void q_filedialog_qbase_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// @param self QFileDialog*
///
void q_filedialog_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_accept(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// Base class method implementation
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// @param self QFileDialog*
/// @param e QEvent*
///
void q_filedialog_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QEvent* e)
///
void q_filedialog_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QFileDialog*
/// @param e QEvent*
///
void q_filedialog_qbase_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_filedialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_filedialog_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// @param self QFileDialog*
/// @param option enum QFileDialog__Option
/// @param on bool
///
void q_filedialog_set_option2(void* self, int32_t option, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
///
const char* q_filedialog_get_open_file_name1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
///
const char* q_filedialog_get_open_file_name2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
///
const char* q_filedialog_get_open_file_name3(void* parent, const char* caption, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
/// @param filter const char*
///
const char* q_filedialog_get_open_file_name4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// @param parent QWidget*
///
QUrl* q_filedialog_get_open_file_url1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
///
QUrl* q_filedialog_get_open_file_url2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
///
QUrl* q_filedialog_get_open_file_url3(void* parent, const char* caption, void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
/// @param filter const char*
///
QUrl* q_filedialog_get_open_file_url4(void* parent, const char* caption, void* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
///
const char* q_filedialog_get_save_file_name1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
///
const char* q_filedialog_get_save_file_name2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
///
const char* q_filedialog_get_save_file_name3(void* parent, const char* caption, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
/// @param filter const char*
///
const char* q_filedialog_get_save_file_name4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// @param parent QWidget*
///
QUrl* q_filedialog_get_save_file_url1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
///
QUrl* q_filedialog_get_save_file_url2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
///
QUrl* q_filedialog_get_save_file_url3(void* parent, const char* caption, void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
/// @param filter const char*
///
QUrl* q_filedialog_get_save_file_url4(void* parent, const char* caption, void* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
///
const char* q_filedialog_get_existing_directory1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
///
const char* q_filedialog_get_existing_directory2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
///
const char* q_filedialog_get_existing_directory3(void* parent, const char* caption, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
/// @param options flag of enum QFileDialog__Option
///
const char* q_filedialog_get_existing_directory4(void* parent, const char* caption, const char* dir, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// @param parent QWidget*
///
QUrl* q_filedialog_get_existing_directory_url1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// @param parent QWidget*
/// @param caption const char*
///
QUrl* q_filedialog_get_existing_directory_url2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
///
QUrl* q_filedialog_get_existing_directory_url3(void* parent, const char* caption, void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
/// @param options flag of enum QFileDialog__Option
///
QUrl* q_filedialog_get_existing_directory_url4(void* parent, const char* caption, void* dir, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
/// @param options flag of enum QFileDialog__Option
/// @param supportedSchemes const char**
///
QUrl* q_filedialog_get_existing_directory_url5(void* parent, const char* caption, void* dir, int32_t options, const char* supportedSchemes[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param parent QWidget*
///
const char** q_filedialog_get_open_file_names1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param parent QWidget*
/// @param caption const char*
///
const char** q_filedialog_get_open_file_names2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
///
const char** q_filedialog_get_open_file_names3(void* parent, const char* caption, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir const char*
/// @param filter const char*
///
const char** q_filedialog_get_open_file_names4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// @param parent QWidget*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_get_open_file_urls1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// @param parent QWidget*
/// @param caption const char*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_get_open_file_urls2(void* parent, const char* caption);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_get_open_file_urls3(void* parent, const char* caption, void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// @param parent QWidget*
/// @param caption const char*
/// @param dir QUrl*
/// @param filter const char*
///
/// @return libqt_list of QUrl*
///
libqt_list q_filedialog_get_open_file_urls4(void* parent, const char* caption, void* dir, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
///
/// @param fileContent char*
/// @param fileNameHint const char*
/// @param parent QWidget*
///
void q_filedialog_save_file_content3(char* fileContent, const char* fileNameHint, void* parent);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QFileDialog*
/// @param sizeGripEnabled bool
///
void q_filedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QFileDialog*
/// @param modal bool
///
void q_filedialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QFileDialog*
/// @param r int
///
void q_filedialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QFileDialog*
/// @param result int
///
void q_filedialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, int result)
///
void q_filedialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QFileDialog*
///
void q_filedialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self)
///
void q_filedialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QFileDialog*
///
void q_filedialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self)
///
void q_filedialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QFileDialog*
///
uintptr_t q_filedialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QFileDialog*
///
void q_filedialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QFileDialog*
///
uintptr_t q_filedialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QFileDialog*
///
uintptr_t q_filedialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QFileDialog*
///
QStyle* q_filedialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QFileDialog*
/// @param style QStyle*
///
void q_filedialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QFileDialog*
///
/// @return enum Qt__WindowModality
///
int32_t q_filedialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QFileDialog*
/// @param windowModality enum Qt__WindowModality
///
void q_filedialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
///
bool q_filedialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QFileDialog*
/// @param enabled bool
///
void q_filedialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QFileDialog*
/// @param disabled bool
///
void q_filedialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QFileDialog*
/// @param windowModified bool
///
void q_filedialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QFileDialog*
///
QRect* q_filedialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QFileDialog*
///
const QRect* q_filedialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QFileDialog*
///
QRect* q_filedialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QFileDialog*
///
QPoint* q_filedialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QFileDialog*
///
QRect* q_filedialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QFileDialog*
///
QRect* q_filedialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QFileDialog*
///
QRegion* q_filedialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QFileDialog*
/// @param minimumSize QSize*
///
void q_filedialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QFileDialog*
/// @param minw int
/// @param minh int
///
void q_filedialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QFileDialog*
/// @param maximumSize QSize*
///
void q_filedialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QFileDialog*
/// @param maxw int
/// @param maxh int
///
void q_filedialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QFileDialog*
/// @param minw int
///
void q_filedialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QFileDialog*
/// @param minh int
///
void q_filedialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QFileDialog*
/// @param maxw int
///
void q_filedialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QFileDialog*
/// @param maxh int
///
void q_filedialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QFileDialog*
/// @param sizeIncrement QSize*
///
void q_filedialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QFileDialog*
/// @param w int
/// @param h int
///
void q_filedialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QFileDialog*
///
QSize* q_filedialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QFileDialog*
/// @param baseSize QSize*
///
void q_filedialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QFileDialog*
/// @param basew int
/// @param baseh int
///
void q_filedialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QFileDialog*
/// @param fixedSize QSize*
///
void q_filedialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QFileDialog*
/// @param w int
/// @param h int
///
void q_filedialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QFileDialog*
/// @param w int
///
void q_filedialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QFileDialog*
/// @param h int
///
void q_filedialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QFileDialog*
/// @param param1 QPointF*
///
QPointF* q_filedialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QFileDialog*
/// @param param1 QPoint*
///
QPoint* q_filedialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QFileDialog*
/// @param param1 QPointF*
///
QPointF* q_filedialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QFileDialog*
/// @param param1 QPoint*
///
QPoint* q_filedialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QFileDialog*
/// @param param1 QPointF*
///
QPointF* q_filedialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QFileDialog*
/// @param param1 QPoint*
///
QPoint* q_filedialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QFileDialog*
/// @param param1 QPointF*
///
QPointF* q_filedialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QFileDialog*
/// @param param1 QPoint*
///
QPoint* q_filedialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_filedialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_filedialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_filedialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_filedialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QFileDialog*
///
const QPalette* q_filedialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QFileDialog*
/// @param palette QPalette*
///
void q_filedialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QFileDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_filedialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QFileDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t q_filedialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QFileDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_filedialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QFileDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t q_filedialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QFileDialog*
///
const QFont* q_filedialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QFileDialog*
/// @param font QFont*
///
void q_filedialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QFileDialog*
///
QFontMetrics* q_filedialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QFileDialog*
///
QFontInfo* q_filedialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QFileDialog*
///
QCursor* q_filedialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QFileDialog*
/// @param cursor QCursor*
///
void q_filedialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QFileDialog*
///
void q_filedialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QFileDialog*
/// @param enable bool
///
void q_filedialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QFileDialog*
///
bool q_filedialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QFileDialog*
///
bool q_filedialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QFileDialog*
/// @param enable bool
///
void q_filedialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QFileDialog*
///
bool q_filedialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFileDialog*
/// @param mask QBitmap*
///
void q_filedialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFileDialog*
/// @param mask QRegion*
///
void q_filedialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QFileDialog*
///
QRegion* q_filedialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QFileDialog*
///
void q_filedialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param target QPaintDevice*
///
void q_filedialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param painter QPainter*
///
void q_filedialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QFileDialog*
///
QPixmap* q_filedialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QFileDialog*
///
QGraphicsEffect* q_filedialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QFileDialog*
/// @param effect QGraphicsEffect*
///
void q_filedialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QFileDialog*
/// @param type enum Qt__GestureType
///
void q_filedialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QFileDialog*
/// @param type enum Qt__GestureType
///
void q_filedialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QFileDialog*
/// @param windowTitle const char*
///
void q_filedialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QFileDialog*
/// @param styleSheet const char*
///
void q_filedialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QFileDialog*
/// @param icon QIcon*
///
void q_filedialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QFileDialog*
///
QIcon* q_filedialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QFileDialog*
/// @param windowIconText const char*
///
void q_filedialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QFileDialog*
/// @param windowRole const char*
///
void q_filedialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QFileDialog*
/// @param filePath const char*
///
void q_filedialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QFileDialog*
/// @param level double
///
void q_filedialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QFileDialog*
///
double q_filedialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QFileDialog*
/// @param toolTip const char*
///
void q_filedialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QFileDialog*
/// @param msec int
///
void q_filedialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QFileDialog*
/// @param statusTip const char*
///
void q_filedialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QFileDialog*
/// @param whatsThis const char*
///
void q_filedialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QFileDialog*
/// @param name const char*
///
void q_filedialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QFileDialog*
/// @param description const char*
///
void q_filedialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QFileDialog*
/// @param direction enum Qt__LayoutDirection
///
void q_filedialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QFileDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_filedialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QFileDialog*
///
void q_filedialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QFileDialog*
/// @param locale QLocale*
///
void q_filedialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QFileDialog*
///
QLocale* q_filedialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QFileDialog*
///
void q_filedialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QFileDialog*
///
void q_filedialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QFileDialog*
///
void q_filedialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QFileDialog*
///
void q_filedialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QFileDialog*
/// @param reason enum Qt__FocusReason
///
void q_filedialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QFileDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_filedialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QFileDialog*
/// @param policy enum Qt__FocusPolicy
///
void q_filedialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QFileDialog*
///
bool q_filedialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_filedialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QFileDialog*
/// @param focusProxy QWidget*
///
void q_filedialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QFileDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_filedialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QFileDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_filedialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QFileDialog*
///
void q_filedialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QFileDialog*
/// @param param1 QCursor*
///
void q_filedialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QFileDialog*
///
void q_filedialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QFileDialog*
///
void q_filedialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QFileDialog*
///
void q_filedialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QFileDialog*
/// @param key QKeySequence*
///
int32_t q_filedialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QFileDialog*
/// @param id int
///
void q_filedialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QFileDialog*
/// @param id int
///
void q_filedialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QFileDialog*
/// @param id int
///
void q_filedialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_filedialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_filedialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QFileDialog*
///
bool q_filedialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QFileDialog*
/// @param enable bool
///
void q_filedialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QFileDialog*
///
QGraphicsProxyWidget* q_filedialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFileDialog*
///
void q_filedialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFileDialog*
///
void q_filedialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_filedialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFileDialog*
/// @param param1 QRect*
///
void q_filedialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFileDialog*
/// @param param1 QRegion*
///
void q_filedialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_filedialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFileDialog*
/// @param param1 QRect*
///
void q_filedialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFileDialog*
/// @param param1 QRegion*
///
void q_filedialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QFileDialog*
/// @param hidden bool
///
void q_filedialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QFileDialog*
///
void q_filedialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QFileDialog*
///
void q_filedialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QFileDialog*
///
void q_filedialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QFileDialog*
///
void q_filedialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QFileDialog*
///
void q_filedialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QFileDialog*
///
void q_filedialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QFileDialog*
///
bool q_filedialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QFileDialog*
///
void q_filedialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QFileDialog*
///
void q_filedialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
///
void q_filedialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QFileDialog*
/// @param x int
/// @param y int
///
void q_filedialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QFileDialog*
/// @param param1 QPoint*
///
void q_filedialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QFileDialog*
/// @param w int
/// @param h int
///
void q_filedialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QFileDialog*
/// @param param1 QSize*
///
void q_filedialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QFileDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_filedialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QFileDialog*
/// @param geometry QRect*
///
void q_filedialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
char* q_filedialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QFileDialog*
/// @param geometry char*
///
bool q_filedialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QFileDialog*
///
void q_filedialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QFileDialog*
/// @param param1 QWidget*
///
bool q_filedialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QFileDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_filedialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QFileDialog*
/// @param state flag of enum Qt__WindowState
///
void q_filedialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QFileDialog*
/// @param state flag of enum Qt__WindowState
///
void q_filedialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QFileDialog*
///
QSizePolicy* q_filedialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QFileDialog*
/// @param sizePolicy QSizePolicy*
///
void q_filedialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QFileDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_filedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QFileDialog*
///
QRegion* q_filedialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QFileDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_filedialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QFileDialog*
/// @param margins QMargins*
///
void q_filedialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QFileDialog*
///
QMargins* q_filedialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QFileDialog*
///
QRect* q_filedialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QFileDialog*
///
QLayout* q_filedialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QFileDialog*
/// @param layout QLayout*
///
void q_filedialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QFileDialog*
///
void q_filedialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QFileDialog*
/// @param parent QWidget*
///
void q_filedialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QFileDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_filedialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QFileDialog*
/// @param dx int
/// @param dy int
///
void q_filedialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QFileDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_filedialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QFileDialog*
///
bool q_filedialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QFileDialog*
/// @param on bool
///
void q_filedialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFileDialog*
/// @param action QAction*
///
void q_filedialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QFileDialog*
/// @param actions libqt_list of QAction*
///
void q_filedialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QFileDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_filedialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QFileDialog*
/// @param before QAction*
/// @param action QAction*
///
void q_filedialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QFileDialog*
/// @param action QAction*
///
void q_filedialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QFileDialog*
///
/// @return libqt_list of QAction*
///
libqt_list q_filedialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFileDialog*
/// @param text const char*
///
QAction* q_filedialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFileDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_filedialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFileDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_filedialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFileDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_filedialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QFileDialog*
///
QWidget* q_filedialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QFileDialog*
/// @param type flag of enum Qt__WindowType
///
void q_filedialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QFileDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_filedialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QFileDialog*
/// @param param1 enum Qt__WindowType
///
void q_filedialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QFileDialog*
/// @param type flag of enum Qt__WindowType
///
void q_filedialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QFileDialog*
///
/// @return enum Qt__WindowType
///
int32_t q_filedialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_filedialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFileDialog*
/// @param x int
/// @param y int
///
QWidget* q_filedialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFileDialog*
/// @param p QPoint*
///
QWidget* q_filedialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFileDialog*
/// @param p QPointF*
///
QWidget* q_filedialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QFileDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void q_filedialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QFileDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_filedialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QFileDialog*
///
void q_filedialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QFileDialog*
/// @param child QWidget*
///
bool q_filedialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QFileDialog*
///
bool q_filedialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QFileDialog*
/// @param enabled bool
///
void q_filedialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QFileDialog*
///
QBackingStore* q_filedialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QFileDialog*
///
QWindow* q_filedialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QFileDialog*
///
QScreen* q_filedialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QFileDialog*
/// @param screen QScreen*
///
void q_filedialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_filedialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QFileDialog*
/// @param title const char*
///
void q_filedialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* title)
///
void q_filedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QFileDialog*
/// @param icon QIcon*
///
void q_filedialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QIcon* icon)
///
void q_filedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QFileDialog*
/// @param iconText const char*
///
void q_filedialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* iconText)
///
void q_filedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QFileDialog*
/// @param pos QPoint*
///
void q_filedialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QPoint* pos)
///
void q_filedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QFileDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_filedialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QFileDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_filedialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_filedialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_filedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_filedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_filedialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_filedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFileDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_filedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QFileDialog*
/// @param rectangle QRect*
///
QPixmap* q_filedialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QFileDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_filedialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QFileDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_filedialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QFileDialog*
/// @param id int
/// @param enable bool
///
void q_filedialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QFileDialog*
/// @param id int
/// @param enable bool
///
void q_filedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QFileDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_filedialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QFileDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_filedialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_filedialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_filedialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDialog*
///
const char* q_filedialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFileDialog*
/// @param name const char*
///
void q_filedialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFileDialog*
///
bool q_filedialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFileDialog*
///
bool q_filedialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFileDialog*
/// @param b bool
///
bool q_filedialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFileDialog*
///
QThread* q_filedialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileDialog*
/// @param thread QThread*
///
bool q_filedialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDialog*
/// @param interval int
///
int32_t q_filedialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDialog*
/// @param time int64_t of nanoseconds
///
int32_t q_filedialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileDialog*
/// @param id int
///
void q_filedialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileDialog*
/// @param id enum Qt__TimerId
///
void q_filedialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFileDialog*
///
/// @return libqt_list of QObject*
///
libqt_list q_filedialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFileDialog*
/// @param filterObj QObject*
///
void q_filedialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFileDialog*
/// @param obj QObject*
///
void q_filedialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_filedialog_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_filedialog_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_filedialog_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filedialog_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_filedialog_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
///
bool q_filedialog_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
/// @param receiver QObject*
///
bool q_filedialog_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_filedialog_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFileDialog*
///
void q_filedialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFileDialog*
///
void q_filedialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFileDialog*
/// @param name const char*
/// @param value QVariant*
///
bool q_filedialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFileDialog*
/// @param name const char*
///
QVariant* q_filedialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDialog*
///
const char** q_filedialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileDialog*
///
QBindingStorage* q_filedialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileDialog*
///
const QBindingStorage* q_filedialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDialog*
///
void q_filedialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self)
///
void q_filedialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFileDialog*
///
QObject* q_filedialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFileDialog*
/// @param classname const char*
///
bool q_filedialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFileDialog*
///
void q_filedialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_filedialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_filedialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_filedialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_filedialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_filedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
/// @param signal const char*
///
bool q_filedialog_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_filedialog_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filedialog_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFileDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filedialog_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDialog*
/// @param param1 QObject*
///
void q_filedialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QObject* param1)
///
void q_filedialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QFileDialog*
///
bool q_filedialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QFileDialog*
///
double q_filedialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QFileDialog*
///
double q_filedialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QFileDialog*
///
int32_t q_filedialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_filedialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_filedialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
QSize* q_filedialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
QSize* q_filedialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QSize* func()
///
void q_filedialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
QSize* q_filedialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
QSize* q_filedialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QSize* func()
///
void q_filedialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func()
///
void q_filedialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QKeyEvent*
///
void q_filedialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QKeyEvent*
///
void q_filedialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QKeyEvent* param1)
///
void q_filedialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QCloseEvent*
///
void q_filedialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QCloseEvent*
///
void q_filedialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QCloseEvent* param1)
///
void q_filedialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QShowEvent*
///
void q_filedialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QShowEvent*
///
void q_filedialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QShowEvent* param1)
///
void q_filedialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QResizeEvent*
///
void q_filedialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QResizeEvent*
///
void q_filedialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QResizeEvent* param1)
///
void q_filedialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QContextMenuEvent*
///
void q_filedialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QContextMenuEvent*
///
void q_filedialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QContextMenuEvent* param1)
///
void q_filedialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_filedialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_filedialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func(QFileDialog* self, QObject* param1, QEvent* param2)
///
void q_filedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func()
///
void q_filedialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 int
///
int32_t q_filedialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 int
///
int32_t q_filedialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func(QFileDialog* self, int param1)
///
void q_filedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func()
///
void q_filedialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
QPaintEngine* q_filedialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
QPaintEngine* q_filedialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QPaintEngine* func()
///
void q_filedialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
bool q_filedialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
bool q_filedialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func(QFileDialog* self, QEvent* event)
///
void q_filedialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMouseEvent* event)
///
void q_filedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMouseEvent* event)
///
void q_filedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMouseEvent* event)
///
void q_filedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMouseEvent*
///
void q_filedialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMouseEvent* event)
///
void q_filedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QWheelEvent*
///
void q_filedialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QWheelEvent*
///
void q_filedialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QWheelEvent* event)
///
void q_filedialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QKeyEvent*
///
void q_filedialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QKeyEvent*
///
void q_filedialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QKeyEvent* event)
///
void q_filedialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QFocusEvent*
///
void q_filedialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QFocusEvent*
///
void q_filedialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QFocusEvent* event)
///
void q_filedialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QFocusEvent*
///
void q_filedialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QFocusEvent*
///
void q_filedialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QFocusEvent* event)
///
void q_filedialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEnterEvent*
///
void q_filedialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEnterEvent*
///
void q_filedialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QEnterEvent* event)
///
void q_filedialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
void q_filedialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
void q_filedialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QEvent* event)
///
void q_filedialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QPaintEvent*
///
void q_filedialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QPaintEvent*
///
void q_filedialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QPaintEvent* event)
///
void q_filedialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMoveEvent*
///
void q_filedialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QMoveEvent*
///
void q_filedialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMoveEvent* event)
///
void q_filedialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QTabletEvent*
///
void q_filedialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QTabletEvent*
///
void q_filedialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QTabletEvent* event)
///
void q_filedialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QActionEvent*
///
void q_filedialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QActionEvent*
///
void q_filedialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QActionEvent* event)
///
void q_filedialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragEnterEvent*
///
void q_filedialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragEnterEvent*
///
void q_filedialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QDragEnterEvent* event)
///
void q_filedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragMoveEvent*
///
void q_filedialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragMoveEvent*
///
void q_filedialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QDragMoveEvent* event)
///
void q_filedialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragLeaveEvent*
///
void q_filedialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDragLeaveEvent*
///
void q_filedialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QDragLeaveEvent* event)
///
void q_filedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDropEvent*
///
void q_filedialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QDropEvent*
///
void q_filedialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QDropEvent* event)
///
void q_filedialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QHideEvent*
///
void q_filedialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QHideEvent*
///
void q_filedialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QHideEvent* event)
///
void q_filedialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_filedialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_filedialog_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func(QFileDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_filedialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_filedialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_filedialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func(QFileDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_filedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param painter QPainter*
///
void q_filedialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param painter QPainter*
///
void q_filedialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QPainter* painter)
///
void q_filedialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param offset QPoint*
///
QPaintDevice* q_filedialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param offset QPoint*
///
QPaintDevice* q_filedialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QPaintDevice* func(QFileDialog* self, QPoint* offset)
///
void q_filedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
QPainter* q_filedialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
QPainter* q_filedialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QPainter* func()
///
void q_filedialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QInputMethodEvent*
///
void q_filedialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QInputMethodEvent*
///
void q_filedialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QInputMethodEvent* param1)
///
void q_filedialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_filedialog_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_filedialog_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QVariant* func(QFileDialog* self, enum Qt__InputMethodQuery param1)
///
void q_filedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param next bool
///
bool q_filedialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param next bool
///
bool q_filedialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func(QFileDialog* self, bool next)
///
void q_filedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QTimerEvent*
///
void q_filedialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QTimerEvent*
///
void q_filedialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QTimerEvent* event)
///
void q_filedialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QChildEvent*
///
void q_filedialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QChildEvent*
///
void q_filedialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QChildEvent* event)
///
void q_filedialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
void q_filedialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param event QEvent*
///
void q_filedialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QEvent* event)
///
void q_filedialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
void q_filedialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
void q_filedialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMetaMethod* signal)
///
void q_filedialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
void q_filedialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
void q_filedialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QMetaMethod* signal)
///
void q_filedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QWidget*
///
void q_filedialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param param1 QWidget*
///
void q_filedialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, QWidget* param1)
///
void q_filedialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
void q_filedialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback void func()
///
void q_filedialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func()
///
void q_filedialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
bool q_filedialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func()
///
void q_filedialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
QObject* q_filedialog_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
QObject* q_filedialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback QObject* func()
///
void q_filedialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
///
int32_t q_filedialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func()
///
void q_filedialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param signal const char*
///
int32_t q_filedialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param signal const char*
///
int32_t q_filedialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback int32_t func(QFileDialog* self, const char* signal)
///
void q_filedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
bool q_filedialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param signal QMetaMethod*
///
bool q_filedialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback bool func(QFileDialog* self, QMetaMethod* signal)
///
void q_filedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_filedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_filedialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileDialog*
/// @param callback double func(QFileDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_filedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileDialog*
/// @param callback void func(QFileDialog* self, const char* objectName)
///
void q_filedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#dtor.QFileDialog)
///
/// Delete this object from C++ memory.
///
/// @param self QFileDialog*
///
void q_filedialog_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)

typedef enum {
    QFILEDIALOG_VIEWMODE_DETAIL = 0,
    QFILEDIALOG_VIEWMODE_LIST = 1
} QFileDialog__ViewMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)

typedef enum {
    QFILEDIALOG_FILEMODE_ANYFILE = 0,
    QFILEDIALOG_FILEMODE_EXISTINGFILE = 1,
    QFILEDIALOG_FILEMODE_DIRECTORY = 2,
    QFILEDIALOG_FILEMODE_EXISTINGFILES = 3
} QFileDialog__FileMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)

typedef enum {
    QFILEDIALOG_ACCEPTMODE_ACCEPTOPEN = 0,
    QFILEDIALOG_ACCEPTMODE_ACCEPTSAVE = 1
} QFileDialog__AcceptMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)

typedef enum {
    QFILEDIALOG_DIALOGLABEL_LOOKIN = 0,
    QFILEDIALOG_DIALOGLABEL_FILENAME = 1,
    QFILEDIALOG_DIALOGLABEL_FILETYPE = 2,
    QFILEDIALOG_DIALOGLABEL_ACCEPT = 3,
    QFILEDIALOG_DIALOGLABEL_REJECT = 4
} QFileDialog__DialogLabel;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledialog.html#public-types)

typedef enum {
    QFILEDIALOG_OPTION_SHOWDIRSONLY = 1,
    QFILEDIALOG_OPTION_DONTRESOLVESYMLINKS = 2,
    QFILEDIALOG_OPTION_DONTCONFIRMOVERWRITE = 4,
    QFILEDIALOG_OPTION_DONTUSENATIVEDIALOG = 8,
    QFILEDIALOG_OPTION_READONLY = 16,
    QFILEDIALOG_OPTION_HIDENAMEFILTERDETAILS = 32,
    QFILEDIALOG_OPTION_DONTUSECUSTOMDIRECTORYICONS = 64
} QFileDialog__Option;

#endif
