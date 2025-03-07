#include "libqabstractfileiconprovider.hpp"
#include "libqabstractitemdelegate.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
#include "libqdir.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
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
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqfiledialog.hpp"
#include "libqfiledialog.h"

/// https://doc.qt.io/qt-6/qfiledialog.html

/// q_filedialog_new constructs a new QFileDialog object.
///
/// ``` QWidget* parent ```
QFileDialog* q_filedialog_new(void* parent) {
    return QFileDialog_new((QWidget*)parent);
}

/// q_filedialog_new2 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, int f ```
QFileDialog* q_filedialog_new2(void* parent, int64_t f) {
    return QFileDialog_new2((QWidget*)parent, f);
}

/// q_filedialog_new3 constructs a new QFileDialog object.
///
///
QFileDialog* q_filedialog_new3() {
    return QFileDialog_new3();
}

/// q_filedialog_new4 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption ```
QFileDialog* q_filedialog_new4(void* parent, const char* caption) {
    return QFileDialog_new4((QWidget*)parent, qstring(caption));
}

/// q_filedialog_new5 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption, const char* directory ```
QFileDialog* q_filedialog_new5(void* parent, const char* caption, const char* directory) {
    return QFileDialog_new5((QWidget*)parent, qstring(caption), qstring(directory));
}

