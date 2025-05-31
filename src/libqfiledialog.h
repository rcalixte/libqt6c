#pragma once
#ifndef SRCQT6C_LIBQFILEDIALOG_H
#define SRCQT6C_LIBQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractfileiconprovider.h"
#include "libqabstractitemdelegate.h"
#include "libqabstractproxymodel.h"
#include "libqevent.h"
#include "libqdialog.h"
#include "libqdir.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqsize.h"
#include <string.h>
#include "libqurl.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qfiledialog.html

/// q_filedialog_new constructs a new QFileDialog object.
///
/// ``` QWidget* parent ```
QFileDialog* q_filedialog_new(void* parent);

/// q_filedialog_new2 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, int f ```
QFileDialog* q_filedialog_new2(void* parent, int64_t f);

/// q_filedialog_new3 constructs a new QFileDialog object.
///
///
QFileDialog* q_filedialog_new3();

/// q_filedialog_new4 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption ```
QFileDialog* q_filedialog_new4(void* parent, const char* caption);

/// q_filedialog_new5 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption, const char* directory ```
QFileDialog* q_filedialog_new5(void* parent, const char* caption, const char* directory);

/// q_filedialog_new6 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption, const char* directory, const char* filter ```
QFileDialog* q_filedialog_new6(void* parent, const char* caption, const char* directory, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileDialog* self ```
const QMetaObject* q_filedialog_meta_object(void* self);

/// ``` QFileDialog* self, const char* param1 ```
void* q_filedialog_metacast(void* self, const char* param1);

/// ``` QFileDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedialog_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, enum QMetaObject__Call, int, void*) ```
void q_filedialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFileDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filedialog_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// ``` QFileDialog* self, const char* directory ```
void q_filedialog_set_directory(void* self, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// ``` QFileDialog* self, QDir* directory ```
void q_filedialog_set_directory_with_directory(void* self, void* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directory)
///
/// ``` QFileDialog* self ```
QDir* q_filedialog_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectoryUrl)
///
/// ``` QFileDialog* self, QUrl* directory ```
void q_filedialog_set_directory_url(void* self, void* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrl)
///
/// ``` QFileDialog* self ```
QUrl* q_filedialog_directory_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectFile)
///
/// ``` QFileDialog* self, const char* filename ```
void q_filedialog_select_file(void* self, const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedFiles)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_selected_files(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectUrl)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_select_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedUrls)
///
/// ``` QFileDialog* self ```
libqt_list /* of QUrl* */ q_filedialog_selected_urls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_set_name_filter(void* self, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilters)
///
/// ``` QFileDialog* self, const char* filters[] ```
void q_filedialog_set_name_filters(void* self, const char* filters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#nameFilters)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectNameFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_select_name_filter(void* self, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedMimeTypeFilter)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_selected_mime_type_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedNameFilter)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_selected_name_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setMimeTypeFilters)
///
/// ``` QFileDialog* self, const char* filters[] ```
void q_filedialog_set_mime_type_filters(void* self, const char* filters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#mimeTypeFilters)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_mime_type_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectMimeTypeFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_select_mime_type_filter(void* self, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filter)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setFilter)
///
/// ``` QFileDialog* self, int filters ```
void q_filedialog_set_filter(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setViewMode)
///
/// ``` QFileDialog* self, enum QFileDialog__ViewMode mode ```
void q_filedialog_set_view_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#viewMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setFileMode)
///
/// ``` QFileDialog* self, enum QFileDialog__FileMode mode ```
void q_filedialog_set_file_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#fileMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_file_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setAcceptMode)
///
/// ``` QFileDialog* self, enum QFileDialog__AcceptMode mode ```
void q_filedialog_set_accept_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#acceptMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_accept_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setSidebarUrls)
///
/// ``` QFileDialog* self, libqt_list /* of QUrl* */ urls ```
void q_filedialog_set_sidebar_urls(void* self, libqt_list urls);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#sidebarUrls)
///
/// ``` QFileDialog* self ```
libqt_list /* of QUrl* */ q_filedialog_sidebar_urls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#saveState)
///
/// ``` QFileDialog* self ```
char* q_filedialog_save_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#restoreState)
///
/// ``` QFileDialog* self, const char* state ```
bool q_filedialog_restore_state(void* self, const char* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDefaultSuffix)
///
/// ``` QFileDialog* self, const char* suffix ```
void q_filedialog_set_default_suffix(void* self, const char* suffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#defaultSuffix)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_default_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setHistory)
///
/// ``` QFileDialog* self, const char* paths[] ```
void q_filedialog_set_history(void* self, const char* paths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#history)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_history(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setItemDelegate)
///
/// ``` QFileDialog* self, QAbstractItemDelegate* delegate ```
void q_filedialog_set_item_delegate(void* self, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#itemDelegate)
///
/// ``` QFileDialog* self ```
QAbstractItemDelegate* q_filedialog_item_delegate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setIconProvider)
///
/// ``` QFileDialog* self, QAbstractFileIconProvider* provider ```
void q_filedialog_set_icon_provider(void* self, void* provider);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#iconProvider)
///
/// ``` QFileDialog* self ```
QAbstractFileIconProvider* q_filedialog_icon_provider(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setLabelText)
///
/// ``` QFileDialog* self, enum QFileDialog__DialogLabel label, const char* text ```
void q_filedialog_set_label_text(void* self, int64_t label, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#labelText)
///
/// ``` QFileDialog* self, enum QFileDialog__DialogLabel label ```
const char* q_filedialog_label_text(void* self, int64_t label);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setSupportedSchemes)
///
/// ``` QFileDialog* self, const char* schemes[] ```
void q_filedialog_set_supported_schemes(void* self, const char* schemes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#supportedSchemes)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_supported_schemes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setProxyModel)
///
/// ``` QFileDialog* self, QAbstractProxyModel* model ```
void q_filedialog_set_proxy_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#proxyModel)
///
/// ``` QFileDialog* self ```
QAbstractProxyModel* q_filedialog_proxy_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option ```
void q_filedialog_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#testOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option ```
bool q_filedialog_test_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOptions)
///
/// ``` QFileDialog* self, int options ```
void q_filedialog_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#options)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// ``` QFileDialog* self, bool visible ```
void q_filedialog_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, bool) ```
void q_filedialog_on_set_visible(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// Base class method implementation
///
/// ``` QFileDialog* self, bool visible ```
void q_filedialog_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
///
/// ``` QFileDialog* self, const char* file ```
void q_filedialog_file_selected(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_file_selected(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
///
/// ``` QFileDialog* self, const char* files[] ```
void q_filedialog_files_selected(void* self, const char* files[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*[]) ```
void q_filedialog_on_files_selected(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
///
/// ``` QFileDialog* self, const char* path ```
void q_filedialog_current_changed(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_current_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
///
/// ``` QFileDialog* self, const char* directory ```
void q_filedialog_directory_entered(void* self, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_directory_entered(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_url_selected(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_url_selected(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
///
/// ``` QFileDialog* self, libqt_list /* of QUrl* */ urls ```
void q_filedialog_urls_selected(void* self, libqt_list urls);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, libqt_list /* of QUrl* */ urls ) ```
void q_filedialog_on_urls_selected(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_current_url_changed(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_current_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
///
/// ``` QFileDialog* self, QUrl* directory ```
void q_filedialog_directory_url_entered(void* self, void* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_directory_url_entered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_filter_selected(void* self, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_filter_selected(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
///
const char* q_filedialog_get_open_file_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
///
QUrl* q_filedialog_get_open_file_url();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
///
const char* q_filedialog_get_save_file_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
///
QUrl* q_filedialog_get_save_file_url();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
///
const char* q_filedialog_get_existing_directory();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
///
QUrl* q_filedialog_get_existing_directory_url();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
///
const char** q_filedialog_get_open_file_names();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
///
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls();

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
///
/// ``` const char* fileContent, const char* fileNameHint ```
void q_filedialog_save_file_content(const char* fileContent, const char* fileNameHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, int) ```
void q_filedialog_on_done(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// Base class method implementation
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_qbase_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// ``` QFileDialog* self ```
void q_filedialog_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_accept(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// Base class method implementation
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// ``` QFileDialog* self, QEvent* e ```
void q_filedialog_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QFileDialog* self, QEvent* e ```
void q_filedialog_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filedialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filedialog_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option, bool on ```
void q_filedialog_set_option2(void* self, int64_t option, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_open_file_name1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_open_file_name2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_open_file_name3(void* parent, const char* caption, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char* q_filedialog_get_open_file_name4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_open_file_url1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_open_file_url2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_open_file_url3(void* parent, const char* caption, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
QUrl* q_filedialog_get_open_file_url4(void* parent, const char* caption, void* dir, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_save_file_name1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_save_file_name2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_save_file_name3(void* parent, const char* caption, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char* q_filedialog_get_save_file_name4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_save_file_url1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_save_file_url2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_save_file_url3(void* parent, const char* caption, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
QUrl* q_filedialog_get_save_file_url4(void* parent, const char* caption, void* dir, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_existing_directory1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_existing_directory2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_existing_directory3(void* parent, const char* caption, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption, const char* dir, int options ```
const char* q_filedialog_get_existing_directory4(void* parent, const char* caption, const char* dir, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_existing_directory_url1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_existing_directory_url2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_existing_directory_url3(void* parent, const char* caption, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, int options ```
QUrl* q_filedialog_get_existing_directory_url4(void* parent, const char* caption, void* dir, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, int options, const char* supportedSchemes[] ```
QUrl* q_filedialog_get_existing_directory_url5(void* parent, const char* caption, void* dir, int64_t options, const char* supportedSchemes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent ```
const char** q_filedialog_get_open_file_names1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption ```
const char** q_filedialog_get_open_file_names2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char** q_filedialog_get_open_file_names3(void* parent, const char* caption, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char** q_filedialog_get_open_file_names4(void* parent, const char* caption, const char* dir, const char* filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls2(void* parent, const char* caption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls3(void* parent, const char* caption, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls4(void* parent, const char* caption, void* dir, const char* filter);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QFileDialog* self, bool sizeGripEnabled ```
void q_filedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QFileDialog* self, bool modal ```
void q_filedialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QFileDialog* self, int r ```
void q_filedialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QFileDialog* self, void (*slot)(QDialog*, int) ```
void q_filedialog_on_finished(void* self, void (*slot)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QFileDialog* self ```
void q_filedialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QFileDialog* self, void (*slot)(QDialog*) ```
void q_filedialog_on_accepted(void* self, void (*slot)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QFileDialog* self ```
void q_filedialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QFileDialog* self, void (*slot)(QDialog*) ```
void q_filedialog_on_rejected(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QFileDialog* self ```
void q_filedialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QFileDialog* self ```
QStyle* q_filedialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QFileDialog* self, QStyle* style ```
void q_filedialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QFileDialog* self, enum Qt__WindowModality windowModality ```
void q_filedialog_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QFileDialog* self, QWidget* param1 ```
bool q_filedialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QFileDialog* self, bool enabled ```
void q_filedialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QFileDialog* self, bool disabled ```
void q_filedialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QFileDialog* self, bool windowModified ```
void q_filedialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QFileDialog* self ```
const QRect* q_filedialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QFileDialog* self ```
QPoint* q_filedialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFileDialog* self, QSize* minimumSize ```
void q_filedialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFileDialog* self, int minw, int minh ```
void q_filedialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFileDialog* self, QSize* maximumSize ```
void q_filedialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFileDialog* self, int maxw, int maxh ```
void q_filedialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QFileDialog* self, int minw ```
void q_filedialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QFileDialog* self, int minh ```
void q_filedialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QFileDialog* self, int maxw ```
void q_filedialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QFileDialog* self, int maxh ```
void q_filedialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFileDialog* self, QSize* sizeIncrement ```
void q_filedialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFileDialog* self, QSize* baseSize ```
void q_filedialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFileDialog* self, int basew, int baseh ```
void q_filedialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFileDialog* self, QSize* fixedSize ```
void q_filedialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QFileDialog* self, int w ```
void q_filedialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QFileDialog* self, int h ```
void q_filedialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFileDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_filedialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFileDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_filedialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFileDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_filedialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFileDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_filedialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QFileDialog* self ```
const QPalette* q_filedialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QFileDialog* self, QPalette* palette ```
void q_filedialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QFileDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_filedialog_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QFileDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_filedialog_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QFileDialog* self ```
const QFont* q_filedialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QFileDialog* self, QFont* font ```
void q_filedialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QFileDialog* self ```
QFontMetrics* q_filedialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QFileDialog* self ```
QFontInfo* q_filedialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QFileDialog* self ```
QCursor* q_filedialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QFileDialog* self, QCursor* cursor ```
void q_filedialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QFileDialog* self ```
bool q_filedialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFileDialog* self, QBitmap* mask ```
void q_filedialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFileDialog* self, QRegion* mask ```
void q_filedialog_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QFileDialog* self ```
void q_filedialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target ```
void q_filedialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFileDialog* self ```
QPixmap* q_filedialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QFileDialog* self ```
QGraphicsEffect* q_filedialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QFileDialog* self, QGraphicsEffect* effect ```
void q_filedialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal ```
void q_filedialog_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal ```
void q_filedialog_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QFileDialog* self, const char* windowTitle ```
void q_filedialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QFileDialog* self, const char* styleSheet ```
void q_filedialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QFileDialog* self, QIcon* icon ```
void q_filedialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QFileDialog* self ```
QIcon* q_filedialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QFileDialog* self, const char* windowIconText ```
void q_filedialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QFileDialog* self, const char* windowRole ```
void q_filedialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QFileDialog* self, const char* filePath ```
void q_filedialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QFileDialog* self, double level ```
void q_filedialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QFileDialog* self ```
double q_filedialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QFileDialog* self, const char* toolTip ```
void q_filedialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QFileDialog* self, int msec ```
void q_filedialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QFileDialog* self, const char* statusTip ```
void q_filedialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QFileDialog* self, const char* whatsThis ```
void q_filedialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QFileDialog* self, const char* name ```
void q_filedialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QFileDialog* self, const char* description ```
void q_filedialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QFileDialog* self, enum Qt__LayoutDirection direction ```
void q_filedialog_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QFileDialog* self, QLocale* locale ```
void q_filedialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QFileDialog* self ```
QLocale* q_filedialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFileDialog* self ```
void q_filedialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QFileDialog* self ```
void q_filedialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QFileDialog* self ```
void q_filedialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFileDialog* self, enum Qt__FocusReason reason ```
void q_filedialog_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QFileDialog* self, enum Qt__FocusPolicy policy ```
void q_filedialog_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_filedialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QFileDialog* self, QWidget* focusProxy ```
void q_filedialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QFileDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_filedialog_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFileDialog* self ```
void q_filedialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFileDialog* self, QCursor* param1 ```
void q_filedialog_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QFileDialog* self ```
void q_filedialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QFileDialog* self ```
void q_filedialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QFileDialog* self ```
void q_filedialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFileDialog* self, QKeySequence* key ```
int32_t q_filedialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_filedialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_filedialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QFileDialog* self ```
QGraphicsProxyWidget* q_filedialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self ```
void q_filedialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self ```
void q_filedialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, QRect* param1 ```
void q_filedialog_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, QRegion* param1 ```
void q_filedialog_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, QRect* param1 ```
void q_filedialog_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, QRegion* param1 ```
void q_filedialog_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QFileDialog* self, bool hidden ```
void q_filedialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QFileDialog* self ```
void q_filedialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QFileDialog* self ```
void q_filedialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QFileDialog* self ```
bool q_filedialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QFileDialog* self ```
void q_filedialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QFileDialog* self ```
void q_filedialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFileDialog* self, int x, int y ```
void q_filedialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFileDialog* self, QPoint* param1 ```
void q_filedialog_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFileDialog* self, QSize* param1 ```
void q_filedialog_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFileDialog* self, QRect* geometry ```
void q_filedialog_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QFileDialog* self ```
char* q_filedialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QFileDialog* self, const char* geometry ```
bool q_filedialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QFileDialog* self ```
void q_filedialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QFileDialog* self, QWidget* param1 ```
bool q_filedialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QFileDialog* self, int state ```
void q_filedialog_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QFileDialog* self, int state ```
void q_filedialog_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QFileDialog* self ```
QSizePolicy* q_filedialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFileDialog* self, QSizePolicy* sizePolicy ```
void q_filedialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFileDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_filedialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFileDialog* self, int left, int top, int right, int bottom ```
void q_filedialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFileDialog* self, QMargins* margins ```
void q_filedialog_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QFileDialog* self ```
QMargins* q_filedialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QFileDialog* self ```
QLayout* q_filedialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QFileDialog* self, QLayout* layout ```
void q_filedialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QFileDialog* self ```
void q_filedialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFileDialog* self, QWidget* parent ```
void q_filedialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFileDialog* self, QWidget* parent, int f ```
void q_filedialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFileDialog* self, int dx, int dy ```
void q_filedialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFileDialog* self, int dx, int dy, QRect* param3 ```
void q_filedialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QFileDialog* self ```
bool q_filedialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QFileDialog* self, bool on ```
void q_filedialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QAction* action ```
void q_filedialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QFileDialog* self, libqt_list /* of QAction* */ actions ```
void q_filedialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QFileDialog* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_filedialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QFileDialog* self, QAction* before, QAction* action ```
void q_filedialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QFileDialog* self, QAction* action ```
void q_filedialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QFileDialog* self ```
libqt_list /* of QAction* */ q_filedialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, const char* text ```
QAction* q_filedialog_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QIcon* icon, const char* text ```
QAction* q_filedialog_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_filedialog_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_filedialog_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QFileDialog* self, int typeVal ```
void q_filedialog_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFileDialog* self, enum Qt__WindowType param1 ```
void q_filedialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QFileDialog* self, int typeVal ```
void q_filedialog_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_filedialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFileDialog* self, int x, int y ```
QWidget* q_filedialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFileDialog* self, QPoint* p ```
QWidget* q_filedialog_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1 ```
void q_filedialog_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_filedialog_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QFileDialog* self ```
void q_filedialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QFileDialog* self, QWidget* child ```
bool q_filedialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QFileDialog* self ```
bool q_filedialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QFileDialog* self, bool enabled ```
void q_filedialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QFileDialog* self ```
QBackingStore* q_filedialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QFileDialog* self ```
QWindow* q_filedialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QFileDialog* self ```
QScreen* q_filedialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QFileDialog* self, QScreen* screen ```
void q_filedialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_filedialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFileDialog* self, const char* title ```
void q_filedialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, const char*) ```
void q_filedialog_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFileDialog* self, QIcon* icon ```
void q_filedialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_filedialog_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFileDialog* self, const char* iconText ```
void q_filedialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, const char*) ```
void q_filedialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFileDialog* self, QPoint* pos ```
void q_filedialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_filedialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QFileDialog* self, int hints ```
void q_filedialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_filedialog_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_filedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_filedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_filedialog_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_filedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_filedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFileDialog* self, QRect* rectangle ```
QPixmap* q_filedialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_filedialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFileDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_filedialog_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFileDialog* self, int id, bool enable ```
void q_filedialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFileDialog* self, int id, bool enable ```
void q_filedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFileDialog* self, enum Qt__WindowType param1, bool on ```
void q_filedialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_filedialog_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_filedialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_filedialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileDialog* self, char* name ```
void q_filedialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileDialog* self ```
bool q_filedialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileDialog* self, bool b ```
bool q_filedialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileDialog* self ```
QThread* q_filedialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileDialog* self, QThread* thread ```
void q_filedialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDialog* self, int interval ```
int32_t q_filedialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileDialog* self ```
const libqt_list /* of QObject* */ q_filedialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileDialog* self, QObject* filterObj ```
void q_filedialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileDialog* self, QObject* obj ```
void q_filedialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filedialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filedialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filedialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filedialog_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileDialog* self ```
void q_filedialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileDialog* self ```
void q_filedialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileDialog* self, const char* name, QVariant* value ```
bool q_filedialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileDialog* self, const char* name ```
QVariant* q_filedialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDialog* self ```
QBindingStorage* q_filedialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDialog* self ```
const QBindingStorage* q_filedialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self ```
void q_filedialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self, void (*slot)(QObject*) ```
void q_filedialog_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileDialog* self, const char* classname ```
bool q_filedialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileDialog* self ```
void q_filedialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filedialog_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self, QObject* param1 ```
void q_filedialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self, void (*slot)(QObject*, QObject*) ```
void q_filedialog_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QFileDialog* self ```
bool q_filedialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QFileDialog* self ```
double q_filedialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QFileDialog* self ```
double q_filedialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_filedialog_device_pixel_ratio_f_scale();

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QSize* (*slot)() ```
void q_filedialog_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QSize* (*slot)() ```
void q_filedialog_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_open(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_exec(void* self, int32_t (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_reject(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* param1 ```
void q_filedialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* param1 ```
void q_filedialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QKeyEvent*) ```
void q_filedialog_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QCloseEvent* param1 ```
void q_filedialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QCloseEvent* param1 ```
void q_filedialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QCloseEvent*) ```
void q_filedialog_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QShowEvent* param1 ```
void q_filedialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QShowEvent* param1 ```
void q_filedialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QShowEvent*) ```
void q_filedialog_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QResizeEvent* param1 ```
void q_filedialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QResizeEvent* param1 ```
void q_filedialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QResizeEvent*) ```
void q_filedialog_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QContextMenuEvent* param1 ```
void q_filedialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QContextMenuEvent* param1 ```
void q_filedialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QContextMenuEvent*) ```
void q_filedialog_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QObject* param1, QEvent* param2 ```
bool q_filedialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QObject* param1, QEvent* param2 ```
bool q_filedialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QObject*, QEvent*) ```
void q_filedialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, int param1 ```
int32_t q_filedialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, int param1 ```
int32_t q_filedialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, int) ```
void q_filedialog_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QPaintEngine* q_filedialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QPaintEngine* q_filedialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintEngine* (*slot)() ```
void q_filedialog_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
bool q_filedialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
bool q_filedialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QWheelEvent* event ```
void q_filedialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QWheelEvent* event ```
void q_filedialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QWheelEvent*) ```
void q_filedialog_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* event ```
void q_filedialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* event ```
void q_filedialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QKeyEvent*) ```
void q_filedialog_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QFocusEvent*) ```
void q_filedialog_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QFocusEvent*) ```
void q_filedialog_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEnterEvent* event ```
void q_filedialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEnterEvent* event ```
void q_filedialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEnterEvent*) ```
void q_filedialog_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPaintEvent* event ```
void q_filedialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintEvent* event ```
void q_filedialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QPaintEvent*) ```
void q_filedialog_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMoveEvent* event ```
void q_filedialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMoveEvent* event ```
void q_filedialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMoveEvent*) ```
void q_filedialog_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QTabletEvent* event ```
void q_filedialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QTabletEvent* event ```
void q_filedialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QTabletEvent*) ```
void q_filedialog_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QActionEvent* event ```
void q_filedialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QActionEvent* event ```
void q_filedialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QActionEvent*) ```
void q_filedialog_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragEnterEvent* event ```
void q_filedialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragEnterEvent* event ```
void q_filedialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragEnterEvent*) ```
void q_filedialog_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragMoveEvent* event ```
void q_filedialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragMoveEvent* event ```
void q_filedialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragMoveEvent*) ```
void q_filedialog_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragLeaveEvent* event ```
void q_filedialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragLeaveEvent* event ```
void q_filedialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragLeaveEvent*) ```
void q_filedialog_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDropEvent* event ```
void q_filedialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDropEvent* event ```
void q_filedialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDropEvent*) ```
void q_filedialog_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QHideEvent* event ```
void q_filedialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QHideEvent* event ```
void q_filedialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QHideEvent*) ```
void q_filedialog_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_filedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_filedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, const char*, void*, intptr_t*) ```
void q_filedialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_filedialog_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_filedialog_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_filedialog_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QPainter*) ```
void q_filedialog_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPoint* offset ```
QPaintDevice* q_filedialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPoint* offset ```
QPaintDevice* q_filedialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintDevice* (*slot)(QFileDialog*, QPoint*) ```
void q_filedialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QPainter* q_filedialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QPainter* q_filedialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPainter* (*slot)() ```
void q_filedialog_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QInputMethodEvent* param1 ```
void q_filedialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QInputMethodEvent* param1 ```
void q_filedialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QInputMethodEvent*) ```
void q_filedialog_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_filedialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_filedialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QVariant* (*slot)(QFileDialog*, enum Qt__InputMethodQuery) ```
void q_filedialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, bool next ```
bool q_filedialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, bool next ```
bool q_filedialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, bool) ```
void q_filedialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QTimerEvent* event ```
void q_filedialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QTimerEvent* event ```
void q_filedialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QTimerEvent*) ```
void q_filedialog_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QChildEvent* event ```
void q_filedialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QChildEvent* event ```
void q_filedialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QChildEvent*) ```
void q_filedialog_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QWidget*) ```
void q_filedialog_on_adjust_position(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QObject* (*slot)() ```
void q_filedialog_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, const char* signal ```
int32_t q_filedialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, const char* signal ```
int32_t q_filedialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
bool q_filedialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
bool q_filedialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileDialog* self, void (*slot)(QObject*, const char*) ```
void q_filedialog_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#dtor.QFileDialog)
///
/// Delete this object from C++ memory.
///
/// ``` QFileDialog* self ```
void q_filedialog_delete(void* self);

/// https://doc.qt.io/qt-6/qfiledialog.html#types

typedef enum {
    QFILEDIALOG_VIEWMODE_DETAIL = 0,
    QFILEDIALOG_VIEWMODE_LIST = 1
} QFileDialog__ViewMode;

typedef enum {
    QFILEDIALOG_FILEMODE_ANYFILE = 0,
    QFILEDIALOG_FILEMODE_EXISTINGFILE = 1,
    QFILEDIALOG_FILEMODE_DIRECTORY = 2,
    QFILEDIALOG_FILEMODE_EXISTINGFILES = 3
} QFileDialog__FileMode;

typedef enum {
    QFILEDIALOG_ACCEPTMODE_ACCEPTOPEN = 0,
    QFILEDIALOG_ACCEPTMODE_ACCEPTSAVE = 1
} QFileDialog__AcceptMode;

typedef enum {
    QFILEDIALOG_DIALOGLABEL_LOOKIN = 0,
    QFILEDIALOG_DIALOGLABEL_FILENAME = 1,
    QFILEDIALOG_DIALOGLABEL_FILETYPE = 2,
    QFILEDIALOG_DIALOGLABEL_ACCEPT = 3,
    QFILEDIALOG_DIALOGLABEL_REJECT = 4
} QFileDialog__DialogLabel;

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
