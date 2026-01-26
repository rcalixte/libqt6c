#include "libqabstractfileiconprovider.hpp"
#include "libqabstractitemdelegate.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqdialog.hpp"
#include "libqdir.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqfiledialog.hpp"
#include "libqfiledialog.h"

QFileDialog* q_filedialog_new(void* parent) {
    return QFileDialog_new((QWidget*)parent);
}

QFileDialog* q_filedialog_new2(void* parent, int32_t f) {
    return QFileDialog_new2((QWidget*)parent, f);
}

QFileDialog* q_filedialog_new3() {
    return QFileDialog_new3();
}

QFileDialog* q_filedialog_new4(void* parent, const char* caption) {
    return QFileDialog_new4((QWidget*)parent, qstring(caption));
}

QFileDialog* q_filedialog_new5(void* parent, const char* caption, const char* directory) {
    return QFileDialog_new5((QWidget*)parent, qstring(caption), qstring(directory));
}

QFileDialog* q_filedialog_new6(void* parent, const char* caption, const char* directory, const char* filter) {
    return QFileDialog_new6((QWidget*)parent, qstring(caption), qstring(directory), qstring(filter));
}

const QMetaObject* q_filedialog_meta_object(void* self) {
    return QFileDialog_MetaObject((QFileDialog*)self);
}

void q_filedialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QFileDialog_OnMetaObject((QFileDialog*)self, (intptr_t)callback);
}

const QMetaObject* q_filedialog_qbase_meta_object(void* self) {
    return QFileDialog_QBaseMetaObject((QFileDialog*)self);
}

void* q_filedialog_metacast(void* self, const char* param1) {
    return QFileDialog_Metacast((QFileDialog*)self, param1);
}

void q_filedialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QFileDialog_OnMetacast((QFileDialog*)self, (intptr_t)callback);
}

void* q_filedialog_qbase_metacast(void* self, const char* param1) {
    return QFileDialog_QBaseMetacast((QFileDialog*)self, param1);
}

int32_t q_filedialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileDialog_Metacall((QFileDialog*)self, param1, param2, param3);
}