/// q_filedialog_new6 constructs a new QFileDialog object.
///
/// ``` QWidget* parent, const char* caption, const char* directory, const char* filter ```
QFileDialog* q_filedialog_new6(void* parent, const char* caption, const char* directory, const char* filter) {
    return QFileDialog_new6((QWidget*)parent, qstring(caption), qstring(directory), qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileDialog* self ```
QMetaObject* q_filedialog_meta_object(void* self) {
    return QFileDialog_MetaObject((QFileDialog*)self);
}

/// ``` QFileDialog* self, const char* param1 ```
void* q_filedialog_metacast(void* self, const char* param1) {
    return QFileDialog_Metacast((QFileDialog*)self, param1);
}

/// ``` QFileDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileDialog_Metacall((QFileDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, enum QMetaObject__Call, int, void*) ```
void q_filedialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFileDialog_OnMetacall((QFileDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileDialog_QBaseMetacall((QFileDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filedialog_tr(const char* s) {
    libqt_string _str = QFileDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// ``` QFileDialog* self, const char* directory ```
void q_filedialog_set_directory(void* self, const char* directory) {
    QFileDialog_SetDirectory((QFileDialog*)self, qstring(directory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectory)
///
/// ``` QFileDialog* self, QDir* directory ```
void q_filedialog_set_directory_with_directory(void* self, void* directory) {
    QFileDialog_SetDirectoryWithDirectory((QFileDialog*)self, (QDir*)directory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directory)
///
/// ``` QFileDialog* self ```
QDir* q_filedialog_directory(void* self) {
    return QFileDialog_Directory((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDirectoryUrl)
///
/// ``` QFileDialog* self, QUrl* directory ```
void q_filedialog_set_directory_url(void* self, void* directory) {
    QFileDialog_SetDirectoryUrl((QFileDialog*)self, (QUrl*)directory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrl)
///
/// ``` QFileDialog* self ```
QUrl* q_filedialog_directory_url(void* self) {
    return QFileDialog_DirectoryUrl((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectFile)
///
/// ``` QFileDialog* self, const char* filename ```
void q_filedialog_select_file(void* self, const char* filename) {
    QFileDialog_SelectFile((QFileDialog*)self, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedFiles)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_selected_files(void* self) {
    libqt_list _arr = QFileDialog_SelectedFiles((QFileDialog*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectUrl)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_select_url(void* self, void* url) {
    QFileDialog_SelectUrl((QFileDialog*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedUrls)
///
/// ``` QFileDialog* self ```
libqt_list /* of QUrl* */ q_filedialog_selected_urls(void* self) {
    libqt_list _arr = QFileDialog_SelectedUrls((QFileDialog*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_set_name_filter(void* self, const char* filter) {
    QFileDialog_SetNameFilter((QFileDialog*)self, qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setNameFilters)
///
/// ``` QFileDialog* self, const char* filters[] ```
void q_filedialog_set_name_filters(void* self, const char* filters[]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = malloc(filters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < filters_len; ++_i) {
        filters_qstr[_i] = qstring(filters[_i]);
    }
    libqt_list filters_list = qstrlist(filters_qstr, filters_len);
    QFileDialog_SetNameFilters((QFileDialog*)self, filters_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#nameFilters)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_name_filters(void* self) {
    libqt_list _arr = QFileDialog_NameFilters((QFileDialog*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectNameFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_select_name_filter(void* self, const char* filter) {
    QFileDialog_SelectNameFilter((QFileDialog*)self, qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedMimeTypeFilter)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_selected_mime_type_filter(void* self) {
    libqt_string _str = QFileDialog_SelectedMimeTypeFilter((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectedNameFilter)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_selected_name_filter(void* self) {
    libqt_string _str = QFileDialog_SelectedNameFilter((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setMimeTypeFilters)
///
/// ``` QFileDialog* self, const char* filters[] ```
void q_filedialog_set_mime_type_filters(void* self, const char* filters[]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = malloc(filters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < filters_len; ++_i) {
        filters_qstr[_i] = qstring(filters[_i]);
    }
    libqt_list filters_list = qstrlist(filters_qstr, filters_len);
    QFileDialog_SetMimeTypeFilters((QFileDialog*)self, filters_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#mimeTypeFilters)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_mime_type_filters(void* self) {
    libqt_list _arr = QFileDialog_MimeTypeFilters((QFileDialog*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#selectMimeTypeFilter)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_select_mime_type_filter(void* self, const char* filter) {
    QFileDialog_SelectMimeTypeFilter((QFileDialog*)self, qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filter)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_filter(void* self) {
    return QFileDialog_Filter((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setFilter)
///
/// ``` QFileDialog* self, int filters ```
void q_filedialog_set_filter(void* self, int64_t filters) {
    QFileDialog_SetFilter((QFileDialog*)self, filters);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setViewMode)
///
/// ``` QFileDialog* self, enum QFileDialog__ViewMode mode ```
void q_filedialog_set_view_mode(void* self, int64_t mode) {
    QFileDialog_SetViewMode((QFileDialog*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#viewMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_view_mode(void* self) {
    return QFileDialog_ViewMode((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setFileMode)
///
/// ``` QFileDialog* self, enum QFileDialog__FileMode mode ```
void q_filedialog_set_file_mode(void* self, int64_t mode) {
    QFileDialog_SetFileMode((QFileDialog*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#fileMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_file_mode(void* self) {
    return QFileDialog_FileMode((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setAcceptMode)
///
/// ``` QFileDialog* self, enum QFileDialog__AcceptMode mode ```
void q_filedialog_set_accept_mode(void* self, int64_t mode) {
    QFileDialog_SetAcceptMode((QFileDialog*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#acceptMode)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_accept_mode(void* self) {
    return QFileDialog_AcceptMode((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setSidebarUrls)
///
/// ``` QFileDialog* self, QUrl* urls[] ```
void q_filedialog_set_sidebar_urls(void* self, void* urls[]) {
    QUrl** urls_arr = (QUrl**)urls;
    size_t urls_len = 0;
    while (urls_arr[urls_len] != NULL) {
        urls_len++;
    }
    libqt_list urls_list = {
        .len = urls_len,
        .data = {(QUrl*)urls},
    };
    QFileDialog_SetSidebarUrls((QFileDialog*)self, urls_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#sidebarUrls)
///
/// ``` QFileDialog* self ```
libqt_list /* of QUrl* */ q_filedialog_sidebar_urls(void* self) {
    libqt_list _arr = QFileDialog_SidebarUrls((QFileDialog*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#saveState)
///
/// ``` QFileDialog* self ```
char* q_filedialog_save_state(void* self) {
    libqt_string _str = QFileDialog_SaveState((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#restoreState)
///
/// ``` QFileDialog* self, const char* state ```
bool q_filedialog_restore_state(void* self, const char* state) {
    return QFileDialog_RestoreState((QFileDialog*)self, qstring(state));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setDefaultSuffix)
///
/// ``` QFileDialog* self, const char* suffix ```
void q_filedialog_set_default_suffix(void* self, const char* suffix) {
    QFileDialog_SetDefaultSuffix((QFileDialog*)self, qstring(suffix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#defaultSuffix)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_default_suffix(void* self) {
    libqt_string _str = QFileDialog_DefaultSuffix((QFileDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setHistory)
///
/// ``` QFileDialog* self, const char* paths[] ```
void q_filedialog_set_history(void* self, const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);
    QFileDialog_SetHistory((QFileDialog*)self, paths_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#history)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_history(void* self) {
    libqt_list _arr = QFileDialog_History((QFileDialog*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setItemDelegate)
///
/// ``` QFileDialog* self, QAbstractItemDelegate* delegate ```
void q_filedialog_set_item_delegate(void* self, void* delegate) {
    QFileDialog_SetItemDelegate((QFileDialog*)self, (QAbstractItemDelegate*)delegate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#itemDelegate)
///
/// ``` QFileDialog* self ```
QAbstractItemDelegate* q_filedialog_item_delegate(void* self) {
    return QFileDialog_ItemDelegate((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setIconProvider)
///
/// ``` QFileDialog* self, QAbstractFileIconProvider* provider ```
void q_filedialog_set_icon_provider(void* self, void* provider) {
    QFileDialog_SetIconProvider((QFileDialog*)self, (QAbstractFileIconProvider*)provider);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#iconProvider)
///
/// ``` QFileDialog* self ```
QAbstractFileIconProvider* q_filedialog_icon_provider(void* self) {
    return QFileDialog_IconProvider((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setLabelText)
///
/// ``` QFileDialog* self, enum QFileDialog__DialogLabel label, const char* text ```
void q_filedialog_set_label_text(void* self, int64_t label, const char* text) {
    QFileDialog_SetLabelText((QFileDialog*)self, label, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#labelText)
///
/// ``` QFileDialog* self, enum QFileDialog__DialogLabel label ```
const char* q_filedialog_label_text(void* self, int64_t label) {
    libqt_string _str = QFileDialog_LabelText((QFileDialog*)self, label);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setSupportedSchemes)
///
/// ``` QFileDialog* self, const char* schemes[] ```
void q_filedialog_set_supported_schemes(void* self, const char* schemes[]) {
    size_t schemes_len = libqt_strv_length(schemes);
    libqt_string* schemes_qstr = malloc(schemes_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < schemes_len; ++_i) {
        schemes_qstr[_i] = qstring(schemes[_i]);
    }
    libqt_list schemes_list = qstrlist(schemes_qstr, schemes_len);
    QFileDialog_SetSupportedSchemes((QFileDialog*)self, schemes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#supportedSchemes)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_supported_schemes(void* self) {
    libqt_list _arr = QFileDialog_SupportedSchemes((QFileDialog*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setProxyModel)
///
/// ``` QFileDialog* self, QAbstractProxyModel* model ```
void q_filedialog_set_proxy_model(void* self, void* model) {
    QFileDialog_SetProxyModel((QFileDialog*)self, (QAbstractProxyModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#proxyModel)
///
/// ``` QFileDialog* self ```
QAbstractProxyModel* q_filedialog_proxy_model(void* self) {
    return QFileDialog_ProxyModel((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option ```
void q_filedialog_set_option(void* self, int64_t option) {
    QFileDialog_SetOption((QFileDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#testOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option ```
bool q_filedialog_test_option(void* self, int64_t option) {
    return QFileDialog_TestOption((QFileDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOptions)
///
/// ``` QFileDialog* self, int options ```
void q_filedialog_set_options(void* self, int64_t options) {
    QFileDialog_SetOptions((QFileDialog*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#options)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_options(void* self) {
    return QFileDialog_Options((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setVisible)
///
/// ``` QFileDialog* self, bool visible ```
void q_filedialog_set_visible(void* self, bool visible) {
    QFileDialog_SetVisible((QFileDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, bool) ```
void q_filedialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QFileDialog_OnSetVisible((QFileDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileDialog* self, bool visible ```
void q_filedialog_qbase_set_visible(void* self, bool visible) {
    QFileDialog_QBaseSetVisible((QFileDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#fileSelected)
///
/// ``` QFileDialog* self, const char* file ```
void q_filedialog_file_selected(void* self, const char* file) {
    QFileDialog_FileSelected((QFileDialog*)self, qstring(file));
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_file_selected(void* self, void (*slot)(void*, const char*)) {
    QFileDialog_Connect_FileSelected((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filesSelected)
///
/// ``` QFileDialog* self, const char* files[] ```
void q_filedialog_files_selected(void* self, const char* files[]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = malloc(files_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < files_len; ++_i) {
        files_qstr[_i] = qstring(files[_i]);
    }
    libqt_list files_list = qstrlist(files_qstr, files_len);
    QFileDialog_FilesSelected((QFileDialog*)self, files_list);
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*[]) ```
void q_filedialog_on_files_selected(void* self, void (*slot)(void*, const char*)) {
    QFileDialog_Connect_FilesSelected((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentChanged)
///
/// ``` QFileDialog* self, const char* path ```
void q_filedialog_current_changed(void* self, const char* path) {
    QFileDialog_CurrentChanged((QFileDialog*)self, qstring(path));
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_current_changed(void* self, void (*slot)(void*, const char*)) {
    QFileDialog_Connect_CurrentChanged((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryEntered)
///
/// ``` QFileDialog* self, const char* directory ```
void q_filedialog_directory_entered(void* self, const char* directory) {
    QFileDialog_DirectoryEntered((QFileDialog*)self, qstring(directory));
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_directory_entered(void* self, void (*slot)(void*, const char*)) {
    QFileDialog_Connect_DirectoryEntered((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlSelected)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_url_selected(void* self, void* url) {
    QFileDialog_UrlSelected((QFileDialog*)self, (QUrl*)url);
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_url_selected(void* self, void (*slot)(void*, void*)) {
    QFileDialog_Connect_UrlSelected((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#urlsSelected)
///
/// ``` QFileDialog* self, QUrl* urls[] ```
void q_filedialog_urls_selected(void* self, void* urls[]) {
    QUrl** urls_arr = (QUrl**)urls;
    size_t urls_len = 0;
    while (urls_arr[urls_len] != NULL) {
        urls_len++;
    }
    libqt_list urls_list = {
        .len = urls_len,
        .data = {(QUrl*)urls},
    };
    QFileDialog_UrlsSelected((QFileDialog*)self, urls_list);
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*[]) ```
void q_filedialog_on_urls_selected(void* self, void (*slot)(void*, void*)) {
    QFileDialog_Connect_UrlsSelected((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#currentUrlChanged)
///
/// ``` QFileDialog* self, QUrl* url ```
void q_filedialog_current_url_changed(void* self, void* url) {
    QFileDialog_CurrentUrlChanged((QFileDialog*)self, (QUrl*)url);
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_current_url_changed(void* self, void (*slot)(void*, void*)) {
    QFileDialog_Connect_CurrentUrlChanged((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#directoryUrlEntered)
///
/// ``` QFileDialog* self, QUrl* directory ```
void q_filedialog_directory_url_entered(void* self, void* directory) {
    QFileDialog_DirectoryUrlEntered((QFileDialog*)self, (QUrl*)directory);
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QUrl*) ```
void q_filedialog_on_directory_url_entered(void* self, void (*slot)(void*, void*)) {
    QFileDialog_Connect_DirectoryUrlEntered((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#filterSelected)
///
/// ``` QFileDialog* self, const char* filter ```
void q_filedialog_filter_selected(void* self, const char* filter) {
    QFileDialog_FilterSelected((QFileDialog*)self, qstring(filter));
}

/// ``` QFileDialog* self, void (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_filter_selected(void* self, void (*slot)(void*, const char*)) {
    QFileDialog_Connect_FilterSelected((QFileDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
///
const char* q_filedialog_get_open_file_name() {
    libqt_string _str = QFileDialog_GetOpenFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
///
QUrl* q_filedialog_get_open_file_url() {
    return QFileDialog_GetOpenFileUrl();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
///
const char* q_filedialog_get_save_file_name() {
    libqt_string _str = QFileDialog_GetSaveFileName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
///
QUrl* q_filedialog_get_save_file_url() {
    return QFileDialog_GetSaveFileUrl();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
///
const char* q_filedialog_get_existing_directory() {
    libqt_string _str = QFileDialog_GetExistingDirectory();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
///
QUrl* q_filedialog_get_existing_directory_url() {
    return QFileDialog_GetExistingDirectoryUrl();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
///
const char** q_filedialog_get_open_file_names() {
    libqt_list _arr = QFileDialog_GetOpenFileNames();
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
///
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls() {
    libqt_list _arr = QFileDialog_GetOpenFileUrls();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#saveFileContent)
///
/// ``` const char* fileContent, const char* fileNameHint ```
void q_filedialog_save_file_content(const char* fileContent, const char* fileNameHint) {
    QFileDialog_SaveFileContent(qstring(fileContent), qstring(fileNameHint));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#done)
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_done(void* self, int result) {
    QFileDialog_Done((QFileDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, int) ```
void q_filedialog_on_done(void* self, void (*slot)(void*, int)) {
    QFileDialog_OnDone((QFileDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_qbase_done(void* self, int result) {
    QFileDialog_QBaseDone((QFileDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#accept)
///
/// ``` QFileDialog* self ```
void q_filedialog_accept(void* self) {
    QFileDialog_Accept((QFileDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_accept(void* self, void (*slot)()) {
    QFileDialog_OnAccept((QFileDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_accept(void* self) {
    QFileDialog_QBaseAccept((QFileDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#changeEvent)
///
/// ``` QFileDialog* self, QEvent* e ```
void q_filedialog_change_event(void* self, void* e) {
    QFileDialog_ChangeEvent((QFileDialog*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnChangeEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileDialog* self, QEvent* e ```
void q_filedialog_qbase_change_event(void* self, void* e) {
    QFileDialog_QBaseChangeEvent((QFileDialog*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filedialog_tr2(const char* s, const char* c) {
    libqt_string _str = QFileDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#setOption)
///
/// ``` QFileDialog* self, enum QFileDialog__Option option, bool on ```
void q_filedialog_set_option2(void* self, int64_t option, bool on) {
    QFileDialog_SetOption2((QFileDialog*)self, option, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_open_file_name1(void* parent) {
    libqt_string _str = QFileDialog_GetOpenFileName1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_open_file_name2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetOpenFileName2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_open_file_name3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetOpenFileName3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char* q_filedialog_get_open_file_name4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_string _str = QFileDialog_GetOpenFileName4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_open_file_url1(void* parent) {
    return QFileDialog_GetOpenFileUrl1((QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_open_file_url2(void* parent, const char* caption) {
    return QFileDialog_GetOpenFileUrl2((QWidget*)parent, qstring(caption));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_open_file_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetOpenFileUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
QUrl* q_filedialog_get_open_file_url4(void* parent, const char* caption, void* dir, const char* filter) {
    return QFileDialog_GetOpenFileUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_save_file_name1(void* parent) {
    libqt_string _str = QFileDialog_GetSaveFileName1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_save_file_name2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetSaveFileName2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_save_file_name3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetSaveFileName3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileName)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char* q_filedialog_get_save_file_name4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_string _str = QFileDialog_GetSaveFileName4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_save_file_url1(void* parent) {
    return QFileDialog_GetSaveFileUrl1((QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_save_file_url2(void* parent, const char* caption) {
    return QFileDialog_GetSaveFileUrl2((QWidget*)parent, qstring(caption));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_save_file_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetSaveFileUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getSaveFileUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
QUrl* q_filedialog_get_save_file_url4(void* parent, const char* caption, void* dir, const char* filter) {
    return QFileDialog_GetSaveFileUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent ```
const char* q_filedialog_get_existing_directory1(void* parent) {
    libqt_string _str = QFileDialog_GetExistingDirectory1((QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption ```
const char* q_filedialog_get_existing_directory2(void* parent, const char* caption) {
    libqt_string _str = QFileDialog_GetExistingDirectory2((QWidget*)parent, qstring(caption));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char* q_filedialog_get_existing_directory3(void* parent, const char* caption, const char* dir) {
    libqt_string _str = QFileDialog_GetExistingDirectory3((QWidget*)parent, qstring(caption), qstring(dir));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectory)
///
/// ``` QWidget* parent, const char* caption, const char* dir, int options ```
const char* q_filedialog_get_existing_directory4(void* parent, const char* caption, const char* dir, int64_t options) {
    libqt_string _str = QFileDialog_GetExistingDirectory4((QWidget*)parent, qstring(caption), qstring(dir), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent ```
QUrl* q_filedialog_get_existing_directory_url1(void* parent) {
    return QFileDialog_GetExistingDirectoryUrl1((QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption ```
QUrl* q_filedialog_get_existing_directory_url2(void* parent, const char* caption) {
    return QFileDialog_GetExistingDirectoryUrl2((QWidget*)parent, qstring(caption));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
QUrl* q_filedialog_get_existing_directory_url3(void* parent, const char* caption, void* dir) {
    return QFileDialog_GetExistingDirectoryUrl3((QWidget*)parent, qstring(caption), (QUrl*)dir);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, int options ```
QUrl* q_filedialog_get_existing_directory_url4(void* parent, const char* caption, void* dir, int64_t options) {
    return QFileDialog_GetExistingDirectoryUrl4((QWidget*)parent, qstring(caption), (QUrl*)dir, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getExistingDirectoryUrl)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, int options, const char* supportedSchemes[] ```
QUrl* q_filedialog_get_existing_directory_url5(void* parent, const char* caption, void* dir, int64_t options, const char* supportedSchemes[]) {
    size_t supportedSchemes_len = libqt_strv_length(supportedSchemes);
    libqt_string* supportedSchemes_qstr = malloc(supportedSchemes_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < supportedSchemes_len; ++_i) {
        supportedSchemes_qstr[_i] = qstring(supportedSchemes[_i]);
    }
    libqt_list supportedSchemes_list = qstrlist(supportedSchemes_qstr, supportedSchemes_len);
    return QFileDialog_GetExistingDirectoryUrl5((QWidget*)parent, qstring(caption), (QUrl*)dir, options, supportedSchemes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent ```
const char** q_filedialog_get_open_file_names1(void* parent) {
    libqt_list _arr = QFileDialog_GetOpenFileNames1((QWidget*)parent);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption ```
const char** q_filedialog_get_open_file_names2(void* parent, const char* caption) {
    libqt_list _arr = QFileDialog_GetOpenFileNames2((QWidget*)parent, qstring(caption));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption, const char* dir ```
const char** q_filedialog_get_open_file_names3(void* parent, const char* caption, const char* dir) {
    libqt_list _arr = QFileDialog_GetOpenFileNames3((QWidget*)parent, qstring(caption), qstring(dir));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileNames)
///
/// ``` QWidget* parent, const char* caption, const char* dir, const char* filter ```
const char** q_filedialog_get_open_file_names4(void* parent, const char* caption, const char* dir, const char* filter) {
    libqt_list _arr = QFileDialog_GetOpenFileNames4((QWidget*)parent, qstring(caption), qstring(dir), qstring(filter));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls1(void* parent) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls1((QWidget*)parent);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls2(void* parent, const char* caption) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls2((QWidget*)parent, qstring(caption));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls3(void* parent, const char* caption, void* dir) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls3((QWidget*)parent, qstring(caption), (QUrl*)dir);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledialog.html#getOpenFileUrls)
///
/// ``` QWidget* parent, const char* caption, QUrl* dir, const char* filter ```
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls4(void* parent, const char* caption, void* dir, const char* filter) {
    libqt_list _arr = QFileDialog_GetOpenFileUrls4((QWidget*)parent, qstring(caption), (QUrl*)dir, qstring(filter));
    return _arr;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QFileDialog* self, bool sizeGripEnabled ```
void q_filedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QFileDialog* self, bool modal ```
void q_filedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QFileDialog* self, int r ```
void q_filedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QFileDialog* self, int result ```
void q_filedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QFileDialog* self, void (*slot)(QDialog*, int) ```
void q_filedialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QFileDialog* self ```
void q_filedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QFileDialog* self, void (*slot)(QDialog*) ```
void q_filedialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QFileDialog* self ```
void q_filedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QFileDialog* self, void (*slot)(QDialog*) ```
void q_filedialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QFileDialog* self ```
void q_filedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QFileDialog* self ```
uintptr_t q_filedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QFileDialog* self ```
QStyle* q_filedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QFileDialog* self, QStyle* style ```
void q_filedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QFileDialog* self, enum Qt__WindowModality windowModality ```
void q_filedialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QFileDialog* self, QWidget* param1 ```
bool q_filedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QFileDialog* self, bool enabled ```
void q_filedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QFileDialog* self, bool disabled ```
void q_filedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QFileDialog* self, bool windowModified ```
void q_filedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QFileDialog* self ```
QPoint* q_filedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFileDialog* self, QSize* minimumSize ```
void q_filedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFileDialog* self, int minw, int minh ```
void q_filedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFileDialog* self, QSize* maximumSize ```
void q_filedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFileDialog* self, int maxw, int maxh ```
void q_filedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QFileDialog* self, int minw ```
void q_filedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QFileDialog* self, int minh ```
void q_filedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QFileDialog* self, int maxw ```
void q_filedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QFileDialog* self, int maxh ```
void q_filedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFileDialog* self, QSize* sizeIncrement ```
void q_filedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFileDialog* self, QSize* baseSize ```
void q_filedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFileDialog* self, int basew, int baseh ```
void q_filedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFileDialog* self, QSize* fixedSize ```
void q_filedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QFileDialog* self, int w ```
void q_filedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QFileDialog* self, int h ```
void q_filedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFileDialog* self, QPointF* param1 ```
QPointF* q_filedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFileDialog* self, QPoint* param1 ```
QPoint* q_filedialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFileDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_filedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFileDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_filedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFileDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_filedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFileDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_filedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QFileDialog* self ```
QPalette* q_filedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QFileDialog* self, QPalette* palette ```
void q_filedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QFileDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_filedialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QFileDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_filedialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QFileDialog* self ```
QFont* q_filedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QFileDialog* self, QFont* font ```
void q_filedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QFileDialog* self ```
QFontMetrics* q_filedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QFileDialog* self ```
QFontInfo* q_filedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QFileDialog* self ```
QCursor* q_filedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QFileDialog* self, QCursor* cursor ```
void q_filedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QFileDialog* self ```
bool q_filedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFileDialog* self, QBitmap* mask ```
void q_filedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFileDialog* self, QRegion* mask ```
void q_filedialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QFileDialog* self ```
void q_filedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target ```
void q_filedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFileDialog* self ```
QPixmap* q_filedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QFileDialog* self ```
QGraphicsEffect* q_filedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QFileDialog* self, QGraphicsEffect* effect ```
void q_filedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal ```
void q_filedialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal ```
void q_filedialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QFileDialog* self, const char* windowTitle ```
void q_filedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QFileDialog* self, const char* styleSheet ```
void q_filedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QFileDialog* self, QIcon* icon ```
void q_filedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QFileDialog* self ```
QIcon* q_filedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QFileDialog* self, const char* windowIconText ```
void q_filedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QFileDialog* self, const char* windowRole ```
void q_filedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QFileDialog* self, const char* filePath ```
void q_filedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QFileDialog* self, double level ```
void q_filedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QFileDialog* self ```
double q_filedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QFileDialog* self, const char* toolTip ```
void q_filedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QFileDialog* self, int msec ```
void q_filedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QFileDialog* self, const char* statusTip ```
void q_filedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QFileDialog* self, const char* whatsThis ```
void q_filedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QFileDialog* self, const char* name ```
void q_filedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QFileDialog* self, const char* description ```
void q_filedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QFileDialog* self, enum Qt__LayoutDirection direction ```
void q_filedialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QFileDialog* self, QLocale* locale ```
void q_filedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QFileDialog* self ```
QLocale* q_filedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QFileDialog* self ```
void q_filedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFileDialog* self ```
void q_filedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QFileDialog* self ```
void q_filedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QFileDialog* self ```
void q_filedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFileDialog* self, enum Qt__FocusReason reason ```
void q_filedialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QFileDialog* self, enum Qt__FocusPolicy policy ```
void q_filedialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_filedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QFileDialog* self, QWidget* focusProxy ```
void q_filedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QFileDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_filedialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFileDialog* self ```
void q_filedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFileDialog* self, QCursor* param1 ```
void q_filedialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QFileDialog* self ```
void q_filedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QFileDialog* self ```
void q_filedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QFileDialog* self ```
void q_filedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFileDialog* self, QKeySequence* key ```
int32_t q_filedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_filedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_filedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QFileDialog* self ```
bool q_filedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QFileDialog* self, bool enable ```
void q_filedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QFileDialog* self ```
QGraphicsProxyWidget* q_filedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self ```
void q_filedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self ```
void q_filedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, QRect* param1 ```
void q_filedialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFileDialog* self, QRegion* param1 ```
void q_filedialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, QRect* param1 ```
void q_filedialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFileDialog* self, QRegion* param1 ```
void q_filedialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QFileDialog* self, bool hidden ```
void q_filedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QFileDialog* self ```
void q_filedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QFileDialog* self ```
void q_filedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QFileDialog* self ```
void q_filedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QFileDialog* self ```
bool q_filedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QFileDialog* self ```
void q_filedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QFileDialog* self ```
void q_filedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFileDialog* self, int x, int y ```
void q_filedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFileDialog* self, QPoint* param1 ```
void q_filedialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFileDialog* self, int w, int h ```
void q_filedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFileDialog* self, QSize* param1 ```
void q_filedialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFileDialog* self, int x, int y, int w, int h ```
void q_filedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFileDialog* self, QRect* geometry ```
void q_filedialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QFileDialog* self ```
char* q_filedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QFileDialog* self, const char* geometry ```
bool q_filedialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QFileDialog* self ```
void q_filedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QFileDialog* self, QWidget* param1 ```
bool q_filedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QFileDialog* self, int state ```
void q_filedialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QFileDialog* self, int state ```
void q_filedialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QFileDialog* self ```
QSizePolicy* q_filedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFileDialog* self, QSizePolicy* sizePolicy ```
void q_filedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFileDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_filedialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QFileDialog* self ```
QRegion* q_filedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFileDialog* self, int left, int top, int right, int bottom ```
void q_filedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFileDialog* self, QMargins* margins ```
void q_filedialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QFileDialog* self ```
QMargins* q_filedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QFileDialog* self ```
QRect* q_filedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QFileDialog* self ```
QLayout* q_filedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QFileDialog* self, QLayout* layout ```
void q_filedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QFileDialog* self ```
void q_filedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFileDialog* self, QWidget* parent ```
void q_filedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFileDialog* self, QWidget* parent, int f ```
void q_filedialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFileDialog* self, int dx, int dy ```
void q_filedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFileDialog* self, int dx, int dy, QRect* param3 ```
void q_filedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QFileDialog* self ```
bool q_filedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QFileDialog* self, bool on ```
void q_filedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QAction* action ```
void q_filedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QFileDialog* self, QAction* actions[] ```
void q_filedialog_add_actions(void* self, void* actions[]) {
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

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QFileDialog* self, QAction* before, QAction* actions[] ```
void q_filedialog_insert_actions(void* self, void* before, void* actions[]) {
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

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QFileDialog* self, QAction* before, QAction* action ```
void q_filedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QFileDialog* self, QAction* action ```
void q_filedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QFileDialog* self ```
libqt_list /* of QAction* */ q_filedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, const char* text ```
QAction* q_filedialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QIcon* icon, const char* text ```
QAction* q_filedialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_filedialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFileDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_filedialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QFileDialog* self ```
QWidget* q_filedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QFileDialog* self, int typeVal ```
void q_filedialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFileDialog* self, enum Qt__WindowType param1 ```
void q_filedialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QFileDialog* self, int typeVal ```
void q_filedialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_filedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFileDialog* self, int x, int y ```
QWidget* q_filedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFileDialog* self, QPoint* p ```
QWidget* q_filedialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1 ```
void q_filedialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_filedialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QFileDialog* self ```
void q_filedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QFileDialog* self, QWidget* child ```
bool q_filedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QFileDialog* self ```
bool q_filedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QFileDialog* self, bool enabled ```
void q_filedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QFileDialog* self ```
QBackingStore* q_filedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QFileDialog* self ```
QWindow* q_filedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QFileDialog* self ```
QScreen* q_filedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QFileDialog* self, QScreen* screen ```
void q_filedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_filedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFileDialog* self, const char* title ```
void q_filedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, const char*) ```
void q_filedialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFileDialog* self, QIcon* icon ```
void q_filedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_filedialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFileDialog* self, const char* iconText ```
void q_filedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, const char*) ```
void q_filedialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFileDialog* self, QPoint* pos ```
void q_filedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QFileDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_filedialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QFileDialog* self ```
int64_t q_filedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QFileDialog* self, int hints ```
void q_filedialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_filedialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_filedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_filedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_filedialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_filedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFileDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_filedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFileDialog* self, QRect* rectangle ```
QPixmap* q_filedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFileDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_filedialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFileDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_filedialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFileDialog* self, int id, bool enable ```
void q_filedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFileDialog* self, int id, bool enable ```
void q_filedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFileDialog* self, enum Qt__WindowType param1, bool on ```
void q_filedialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFileDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_filedialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_filedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_filedialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileDialog* self ```
const char* q_filedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileDialog* self, const char* name ```
void q_filedialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileDialog* self ```
bool q_filedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileDialog* self ```
bool q_filedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileDialog* self, bool b ```
bool q_filedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileDialog* self ```
QThread* q_filedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileDialog* self, QThread* thread ```
void q_filedialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDialog* self, int interval ```
int32_t q_filedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileDialog* self, int id ```
void q_filedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileDialog* self ```
libqt_list /* of QObject* */ q_filedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileDialog* self, QObject* filterObj ```
void q_filedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileDialog* self, QObject* obj ```
void q_filedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filedialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filedialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filedialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filedialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileDialog* self ```
void q_filedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileDialog* self ```
void q_filedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileDialog* self, const char* name, QVariant* value ```
bool q_filedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileDialog* self, const char* name ```
QVariant* q_filedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileDialog* self ```
const char** q_filedialog_dynamic_property_names(void* self) {
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDialog* self ```
QBindingStorage* q_filedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDialog* self ```
QBindingStorage* q_filedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self ```
void q_filedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFileDialog* self, void (*slot)(QObject*) ```
void q_filedialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileDialog* self, const char* classname ```
bool q_filedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileDialog* self ```
void q_filedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filedialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDialog* self, QObject* param1 ```
void q_filedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFileDialog* self, void (*slot)(QObject*, QObject*) ```
void q_filedialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QFileDialog* self ```
bool q_filedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QFileDialog* self ```
double q_filedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QFileDialog* self ```
double q_filedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_filedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_size_hint(void* self) {
    return QFileDialog_SizeHint((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_qbase_size_hint(void* self) {
    return QFileDialog_QBaseSizeHint((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QSize* (*slot)() ```
void q_filedialog_on_size_hint(void* self, QSize* (*slot)()) {
    QFileDialog_OnSizeHint((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_minimum_size_hint(void* self) {
    return QFileDialog_MinimumSizeHint((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QSize* q_filedialog_qbase_minimum_size_hint(void* self) {
    return QFileDialog_QBaseMinimumSizeHint((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QSize* (*slot)() ```
void q_filedialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QFileDialog_OnMinimumSizeHint((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_open(void* self) {
    QFileDialog_Open((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_open(void* self) {
    QFileDialog_QBaseOpen((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_open(void* self, void (*slot)()) {
    QFileDialog_OnOpen((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_exec(void* self) {
    return QFileDialog_Exec((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_exec(void* self) {
    return QFileDialog_QBaseExec((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_exec(void* self, int32_t (*slot)()) {
    QFileDialog_OnExec((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_reject(void* self) {
    QFileDialog_Reject((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_reject(void* self) {
    QFileDialog_QBaseReject((QFileDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_reject(void* self, void (*slot)()) {
    QFileDialog_OnReject((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* param1 ```
void q_filedialog_key_press_event(void* self, void* param1) {
    QFileDialog_KeyPressEvent((QFileDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* param1 ```
void q_filedialog_qbase_key_press_event(void* self, void* param1) {
    QFileDialog_QBaseKeyPressEvent((QFileDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QKeyEvent*) ```
void q_filedialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnKeyPressEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QCloseEvent* param1 ```
void q_filedialog_close_event(void* self, void* param1) {
    QFileDialog_CloseEvent((QFileDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QCloseEvent* param1 ```
void q_filedialog_qbase_close_event(void* self, void* param1) {
    QFileDialog_QBaseCloseEvent((QFileDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QCloseEvent*) ```
void q_filedialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnCloseEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QShowEvent* param1 ```
void q_filedialog_show_event(void* self, void* param1) {
    QFileDialog_ShowEvent((QFileDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QShowEvent* param1 ```
void q_filedialog_qbase_show_event(void* self, void* param1) {
    QFileDialog_QBaseShowEvent((QFileDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QShowEvent*) ```
void q_filedialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnShowEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QResizeEvent* param1 ```
void q_filedialog_resize_event(void* self, void* param1) {
    QFileDialog_ResizeEvent((QFileDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QResizeEvent* param1 ```
void q_filedialog_qbase_resize_event(void* self, void* param1) {
    QFileDialog_QBaseResizeEvent((QFileDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QResizeEvent*) ```
void q_filedialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnResizeEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QContextMenuEvent* param1 ```
void q_filedialog_context_menu_event(void* self, void* param1) {
    QFileDialog_ContextMenuEvent((QFileDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QContextMenuEvent* param1 ```
void q_filedialog_qbase_context_menu_event(void* self, void* param1) {
    QFileDialog_QBaseContextMenuEvent((QFileDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QContextMenuEvent*) ```
void q_filedialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnContextMenuEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QObject* param1, QEvent* param2 ```
bool q_filedialog_event_filter(void* self, void* param1, void* param2) {
    return QFileDialog_EventFilter((QFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QObject* param1, QEvent* param2 ```
bool q_filedialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QFileDialog_QBaseEventFilter((QFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QObject*, QEvent*) ```
void q_filedialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFileDialog_OnEventFilter((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_dev_type(void* self) {
    return QFileDialog_DevType((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_dev_type(void* self) {
    return QFileDialog_QBaseDevType((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_dev_type(void* self, int32_t (*slot)()) {
    QFileDialog_OnDevType((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, int param1 ```
int32_t q_filedialog_height_for_width(void* self, int param1) {
    return QFileDialog_HeightForWidth((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, int param1 ```
int32_t q_filedialog_qbase_height_for_width(void* self, int param1) {
    return QFileDialog_QBaseHeightForWidth((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, int) ```
void q_filedialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QFileDialog_OnHeightForWidth((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_has_height_for_width(void* self) {
    return QFileDialog_HasHeightForWidth((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_has_height_for_width(void* self) {
    return QFileDialog_QBaseHasHeightForWidth((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QFileDialog_OnHasHeightForWidth((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QPaintEngine* q_filedialog_paint_engine(void* self) {
    return QFileDialog_PaintEngine((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QPaintEngine* q_filedialog_qbase_paint_engine(void* self) {
    return QFileDialog_QBasePaintEngine((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintEngine* (*slot)() ```
void q_filedialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QFileDialog_OnPaintEngine((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
bool q_filedialog_event(void* self, void* event) {
    return QFileDialog_Event((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
bool q_filedialog_qbase_event(void* self, void* event) {
    return QFileDialog_QBaseEvent((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QFileDialog_OnEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_press_event(void* self, void* event) {
    QFileDialog_MousePressEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_press_event(void* self, void* event) {
    QFileDialog_QBaseMousePressEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnMousePressEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_release_event(void* self, void* event) {
    QFileDialog_MouseReleaseEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_release_event(void* self, void* event) {
    QFileDialog_QBaseMouseReleaseEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnMouseReleaseEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_double_click_event(void* self, void* event) {
    QFileDialog_MouseDoubleClickEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_double_click_event(void* self, void* event) {
    QFileDialog_QBaseMouseDoubleClickEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnMouseDoubleClickEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_mouse_move_event(void* self, void* event) {
    QFileDialog_MouseMoveEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMouseEvent* event ```
void q_filedialog_qbase_mouse_move_event(void* self, void* event) {
    QFileDialog_QBaseMouseMoveEvent((QFileDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMouseEvent*) ```
void q_filedialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnMouseMoveEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QWheelEvent* event ```
void q_filedialog_wheel_event(void* self, void* event) {
    QFileDialog_WheelEvent((QFileDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QWheelEvent* event ```
void q_filedialog_qbase_wheel_event(void* self, void* event) {
    QFileDialog_QBaseWheelEvent((QFileDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QWheelEvent*) ```
void q_filedialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnWheelEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* event ```
void q_filedialog_key_release_event(void* self, void* event) {
    QFileDialog_KeyReleaseEvent((QFileDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QKeyEvent* event ```
void q_filedialog_qbase_key_release_event(void* self, void* event) {
    QFileDialog_QBaseKeyReleaseEvent((QFileDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QKeyEvent*) ```
void q_filedialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnKeyReleaseEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_focus_in_event(void* self, void* event) {
    QFileDialog_FocusInEvent((QFileDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_qbase_focus_in_event(void* self, void* event) {
    QFileDialog_QBaseFocusInEvent((QFileDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QFocusEvent*) ```
void q_filedialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnFocusInEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_focus_out_event(void* self, void* event) {
    QFileDialog_FocusOutEvent((QFileDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QFocusEvent* event ```
void q_filedialog_qbase_focus_out_event(void* self, void* event) {
    QFileDialog_QBaseFocusOutEvent((QFileDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QFocusEvent*) ```
void q_filedialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnFocusOutEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEnterEvent* event ```
void q_filedialog_enter_event(void* self, void* event) {
    QFileDialog_EnterEvent((QFileDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEnterEvent* event ```
void q_filedialog_qbase_enter_event(void* self, void* event) {
    QFileDialog_QBaseEnterEvent((QFileDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEnterEvent*) ```
void q_filedialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnEnterEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_leave_event(void* self, void* event) {
    QFileDialog_LeaveEvent((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_qbase_leave_event(void* self, void* event) {
    QFileDialog_QBaseLeaveEvent((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnLeaveEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPaintEvent* event ```
void q_filedialog_paint_event(void* self, void* event) {
    QFileDialog_PaintEvent((QFileDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintEvent* event ```
void q_filedialog_qbase_paint_event(void* self, void* event) {
    QFileDialog_QBasePaintEvent((QFileDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QPaintEvent*) ```
void q_filedialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnPaintEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMoveEvent* event ```
void q_filedialog_move_event(void* self, void* event) {
    QFileDialog_MoveEvent((QFileDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMoveEvent* event ```
void q_filedialog_qbase_move_event(void* self, void* event) {
    QFileDialog_QBaseMoveEvent((QFileDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMoveEvent*) ```
void q_filedialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnMoveEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QTabletEvent* event ```
void q_filedialog_tablet_event(void* self, void* event) {
    QFileDialog_TabletEvent((QFileDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QTabletEvent* event ```
void q_filedialog_qbase_tablet_event(void* self, void* event) {
    QFileDialog_QBaseTabletEvent((QFileDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QTabletEvent*) ```
void q_filedialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnTabletEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QActionEvent* event ```
void q_filedialog_action_event(void* self, void* event) {
    QFileDialog_ActionEvent((QFileDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QActionEvent* event ```
void q_filedialog_qbase_action_event(void* self, void* event) {
    QFileDialog_QBaseActionEvent((QFileDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QActionEvent*) ```
void q_filedialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnActionEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragEnterEvent* event ```
void q_filedialog_drag_enter_event(void* self, void* event) {
    QFileDialog_DragEnterEvent((QFileDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragEnterEvent* event ```
void q_filedialog_qbase_drag_enter_event(void* self, void* event) {
    QFileDialog_QBaseDragEnterEvent((QFileDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragEnterEvent*) ```
void q_filedialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnDragEnterEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragMoveEvent* event ```
void q_filedialog_drag_move_event(void* self, void* event) {
    QFileDialog_DragMoveEvent((QFileDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragMoveEvent* event ```
void q_filedialog_qbase_drag_move_event(void* self, void* event) {
    QFileDialog_QBaseDragMoveEvent((QFileDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragMoveEvent*) ```
void q_filedialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnDragMoveEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDragLeaveEvent* event ```
void q_filedialog_drag_leave_event(void* self, void* event) {
    QFileDialog_DragLeaveEvent((QFileDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDragLeaveEvent* event ```
void q_filedialog_qbase_drag_leave_event(void* self, void* event) {
    QFileDialog_QBaseDragLeaveEvent((QFileDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDragLeaveEvent*) ```
void q_filedialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnDragLeaveEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QDropEvent* event ```
void q_filedialog_drop_event(void* self, void* event) {
    QFileDialog_DropEvent((QFileDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QDropEvent* event ```
void q_filedialog_qbase_drop_event(void* self, void* event) {
    QFileDialog_QBaseDropEvent((QFileDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QDropEvent*) ```
void q_filedialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnDropEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QHideEvent* event ```
void q_filedialog_hide_event(void* self, void* event) {
    QFileDialog_HideEvent((QFileDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QHideEvent* event ```
void q_filedialog_qbase_hide_event(void* self, void* event) {
    QFileDialog_QBaseHideEvent((QFileDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QHideEvent*) ```
void q_filedialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnHideEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_filedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFileDialog_NativeEvent((QFileDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_filedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFileDialog_QBaseNativeEvent((QFileDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, const char*, void*, intptr_t*) ```
void q_filedialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QFileDialog_OnNativeEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_filedialog_metric(void* self, int64_t param1) {
    return QFileDialog_Metric((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_filedialog_qbase_metric(void* self, int64_t param1) {
    return QFileDialog_QBaseMetric((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_filedialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QFileDialog_OnMetric((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_init_painter(void* self, void* painter) {
    QFileDialog_InitPainter((QFileDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPainter* painter ```
void q_filedialog_qbase_init_painter(void* self, void* painter) {
    QFileDialog_QBaseInitPainter((QFileDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QPainter*) ```
void q_filedialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnInitPainter((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QPoint* offset ```
QPaintDevice* q_filedialog_redirected(void* self, void* offset) {
    return QFileDialog_Redirected((QFileDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QPoint* offset ```
QPaintDevice* q_filedialog_qbase_redirected(void* self, void* offset) {
    return QFileDialog_QBaseRedirected((QFileDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPaintDevice* (*slot)(QFileDialog*, QPoint*) ```
void q_filedialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QFileDialog_OnRedirected((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QPainter* q_filedialog_shared_painter(void* self) {
    return QFileDialog_SharedPainter((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QPainter* q_filedialog_qbase_shared_painter(void* self) {
    return QFileDialog_QBaseSharedPainter((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QPainter* (*slot)() ```
void q_filedialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QFileDialog_OnSharedPainter((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QInputMethodEvent* param1 ```
void q_filedialog_input_method_event(void* self, void* param1) {
    QFileDialog_InputMethodEvent((QFileDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QInputMethodEvent* param1 ```
void q_filedialog_qbase_input_method_event(void* self, void* param1) {
    QFileDialog_QBaseInputMethodEvent((QFileDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QInputMethodEvent*) ```
void q_filedialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnInputMethodEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_filedialog_input_method_query(void* self, int64_t param1) {
    return QFileDialog_InputMethodQuery((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_filedialog_qbase_input_method_query(void* self, int64_t param1) {
    return QFileDialog_QBaseInputMethodQuery((QFileDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QVariant* (*slot)(QFileDialog*, enum Qt__InputMethodQuery) ```
void q_filedialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QFileDialog_OnInputMethodQuery((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, bool next ```
bool q_filedialog_focus_next_prev_child(void* self, bool next) {
    return QFileDialog_FocusNextPrevChild((QFileDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, bool next ```
bool q_filedialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QFileDialog_QBaseFocusNextPrevChild((QFileDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, bool) ```
void q_filedialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QFileDialog_OnFocusNextPrevChild((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QTimerEvent* event ```
void q_filedialog_timer_event(void* self, void* event) {
    QFileDialog_TimerEvent((QFileDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QTimerEvent* event ```
void q_filedialog_qbase_timer_event(void* self, void* event) {
    QFileDialog_QBaseTimerEvent((QFileDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QTimerEvent*) ```
void q_filedialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnTimerEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QChildEvent* event ```
void q_filedialog_child_event(void* self, void* event) {
    QFileDialog_ChildEvent((QFileDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QChildEvent* event ```
void q_filedialog_qbase_child_event(void* self, void* event) {
    QFileDialog_QBaseChildEvent((QFileDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QChildEvent*) ```
void q_filedialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnChildEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_custom_event(void* self, void* event) {
    QFileDialog_CustomEvent((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QEvent* event ```
void q_filedialog_qbase_custom_event(void* self, void* event) {
    QFileDialog_QBaseCustomEvent((QFileDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QEvent*) ```
void q_filedialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnCustomEvent((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_connect_notify(void* self, void* signal) {
    QFileDialog_ConnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_qbase_connect_notify(void* self, void* signal) {
    QFileDialog_QBaseConnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnConnectNotify((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_disconnect_notify(void* self, void* signal) {
    QFileDialog_DisconnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
void q_filedialog_qbase_disconnect_notify(void* self, void* signal) {
    QFileDialog_QBaseDisconnectNotify((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnDisconnectNotify((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_adjust_position(void* self, void* param1) {
    QFileDialog_AdjustPosition((QFileDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QWidget* param1 ```
void q_filedialog_qbase_adjust_position(void* self, void* param1) {
    QFileDialog_QBaseAdjustPosition((QFileDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)(QFileDialog*, QWidget*) ```
void q_filedialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QFileDialog_OnAdjustPosition((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_update_micro_focus(void* self) {
    QFileDialog_UpdateMicroFocus((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_update_micro_focus(void* self) {
    QFileDialog_QBaseUpdateMicroFocus((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_update_micro_focus(void* self, void (*slot)()) {
    QFileDialog_OnUpdateMicroFocus((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_create(void* self) {
    QFileDialog_Create((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_create(void* self) {
    QFileDialog_QBaseCreate((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_create(void* self, void (*slot)()) {
    QFileDialog_OnCreate((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_destroy(void* self) {
    QFileDialog_Destroy((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
void q_filedialog_qbase_destroy(void* self) {
    QFileDialog_QBaseDestroy((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, void (*slot)() ```
void q_filedialog_on_destroy(void* self, void (*slot)()) {
    QFileDialog_OnDestroy((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_focus_next_child(void* self) {
    return QFileDialog_FocusNextChild((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_focus_next_child(void* self) {
    return QFileDialog_QBaseFocusNextChild((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_focus_next_child(void* self, bool (*slot)()) {
    QFileDialog_OnFocusNextChild((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_focus_previous_child(void* self) {
    return QFileDialog_FocusPreviousChild((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
bool q_filedialog_qbase_focus_previous_child(void* self) {
    return QFileDialog_QBaseFocusPreviousChild((QFileDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)() ```
void q_filedialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QFileDialog_OnFocusPreviousChild((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_sender(void* self) {
    return QFileDialog_Sender((QFileDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
QObject* q_filedialog_qbase_sender(void* self) {
    return QFileDialog_QBaseSender((QFileDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, QObject* (*slot)() ```
void q_filedialog_on_sender(void* self, QObject* (*slot)()) {
    QFileDialog_OnSender((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_sender_signal_index(void* self) {
    return QFileDialog_SenderSignalIndex((QFileDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self ```
int32_t q_filedialog_qbase_sender_signal_index(void* self) {
    return QFileDialog_QBaseSenderSignalIndex((QFileDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)() ```
void q_filedialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFileDialog_OnSenderSignalIndex((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, const char* signal ```
int32_t q_filedialog_receivers(void* self, const char* signal) {
    return QFileDialog_Receivers((QFileDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, const char* signal ```
int32_t q_filedialog_qbase_receivers(void* self, const char* signal) {
    return QFileDialog_QBaseReceivers((QFileDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, int32_t (*slot)(QFileDialog*, const char*) ```
void q_filedialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFileDialog_OnReceivers((QFileDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
bool q_filedialog_is_signal_connected(void* self, void* signal) {
    return QFileDialog_IsSignalConnected((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileDialog* self, QMetaMethod* signal ```
bool q_filedialog_qbase_is_signal_connected(void* self, void* signal) {
    return QFileDialog_QBaseIsSignalConnected((QFileDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileDialog* self, bool (*slot)(QFileDialog*, QMetaMethod*) ```
void q_filedialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFileDialog_OnIsSignalConnected((QFileDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileDialog* self ```
void q_filedialog_delete(void* self) {
    QFileDialog_Delete((QFileDialog*)(self));
}