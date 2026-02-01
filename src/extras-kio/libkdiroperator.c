#include "../extras-kcompletion/libkcompletion.hpp"
#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libkdirlister.hpp"
#include "libkfileitem.hpp"
#include "libkfilepreviewgenerator.hpp"
#include "libdropjob.hpp"
#include "libdeletejob_1.hpp"
#include "libkpreviewwidgetbase.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqprogressbar.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkdiroperator.hpp"
#include "libkdiroperator.h"

KDirOperator* k_diroperator_new() {
    return KDirOperator_new();
}

KDirOperator* k_diroperator_new2(void* urlName) {
    return KDirOperator_new2((QUrl*)urlName);
}

KDirOperator* k_diroperator_new3(void* urlName, void* parent) {
    return KDirOperator_new3((QUrl*)urlName, (QWidget*)parent);
}

const QMetaObject* k_diroperator_meta_object(void* self) {
    return KDirOperator_MetaObject((KDirOperator*)self);
}

void k_diroperator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDirOperator_OnMetaObject((KDirOperator*)self, (intptr_t)callback);
}

const QMetaObject* k_diroperator_qbase_meta_object(void* self) {
    return KDirOperator_QBaseMetaObject((KDirOperator*)self);
}

void* k_diroperator_metacast(void* self, const char* param1) {
    return KDirOperator_Metacast((KDirOperator*)self, param1);
}

void k_diroperator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDirOperator_OnMetacast((KDirOperator*)self, (intptr_t)callback);
}

void* k_diroperator_qbase_metacast(void* self, const char* param1) {
    return KDirOperator_QBaseMetacast((KDirOperator*)self, param1);
}

int32_t k_diroperator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirOperator_Metacall((KDirOperator*)self, param1, param2, param3);
}

void k_diroperator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDirOperator_OnMetacall((KDirOperator*)self, (intptr_t)callback);
}

int32_t k_diroperator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirOperator_QBaseMetacall((KDirOperator*)self, param1, param2, param3);
}

const char* k_diroperator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_show_hidden_files(void* self, bool s) {
    KDirOperator_SetShowHiddenFiles((KDirOperator*)self, s);
}