void q_filedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFileDialog_OnMetacall((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileDialog_QBaseMetacall((QFileDialog*)self, param1, param2, param3);
}

const char* q_filedialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_directory(void* self, const char* directory) {
    QFileDialog_SetDirectory((QFileDialog*)self, qstring(directory));
}

void q_filedialog_set_directory2(void* self, void* directory) {
    QFileDialog_SetDirectory2((QFileDialog*)self, (QDir*)directory);
}

QDir* q_filedialog_directory(void* self) {
    return QFileDialog_Directory((QFileDialog*)self);
}

void q_filedialog_set_directory_url(void* self, void* directory) {
    QFileDialog_SetDirectoryUrl((QFileDialog*)self, (QUrl*)directory);
}

QUrl* q_filedialog_directory_url(void* self) {
    return QFileDialog_DirectoryUrl((QFileDialog*)self);
}

void q_filedialog_select_file(void* self, const char* filename) {
    QFileDialog_SelectFile((QFileDialog*)self, qstring(filename));
}

const char** q_filedialog_selected_files(void* self) {
    libqt_list _arr = QFileDialog_SelectedFiles((QFileDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_selected_files\n");
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

void q_filedialog_select_url(void* self, void* url) {
    QFileDialog_SelectUrl((QFileDialog*)self, (QUrl*)url);
}

libqt_list /* of QUrl* */ q_filedialog_selected_urls(void* self) {
    libqt_list _arr = QFileDialog_SelectedUrls((QFileDialog*)self);
    return _arr;
}

void q_filedialog_set_name_filter(void* self, const char* filter) {
    QFileDialog_SetNameFilter((QFileDialog*)self, qstring(filter));
}

void q_filedialog_set_name_filters(void* self, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_set_name_filters\n");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    QFileDialog_SetNameFilters((QFileDialog*)self, filters_list);
    free(filters_qstr);
}

const char** q_filedialog_name_filters(void* self) {
    libqt_list _arr = QFileDialog_NameFilters((QFileDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_name_filters\n");
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

void q_filedialog_select_name_filter(void* self, const char* filter) {
    QFileDialog_SelectNameFilter((QFileDialog*)self, qstring(filter));
}

const char* q_filedialog_selected_mime_type_filter(void* self) {
    libqt_string _str = QFileDialog_SelectedMimeTypeFilter((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_selected_name_filter(void* self) {
    libqt_string _str = QFileDialog_SelectedNameFilter((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_mime_type_filters(void* self, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_set_mime_type_filters\n");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    QFileDialog_SetMimeTypeFilters((QFileDialog*)self, filters_list);
    free(filters_qstr);
}

const char** q_filedialog_mime_type_filters(void* self) {
    libqt_list _arr = QFileDialog_MimeTypeFilters((QFileDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_mime_type_filters\n");
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

void q_filedialog_select_mime_type_filter(void* self, const char* filter) {
    QFileDialog_SelectMimeTypeFilter((QFileDialog*)self, qstring(filter));
}

int32_t q_filedialog_filter(void* self) {
    return QFileDialog_Filter((QFileDialog*)self);
}

void q_filedialog_set_filter(void* self, int32_t filters) {
    QFileDialog_SetFilter((QFileDialog*)self, filters);
}

void q_filedialog_set_view_mode(void* self, int32_t mode) {
    QFileDialog_SetViewMode((QFileDialog*)self, mode);
}

int32_t q_filedialog_view_mode(void* self) {
    return QFileDialog_ViewMode((QFileDialog*)self);
}

void q_filedialog_set_file_mode(void* self, int32_t mode) {
    QFileDialog_SetFileMode((QFileDialog*)self, mode);
}

int32_t q_filedialog_file_mode(void* self) {
    return QFileDialog_FileMode((QFileDialog*)self);
}

void q_filedialog_set_accept_mode(void* self, int32_t mode) {
    QFileDialog_SetAcceptMode((QFileDialog*)self, mode);
}

int32_t q_filedialog_accept_mode(void* self) {
    return QFileDialog_AcceptMode((QFileDialog*)self);
}

void q_filedialog_set_sidebar_urls(void* self, libqt_list /* of QUrl* */ urls) {
    QFileDialog_SetSidebarUrls((QFileDialog*)self, urls);
}

libqt_list /* of QUrl* */ q_filedialog_sidebar_urls(void* self) {
    libqt_list _arr = QFileDialog_SidebarUrls((QFileDialog*)self);
    return _arr;
}

char* q_filedialog_save_state(void* self) {
    libqt_string _str = QFileDialog_SaveState((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_filedialog_restore_state(void* self, const char* state) {
    return QFileDialog_RestoreState((QFileDialog*)self, qstring(state));
}

void q_filedialog_set_default_suffix(void* self, const char* suffix) {
    QFileDialog_SetDefaultSuffix((QFileDialog*)self, qstring(suffix));
}

const char* q_filedialog_default_suffix(void* self) {
    libqt_string _str = QFileDialog_DefaultSuffix((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_history(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_set_history\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i) {
        paths_qstr[i] = qstring(paths[i]);
    }
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QFileDialog_SetHistory((QFileDialog*)self, paths_list);
    free(paths_qstr);
}

const char** q_filedialog_history(void* self) {
    libqt_list _arr = QFileDialog_History((QFileDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_history\n");
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

void q_filedialog_set_item_delegate(void* self, void* delegate) {
    QFileDialog_SetItemDelegate((QFileDialog*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_filedialog_item_delegate(void* self) {
    return QFileDialog_ItemDelegate((QFileDialog*)self);
}

void q_filedialog_set_icon_provider(void* self, void* provider) {
    QFileDialog_SetIconProvider((QFileDialog*)self, (QAbstractFileIconProvider*)provider);
}

QAbstractFileIconProvider* q_filedialog_icon_provider(void* self) {
    return QFileDialog_IconProvider((QFileDialog*)self);
}

void q_filedialog_set_label_text(void* self, int32_t label, const char* text) {
    QFileDialog_SetLabelText((QFileDialog*)self, label, qstring(text));
}

const char* q_filedialog_label_text(void* self, int32_t label) {
    libqt_string _str = QFileDialog_LabelText((QFileDialog*)self, label);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_supported_schemes(void* self, const char* schemes[static 1]) {
    size_t schemes_len = libqt_strv_length(schemes);
    libqt_string* schemes_qstr = (libqt_string*)malloc(schemes_len * sizeof(libqt_string));
    if (schemes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_set_supported_schemes\n");
        abort();
    }
    for (size_t i = 0; i < schemes_len; ++i) {
        schemes_qstr[i] = qstring(schemes[i]);
    }
    libqt_list schemes_list = qlist(schemes_qstr, schemes_len);
    QFileDialog_SetSupportedSchemes((QFileDialog*)self, schemes_list);
    free(schemes_qstr);
}

const char** q_filedialog_supported_schemes(void* self) {
    libqt_list _arr = QFileDialog_SupportedSchemes((QFileDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_supported_schemes\n");
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

void q_filedialog_set_proxy_model(void* self, void* model) {
    QFileDialog_SetProxyModel((QFileDialog*)self, (QAbstractProxyModel*)model);
}

QAbstractProxyModel* q_filedialog_proxy_model(void* self) {
    return QFileDialog_ProxyModel((QFileDialog*)self);
}

void q_filedialog_set_option(void* self, int32_t option) {
    QFileDialog_SetOption((QFileDialog*)self, option);
}

bool q_filedialog_test_option(void* self, int32_t option) {
    return QFileDialog_TestOption((QFileDialog*)self, option);
}

void q_filedialog_set_options(void* self, int32_t options) {
    QFileDialog_SetOptions((QFileDialog*)self, options);
}

int32_t q_filedialog_options(void* self) {
    return QFileDialog_Options((QFileDialog*)self);
}

void q_filedialog_set_visible(void* self, bool visible) {
    QFileDialog_SetVisible((QFileDialog*)self, visible);
}

void q_filedialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QFileDialog_OnSetVisible((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_qbase_set_visible(void* self, bool visible) {
    QFileDialog_QBaseSetVisible((QFileDialog*)self, visible);
}

void q_filedialog_file_selected(void* self, const char* file) {
    QFileDialog_FileSelected((QFileDialog*)self, qstring(file));
}

void q_filedialog_on_file_selected(void* self, void (*callback)(void*, const char*)) {
    QFileDialog_Connect_FileSelected((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_files_selected(void* self, const char* files[static 1]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_files_selected\n");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    QFileDialog_FilesSelected((QFileDialog*)self, files_list);
    free(files_qstr);
}

void q_filedialog_on_files_selected(void* self, void (*callback)(void*, const char**)) {
    QFileDialog_Connect_FilesSelected((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_current_changed(void* self, const char* path) {
    QFileDialog_CurrentChanged((QFileDialog*)self, qstring(path));
}

void q_filedialog_on_current_changed(void* self, void (*callback)(void*, const char*)) {
    QFileDialog_Connect_CurrentChanged((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_directory_entered(void* self, const char* directory) {
    QFileDialog_DirectoryEntered((QFileDialog*)self, qstring(directory));
}

void q_filedialog_on_directory_entered(void* self, void (*callback)(void*, const char*)) {
    QFileDialog_Connect_DirectoryEntered((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_url_selected(void* self, void* url) {
    QFileDialog_UrlSelected((QFileDialog*)self, (QUrl*)url);
}

void q_filedialog_on_url_selected(void* self, void (*callback)(void*, void*)) {
    QFileDialog_Connect_UrlSelected((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_urls_selected(void* self, libqt_list /* of QUrl* */ urls) {
    QFileDialog_UrlsSelected((QFileDialog*)self, urls);
}

void q_filedialog_on_urls_selected(void* self, void (*callback)(void*, QUrl**)) {
    QFileDialog_Connect_UrlsSelected((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_current_url_changed(void* self, void* url) {
    QFileDialog_CurrentUrlChanged((QFileDialog*)self, (QUrl*)url);
}

void q_filedialog_on_current_url_changed(void* self, void (*callback)(void*, void*)) {
    QFileDialog_Connect_CurrentUrlChanged((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_directory_url_entered(void* self, void* directory) {
    QFileDialog_DirectoryUrlEntered((QFileDialog*)self, (QUrl*)directory);
}

void q_filedialog_on_directory_url_entered(void* self, void (*callback)(void*, void*)) {
    QFileDialog_Connect_DirectoryUrlEntered((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_filter_selected(void* self, const char* filter) {
    QFileDialog_FilterSelected((QFileDialog*)self, qstring(filter));
}

void q_filedialog_on_filter_selected(void* self, void (*callback)(void*, const char*)) {
    QFileDialog_Connect_FilterSelected((QFileDialog*)self, (intptr_t)callback);
}

const char* q_filedialog_get_open_file_name() {
    libqt_string _str = QFileDialog_GetOpenFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_open_file_url() {
    return QFileDialog_GetOpenFileUrl();
}

const char* q_filedialog_get_save_file_name() {
    libqt_string _str = QFileDialog_GetSaveFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_save_file_url() {
    return QFileDialog_GetSaveFileUrl();
}

const char* q_filedialog_get_existing_directory() {
    libqt_string _str = QFileDialog_GetExistingDirectory();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_existing_directory_url() {
    return QFileDialog_GetExistingDirectoryUrl();
}

const char** q_filedialog_get_open_file_names() {
    libqt_list _arr = QFileDialog_GetOpenFileNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_open_file_names\n");
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

libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls() {
    libqt_list _arr = QFileDialog_GetOpenFileUrls();
    return _arr;
}

void q_filedialog_save_file_content(const char* fileContent, const char* fileNameHint) {
    QFileDialog_SaveFileContent(qstring(fileContent), qstring(fileNameHint));
}

void q_filedialog_done(void* self, int result) {
    QFileDialog_Done((QFileDialog*)self, result);
}

void q_filedialog_on_done(void* self, void (*callback)(void*, int)) {
    QFileDialog_OnDone((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_qbase_done(void* self, int result) {
    QFileDialog_QBaseDone((QFileDialog*)self, result);
}

void q_filedialog_accept(void* self) {
    QFileDialog_Accept((QFileDialog*)self);
}

void q_filedialog_on_accept(void* self, void (*callback)()) {
    QFileDialog_OnAccept((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_qbase_accept(void* self) {
    QFileDialog_QBaseAccept((QFileDialog*)self);
}

void q_filedialog_change_event(void* self, void* e) {
    QFileDialog_ChangeEvent((QFileDialog*)self, (QEvent*)e);
}

void q_filedialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnChangeEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_qbase_change_event(void* self, void* e) {
    QFileDialog_QBaseChangeEvent((QFileDialog*)self, (QEvent*)e);
}

const char* q_filedialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_option2(void* self, int32_t option, bool on) {
    QFileDialog_SetOption2((QFileDialog*)self, option, on);
}

const char* q_filedialog_get_open_file_name1(void* parent) {
    libqt_string _str = QFileDialog_GetOpenFileName1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_open_file_name2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetOpenFileName2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_open_file_name3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetOpenFileName3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_open_file_name4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_string _str = QFileDialog_GetOpenFileName4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_open_file_url1(void* parent) {
    return QFileDialog_GetOpenFileUrl1((QWidget*)parent);
}

QUrl* q_filedialog_get_open_file_url2(void* parent, const char* caption) {
    return QFileDialog_GetOpenFileUrl2((QWidget*)parent, qstring(caption));
}

QUrl* q_filedialog_get_open_file_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetOpenFileUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

QUrl* q_filedialog_get_open_file_url4(void* parent, const char* caption, void* dir, const char* filter) {
    return QFileDialog_GetOpenFileUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
}

const char* q_filedialog_get_save_file_name1(void* parent) {
    libqt_string _str = QFileDialog_GetSaveFileName1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_save_file_name2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetSaveFileName2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_save_file_name3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetSaveFileName3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_save_file_name4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_string _str = QFileDialog_GetSaveFileName4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_save_file_url1(void* parent) {
    return QFileDialog_GetSaveFileUrl1((QWidget*)parent);
}

QUrl* q_filedialog_get_save_file_url2(void* parent, const char* caption) {
    return QFileDialog_GetSaveFileUrl2((QWidget*)parent, qstring(caption));
}

QUrl* q_filedialog_get_save_file_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetSaveFileUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

QUrl* q_filedialog_get_save_file_url4(void* parent, const char* caption, void* dir, const char* filter) {
    return QFileDialog_GetSaveFileUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
}

const char* q_filedialog_get_existing_directory1(void* parent) {
    libqt_string _str = QFileDialog_GetExistingDirectory1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_existing_directory2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetExistingDirectory2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_existing_directory3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetExistingDirectory3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_get_existing_directory4(void* parent, const char* caption, const char* dir, int32_t options) {
    libqt_string _str = QFileDialog_GetExistingDirectory4((QWidget*)parent, qstring(caption), qstring(dir), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_filedialog_get_existing_directory_url1(void* parent) {
    return QFileDialog_GetExistingDirectoryUrl1((QWidget*)parent);
}

QUrl* q_filedialog_get_existing_directory_url2(void* parent, const char* caption) {
    return QFileDialog_GetExistingDirectoryUrl2((QWidget*)parent, qstring(caption));
}

QUrl* q_filedialog_get_existing_directory_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetExistingDirectoryUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

QUrl* q_filedialog_get_existing_directory_url4(void* parent, const char* caption, void* dir, int32_t options) {
    return QFileDialog_GetExistingDirectoryUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, options);
}

QUrl* q_filedialog_get_existing_directory_url5(void* parent, const char* caption, void* dir, int32_t options, const char* supportedSchemes[static 1]) {
    size_t supportedSchemes_len = libqt_strv_length(supportedSchemes);
    libqt_string* supportedSchemes_qstr = (libqt_string*)malloc(supportedSchemes_len * sizeof(libqt_string));
    if (supportedSchemes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_existing_directory_url5\n");
        abort();
    }
    for (size_t i = 0; i < supportedSchemes_len; ++i) {
        supportedSchemes_qstr[i] = qstring(supportedSchemes[i]);
    }
    libqt_list supportedSchemes_list = qlist(supportedSchemes_qstr, supportedSchemes_len);
    QUrl* _out = QFileDialog_GetExistingDirectoryUrl5((QWidget*)parent, qstring(caption), (QUrl*)dir, options, supportedSchemes_list);
    free(supportedSchemes_qstr);
    return _out;
}

const char** q_filedialog_get_open_file_names1(void* parent) {
    libqt_list _arr = QFileDialog_GetOpenFileNames1((QWidget*)parent);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_open_file_names1\n");
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

const char** q_filedialog_get_open_file_names2(void* parent, const char* caption) {
    libqt_list _arr = QFileDialog_GetOpenFileNames2((QWidget*)parent, qstring(caption));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_open_file_names2\n");
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

const char** q_filedialog_get_open_file_names3(void* parent, const char* caption, const char* dir) {
    libqt_list _arr = QFileDialog_GetOpenFileNames3((QWidget*)parent, qstring(caption), qstring(dir));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_open_file_names3\n");
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

const char** q_filedialog_get_open_file_names4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_list _arr = QFileDialog_GetOpenFileNames4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_get_open_file_names4\n");
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

libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls1(void* parent) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls1((QWidget*)parent);
    return _arr;
}

libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls2(void* parent, const char* caption) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls2((QWidget*)parent, qstring(caption));
    return _arr;
}

libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls3(void* parent, const char* caption, void* dir) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls3((QWidget*)parent, qstring(caption), (QUrl*)dir);
    return _arr;
}

libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls4(void* parent, const char* caption, void* dir, const char* filter) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
    return _arr;
}

void q_filedialog_save_file_content3(const char* fileContent, const char* fileNameHint, void* parent) {
    QFileDialog_SaveFileContent3(qstring(fileContent), qstring(fileNameHint), (QWidget*)parent);
}

int32_t q_filedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_filedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_filedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_filedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_filedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_filedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_filedialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_filedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_filedialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_filedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_filedialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_filedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_filedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_filedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_filedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_filedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_filedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_filedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_filedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_filedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_filedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_filedialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_filedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_filedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_filedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_filedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_filedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_filedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_filedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_filedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_filedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_filedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_filedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_filedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_filedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_filedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_filedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_filedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_filedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_filedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_filedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_filedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_filedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_filedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_filedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_filedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_filedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_filedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_filedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_filedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_filedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_filedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_filedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_filedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_filedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_filedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_filedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_filedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_filedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_filedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_filedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_filedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_filedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_filedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_filedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_filedialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_filedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_filedialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_filedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_filedialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_filedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_filedialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_filedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_filedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_filedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_filedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_filedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_filedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_filedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_filedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_filedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_filedialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_filedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_filedialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_filedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_filedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_filedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_filedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_filedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_filedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_filedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_filedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_filedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_filedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_filedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_filedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_filedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_filedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_filedialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_filedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_filedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_filedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_filedialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_filedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_filedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_filedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_filedialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_filedialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_filedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_filedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_filedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_filedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_filedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_filedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_filedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_filedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_filedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_filedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_filedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_filedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_filedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_filedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_filedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_filedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_filedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_filedialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_filedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_filedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_filedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_filedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_filedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_filedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_filedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_filedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_filedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_filedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_filedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_filedialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_filedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_filedialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_filedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_filedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_filedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_filedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_filedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_filedialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_filedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_filedialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_filedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_filedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_filedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_filedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_filedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_filedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_filedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_filedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_filedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_filedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_filedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_filedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_filedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_filedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_filedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_filedialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_filedialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_filedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_filedialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_filedialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_filedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_filedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_filedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_filedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_filedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_filedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_filedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_filedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_filedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_filedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_filedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_filedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_filedialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_filedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_filedialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_filedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_filedialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_filedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_filedialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_filedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_filedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_filedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_filedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_filedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_filedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_filedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_filedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_filedialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_filedialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_filedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_filedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_filedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_filedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_filedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_filedialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_filedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_filedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_filedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_filedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_filedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_filedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_filedialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_filedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_filedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_filedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_filedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_filedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_filedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_filedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_filedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_filedialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_filedialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_filedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_filedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_filedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_filedialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_filedialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_filedialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_filedialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_filedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_filedialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_filedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_filedialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_filedialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_filedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_filedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_filedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_filedialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_filedialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_filedialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_filedialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_filedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_filedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_filedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_filedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_filedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_filedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_filedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_filedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_filedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_filedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_filedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_filedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_filedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_filedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_filedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_filedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_filedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_filedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_filedialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_filedialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_filedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_filedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_filedialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_filedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_filedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_filedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_filedialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_filedialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_filedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_filedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_filedialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_filedialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_filedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_filedialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_filedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filedialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_filedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_filedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_filedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_filedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_filedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_filedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_filedialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_filedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_filedialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_filedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_filedialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_filedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_filedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_filedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_filedialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_filedialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_filedialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_filedialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_filedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_filedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_filedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_filedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_filedialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filedialog_dynamic_property_names\n");
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

QBindingStorage* q_filedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_filedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_filedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_filedialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_filedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_filedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_filedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_filedialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_filedialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_filedialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_filedialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_filedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_filedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_filedialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_filedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_filedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_filedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_filedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_filedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_filedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_filedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_filedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_filedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_filedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_filedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_filedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_filedialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_filedialog_size_hint(void* self) {
    return QFileDialog_SizeHint((QFileDialog*)self);
}

QSize* q_filedialog_qbase_size_hint(void* self) {
    return QFileDialog_QBaseSizeHint((QFileDialog*)self);
}

void q_filedialog_on_size_hint(void* self, QSize* (*callback)()) {
    QFileDialog_OnSizeHint((QFileDialog*)self, (intptr_t)callback);
}

QSize* q_filedialog_minimum_size_hint(void* self) {
    return QFileDialog_MinimumSizeHint((QFileDialog*)self);
}

QSize* q_filedialog_qbase_minimum_size_hint(void* self) {
    return QFileDialog_QBaseMinimumSizeHint((QFileDialog*)self);
}

void q_filedialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QFileDialog_OnMinimumSizeHint((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_open(void* self) {
    QFileDialog_Open((QFileDialog*)self);
}

void q_filedialog_qbase_open(void* self) {
    QFileDialog_QBaseOpen((QFileDialog*)self);
}

void q_filedialog_on_open(void* self, void (*callback)()) {
    QFileDialog_OnOpen((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_exec(void* self) {
    return QFileDialog_Exec((QFileDialog*)self);
}

int32_t q_filedialog_qbase_exec(void* self) {
    return QFileDialog_QBaseExec((QFileDialog*)self);
}

void q_filedialog_on_exec(void* self, int32_t (*callback)()) {
    QFileDialog_OnExec((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_reject(void* self) {
    QFileDialog_Reject((QFileDialog*)self);
}

void q_filedialog_qbase_reject(void* self) {
    QFileDialog_QBaseReject((QFileDialog*)self);
}

void q_filedialog_on_reject(void* self, void (*callback)()) {
    QFileDialog_OnReject((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_key_press_event(void* self, void* param1) {
    QFileDialog_KeyPressEvent((QFileDialog*)self, (QKeyEvent*)param1);
}

void q_filedialog_qbase_key_press_event(void* self, void* param1) {
    QFileDialog_QBaseKeyPressEvent((QFileDialog*)self, (QKeyEvent*)param1);
}

void q_filedialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnKeyPressEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_close_event(void* self, void* param1) {
    QFileDialog_CloseEvent((QFileDialog*)self, (QCloseEvent*)param1);
}

void q_filedialog_qbase_close_event(void* self, void* param1) {
    QFileDialog_QBaseCloseEvent((QFileDialog*)self, (QCloseEvent*)param1);
}

void q_filedialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnCloseEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_show_event(void* self, void* param1) {
    QFileDialog_ShowEvent((QFileDialog*)self, (QShowEvent*)param1);
}

void q_filedialog_qbase_show_event(void* self, void* param1) {
    QFileDialog_QBaseShowEvent((QFileDialog*)self, (QShowEvent*)param1);
}

void q_filedialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnShowEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_resize_event(void* self, void* param1) {
    QFileDialog_ResizeEvent((QFileDialog*)self, (QResizeEvent*)param1);
}

void q_filedialog_qbase_resize_event(void* self, void* param1) {
    QFileDialog_QBaseResizeEvent((QFileDialog*)self, (QResizeEvent*)param1);
}

void q_filedialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnResizeEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_context_menu_event(void* self, void* param1) {
    QFileDialog_ContextMenuEvent((QFileDialog*)self, (QContextMenuEvent*)param1);
}

void q_filedialog_qbase_context_menu_event(void* self, void* param1) {
    QFileDialog_QBaseContextMenuEvent((QFileDialog*)self, (QContextMenuEvent*)param1);
}

void q_filedialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnContextMenuEvent((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_event_filter(void* self, void* param1, void* param2) {
    return QFileDialog_EventFilter((QFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_filedialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QFileDialog_QBaseEventFilter((QFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_filedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFileDialog_OnEventFilter((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_dev_type(void* self) {
    return QFileDialog_DevType((QFileDialog*)self);
}

int32_t q_filedialog_qbase_dev_type(void* self) {
    return QFileDialog_QBaseDevType((QFileDialog*)self);
}

void q_filedialog_on_dev_type(void* self, int32_t (*callback)()) {
    QFileDialog_OnDevType((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_height_for_width(void* self, int param1) {
    return QFileDialog_HeightForWidth((QFileDialog*)self, param1);
}

int32_t q_filedialog_qbase_height_for_width(void* self, int param1) {
    return QFileDialog_QBaseHeightForWidth((QFileDialog*)self, param1);
}

void q_filedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QFileDialog_OnHeightForWidth((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_has_height_for_width(void* self) {
    return QFileDialog_HasHeightForWidth((QFileDialog*)self);
}

bool q_filedialog_qbase_has_height_for_width(void* self) {
    return QFileDialog_QBaseHasHeightForWidth((QFileDialog*)self);
}

void q_filedialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QFileDialog_OnHasHeightForWidth((QFileDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_filedialog_paint_engine(void* self) {
    return QFileDialog_PaintEngine((QFileDialog*)self);
}

QPaintEngine* q_filedialog_qbase_paint_engine(void* self) {
    return QFileDialog_QBasePaintEngine((QFileDialog*)self);
}

void q_filedialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QFileDialog_OnPaintEngine((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_event(void* self, void* event) {
    return QFileDialog_Event((QFileDialog*)self, (QEvent*)event);
}

bool q_filedialog_qbase_event(void* self, void* event) {
    return QFileDialog_QBaseEvent((QFileDialog*)self, (QEvent*)event);
}

void q_filedialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QFileDialog_OnEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_mouse_press_event(void* self, void* event) {
    QFileDialog_MousePressEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_qbase_mouse_press_event(void* self, void* event) {
    QFileDialog_QBaseMousePressEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnMousePressEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_mouse_release_event(void* self, void* event) {
    QFileDialog_MouseReleaseEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_qbase_mouse_release_event(void* self, void* event) {
    QFileDialog_QBaseMouseReleaseEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnMouseReleaseEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_mouse_double_click_event(void* self, void* event) {
    QFileDialog_MouseDoubleClickEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_qbase_mouse_double_click_event(void* self, void* event) {
    QFileDialog_QBaseMouseDoubleClickEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnMouseDoubleClickEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_mouse_move_event(void* self, void* event) {
    QFileDialog_MouseMoveEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_qbase_mouse_move_event(void* self, void* event) {
    QFileDialog_QBaseMouseMoveEvent((QFileDialog*)self, (QMouseEvent*)event);
}

void q_filedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnMouseMoveEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_wheel_event(void* self, void* event) {
    QFileDialog_WheelEvent((QFileDialog*)self, (QWheelEvent*)event);
}

void q_filedialog_qbase_wheel_event(void* self, void* event) {
    QFileDialog_QBaseWheelEvent((QFileDialog*)self, (QWheelEvent*)event);
}

void q_filedialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnWheelEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_key_release_event(void* self, void* event) {
    QFileDialog_KeyReleaseEvent((QFileDialog*)self, (QKeyEvent*)event);
}

void q_filedialog_qbase_key_release_event(void* self, void* event) {
    QFileDialog_QBaseKeyReleaseEvent((QFileDialog*)self, (QKeyEvent*)event);
}

void q_filedialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnKeyReleaseEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_focus_in_event(void* self, void* event) {
    QFileDialog_FocusInEvent((QFileDialog*)self, (QFocusEvent*)event);
}

void q_filedialog_qbase_focus_in_event(void* self, void* event) {
    QFileDialog_QBaseFocusInEvent((QFileDialog*)self, (QFocusEvent*)event);
}

void q_filedialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnFocusInEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_focus_out_event(void* self, void* event) {
    QFileDialog_FocusOutEvent((QFileDialog*)self, (QFocusEvent*)event);
}

void q_filedialog_qbase_focus_out_event(void* self, void* event) {
    QFileDialog_QBaseFocusOutEvent((QFileDialog*)self, (QFocusEvent*)event);
}

void q_filedialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnFocusOutEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_enter_event(void* self, void* event) {
    QFileDialog_EnterEvent((QFileDialog*)self, (QEnterEvent*)event);
}

void q_filedialog_qbase_enter_event(void* self, void* event) {
    QFileDialog_QBaseEnterEvent((QFileDialog*)self, (QEnterEvent*)event);
}

void q_filedialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnEnterEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_leave_event(void* self, void* event) {
    QFileDialog_LeaveEvent((QFileDialog*)self, (QEvent*)event);
}

void q_filedialog_qbase_leave_event(void* self, void* event) {
    QFileDialog_QBaseLeaveEvent((QFileDialog*)self, (QEvent*)event);
}

void q_filedialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnLeaveEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_paint_event(void* self, void* event) {
    QFileDialog_PaintEvent((QFileDialog*)self, (QPaintEvent*)event);
}

void q_filedialog_qbase_paint_event(void* self, void* event) {
    QFileDialog_QBasePaintEvent((QFileDialog*)self, (QPaintEvent*)event);
}

void q_filedialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnPaintEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_move_event(void* self, void* event) {
    QFileDialog_MoveEvent((QFileDialog*)self, (QMoveEvent*)event);
}

void q_filedialog_qbase_move_event(void* self, void* event) {
    QFileDialog_QBaseMoveEvent((QFileDialog*)self, (QMoveEvent*)event);
}

void q_filedialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnMoveEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_tablet_event(void* self, void* event) {
    QFileDialog_TabletEvent((QFileDialog*)self, (QTabletEvent*)event);
}

void q_filedialog_qbase_tablet_event(void* self, void* event) {
    QFileDialog_QBaseTabletEvent((QFileDialog*)self, (QTabletEvent*)event);
}

void q_filedialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnTabletEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_action_event(void* self, void* event) {
    QFileDialog_ActionEvent((QFileDialog*)self, (QActionEvent*)event);
}

void q_filedialog_qbase_action_event(void* self, void* event) {
    QFileDialog_QBaseActionEvent((QFileDialog*)self, (QActionEvent*)event);
}

void q_filedialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnActionEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_drag_enter_event(void* self, void* event) {
    QFileDialog_DragEnterEvent((QFileDialog*)self, (QDragEnterEvent*)event);
}

void q_filedialog_qbase_drag_enter_event(void* self, void* event) {
    QFileDialog_QBaseDragEnterEvent((QFileDialog*)self, (QDragEnterEvent*)event);
}

void q_filedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnDragEnterEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_drag_move_event(void* self, void* event) {
    QFileDialog_DragMoveEvent((QFileDialog*)self, (QDragMoveEvent*)event);
}

void q_filedialog_qbase_drag_move_event(void* self, void* event) {
    QFileDialog_QBaseDragMoveEvent((QFileDialog*)self, (QDragMoveEvent*)event);
}

void q_filedialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnDragMoveEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_drag_leave_event(void* self, void* event) {
    QFileDialog_DragLeaveEvent((QFileDialog*)self, (QDragLeaveEvent*)event);
}

void q_filedialog_qbase_drag_leave_event(void* self, void* event) {
    QFileDialog_QBaseDragLeaveEvent((QFileDialog*)self, (QDragLeaveEvent*)event);
}

void q_filedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnDragLeaveEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_drop_event(void* self, void* event) {
    QFileDialog_DropEvent((QFileDialog*)self, (QDropEvent*)event);
}

void q_filedialog_qbase_drop_event(void* self, void* event) {
    QFileDialog_QBaseDropEvent((QFileDialog*)self, (QDropEvent*)event);
}

void q_filedialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnDropEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_hide_event(void* self, void* event) {
    QFileDialog_HideEvent((QFileDialog*)self, (QHideEvent*)event);
}

void q_filedialog_qbase_hide_event(void* self, void* event) {
    QFileDialog_QBaseHideEvent((QFileDialog*)self, (QHideEvent*)event);
}

void q_filedialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnHideEvent((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFileDialog_NativeEvent((QFileDialog*)self, qstring(eventType), message, result);
}

bool q_filedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFileDialog_QBaseNativeEvent((QFileDialog*)self, qstring(eventType), message, result);
}

void q_filedialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QFileDialog_OnNativeEvent((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_metric(void* self, int32_t param1) {
    return QFileDialog_Metric((QFileDialog*)self, param1);
}

int32_t q_filedialog_qbase_metric(void* self, int32_t param1) {
    return QFileDialog_QBaseMetric((QFileDialog*)self, param1);
}

void q_filedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QFileDialog_OnMetric((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_init_painter(void* self, void* painter) {
    QFileDialog_InitPainter((QFileDialog*)self, (QPainter*)painter);
}

void q_filedialog_qbase_init_painter(void* self, void* painter) {
    QFileDialog_QBaseInitPainter((QFileDialog*)self, (QPainter*)painter);
}

void q_filedialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnInitPainter((QFileDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_filedialog_redirected(void* self, void* offset) {
    return QFileDialog_Redirected((QFileDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_filedialog_qbase_redirected(void* self, void* offset) {
    return QFileDialog_QBaseRedirected((QFileDialog*)self, (QPoint*)offset);
}

void q_filedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QFileDialog_OnRedirected((QFileDialog*)self, (intptr_t)callback);
}

QPainter* q_filedialog_shared_painter(void* self) {
    return QFileDialog_SharedPainter((QFileDialog*)self);
}

QPainter* q_filedialog_qbase_shared_painter(void* self) {
    return QFileDialog_QBaseSharedPainter((QFileDialog*)self);
}

void q_filedialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QFileDialog_OnSharedPainter((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_input_method_event(void* self, void* param1) {
    QFileDialog_InputMethodEvent((QFileDialog*)self, (QInputMethodEvent*)param1);
}

void q_filedialog_qbase_input_method_event(void* self, void* param1) {
    QFileDialog_QBaseInputMethodEvent((QFileDialog*)self, (QInputMethodEvent*)param1);
}

void q_filedialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnInputMethodEvent((QFileDialog*)self, (intptr_t)callback);
}

QVariant* q_filedialog_input_method_query(void* self, int32_t param1) {
    return QFileDialog_InputMethodQuery((QFileDialog*)self, param1);
}

QVariant* q_filedialog_qbase_input_method_query(void* self, int32_t param1) {
    return QFileDialog_QBaseInputMethodQuery((QFileDialog*)self, param1);
}

void q_filedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QFileDialog_OnInputMethodQuery((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_focus_next_prev_child(void* self, bool next) {
    return QFileDialog_FocusNextPrevChild((QFileDialog*)self, next);
}

bool q_filedialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QFileDialog_QBaseFocusNextPrevChild((QFileDialog*)self, next);
}

void q_filedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QFileDialog_OnFocusNextPrevChild((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_timer_event(void* self, void* event) {
    QFileDialog_TimerEvent((QFileDialog*)self, (QTimerEvent*)event);
}

void q_filedialog_qbase_timer_event(void* self, void* event) {
    QFileDialog_QBaseTimerEvent((QFileDialog*)self, (QTimerEvent*)event);
}

void q_filedialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnTimerEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_child_event(void* self, void* event) {
    QFileDialog_ChildEvent((QFileDialog*)self, (QChildEvent*)event);
}

void q_filedialog_qbase_child_event(void* self, void* event) {
    QFileDialog_QBaseChildEvent((QFileDialog*)self, (QChildEvent*)event);
}

void q_filedialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnChildEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_custom_event(void* self, void* event) {
    QFileDialog_CustomEvent((QFileDialog*)self, (QEvent*)event);
}

void q_filedialog_qbase_custom_event(void* self, void* event) {
    QFileDialog_QBaseCustomEvent((QFileDialog*)self, (QEvent*)event);
}

void q_filedialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnCustomEvent((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_connect_notify(void* self, void* signal) {
    QFileDialog_ConnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

void q_filedialog_qbase_connect_notify(void* self, void* signal) {
    QFileDialog_QBaseConnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

void q_filedialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnConnectNotify((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_disconnect_notify(void* self, void* signal) {
    QFileDialog_DisconnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

void q_filedialog_qbase_disconnect_notify(void* self, void* signal) {
    QFileDialog_QBaseDisconnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

void q_filedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnDisconnectNotify((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_adjust_position(void* self, void* param1) {
    QFileDialog_AdjustPosition((QFileDialog*)self, (QWidget*)param1);
}

void q_filedialog_qbase_adjust_position(void* self, void* param1) {
    QFileDialog_QBaseAdjustPosition((QFileDialog*)self, (QWidget*)param1);
}

void q_filedialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QFileDialog_OnAdjustPosition((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_update_micro_focus(void* self) {
    QFileDialog_UpdateMicroFocus((QFileDialog*)self);
}

void q_filedialog_qbase_update_micro_focus(void* self) {
    QFileDialog_QBaseUpdateMicroFocus((QFileDialog*)self);
}

void q_filedialog_on_update_micro_focus(void* self, void (*callback)()) {
    QFileDialog_OnUpdateMicroFocus((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_create(void* self) {
    QFileDialog_Create((QFileDialog*)self);
}

void q_filedialog_qbase_create(void* self) {
    QFileDialog_QBaseCreate((QFileDialog*)self);
}

void q_filedialog_on_create(void* self, void (*callback)()) {
    QFileDialog_OnCreate((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_destroy(void* self) {
    QFileDialog_Destroy((QFileDialog*)self);
}

void q_filedialog_qbase_destroy(void* self) {
    QFileDialog_QBaseDestroy((QFileDialog*)self);
}

void q_filedialog_on_destroy(void* self, void (*callback)()) {
    QFileDialog_OnDestroy((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_focus_next_child(void* self) {
    return QFileDialog_FocusNextChild((QFileDialog*)self);
}

bool q_filedialog_qbase_focus_next_child(void* self) {
    return QFileDialog_QBaseFocusNextChild((QFileDialog*)self);
}

void q_filedialog_on_focus_next_child(void* self, bool (*callback)()) {
    QFileDialog_OnFocusNextChild((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_focus_previous_child(void* self) {
    return QFileDialog_FocusPreviousChild((QFileDialog*)self);
}

bool q_filedialog_qbase_focus_previous_child(void* self) {
    return QFileDialog_QBaseFocusPreviousChild((QFileDialog*)self);
}

void q_filedialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QFileDialog_OnFocusPreviousChild((QFileDialog*)self, (intptr_t)callback);
}

QObject* q_filedialog_sender(void* self) {
    return QFileDialog_Sender((QFileDialog*)self);
}

QObject* q_filedialog_qbase_sender(void* self) {
    return QFileDialog_QBaseSender((QFileDialog*)self);
}

void q_filedialog_on_sender(void* self, QObject* (*callback)()) {
    QFileDialog_OnSender((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_sender_signal_index(void* self) {
    return QFileDialog_SenderSignalIndex((QFileDialog*)self);
}

int32_t q_filedialog_qbase_sender_signal_index(void* self) {
    return QFileDialog_QBaseSenderSignalIndex((QFileDialog*)self);
}

void q_filedialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFileDialog_OnSenderSignalIndex((QFileDialog*)self, (intptr_t)callback);
}

int32_t q_filedialog_receivers(void* self, const char* signal) {
    return QFileDialog_Receivers((QFileDialog*)self, signal);
}

int32_t q_filedialog_qbase_receivers(void* self, const char* signal) {
    return QFileDialog_QBaseReceivers((QFileDialog*)self, signal);
}

void q_filedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFileDialog_OnReceivers((QFileDialog*)self, (intptr_t)callback);
}

bool q_filedialog_is_signal_connected(void* self, void* signal) {
    return QFileDialog_IsSignalConnected((QFileDialog*)self, (QMetaMethod*)signal);
}

bool q_filedialog_qbase_is_signal_connected(void* self, void* signal) {
    return QFileDialog_QBaseIsSignalConnected((QFileDialog*)self, (QMetaMethod*)signal);
}

void q_filedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFileDialog_OnIsSignalConnected((QFileDialog*)self, (intptr_t)callback);
}

double q_filedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFileDialog_GetDecodedMetricF((QFileDialog*)self, metricA, metricB);
}

double q_filedialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFileDialog_QBaseGetDecodedMetricF((QFileDialog*)self, metricA, metricB);
}

void q_filedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QFileDialog_OnGetDecodedMetricF((QFileDialog*)self, (intptr_t)callback);
}

void q_filedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_filedialog_delete(void* self) {
    QFileDialog_Delete((QFileDialog*)(self));
}