void k_diroperator_on_set_show_hidden_files(void* self, void (*callback)(void*, bool)) {
    KDirOperator_OnSetShowHiddenFiles((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_show_hidden_files(void* self, bool s) {
    KDirOperator_QBaseSetShowHiddenFiles((KDirOperator*)self, s);
}

bool k_diroperator_show_hidden_files(void* self) {
    return KDirOperator_ShowHiddenFiles((KDirOperator*)self);
}

void k_diroperator_close(void* self) {
    KDirOperator_Close((KDirOperator*)self);
}

void k_diroperator_set_name_filter(void* self, const char* filter) {
    KDirOperator_SetNameFilter((KDirOperator*)self, qstring(filter));
}

const char* k_diroperator_name_filter(void* self) {
    libqt_string _str = KDirOperator_NameFilter((KDirOperator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_mime_filter(void* self, const char* mimetypes[static 1]) {
    size_t mimetypes_len = libqt_strv_length(mimetypes);
    libqt_string* mimetypes_qstr = (libqt_string*)malloc(mimetypes_len * sizeof(libqt_string));
    if (mimetypes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_set_mime_filter\n");
        abort();
    }
    for (size_t i = 0; i < mimetypes_len; ++i) {
        mimetypes_qstr[i] = qstring(mimetypes[i]);
    }
    libqt_list mimetypes_list = qlist(mimetypes_qstr, mimetypes_len);
    KDirOperator_SetMimeFilter((KDirOperator*)self, mimetypes_list);
    free(mimetypes_qstr);
}

const char** k_diroperator_mime_filter(void* self) {
    libqt_list _arr = KDirOperator_MimeFilter((KDirOperator*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_mime_filter\n");
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

void k_diroperator_set_new_file_menu_supported_mime_types(void* self, const char* mime[static 1]) {
    size_t mime_len = libqt_strv_length(mime);
    libqt_string* mime_qstr = (libqt_string*)malloc(mime_len * sizeof(libqt_string));
    if (mime_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_set_new_file_menu_supported_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < mime_len; ++i) {
        mime_qstr[i] = qstring(mime[i]);
    }
    libqt_list mime_list = qlist(mime_qstr, mime_len);
    KDirOperator_SetNewFileMenuSupportedMimeTypes((KDirOperator*)self, mime_list);
    free(mime_qstr);
}

const char** k_diroperator_new_file_menu_supported_mime_types(void* self) {
    libqt_list _arr = KDirOperator_NewFileMenuSupportedMimeTypes((KDirOperator*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_new_file_menu_supported_mime_types\n");
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

void k_diroperator_set_new_file_menu_select_dir_when_already_exist(void* self, bool selectOnDirExists) {
    KDirOperator_SetNewFileMenuSelectDirWhenAlreadyExist((KDirOperator*)self, selectOnDirExists);
}

void k_diroperator_clear_filter(void* self) {
    KDirOperator_ClearFilter((KDirOperator*)self);
}

QUrl* k_diroperator_url(void* self) {
    return KDirOperator_Url((KDirOperator*)self);
}

void k_diroperator_set_url(void* self, void* url, bool clearforward) {
    KDirOperator_SetUrl((KDirOperator*)self, (QUrl*)url, clearforward);
}

void k_diroperator_on_set_url(void* self, void (*callback)(void*, void*, bool)) {
    KDirOperator_OnSetUrl((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_url(void* self, void* url, bool clearforward) {
    KDirOperator_QBaseSetUrl((KDirOperator*)self, (QUrl*)url, clearforward);
}

void k_diroperator_set_current_item(void* self, void* url) {
    KDirOperator_SetCurrentItem((KDirOperator*)self, (QUrl*)url);
}

void k_diroperator_set_current_item2(void* self, void* item) {
    KDirOperator_SetCurrentItem2((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_set_current_items(void* self, libqt_list /* of QUrl* */ urls) {
    KDirOperator_SetCurrentItems((KDirOperator*)self, urls);
}

void k_diroperator_set_current_items2(void* self, void* items) {
    KDirOperator_SetCurrentItems2((KDirOperator*)self, (KFileItemList*)items);
}

QAbstractItemView* k_diroperator_view(void* self) {
    return KDirOperator_View((KDirOperator*)self);
}

void k_diroperator_set_view_mode(void* self, int32_t viewKind) {
    KDirOperator_SetViewMode((KDirOperator*)self, viewKind);
}

int32_t k_diroperator_view_mode(void* self) {
    return KDirOperator_ViewMode((KDirOperator*)self);
}

void k_diroperator_set_sorting(void* self, int32_t sorting) {
    KDirOperator_SetSorting((KDirOperator*)self, sorting);
}

int32_t k_diroperator_sorting(void* self) {
    return KDirOperator_Sorting((KDirOperator*)self);
}

bool k_diroperator_is_root(void* self) {
    return KDirOperator_IsRoot((KDirOperator*)self);
}

KDirLister* k_diroperator_dir_lister(void* self) {
    return KDirOperator_DirLister((KDirOperator*)self);
}

QProgressBar* k_diroperator_progress_bar(void* self) {
    return KDirOperator_ProgressBar((KDirOperator*)self);
}

void k_diroperator_set_mode(void* self, int32_t m) {
    KDirOperator_SetMode((KDirOperator*)self, m);
}

void k_diroperator_on_set_mode(void* self, void (*callback)(void*, int32_t)) {
    KDirOperator_OnSetMode((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_mode(void* self, int32_t m) {
    KDirOperator_QBaseSetMode((KDirOperator*)self, m);
}

int32_t k_diroperator_mode(void* self) {
    return KDirOperator_Mode((KDirOperator*)self);
}

void k_diroperator_set_preview_widget(void* self, void* w) {
    KDirOperator_SetPreviewWidget((KDirOperator*)self, (KPreviewWidgetBase*)w);
}

void k_diroperator_on_set_preview_widget(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnSetPreviewWidget((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_preview_widget(void* self, void* w) {
    KDirOperator_QBaseSetPreviewWidget((KDirOperator*)self, (KPreviewWidgetBase*)w);
}

KFileItemList* k_diroperator_selected_items(void* self) {
    return KDirOperator_SelectedItems((KDirOperator*)self);
}

bool k_diroperator_is_selected(void* self, void* item) {
    return KDirOperator_IsSelected((KDirOperator*)self, (KFileItem*)item);
}

int32_t k_diroperator_num_dirs(void* self) {
    return KDirOperator_NumDirs((KDirOperator*)self);
}

int32_t k_diroperator_num_files(void* self) {
    return KDirOperator_NumFiles((KDirOperator*)self);
}

KCompletion* k_diroperator_completion_object(void* self) {
    return KDirOperator_CompletionObject((KDirOperator*)self);
}

KCompletion* k_diroperator_dir_completion_object(void* self) {
    return KDirOperator_DirCompletionObject((KDirOperator*)self);
}

QAction* k_diroperator_action(void* self, int32_t action) {
    return KDirOperator_Action((KDirOperator*)self, action);
}

libqt_list /* of QAction* */ k_diroperator_all_actions(void* self) {
    libqt_list _arr = KDirOperator_AllActions((KDirOperator*)self);
    return _arr;
}

void k_diroperator_set_view_config(void* self, void* configGroup) {
    KDirOperator_SetViewConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

void k_diroperator_on_set_view_config(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnSetViewConfig((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_view_config(void* self, void* configGroup) {
    KDirOperator_QBaseSetViewConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

KConfigGroup* k_diroperator_view_config_group(void* self) {
    return KDirOperator_ViewConfigGroup((KDirOperator*)self);
}

void k_diroperator_read_config(void* self, void* configGroup) {
    KDirOperator_ReadConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

void k_diroperator_on_read_config(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnReadConfig((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_read_config(void* self, void* configGroup) {
    KDirOperator_QBaseReadConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

void k_diroperator_write_config(void* self, void* configGroup) {
    KDirOperator_WriteConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

void k_diroperator_on_write_config(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnWriteConfig((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_write_config(void* self, void* configGroup) {
    KDirOperator_QBaseWriteConfig((KDirOperator*)self, (KConfigGroup*)configGroup);
}

void k_diroperator_set_only_double_click_selects_files(void* self, bool enable) {
    KDirOperator_SetOnlyDoubleClickSelectsFiles((KDirOperator*)self, enable);
}

bool k_diroperator_only_double_click_selects_files(void* self) {
    return KDirOperator_OnlyDoubleClickSelectsFiles((KDirOperator*)self);
}

void k_diroperator_set_follow_new_directories(void* self, bool enable) {
    KDirOperator_SetFollowNewDirectories((KDirOperator*)self, enable);
}

bool k_diroperator_follow_new_directories(void* self) {
    return KDirOperator_FollowNewDirectories((KDirOperator*)self);
}

void k_diroperator_set_follow_selected_directories(void* self, bool enable) {
    KDirOperator_SetFollowSelectedDirectories((KDirOperator*)self, enable);
}

bool k_diroperator_follow_selected_directories(void* self) {
    return KDirOperator_FollowSelectedDirectories((KDirOperator*)self);
}

KIO__DeleteJob* k_diroperator_del(void* self, void* items, void* parent, bool ask, bool showProgress) {
    return KDirOperator_Del((KDirOperator*)self, (KFileItemList*)items, (QWidget*)parent, ask, showProgress);
}

void k_diroperator_on_del(void* self, KIO__DeleteJob* (*callback)(void*, void*, void*, bool, bool)) {
    KDirOperator_OnDel((KDirOperator*)self, (intptr_t)callback);
}

KIO__DeleteJob* k_diroperator_qbase_del(void* self, void* items, void* parent, bool ask, bool showProgress) {
    return KDirOperator_QBaseDel((KDirOperator*)self, (KFileItemList*)items, (QWidget*)parent, ask, showProgress);
}

void k_diroperator_clear_history(void* self) {
    KDirOperator_ClearHistory((KDirOperator*)self);
}

void k_diroperator_set_enable_dir_highlighting(void* self, bool enable) {
    KDirOperator_SetEnableDirHighlighting((KDirOperator*)self, enable);
}

void k_diroperator_on_set_enable_dir_highlighting(void* self, void (*callback)(void*, bool)) {
    KDirOperator_OnSetEnableDirHighlighting((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_enable_dir_highlighting(void* self, bool enable) {
    KDirOperator_QBaseSetEnableDirHighlighting((KDirOperator*)self, enable);
}

bool k_diroperator_dir_highlighting(void* self) {
    return KDirOperator_DirHighlighting((KDirOperator*)self);
}

bool k_diroperator_dir_only_mode(void* self) {
    return KDirOperator_DirOnlyMode((KDirOperator*)self);
}

bool k_diroperator_dir_only_mode2(uint32_t mode) {
    return KDirOperator_DirOnlyMode2(mode);
}

void k_diroperator_setup_menu(void* self, int whichActions) {
    KDirOperator_SetupMenu((KDirOperator*)self, whichActions);
}

void k_diroperator_set_accept_drops(void* self, bool b) {
    KDirOperator_SetAcceptDrops((KDirOperator*)self, b);
}

void k_diroperator_on_set_accept_drops(void* self, void (*callback)(void*, bool)) {
    KDirOperator_OnSetAcceptDrops((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_accept_drops(void* self, bool b) {
    KDirOperator_QBaseSetAcceptDrops((KDirOperator*)self, b);
}

void k_diroperator_set_drop_options(void* self, int options) {
    KDirOperator_SetDropOptions((KDirOperator*)self, options);
}

void k_diroperator_on_set_drop_options(void* self, void (*callback)(void*, int)) {
    KDirOperator_OnSetDropOptions((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_drop_options(void* self, int options) {
    KDirOperator_QBaseSetDropOptions((KDirOperator*)self, options);
}

KIO__CopyJob* k_diroperator_trash(void* self, void* items, void* parent, bool ask, bool showProgress) {
    return KDirOperator_Trash((KDirOperator*)self, (KFileItemList*)items, (QWidget*)parent, ask, showProgress);
}

void k_diroperator_on_trash(void* self, KIO__CopyJob* (*callback)(void*, void*, void*, bool, bool)) {
    KDirOperator_OnTrash((KDirOperator*)self, (intptr_t)callback);
}

KIO__CopyJob* k_diroperator_qbase_trash(void* self, void* items, void* parent, bool ask, bool showProgress) {
    return KDirOperator_QBaseTrash((KDirOperator*)self, (KFileItemList*)items, (QWidget*)parent, ask, showProgress);
}

KFilePreviewGenerator* k_diroperator_preview_generator(void* self) {
    return KDirOperator_PreviewGenerator((KDirOperator*)self);
}

void k_diroperator_set_inline_preview_shown(void* self, bool show) {
    KDirOperator_SetInlinePreviewShown((KDirOperator*)self, show);
}

int32_t k_diroperator_decoration_position(void* self) {
    return KDirOperator_DecorationPosition((KDirOperator*)self);
}

void k_diroperator_set_decoration_position(void* self, int32_t position) {
    KDirOperator_SetDecorationPosition((KDirOperator*)self, position);
}

bool k_diroperator_is_inline_preview_shown(void* self) {
    return KDirOperator_IsInlinePreviewShown((KDirOperator*)self);
}

int32_t k_diroperator_icon_size(void* self) {
    return KDirOperator_IconSize((KDirOperator*)self);
}

void k_diroperator_set_is_saving(void* self, bool isSaving) {
    KDirOperator_SetIsSaving((KDirOperator*)self, isSaving);
}

bool k_diroperator_is_saving(void* self) {
    return KDirOperator_IsSaving((KDirOperator*)self);
}

const char** k_diroperator_supported_schemes(void* self) {
    libqt_list _arr = KDirOperator_SupportedSchemes((KDirOperator*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_supported_schemes\n");
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

void k_diroperator_show_open_with_actions(void* self, bool enable) {
    KDirOperator_ShowOpenWithActions((KDirOperator*)self, enable);
}

bool k_diroperator_using_key_navigation(void* self) {
    return KDirOperator_UsingKeyNavigation((KDirOperator*)self);
}

QAbstractItemView* k_diroperator_create_view(void* self, void* parent, int32_t viewKind) {
    return KDirOperator_CreateView((KDirOperator*)self, (QWidget*)parent, viewKind);
}

void k_diroperator_on_create_view(void* self, QAbstractItemView* (*callback)(void*, void*, int32_t)) {
    KDirOperator_OnCreateView((KDirOperator*)self, (intptr_t)callback);
}

QAbstractItemView* k_diroperator_qbase_create_view(void* self, void* parent, int32_t viewKind) {
    return KDirOperator_QBaseCreateView((KDirOperator*)self, (QWidget*)parent, viewKind);
}

void k_diroperator_set_dir_lister(void* self, void* lister) {
    KDirOperator_SetDirLister((KDirOperator*)self, (KDirLister*)lister);
}

void k_diroperator_on_set_dir_lister(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnSetDirLister((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_set_dir_lister(void* self, void* lister) {
    KDirOperator_QBaseSetDirLister((KDirOperator*)self, (KDirLister*)lister);
}

void k_diroperator_resize_event(void* self, void* event) {
    KDirOperator_ResizeEvent((KDirOperator*)self, (QResizeEvent*)event);
}

void k_diroperator_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnResizeEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_resize_event(void* self, void* event) {
    KDirOperator_QBaseResizeEvent((KDirOperator*)self, (QResizeEvent*)event);
}

void k_diroperator_setup_actions(void* self) {
    KDirOperator_SetupActions((KDirOperator*)self);
}

void k_diroperator_on_setup_actions(void* self, void (*callback)()) {
    KDirOperator_OnSetupActions((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_setup_actions(void* self) {
    KDirOperator_QBaseSetupActions((KDirOperator*)self);
}

void k_diroperator_update_sort_actions(void* self) {
    KDirOperator_UpdateSortActions((KDirOperator*)self);
}

void k_diroperator_on_update_sort_actions(void* self, void (*callback)()) {
    KDirOperator_OnUpdateSortActions((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_update_sort_actions(void* self) {
    KDirOperator_QBaseUpdateSortActions((KDirOperator*)self);
}

void k_diroperator_update_view_actions(void* self) {
    KDirOperator_UpdateViewActions((KDirOperator*)self);
}

void k_diroperator_on_update_view_actions(void* self, void (*callback)()) {
    KDirOperator_OnUpdateViewActions((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_update_view_actions(void* self) {
    KDirOperator_QBaseUpdateViewActions((KDirOperator*)self);
}

void k_diroperator_setup_menu2(void* self) {
    KDirOperator_SetupMenu2((KDirOperator*)self);
}

void k_diroperator_on_setup_menu2(void* self, void (*callback)()) {
    KDirOperator_OnSetupMenu2((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_setup_menu2(void* self) {
    KDirOperator_QBaseSetupMenu2((KDirOperator*)self);
}

void k_diroperator_prepare_completion_objects(void* self) {
    KDirOperator_PrepareCompletionObjects((KDirOperator*)self);
}

void k_diroperator_on_prepare_completion_objects(void* self, void (*callback)()) {
    KDirOperator_OnPrepareCompletionObjects((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_prepare_completion_objects(void* self) {
    KDirOperator_QBasePrepareCompletionObjects((KDirOperator*)self);
}

bool k_diroperator_check_preview_support(void* self) {
    return KDirOperator_CheckPreviewSupport((KDirOperator*)self);
}

void k_diroperator_on_check_preview_support(void* self, bool (*callback)()) {
    KDirOperator_OnCheckPreviewSupport((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_qbase_check_preview_support(void* self) {
    return KDirOperator_QBaseCheckPreviewSupport((KDirOperator*)self);
}

void k_diroperator_activated_menu(void* self, void* item, void* pos) {
    KDirOperator_ActivatedMenu((KDirOperator*)self, (KFileItem*)item, (QPoint*)pos);
}

void k_diroperator_on_activated_menu(void* self, void (*callback)(void*, void*, void*)) {
    KDirOperator_OnActivatedMenu((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_activated_menu(void* self, void* item, void* pos) {
    KDirOperator_QBaseActivatedMenu((KDirOperator*)self, (KFileItem*)item, (QPoint*)pos);
}

void k_diroperator_change_event(void* self, void* event) {
    KDirOperator_ChangeEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_on_change_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnChangeEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_change_event(void* self, void* event) {
    KDirOperator_QBaseChangeEvent((KDirOperator*)self, (QEvent*)event);
}

bool k_diroperator_event_filter(void* self, void* watched, void* event) {
    return KDirOperator_EventFilter((KDirOperator*)self, (QObject*)watched, (QEvent*)event);
}

void k_diroperator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDirOperator_OnEventFilter((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_qbase_event_filter(void* self, void* watched, void* event) {
    return KDirOperator_QBaseEventFilter((KDirOperator*)self, (QObject*)watched, (QEvent*)event);
}

void k_diroperator_back(void* self) {
    KDirOperator_Back((KDirOperator*)self);
}

void k_diroperator_on_back(void* self, void (*callback)()) {
    KDirOperator_OnBack((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_back(void* self) {
    KDirOperator_QBaseBack((KDirOperator*)self);
}

void k_diroperator_forward(void* self) {
    KDirOperator_Forward((KDirOperator*)self);
}

void k_diroperator_on_forward(void* self, void (*callback)()) {
    KDirOperator_OnForward((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_forward(void* self) {
    KDirOperator_QBaseForward((KDirOperator*)self);
}

void k_diroperator_home(void* self) {
    KDirOperator_Home((KDirOperator*)self);
}

void k_diroperator_on_home(void* self, void (*callback)()) {
    KDirOperator_OnHome((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_home(void* self) {
    KDirOperator_QBaseHome((KDirOperator*)self);
}

void k_diroperator_cd_up(void* self) {
    KDirOperator_CdUp((KDirOperator*)self);
}

void k_diroperator_on_cd_up(void* self, void (*callback)()) {
    KDirOperator_OnCdUp((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_cd_up(void* self) {
    KDirOperator_QBaseCdUp((KDirOperator*)self);
}

void k_diroperator_update_dir(void* self) {
    KDirOperator_UpdateDir((KDirOperator*)self);
}

void k_diroperator_reread_dir(void* self) {
    KDirOperator_RereadDir((KDirOperator*)self);
}

void k_diroperator_on_reread_dir(void* self, void (*callback)()) {
    KDirOperator_OnRereadDir((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_reread_dir(void* self) {
    KDirOperator_QBaseRereadDir((KDirOperator*)self);
}

void k_diroperator_mkdir(void* self) {
    KDirOperator_Mkdir((KDirOperator*)self);
}

void k_diroperator_on_mkdir(void* self, void (*callback)()) {
    KDirOperator_OnMkdir((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_mkdir(void* self) {
    KDirOperator_QBaseMkdir((KDirOperator*)self);
}

void k_diroperator_delete_selected(void* self) {
    KDirOperator_DeleteSelected((KDirOperator*)self);
}

void k_diroperator_on_delete_selected(void* self, void (*callback)()) {
    KDirOperator_OnDeleteSelected((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_delete_selected(void* self) {
    KDirOperator_QBaseDeleteSelected((KDirOperator*)self);
}

void k_diroperator_update_selection_dependent_actions(void* self) {
    KDirOperator_UpdateSelectionDependentActions((KDirOperator*)self);
}

const char* k_diroperator_make_completion(void* self, const char* param1) {
    libqt_string _str = KDirOperator_MakeCompletion((KDirOperator*)self, qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_diroperator_make_dir_completion(void* self, const char* param1) {
    libqt_string _str = KDirOperator_MakeDirCompletion((KDirOperator*)self, qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_rename_selected(void* self) {
    KDirOperator_RenameSelected((KDirOperator*)self);
}

void k_diroperator_trash_selected(void* self) {
    KDirOperator_TrashSelected((KDirOperator*)self);
}

void k_diroperator_on_trash_selected(void* self, void (*callback)()) {
    KDirOperator_OnTrashSelected((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_trash_selected(void* self) {
    KDirOperator_QBaseTrashSelected((KDirOperator*)self);
}

void k_diroperator_set_icon_size(void* self, int value) {
    KDirOperator_SetIconSize((KDirOperator*)self, value);
}

void k_diroperator_set_supported_schemes(void* self, const char* schemes[static 1]) {
    size_t schemes_len = libqt_strv_length(schemes);
    libqt_string* schemes_qstr = (libqt_string*)malloc(schemes_len * sizeof(libqt_string));
    if (schemes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_set_supported_schemes\n");
        abort();
    }
    for (size_t i = 0; i < schemes_len; ++i) {
        schemes_qstr[i] = qstring(schemes[i]);
    }
    libqt_list schemes_list = qlist(schemes_qstr, schemes_len);
    KDirOperator_SetSupportedSchemes((KDirOperator*)self, schemes_list);
    free(schemes_qstr);
}

void k_diroperator_reset_cursor(void* self) {
    KDirOperator_ResetCursor((KDirOperator*)self);
}

void k_diroperator_on_reset_cursor(void* self, void (*callback)()) {
    KDirOperator_OnResetCursor((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_reset_cursor(void* self) {
    KDirOperator_QBaseResetCursor((KDirOperator*)self);
}

void k_diroperator_path_changed(void* self) {
    KDirOperator_PathChanged((KDirOperator*)self);
}

void k_diroperator_on_path_changed(void* self, void (*callback)()) {
    KDirOperator_OnPathChanged((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_path_changed(void* self) {
    KDirOperator_QBasePathChanged((KDirOperator*)self);
}

void k_diroperator_select_dir(void* self, void* item) {
    KDirOperator_SelectDir((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_select_dir(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnSelectDir((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_select_dir(void* self, void* item) {
    KDirOperator_QBaseSelectDir((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_select_file(void* self, void* item) {
    KDirOperator_SelectFile((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_select_file(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnSelectFile((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_select_file(void* self, void* item) {
    KDirOperator_QBaseSelectFile((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_highlight_file(void* self, void* item) {
    KDirOperator_HighlightFile((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_highlight_file(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnHighlightFile((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_highlight_file(void* self, void* item) {
    KDirOperator_QBaseHighlightFile((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_sort_by_name(void* self) {
    KDirOperator_SortByName((KDirOperator*)self);
}

void k_diroperator_on_sort_by_name(void* self, void (*callback)()) {
    KDirOperator_OnSortByName((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_sort_by_name(void* self) {
    KDirOperator_QBaseSortByName((KDirOperator*)self);
}

void k_diroperator_sort_by_size(void* self) {
    KDirOperator_SortBySize((KDirOperator*)self);
}

void k_diroperator_on_sort_by_size(void* self, void (*callback)()) {
    KDirOperator_OnSortBySize((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_sort_by_size(void* self) {
    KDirOperator_QBaseSortBySize((KDirOperator*)self);
}

void k_diroperator_sort_by_date(void* self) {
    KDirOperator_SortByDate((KDirOperator*)self);
}

void k_diroperator_on_sort_by_date(void* self, void (*callback)()) {
    KDirOperator_OnSortByDate((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_sort_by_date(void* self) {
    KDirOperator_QBaseSortByDate((KDirOperator*)self);
}

void k_diroperator_sort_by_type(void* self) {
    KDirOperator_SortByType((KDirOperator*)self);
}

void k_diroperator_on_sort_by_type(void* self, void (*callback)()) {
    KDirOperator_OnSortByType((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_sort_by_type(void* self) {
    KDirOperator_QBaseSortByType((KDirOperator*)self);
}

void k_diroperator_sort_reversed(void* self) {
    KDirOperator_SortReversed((KDirOperator*)self);
}

void k_diroperator_on_sort_reversed(void* self, void (*callback)()) {
    KDirOperator_OnSortReversed((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_sort_reversed(void* self) {
    KDirOperator_QBaseSortReversed((KDirOperator*)self);
}

void k_diroperator_toggle_dirs_first(void* self) {
    KDirOperator_ToggleDirsFirst((KDirOperator*)self);
}

void k_diroperator_on_toggle_dirs_first(void* self, void (*callback)()) {
    KDirOperator_OnToggleDirsFirst((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_toggle_dirs_first(void* self) {
    KDirOperator_QBaseToggleDirsFirst((KDirOperator*)self);
}

void k_diroperator_toggle_ignore_case(void* self) {
    KDirOperator_ToggleIgnoreCase((KDirOperator*)self);
}

void k_diroperator_on_toggle_ignore_case(void* self, void (*callback)()) {
    KDirOperator_OnToggleIgnoreCase((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_toggle_ignore_case(void* self) {
    KDirOperator_QBaseToggleIgnoreCase((KDirOperator*)self);
}

void k_diroperator_slot_completion_match(void* self, const char* match) {
    KDirOperator_SlotCompletionMatch((KDirOperator*)self, qstring(match));
}

void k_diroperator_on_slot_completion_match(void* self, void (*callback)(void*, const char*)) {
    KDirOperator_OnSlotCompletionMatch((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_qbase_slot_completion_match(void* self, const char* match) {
    KDirOperator_QBaseSlotCompletionMatch((KDirOperator*)self, qstring(match));
}

void k_diroperator_url_entered(void* self, void* param1) {
    KDirOperator_UrlEntered((KDirOperator*)self, (QUrl*)param1);
}

void k_diroperator_on_url_entered(void* self, void (*callback)(void*, void*)) {
    KDirOperator_Connect_UrlEntered((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_update_information(void* self, int files, int dirs) {
    KDirOperator_UpdateInformation((KDirOperator*)self, files, dirs);
}

void k_diroperator_on_update_information(void* self, void (*callback)(void*, int, int)) {
    KDirOperator_Connect_UpdateInformation((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_completion(void* self, const char* param1) {
    KDirOperator_Completion((KDirOperator*)self, qstring(param1));
}

void k_diroperator_on_completion(void* self, void (*callback)(void*, const char*)) {
    KDirOperator_Connect_Completion((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_finished_loading(void* self) {
    KDirOperator_FinishedLoading((KDirOperator*)self);
}

void k_diroperator_on_finished_loading(void* self, void (*callback)(void*)) {
    KDirOperator_Connect_FinishedLoading((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_view_changed(void* self, void* newView) {
    KDirOperator_ViewChanged((KDirOperator*)self, (QAbstractItemView*)newView);
}

void k_diroperator_on_view_changed(void* self, void (*callback)(void*, void*)) {
    KDirOperator_Connect_ViewChanged((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_file_highlighted(void* self, void* item) {
    KDirOperator_FileHighlighted((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_file_highlighted(void* self, void (*callback)(void*, void*)) {
    KDirOperator_Connect_FileHighlighted((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_dir_activated(void* self, void* item) {
    KDirOperator_DirActivated((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_dir_activated(void* self, void (*callback)(void*, void*)) {
    KDirOperator_Connect_DirActivated((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_file_selected(void* self, void* item) {
    KDirOperator_FileSelected((KDirOperator*)self, (KFileItem*)item);
}

void k_diroperator_on_file_selected(void* self, void (*callback)(void*, void*)) {
    KDirOperator_Connect_FileSelected((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_dropped(void* self, void* item, void* event, libqt_list /* of QUrl* */ urls) {
    KDirOperator_Dropped((KDirOperator*)self, (KFileItem*)item, (QDropEvent*)event, urls);
}

void k_diroperator_on_dropped(void* self, void (*callback)(void*, void*, void*, QUrl**)) {
    KDirOperator_Connect_Dropped((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_context_menu_about_to_show(void* self, void* item, void* menu) {
    KDirOperator_ContextMenuAboutToShow((KDirOperator*)self, (KFileItem*)item, (QMenu*)menu);
}

void k_diroperator_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*)) {
    KDirOperator_Connect_ContextMenuAboutToShow((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_current_icon_size_changed(void* self, int size) {
    KDirOperator_CurrentIconSizeChanged((KDirOperator*)self, size);
}

void k_diroperator_on_current_icon_size_changed(void* self, void (*callback)(void*, int)) {
    KDirOperator_Connect_CurrentIconSizeChanged((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_key_enter_return_pressed(void* self) {
    KDirOperator_KeyEnterReturnPressed((KDirOperator*)self);
}

void k_diroperator_on_key_enter_return_pressed(void* self, void (*callback)(void*)) {
    KDirOperator_Connect_KeyEnterReturnPressed((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_renaming_finished(void* self, libqt_list /* of QUrl* */ urls) {
    KDirOperator_RenamingFinished((KDirOperator*)self, urls);
}

void k_diroperator_on_renaming_finished(void* self, void (*callback)(void*, QUrl**)) {
    KDirOperator_Connect_RenamingFinished((KDirOperator*)self, (intptr_t)callback);
}

const char* k_diroperator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_diroperator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_diroperator_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_diroperator_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_diroperator_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_diroperator_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_diroperator_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_diroperator_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_diroperator_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_diroperator_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_diroperator_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_diroperator_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_diroperator_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_diroperator_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_diroperator_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_diroperator_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_diroperator_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_diroperator_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_diroperator_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_diroperator_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_diroperator_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_diroperator_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_diroperator_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_diroperator_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_diroperator_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_diroperator_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_diroperator_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_diroperator_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_diroperator_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_diroperator_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_diroperator_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_diroperator_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_diroperator_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_diroperator_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_diroperator_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_diroperator_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_diroperator_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_diroperator_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_diroperator_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_diroperator_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_diroperator_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_diroperator_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_diroperator_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_diroperator_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_diroperator_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_diroperator_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_diroperator_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_diroperator_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_diroperator_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_diroperator_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_diroperator_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_diroperator_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_diroperator_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_diroperator_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_diroperator_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_diroperator_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_diroperator_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_diroperator_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_diroperator_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_diroperator_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_diroperator_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_diroperator_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_diroperator_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_diroperator_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_diroperator_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_diroperator_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_diroperator_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_diroperator_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_diroperator_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_diroperator_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_diroperator_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_diroperator_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_diroperator_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_diroperator_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_diroperator_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_diroperator_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_diroperator_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_diroperator_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_diroperator_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_diroperator_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_diroperator_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_diroperator_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_diroperator_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_diroperator_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_diroperator_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_diroperator_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_diroperator_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_diroperator_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_diroperator_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_diroperator_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_diroperator_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_diroperator_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_diroperator_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_diroperator_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_diroperator_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_diroperator_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_diroperator_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_diroperator_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_diroperator_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_diroperator_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_diroperator_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_diroperator_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_diroperator_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_diroperator_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_diroperator_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_diroperator_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_diroperator_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_diroperator_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_diroperator_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_diroperator_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_diroperator_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_diroperator_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_diroperator_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_diroperator_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_diroperator_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_diroperator_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_diroperator_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_diroperator_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_diroperator_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_diroperator_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_diroperator_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_diroperator_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_diroperator_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_diroperator_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_diroperator_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_diroperator_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_diroperator_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_diroperator_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_diroperator_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_diroperator_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_diroperator_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_diroperator_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_diroperator_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_diroperator_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_diroperator_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_diroperator_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_diroperator_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_diroperator_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_diroperator_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_diroperator_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_diroperator_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_diroperator_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_diroperator_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_diroperator_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_diroperator_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_diroperator_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_diroperator_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_diroperator_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_diroperator_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_diroperator_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_diroperator_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_diroperator_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_diroperator_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_diroperator_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_diroperator_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_diroperator_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_diroperator_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_diroperator_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_diroperator_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_diroperator_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_diroperator_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_diroperator_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_diroperator_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_diroperator_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_diroperator_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_diroperator_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_diroperator_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_diroperator_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

void k_diroperator_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_diroperator_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_diroperator_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_diroperator_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_diroperator_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_diroperator_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_diroperator_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_diroperator_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_diroperator_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_diroperator_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_diroperator_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_diroperator_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_diroperator_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_diroperator_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_diroperator_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_diroperator_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_diroperator_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_diroperator_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_diroperator_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_diroperator_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_diroperator_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_diroperator_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_diroperator_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_diroperator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_diroperator_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_diroperator_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_diroperator_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_diroperator_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_diroperator_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_diroperator_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_diroperator_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_diroperator_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_diroperator_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_diroperator_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_diroperator_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_diroperator_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_diroperator_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_diroperator_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_diroperator_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_diroperator_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_diroperator_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_diroperator_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_diroperator_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_diroperator_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_diroperator_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_diroperator_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_diroperator_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_diroperator_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_diroperator_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_diroperator_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_diroperator_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_diroperator_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_diroperator_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_diroperator_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_diroperator_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_diroperator_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_diroperator_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_diroperator_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_diroperator_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_diroperator_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_diroperator_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_diroperator_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_diroperator_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_diroperator_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_diroperator_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_diroperator_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_diroperator_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_diroperator_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_diroperator_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_diroperator_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_diroperator_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_diroperator_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_diroperator_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_diroperator_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_diroperator_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_diroperator_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_diroperator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_diroperator_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_diroperator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_diroperator_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_diroperator_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_diroperator_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_diroperator_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_diroperator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_diroperator_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_diroperator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_diroperator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_diroperator_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_diroperator_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_diroperator_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_diroperator_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_diroperator_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_diroperator_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_diroperator_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_diroperator_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_diroperator_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_diroperator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_diroperator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_diroperator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_diroperator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_diroperator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_diroperator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_diroperator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_diroperator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_diroperator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_diroperator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_diroperator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_diroperator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_diroperator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_diroperator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_diroperator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_diroperator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_diroperator_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_diroperator_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_diroperator_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_diroperator_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_diroperator_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_diroperator_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_diroperator_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_diroperator_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_diroperator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_diroperator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_diroperator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_diroperator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_diroperator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_diroperator_dynamic_property_names\n");
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

QBindingStorage* k_diroperator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_diroperator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_diroperator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_diroperator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_diroperator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_diroperator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_diroperator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_diroperator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_diroperator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_diroperator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_diroperator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_diroperator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_diroperator_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_diroperator_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_diroperator_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_diroperator_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_diroperator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_diroperator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_diroperator_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_diroperator_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_diroperator_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_diroperator_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_diroperator_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_diroperator_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_diroperator_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_diroperator_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_diroperator_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_diroperator_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_diroperator_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_diroperator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_diroperator_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_diroperator_dev_type(void* self) {
    return KDirOperator_DevType((KDirOperator*)self);
}

int32_t k_diroperator_qbase_dev_type(void* self) {
    return KDirOperator_QBaseDevType((KDirOperator*)self);
}

void k_diroperator_on_dev_type(void* self, int32_t (*callback)()) {
    KDirOperator_OnDevType((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_set_visible(void* self, bool visible) {
    KDirOperator_SetVisible((KDirOperator*)self, visible);
}

void k_diroperator_qbase_set_visible(void* self, bool visible) {
    KDirOperator_QBaseSetVisible((KDirOperator*)self, visible);
}

void k_diroperator_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KDirOperator_OnSetVisible((KDirOperator*)self, (intptr_t)callback);
}

QSize* k_diroperator_size_hint(void* self) {
    return KDirOperator_SizeHint((KDirOperator*)self);
}

QSize* k_diroperator_qbase_size_hint(void* self) {
    return KDirOperator_QBaseSizeHint((KDirOperator*)self);
}

void k_diroperator_on_size_hint(void* self, QSize* (*callback)()) {
    KDirOperator_OnSizeHint((KDirOperator*)self, (intptr_t)callback);
}

QSize* k_diroperator_minimum_size_hint(void* self) {
    return KDirOperator_MinimumSizeHint((KDirOperator*)self);
}

QSize* k_diroperator_qbase_minimum_size_hint(void* self) {
    return KDirOperator_QBaseMinimumSizeHint((KDirOperator*)self);
}

void k_diroperator_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KDirOperator_OnMinimumSizeHint((KDirOperator*)self, (intptr_t)callback);
}

int32_t k_diroperator_height_for_width(void* self, int param1) {
    return KDirOperator_HeightForWidth((KDirOperator*)self, param1);
}

int32_t k_diroperator_qbase_height_for_width(void* self, int param1) {
    return KDirOperator_QBaseHeightForWidth((KDirOperator*)self, param1);
}

void k_diroperator_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KDirOperator_OnHeightForWidth((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_has_height_for_width(void* self) {
    return KDirOperator_HasHeightForWidth((KDirOperator*)self);
}

bool k_diroperator_qbase_has_height_for_width(void* self) {
    return KDirOperator_QBaseHasHeightForWidth((KDirOperator*)self);
}

void k_diroperator_on_has_height_for_width(void* self, bool (*callback)()) {
    KDirOperator_OnHasHeightForWidth((KDirOperator*)self, (intptr_t)callback);
}

QPaintEngine* k_diroperator_paint_engine(void* self) {
    return KDirOperator_PaintEngine((KDirOperator*)self);
}

QPaintEngine* k_diroperator_qbase_paint_engine(void* self) {
    return KDirOperator_QBasePaintEngine((KDirOperator*)self);
}

void k_diroperator_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KDirOperator_OnPaintEngine((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_event(void* self, void* event) {
    return KDirOperator_Event((KDirOperator*)self, (QEvent*)event);
}

bool k_diroperator_qbase_event(void* self, void* event) {
    return KDirOperator_QBaseEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_on_event(void* self, bool (*callback)(void*, void*)) {
    KDirOperator_OnEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_mouse_press_event(void* self, void* event) {
    KDirOperator_MousePressEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_qbase_mouse_press_event(void* self, void* event) {
    KDirOperator_QBaseMousePressEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnMousePressEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_mouse_release_event(void* self, void* event) {
    KDirOperator_MouseReleaseEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_qbase_mouse_release_event(void* self, void* event) {
    KDirOperator_QBaseMouseReleaseEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnMouseReleaseEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_mouse_double_click_event(void* self, void* event) {
    KDirOperator_MouseDoubleClickEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_qbase_mouse_double_click_event(void* self, void* event) {
    KDirOperator_QBaseMouseDoubleClickEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnMouseDoubleClickEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_mouse_move_event(void* self, void* event) {
    KDirOperator_MouseMoveEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_qbase_mouse_move_event(void* self, void* event) {
    KDirOperator_QBaseMouseMoveEvent((KDirOperator*)self, (QMouseEvent*)event);
}

void k_diroperator_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnMouseMoveEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_wheel_event(void* self, void* event) {
    KDirOperator_WheelEvent((KDirOperator*)self, (QWheelEvent*)event);
}

void k_diroperator_qbase_wheel_event(void* self, void* event) {
    KDirOperator_QBaseWheelEvent((KDirOperator*)self, (QWheelEvent*)event);
}

void k_diroperator_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnWheelEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_key_press_event(void* self, void* event) {
    KDirOperator_KeyPressEvent((KDirOperator*)self, (QKeyEvent*)event);
}

void k_diroperator_qbase_key_press_event(void* self, void* event) {
    KDirOperator_QBaseKeyPressEvent((KDirOperator*)self, (QKeyEvent*)event);
}

void k_diroperator_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnKeyPressEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_key_release_event(void* self, void* event) {
    KDirOperator_KeyReleaseEvent((KDirOperator*)self, (QKeyEvent*)event);
}

void k_diroperator_qbase_key_release_event(void* self, void* event) {
    KDirOperator_QBaseKeyReleaseEvent((KDirOperator*)self, (QKeyEvent*)event);
}

void k_diroperator_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnKeyReleaseEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_focus_in_event(void* self, void* event) {
    KDirOperator_FocusInEvent((KDirOperator*)self, (QFocusEvent*)event);
}

void k_diroperator_qbase_focus_in_event(void* self, void* event) {
    KDirOperator_QBaseFocusInEvent((KDirOperator*)self, (QFocusEvent*)event);
}

void k_diroperator_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnFocusInEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_focus_out_event(void* self, void* event) {
    KDirOperator_FocusOutEvent((KDirOperator*)self, (QFocusEvent*)event);
}

void k_diroperator_qbase_focus_out_event(void* self, void* event) {
    KDirOperator_QBaseFocusOutEvent((KDirOperator*)self, (QFocusEvent*)event);
}

void k_diroperator_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnFocusOutEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_enter_event(void* self, void* event) {
    KDirOperator_EnterEvent((KDirOperator*)self, (QEnterEvent*)event);
}

void k_diroperator_qbase_enter_event(void* self, void* event) {
    KDirOperator_QBaseEnterEvent((KDirOperator*)self, (QEnterEvent*)event);
}

void k_diroperator_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnEnterEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_leave_event(void* self, void* event) {
    KDirOperator_LeaveEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_qbase_leave_event(void* self, void* event) {
    KDirOperator_QBaseLeaveEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnLeaveEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_paint_event(void* self, void* event) {
    KDirOperator_PaintEvent((KDirOperator*)self, (QPaintEvent*)event);
}

void k_diroperator_qbase_paint_event(void* self, void* event) {
    KDirOperator_QBasePaintEvent((KDirOperator*)self, (QPaintEvent*)event);
}

void k_diroperator_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnPaintEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_move_event(void* self, void* event) {
    KDirOperator_MoveEvent((KDirOperator*)self, (QMoveEvent*)event);
}

void k_diroperator_qbase_move_event(void* self, void* event) {
    KDirOperator_QBaseMoveEvent((KDirOperator*)self, (QMoveEvent*)event);
}

void k_diroperator_on_move_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnMoveEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_close_event(void* self, void* event) {
    KDirOperator_CloseEvent((KDirOperator*)self, (QCloseEvent*)event);
}

void k_diroperator_qbase_close_event(void* self, void* event) {
    KDirOperator_QBaseCloseEvent((KDirOperator*)self, (QCloseEvent*)event);
}

void k_diroperator_on_close_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnCloseEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_context_menu_event(void* self, void* event) {
    KDirOperator_ContextMenuEvent((KDirOperator*)self, (QContextMenuEvent*)event);
}

void k_diroperator_qbase_context_menu_event(void* self, void* event) {
    KDirOperator_QBaseContextMenuEvent((KDirOperator*)self, (QContextMenuEvent*)event);
}

void k_diroperator_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnContextMenuEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_tablet_event(void* self, void* event) {
    KDirOperator_TabletEvent((KDirOperator*)self, (QTabletEvent*)event);
}

void k_diroperator_qbase_tablet_event(void* self, void* event) {
    KDirOperator_QBaseTabletEvent((KDirOperator*)self, (QTabletEvent*)event);
}

void k_diroperator_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnTabletEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_action_event(void* self, void* event) {
    KDirOperator_ActionEvent((KDirOperator*)self, (QActionEvent*)event);
}

void k_diroperator_qbase_action_event(void* self, void* event) {
    KDirOperator_QBaseActionEvent((KDirOperator*)self, (QActionEvent*)event);
}

void k_diroperator_on_action_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnActionEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_drag_enter_event(void* self, void* event) {
    KDirOperator_DragEnterEvent((KDirOperator*)self, (QDragEnterEvent*)event);
}

void k_diroperator_qbase_drag_enter_event(void* self, void* event) {
    KDirOperator_QBaseDragEnterEvent((KDirOperator*)self, (QDragEnterEvent*)event);
}

void k_diroperator_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnDragEnterEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_drag_move_event(void* self, void* event) {
    KDirOperator_DragMoveEvent((KDirOperator*)self, (QDragMoveEvent*)event);
}

void k_diroperator_qbase_drag_move_event(void* self, void* event) {
    KDirOperator_QBaseDragMoveEvent((KDirOperator*)self, (QDragMoveEvent*)event);
}

void k_diroperator_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnDragMoveEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_drag_leave_event(void* self, void* event) {
    KDirOperator_DragLeaveEvent((KDirOperator*)self, (QDragLeaveEvent*)event);
}

void k_diroperator_qbase_drag_leave_event(void* self, void* event) {
    KDirOperator_QBaseDragLeaveEvent((KDirOperator*)self, (QDragLeaveEvent*)event);
}

void k_diroperator_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnDragLeaveEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_drop_event(void* self, void* event) {
    KDirOperator_DropEvent((KDirOperator*)self, (QDropEvent*)event);
}

void k_diroperator_qbase_drop_event(void* self, void* event) {
    KDirOperator_QBaseDropEvent((KDirOperator*)self, (QDropEvent*)event);
}

void k_diroperator_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnDropEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_show_event(void* self, void* event) {
    KDirOperator_ShowEvent((KDirOperator*)self, (QShowEvent*)event);
}

void k_diroperator_qbase_show_event(void* self, void* event) {
    KDirOperator_QBaseShowEvent((KDirOperator*)self, (QShowEvent*)event);
}

void k_diroperator_on_show_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnShowEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_hide_event(void* self, void* event) {
    KDirOperator_HideEvent((KDirOperator*)self, (QHideEvent*)event);
}

void k_diroperator_qbase_hide_event(void* self, void* event) {
    KDirOperator_QBaseHideEvent((KDirOperator*)self, (QHideEvent*)event);
}

void k_diroperator_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnHideEvent((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDirOperator_NativeEvent((KDirOperator*)self, qstring(eventType), message, result);
}

bool k_diroperator_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDirOperator_QBaseNativeEvent((KDirOperator*)self, qstring(eventType), message, result);
}

void k_diroperator_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KDirOperator_OnNativeEvent((KDirOperator*)self, (intptr_t)callback);
}

int32_t k_diroperator_metric(void* self, int32_t param1) {
    return KDirOperator_Metric((KDirOperator*)self, param1);
}

int32_t k_diroperator_qbase_metric(void* self, int32_t param1) {
    return KDirOperator_QBaseMetric((KDirOperator*)self, param1);
}

void k_diroperator_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KDirOperator_OnMetric((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_init_painter(void* self, void* painter) {
    KDirOperator_InitPainter((KDirOperator*)self, (QPainter*)painter);
}

void k_diroperator_qbase_init_painter(void* self, void* painter) {
    KDirOperator_QBaseInitPainter((KDirOperator*)self, (QPainter*)painter);
}

void k_diroperator_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnInitPainter((KDirOperator*)self, (intptr_t)callback);
}

QPaintDevice* k_diroperator_redirected(void* self, void* offset) {
    return KDirOperator_Redirected((KDirOperator*)self, (QPoint*)offset);
}

QPaintDevice* k_diroperator_qbase_redirected(void* self, void* offset) {
    return KDirOperator_QBaseRedirected((KDirOperator*)self, (QPoint*)offset);
}

void k_diroperator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KDirOperator_OnRedirected((KDirOperator*)self, (intptr_t)callback);
}

QPainter* k_diroperator_shared_painter(void* self) {
    return KDirOperator_SharedPainter((KDirOperator*)self);
}

QPainter* k_diroperator_qbase_shared_painter(void* self) {
    return KDirOperator_QBaseSharedPainter((KDirOperator*)self);
}

void k_diroperator_on_shared_painter(void* self, QPainter* (*callback)()) {
    KDirOperator_OnSharedPainter((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_input_method_event(void* self, void* param1) {
    KDirOperator_InputMethodEvent((KDirOperator*)self, (QInputMethodEvent*)param1);
}

void k_diroperator_qbase_input_method_event(void* self, void* param1) {
    KDirOperator_QBaseInputMethodEvent((KDirOperator*)self, (QInputMethodEvent*)param1);
}

void k_diroperator_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnInputMethodEvent((KDirOperator*)self, (intptr_t)callback);
}

QVariant* k_diroperator_input_method_query(void* self, int32_t param1) {
    return KDirOperator_InputMethodQuery((KDirOperator*)self, param1);
}

QVariant* k_diroperator_qbase_input_method_query(void* self, int32_t param1) {
    return KDirOperator_QBaseInputMethodQuery((KDirOperator*)self, param1);
}

void k_diroperator_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KDirOperator_OnInputMethodQuery((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_focus_next_prev_child(void* self, bool next) {
    return KDirOperator_FocusNextPrevChild((KDirOperator*)self, next);
}

bool k_diroperator_qbase_focus_next_prev_child(void* self, bool next) {
    return KDirOperator_QBaseFocusNextPrevChild((KDirOperator*)self, next);
}

void k_diroperator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KDirOperator_OnFocusNextPrevChild((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_timer_event(void* self, void* event) {
    KDirOperator_TimerEvent((KDirOperator*)self, (QTimerEvent*)event);
}

void k_diroperator_qbase_timer_event(void* self, void* event) {
    KDirOperator_QBaseTimerEvent((KDirOperator*)self, (QTimerEvent*)event);
}

void k_diroperator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnTimerEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_child_event(void* self, void* event) {
    KDirOperator_ChildEvent((KDirOperator*)self, (QChildEvent*)event);
}

void k_diroperator_qbase_child_event(void* self, void* event) {
    KDirOperator_QBaseChildEvent((KDirOperator*)self, (QChildEvent*)event);
}

void k_diroperator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnChildEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_custom_event(void* self, void* event) {
    KDirOperator_CustomEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_qbase_custom_event(void* self, void* event) {
    KDirOperator_QBaseCustomEvent((KDirOperator*)self, (QEvent*)event);
}

void k_diroperator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnCustomEvent((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_connect_notify(void* self, void* signal) {
    KDirOperator_ConnectNotify((KDirOperator*)self, (QMetaMethod*)signal);
}

void k_diroperator_qbase_connect_notify(void* self, void* signal) {
    KDirOperator_QBaseConnectNotify((KDirOperator*)self, (QMetaMethod*)signal);
}

void k_diroperator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnConnectNotify((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_disconnect_notify(void* self, void* signal) {
    KDirOperator_DisconnectNotify((KDirOperator*)self, (QMetaMethod*)signal);
}

void k_diroperator_qbase_disconnect_notify(void* self, void* signal) {
    KDirOperator_QBaseDisconnectNotify((KDirOperator*)self, (QMetaMethod*)signal);
}

void k_diroperator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDirOperator_OnDisconnectNotify((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_update_micro_focus(void* self) {
    KDirOperator_UpdateMicroFocus((KDirOperator*)self);
}

void k_diroperator_qbase_update_micro_focus(void* self) {
    KDirOperator_QBaseUpdateMicroFocus((KDirOperator*)self);
}

void k_diroperator_on_update_micro_focus(void* self, void (*callback)()) {
    KDirOperator_OnUpdateMicroFocus((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_create(void* self) {
    KDirOperator_Create((KDirOperator*)self);
}

void k_diroperator_qbase_create(void* self) {
    KDirOperator_QBaseCreate((KDirOperator*)self);
}

void k_diroperator_on_create(void* self, void (*callback)()) {
    KDirOperator_OnCreate((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_destroy(void* self) {
    KDirOperator_Destroy((KDirOperator*)self);
}

void k_diroperator_qbase_destroy(void* self) {
    KDirOperator_QBaseDestroy((KDirOperator*)self);
}

void k_diroperator_on_destroy(void* self, void (*callback)()) {
    KDirOperator_OnDestroy((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_focus_next_child(void* self) {
    return KDirOperator_FocusNextChild((KDirOperator*)self);
}

bool k_diroperator_qbase_focus_next_child(void* self) {
    return KDirOperator_QBaseFocusNextChild((KDirOperator*)self);
}

void k_diroperator_on_focus_next_child(void* self, bool (*callback)()) {
    KDirOperator_OnFocusNextChild((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_focus_previous_child(void* self) {
    return KDirOperator_FocusPreviousChild((KDirOperator*)self);
}

bool k_diroperator_qbase_focus_previous_child(void* self) {
    return KDirOperator_QBaseFocusPreviousChild((KDirOperator*)self);
}

void k_diroperator_on_focus_previous_child(void* self, bool (*callback)()) {
    KDirOperator_OnFocusPreviousChild((KDirOperator*)self, (intptr_t)callback);
}

QObject* k_diroperator_sender(void* self) {
    return KDirOperator_Sender((KDirOperator*)self);
}

QObject* k_diroperator_qbase_sender(void* self) {
    return KDirOperator_QBaseSender((KDirOperator*)self);
}

void k_diroperator_on_sender(void* self, QObject* (*callback)()) {
    KDirOperator_OnSender((KDirOperator*)self, (intptr_t)callback);
}

int32_t k_diroperator_sender_signal_index(void* self) {
    return KDirOperator_SenderSignalIndex((KDirOperator*)self);
}

int32_t k_diroperator_qbase_sender_signal_index(void* self) {
    return KDirOperator_QBaseSenderSignalIndex((KDirOperator*)self);
}

void k_diroperator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDirOperator_OnSenderSignalIndex((KDirOperator*)self, (intptr_t)callback);
}

int32_t k_diroperator_receivers(void* self, const char* signal) {
    return KDirOperator_Receivers((KDirOperator*)self, signal);
}

int32_t k_diroperator_qbase_receivers(void* self, const char* signal) {
    return KDirOperator_QBaseReceivers((KDirOperator*)self, signal);
}

void k_diroperator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDirOperator_OnReceivers((KDirOperator*)self, (intptr_t)callback);
}

bool k_diroperator_is_signal_connected(void* self, void* signal) {
    return KDirOperator_IsSignalConnected((KDirOperator*)self, (QMetaMethod*)signal);
}

bool k_diroperator_qbase_is_signal_connected(void* self, void* signal) {
    return KDirOperator_QBaseIsSignalConnected((KDirOperator*)self, (QMetaMethod*)signal);
}

void k_diroperator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDirOperator_OnIsSignalConnected((KDirOperator*)self, (intptr_t)callback);
}

double k_diroperator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDirOperator_GetDecodedMetricF((KDirOperator*)self, metricA, metricB);
}

double k_diroperator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDirOperator_QBaseGetDecodedMetricF((KDirOperator*)self, metricA, metricB);
}

void k_diroperator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KDirOperator_OnGetDecodedMetricF((KDirOperator*)self, (intptr_t)callback);
}

void k_diroperator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_diroperator_delete(void* self) {
    KDirOperator_Delete((KDirOperator*)(self));
}
