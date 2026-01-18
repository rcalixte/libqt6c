#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libkdiroperator.hpp"
#include "libkfilefilter.hpp"
#include "libkfilefiltercombo.hpp"
#include "libkpreviewwidgetbase.hpp"
#include "libkurlcombobox.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkfilewidget.hpp"
#include "libkfilewidget.h"

KFileWidget* k_filewidget_new(void* startDir) {
    return KFileWidget_new((QUrl*)startDir);
}

KFileWidget* k_filewidget_new2(void* startDir, void* parent) {
    return KFileWidget_new2((QUrl*)startDir, (QWidget*)parent);
}

const QMetaObject* k_filewidget_meta_object(void* self) {
    return KFileWidget_MetaObject((KFileWidget*)self);
}

void* k_filewidget_metacast(void* self, const char* param1) {
    return KFileWidget_Metacast((KFileWidget*)self, param1);
}

int32_t k_filewidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileWidget_Metacall((KFileWidget*)self, param1, param2, param3);
}

void k_filewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileWidget_OnMetacall((KFileWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileWidget_QBaseMetacall((KFileWidget*)self, param1, param2, param3);
}

const char* k_filewidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_filewidget_selected_url(void* self) {
    return KFileWidget_SelectedUrl((KFileWidget*)self);
}

libqt_list /* of QUrl* */ k_filewidget_selected_urls(void* self) {
    libqt_list _arr = KFileWidget_SelectedUrls((KFileWidget*)self);
    return _arr;
}

QUrl* k_filewidget_base_url(void* self) {
    return KFileWidget_BaseUrl((KFileWidget*)self);
}

const char* k_filewidget_selected_file(void* self) {
    libqt_string _str = KFileWidget_SelectedFile((KFileWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_filewidget_selected_files(void* self) {
    libqt_list _arr = KFileWidget_SelectedFiles((KFileWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filewidget_selected_files\n");
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

void k_filewidget_set_url(void* self, void* url) {
    KFileWidget_SetUrl((KFileWidget*)self, (QUrl*)url);
}

void k_filewidget_set_selected_url(void* self, void* url) {
    KFileWidget_SetSelectedUrl((KFileWidget*)self, (QUrl*)url);
}

void k_filewidget_set_selected_urls(void* self, libqt_list /* of QUrl* */ urls) {
    KFileWidget_SetSelectedUrls((KFileWidget*)self, urls);
}

void k_filewidget_set_operation_mode(void* self, int32_t operationMode) {
    KFileWidget_SetOperationMode((KFileWidget*)self, operationMode);
}

int32_t k_filewidget_operation_mode(void* self) {
    return KFileWidget_OperationMode((KFileWidget*)self);
}

void k_filewidget_set_keep_location(void* self, bool keep) {
    KFileWidget_SetKeepLocation((KFileWidget*)self, keep);
}

bool k_filewidget_keeps_location(void* self) {
    return KFileWidget_KeepsLocation((KFileWidget*)self);
}

void k_filewidget_set_filters(void* self, libqt_list /* of KFileFilter* */ filters) {
    KFileWidget_SetFilters((KFileWidget*)self, filters);
}

KFileFilter* k_filewidget_current_filter(void* self) {
    return KFileWidget_CurrentFilter((KFileWidget*)self);
}

void k_filewidget_clear_filter(void* self) {
    KFileWidget_ClearFilter((KFileWidget*)self);
}

void k_filewidget_set_preview_widget(void* self, void* w) {
    KFileWidget_SetPreviewWidget((KFileWidget*)self, (KPreviewWidgetBase*)w);
}

void k_filewidget_set_mode(void* self, int32_t m) {
    KFileWidget_SetMode((KFileWidget*)self, m);
}

int32_t k_filewidget_mode(void* self) {
    return KFileWidget_Mode((KFileWidget*)self);
}

void k_filewidget_set_location_label(void* self, const char* text) {
    KFileWidget_SetLocationLabel((KFileWidget*)self, qstring(text));
}

QPushButton* k_filewidget_ok_button(void* self) {
    return KFileWidget_OkButton((KFileWidget*)self);
}

QPushButton* k_filewidget_cancel_button(void* self) {
    return KFileWidget_CancelButton((KFileWidget*)self);
}

KUrlComboBox* k_filewidget_location_edit(void* self) {
    return KFileWidget_LocationEdit((KFileWidget*)self);
}

KFileFilterCombo* k_filewidget_filter_widget(void* self) {
    return KFileWidget_FilterWidget((KFileWidget*)self);
}

QUrl* k_filewidget_get_start_url(void* startDir, const char* recentDirClass) {
    return KFileWidget_GetStartUrl((QUrl*)startDir, qstring(recentDirClass));
}

QUrl* k_filewidget_get_start_url2(void* startDir, const char* recentDirClass, const char* fileName) {
    return KFileWidget_GetStartUrl2((QUrl*)startDir, qstring(recentDirClass), qstring(fileName));
}

void k_filewidget_set_start_dir(void* directory) {
    KFileWidget_SetStartDir((QUrl*)directory);
}

void k_filewidget_set_custom_widget(void* self, void* widget) {
    KFileWidget_SetCustomWidget((KFileWidget*)self, (QWidget*)widget);
}

void k_filewidget_set_custom_widget2(void* self, const char* text, void* widget) {
    KFileWidget_SetCustomWidget2((KFileWidget*)self, qstring(text), (QWidget*)widget);
}

void k_filewidget_set_confirm_overwrite(void* self, bool enable) {
    KFileWidget_SetConfirmOverwrite((KFileWidget*)self, enable);
}

void k_filewidget_set_inline_preview_shown(void* self, bool show) {
    KFileWidget_SetInlinePreviewShown((KFileWidget*)self, show);
}

QSize* k_filewidget_dialog_size_hint(void* self) {
    return KFileWidget_DialogSizeHint((KFileWidget*)self);
}

void k_filewidget_set_view_mode(void* self, int32_t mode) {
    KFileWidget_SetViewMode((KFileWidget*)self, mode);
}

QSize* k_filewidget_size_hint(void* self) {
    return KFileWidget_SizeHint((KFileWidget*)self);
}

void k_filewidget_on_size_hint(void* self, QSize* (*callback)()) {
    KFileWidget_OnSizeHint((KFileWidget*)self, (intptr_t)callback);
}

QSize* k_filewidget_qbase_size_hint(void* self) {
    return KFileWidget_QBaseSizeHint((KFileWidget*)self);
}

void k_filewidget_set_supported_schemes(void* self, const char* schemes[static 1]) {
    size_t schemes_len = libqt_strv_length(schemes);
    libqt_string* schemes_qstr = (libqt_string*)malloc(schemes_len * sizeof(libqt_string));
    if (schemes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filewidget_set_supported_schemes\n");
        abort();
    }
    for (size_t i = 0; i < schemes_len; ++i) {
        schemes_qstr[i] = qstring(schemes[i]);
    }
    libqt_list schemes_list = qlist(schemes_qstr, schemes_len);
    KFileWidget_SetSupportedSchemes((KFileWidget*)self, schemes_list);
    free(schemes_qstr);
}

const char** k_filewidget_supported_schemes(void* self) {
    libqt_list _arr = KFileWidget_SupportedSchemes((KFileWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filewidget_supported_schemes\n");
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

void k_filewidget_slot_ok(void* self) {
    KFileWidget_SlotOk((KFileWidget*)self);
}

void k_filewidget_accept(void* self) {
    KFileWidget_Accept((KFileWidget*)self);
}

void k_filewidget_slot_cancel(void* self) {
    KFileWidget_SlotCancel((KFileWidget*)self);
}

void k_filewidget_resize_event(void* self, void* event) {
    KFileWidget_ResizeEvent((KFileWidget*)self, (QResizeEvent*)event);
}

void k_filewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnResizeEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_qbase_resize_event(void* self, void* event) {
    KFileWidget_QBaseResizeEvent((KFileWidget*)self, (QResizeEvent*)event);
}

void k_filewidget_show_event(void* self, void* event) {
    KFileWidget_ShowEvent((KFileWidget*)self, (QShowEvent*)event);
}

void k_filewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnShowEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_qbase_show_event(void* self, void* event) {
    KFileWidget_QBaseShowEvent((KFileWidget*)self, (QShowEvent*)event);
}

bool k_filewidget_event_filter(void* self, void* watched, void* event) {
    return KFileWidget_EventFilter((KFileWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_filewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileWidget_OnEventFilter((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KFileWidget_QBaseEventFilter((KFileWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_filewidget_file_selected(void* self, void* param1) {
    KFileWidget_FileSelected((KFileWidget*)self, (QUrl*)param1);
}

void k_filewidget_on_file_selected(void* self, void (*callback)(void*, void*)) {
    KFileWidget_Connect_FileSelected((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_file_highlighted(void* self, void* param1) {
    KFileWidget_FileHighlighted((KFileWidget*)self, (QUrl*)param1);
}

void k_filewidget_on_file_highlighted(void* self, void (*callback)(void*, void*)) {
    KFileWidget_Connect_FileHighlighted((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_selection_changed(void* self) {
    KFileWidget_SelectionChanged((KFileWidget*)self);
}

void k_filewidget_on_selection_changed(void* self, void (*callback)(void*)) {
    KFileWidget_Connect_SelectionChanged((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_filter_changed(void* self, void* filter) {
    KFileWidget_FilterChanged((KFileWidget*)self, (KFileFilter*)filter);
}

void k_filewidget_on_filter_changed(void* self, void (*callback)(void*, void*)) {
    KFileWidget_Connect_FilterChanged((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_accepted(void* self) {
    KFileWidget_Accepted((KFileWidget*)self);
}

void k_filewidget_on_accepted(void* self, void (*callback)(void*)) {
    KFileWidget_Connect_Accepted((KFileWidget*)self, (intptr_t)callback);
}

KDirOperator* k_filewidget_dir_operator(void* self) {
    return KFileWidget_DirOperator((KFileWidget*)self);
}

void k_filewidget_read_config(void* self, void* group) {
    KFileWidget_ReadConfig((KFileWidget*)self, (KConfigGroup*)group);
}

const char* k_filewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_url2(void* self, void* url, bool clearforward) {
    KFileWidget_SetUrl2((KFileWidget*)self, (QUrl*)url, clearforward);
}

void k_filewidget_set_filters2(void* self, libqt_list /* of KFileFilter* */ filters, void* activeFilter) {
    KFileWidget_SetFilters2((KFileWidget*)self, filters, (KFileFilter*)activeFilter);
}

uintptr_t k_filewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_filewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_filewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_filewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_filewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_filewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_filewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_filewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_filewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_filewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_filewidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_filewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_filewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_filewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_filewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_filewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_filewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_filewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_filewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_filewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_filewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_filewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_filewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_filewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_filewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_filewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_filewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_filewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_filewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_filewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_filewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_filewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_filewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_filewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_filewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_filewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_filewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_filewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_filewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_filewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_filewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_filewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_filewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_filewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_filewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_filewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_filewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_filewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_filewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_filewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_filewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_filewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_filewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_filewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_filewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_filewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_filewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_filewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_filewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_filewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_filewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_filewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_filewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_filewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_filewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_filewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_filewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_filewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_filewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_filewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_filewidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_filewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_filewidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_filewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_filewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_filewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_filewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_filewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_filewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_filewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_filewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_filewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_filewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_filewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_filewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_filewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_filewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_filewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_filewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_filewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_filewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_filewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_filewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_filewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_filewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_filewidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_filewidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_filewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_filewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_filewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_filewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_filewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_filewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_filewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_filewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_filewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_filewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_filewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_filewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_filewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_filewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_filewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_filewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_filewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_filewidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_filewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_filewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_filewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_filewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_filewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_filewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_filewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_filewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_filewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_filewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_filewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_filewidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_filewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_filewidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_filewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_filewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_filewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_filewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_filewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_filewidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_filewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_filewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_filewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_filewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_filewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_filewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_filewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_filewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_filewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_filewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_filewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_filewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_filewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_filewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_filewidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_filewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_filewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_filewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_filewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_filewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_filewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_filewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_filewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_filewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_filewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_filewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_filewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_filewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_filewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_filewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_filewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_filewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_filewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_filewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_filewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_filewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_filewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_filewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_filewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_filewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_filewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_filewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_filewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_filewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_filewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_filewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_filewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_filewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_filewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_filewidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_filewidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_filewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_filewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_filewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_filewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_filewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_filewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_filewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_filewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_filewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_filewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_filewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_filewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_filewidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_filewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_filewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_filewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_filewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_filewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_filewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_filewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_filewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_filewidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_filewidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_filewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_filewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_filewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_filewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_filewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_filewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_filewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_filewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_filewidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_filewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_filewidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_filewidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_filewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_filewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_filewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_filewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_filewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_filewidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_filewidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_filewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_filewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_filewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_filewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_filewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_filewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_filewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_filewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_filewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_filewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_filewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_filewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_filewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_filewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_filewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_filewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_filewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_filewidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_filewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_filewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_filewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_filewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_filewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_filewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_filewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_filewidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_filewidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_filewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_filewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_filewidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_filewidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_filewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_filewidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_filewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filewidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_filewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_filewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_filewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_filewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_filewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_filewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_filewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_filewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_filewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_filewidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_filewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_filewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_filewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_filewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_filewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_filewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_filewidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_filewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_filewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_filewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_filewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_filewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filewidget_dynamic_property_names\n");
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

QBindingStorage* k_filewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_filewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_filewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_filewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_filewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_filewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_filewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_filewidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_filewidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_filewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_filewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_filewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_filewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_filewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_filewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_filewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_filewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_filewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_filewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_filewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_filewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_filewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_filewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_filewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_filewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_filewidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_filewidget_dev_type(void* self) {
    return KFileWidget_DevType((KFileWidget*)self);
}

int32_t k_filewidget_qbase_dev_type(void* self) {
    return KFileWidget_QBaseDevType((KFileWidget*)self);
}

void k_filewidget_on_dev_type(void* self, int32_t (*callback)()) {
    KFileWidget_OnDevType((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_set_visible(void* self, bool visible) {
    KFileWidget_SetVisible((KFileWidget*)self, visible);
}

void k_filewidget_qbase_set_visible(void* self, bool visible) {
    KFileWidget_QBaseSetVisible((KFileWidget*)self, visible);
}

void k_filewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KFileWidget_OnSetVisible((KFileWidget*)self, (intptr_t)callback);
}

QSize* k_filewidget_minimum_size_hint(void* self) {
    return KFileWidget_MinimumSizeHint((KFileWidget*)self);
}

QSize* k_filewidget_qbase_minimum_size_hint(void* self) {
    return KFileWidget_QBaseMinimumSizeHint((KFileWidget*)self);
}

void k_filewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KFileWidget_OnMinimumSizeHint((KFileWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_height_for_width(void* self, int param1) {
    return KFileWidget_HeightForWidth((KFileWidget*)self, param1);
}

int32_t k_filewidget_qbase_height_for_width(void* self, int param1) {
    return KFileWidget_QBaseHeightForWidth((KFileWidget*)self, param1);
}

void k_filewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KFileWidget_OnHeightForWidth((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_has_height_for_width(void* self) {
    return KFileWidget_HasHeightForWidth((KFileWidget*)self);
}

bool k_filewidget_qbase_has_height_for_width(void* self) {
    return KFileWidget_QBaseHasHeightForWidth((KFileWidget*)self);
}

void k_filewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KFileWidget_OnHasHeightForWidth((KFileWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_filewidget_paint_engine(void* self) {
    return KFileWidget_PaintEngine((KFileWidget*)self);
}

QPaintEngine* k_filewidget_qbase_paint_engine(void* self) {
    return KFileWidget_QBasePaintEngine((KFileWidget*)self);
}

void k_filewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KFileWidget_OnPaintEngine((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_event(void* self, void* event) {
    return KFileWidget_Event((KFileWidget*)self, (QEvent*)event);
}

bool k_filewidget_qbase_event(void* self, void* event) {
    return KFileWidget_QBaseEvent((KFileWidget*)self, (QEvent*)event);
}

void k_filewidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileWidget_OnEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_mouse_press_event(void* self, void* event) {
    KFileWidget_MousePressEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_qbase_mouse_press_event(void* self, void* event) {
    KFileWidget_QBaseMousePressEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnMousePressEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_mouse_release_event(void* self, void* event) {
    KFileWidget_MouseReleaseEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_qbase_mouse_release_event(void* self, void* event) {
    KFileWidget_QBaseMouseReleaseEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnMouseReleaseEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_mouse_double_click_event(void* self, void* event) {
    KFileWidget_MouseDoubleClickEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_qbase_mouse_double_click_event(void* self, void* event) {
    KFileWidget_QBaseMouseDoubleClickEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnMouseDoubleClickEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_mouse_move_event(void* self, void* event) {
    KFileWidget_MouseMoveEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_qbase_mouse_move_event(void* self, void* event) {
    KFileWidget_QBaseMouseMoveEvent((KFileWidget*)self, (QMouseEvent*)event);
}

void k_filewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnMouseMoveEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_wheel_event(void* self, void* event) {
    KFileWidget_WheelEvent((KFileWidget*)self, (QWheelEvent*)event);
}

void k_filewidget_qbase_wheel_event(void* self, void* event) {
    KFileWidget_QBaseWheelEvent((KFileWidget*)self, (QWheelEvent*)event);
}

void k_filewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnWheelEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_key_press_event(void* self, void* event) {
    KFileWidget_KeyPressEvent((KFileWidget*)self, (QKeyEvent*)event);
}

void k_filewidget_qbase_key_press_event(void* self, void* event) {
    KFileWidget_QBaseKeyPressEvent((KFileWidget*)self, (QKeyEvent*)event);
}

void k_filewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnKeyPressEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_key_release_event(void* self, void* event) {
    KFileWidget_KeyReleaseEvent((KFileWidget*)self, (QKeyEvent*)event);
}

void k_filewidget_qbase_key_release_event(void* self, void* event) {
    KFileWidget_QBaseKeyReleaseEvent((KFileWidget*)self, (QKeyEvent*)event);
}

void k_filewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnKeyReleaseEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_focus_in_event(void* self, void* event) {
    KFileWidget_FocusInEvent((KFileWidget*)self, (QFocusEvent*)event);
}

void k_filewidget_qbase_focus_in_event(void* self, void* event) {
    KFileWidget_QBaseFocusInEvent((KFileWidget*)self, (QFocusEvent*)event);
}

void k_filewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnFocusInEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_focus_out_event(void* self, void* event) {
    KFileWidget_FocusOutEvent((KFileWidget*)self, (QFocusEvent*)event);
}

void k_filewidget_qbase_focus_out_event(void* self, void* event) {
    KFileWidget_QBaseFocusOutEvent((KFileWidget*)self, (QFocusEvent*)event);
}

void k_filewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnFocusOutEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_enter_event(void* self, void* event) {
    KFileWidget_EnterEvent((KFileWidget*)self, (QEnterEvent*)event);
}

void k_filewidget_qbase_enter_event(void* self, void* event) {
    KFileWidget_QBaseEnterEvent((KFileWidget*)self, (QEnterEvent*)event);
}

void k_filewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnEnterEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_leave_event(void* self, void* event) {
    KFileWidget_LeaveEvent((KFileWidget*)self, (QEvent*)event);
}

void k_filewidget_qbase_leave_event(void* self, void* event) {
    KFileWidget_QBaseLeaveEvent((KFileWidget*)self, (QEvent*)event);
}

void k_filewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnLeaveEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_paint_event(void* self, void* event) {
    KFileWidget_PaintEvent((KFileWidget*)self, (QPaintEvent*)event);
}

void k_filewidget_qbase_paint_event(void* self, void* event) {
    KFileWidget_QBasePaintEvent((KFileWidget*)self, (QPaintEvent*)event);
}

void k_filewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnPaintEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_move_event(void* self, void* event) {
    KFileWidget_MoveEvent((KFileWidget*)self, (QMoveEvent*)event);
}

void k_filewidget_qbase_move_event(void* self, void* event) {
    KFileWidget_QBaseMoveEvent((KFileWidget*)self, (QMoveEvent*)event);
}

void k_filewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnMoveEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_close_event(void* self, void* event) {
    KFileWidget_CloseEvent((KFileWidget*)self, (QCloseEvent*)event);
}

void k_filewidget_qbase_close_event(void* self, void* event) {
    KFileWidget_QBaseCloseEvent((KFileWidget*)self, (QCloseEvent*)event);
}

void k_filewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnCloseEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_context_menu_event(void* self, void* event) {
    KFileWidget_ContextMenuEvent((KFileWidget*)self, (QContextMenuEvent*)event);
}

void k_filewidget_qbase_context_menu_event(void* self, void* event) {
    KFileWidget_QBaseContextMenuEvent((KFileWidget*)self, (QContextMenuEvent*)event);
}

void k_filewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnContextMenuEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_tablet_event(void* self, void* event) {
    KFileWidget_TabletEvent((KFileWidget*)self, (QTabletEvent*)event);
}

void k_filewidget_qbase_tablet_event(void* self, void* event) {
    KFileWidget_QBaseTabletEvent((KFileWidget*)self, (QTabletEvent*)event);
}

void k_filewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnTabletEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_action_event(void* self, void* event) {
    KFileWidget_ActionEvent((KFileWidget*)self, (QActionEvent*)event);
}

void k_filewidget_qbase_action_event(void* self, void* event) {
    KFileWidget_QBaseActionEvent((KFileWidget*)self, (QActionEvent*)event);
}

void k_filewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnActionEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_drag_enter_event(void* self, void* event) {
    KFileWidget_DragEnterEvent((KFileWidget*)self, (QDragEnterEvent*)event);
}

void k_filewidget_qbase_drag_enter_event(void* self, void* event) {
    KFileWidget_QBaseDragEnterEvent((KFileWidget*)self, (QDragEnterEvent*)event);
}

void k_filewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnDragEnterEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_drag_move_event(void* self, void* event) {
    KFileWidget_DragMoveEvent((KFileWidget*)self, (QDragMoveEvent*)event);
}

void k_filewidget_qbase_drag_move_event(void* self, void* event) {
    KFileWidget_QBaseDragMoveEvent((KFileWidget*)self, (QDragMoveEvent*)event);
}

void k_filewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnDragMoveEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_drag_leave_event(void* self, void* event) {
    KFileWidget_DragLeaveEvent((KFileWidget*)self, (QDragLeaveEvent*)event);
}

void k_filewidget_qbase_drag_leave_event(void* self, void* event) {
    KFileWidget_QBaseDragLeaveEvent((KFileWidget*)self, (QDragLeaveEvent*)event);
}

void k_filewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnDragLeaveEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_drop_event(void* self, void* event) {
    KFileWidget_DropEvent((KFileWidget*)self, (QDropEvent*)event);
}

void k_filewidget_qbase_drop_event(void* self, void* event) {
    KFileWidget_QBaseDropEvent((KFileWidget*)self, (QDropEvent*)event);
}

void k_filewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnDropEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_hide_event(void* self, void* event) {
    KFileWidget_HideEvent((KFileWidget*)self, (QHideEvent*)event);
}

void k_filewidget_qbase_hide_event(void* self, void* event) {
    KFileWidget_QBaseHideEvent((KFileWidget*)self, (QHideEvent*)event);
}

void k_filewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnHideEvent((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFileWidget_NativeEvent((KFileWidget*)self, qstring(eventType), message, result);
}

bool k_filewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFileWidget_QBaseNativeEvent((KFileWidget*)self, qstring(eventType), message, result);
}

void k_filewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KFileWidget_OnNativeEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_change_event(void* self, void* param1) {
    KFileWidget_ChangeEvent((KFileWidget*)self, (QEvent*)param1);
}

void k_filewidget_qbase_change_event(void* self, void* param1) {
    KFileWidget_QBaseChangeEvent((KFileWidget*)self, (QEvent*)param1);
}

void k_filewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnChangeEvent((KFileWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_metric(void* self, int32_t param1) {
    return KFileWidget_Metric((KFileWidget*)self, param1);
}

int32_t k_filewidget_qbase_metric(void* self, int32_t param1) {
    return KFileWidget_QBaseMetric((KFileWidget*)self, param1);
}

void k_filewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KFileWidget_OnMetric((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_init_painter(void* self, void* painter) {
    KFileWidget_InitPainter((KFileWidget*)self, (QPainter*)painter);
}

void k_filewidget_qbase_init_painter(void* self, void* painter) {
    KFileWidget_QBaseInitPainter((KFileWidget*)self, (QPainter*)painter);
}

void k_filewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnInitPainter((KFileWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_filewidget_redirected(void* self, void* offset) {
    return KFileWidget_Redirected((KFileWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_filewidget_qbase_redirected(void* self, void* offset) {
    return KFileWidget_QBaseRedirected((KFileWidget*)self, (QPoint*)offset);
}

void k_filewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KFileWidget_OnRedirected((KFileWidget*)self, (intptr_t)callback);
}

QPainter* k_filewidget_shared_painter(void* self) {
    return KFileWidget_SharedPainter((KFileWidget*)self);
}

QPainter* k_filewidget_qbase_shared_painter(void* self) {
    return KFileWidget_QBaseSharedPainter((KFileWidget*)self);
}

void k_filewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KFileWidget_OnSharedPainter((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_input_method_event(void* self, void* param1) {
    KFileWidget_InputMethodEvent((KFileWidget*)self, (QInputMethodEvent*)param1);
}

void k_filewidget_qbase_input_method_event(void* self, void* param1) {
    KFileWidget_QBaseInputMethodEvent((KFileWidget*)self, (QInputMethodEvent*)param1);
}

void k_filewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnInputMethodEvent((KFileWidget*)self, (intptr_t)callback);
}

QVariant* k_filewidget_input_method_query(void* self, int32_t param1) {
    return KFileWidget_InputMethodQuery((KFileWidget*)self, param1);
}

QVariant* k_filewidget_qbase_input_method_query(void* self, int32_t param1) {
    return KFileWidget_QBaseInputMethodQuery((KFileWidget*)self, param1);
}

void k_filewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KFileWidget_OnInputMethodQuery((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_focus_next_prev_child(void* self, bool next) {
    return KFileWidget_FocusNextPrevChild((KFileWidget*)self, next);
}

bool k_filewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KFileWidget_QBaseFocusNextPrevChild((KFileWidget*)self, next);
}

void k_filewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KFileWidget_OnFocusNextPrevChild((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_timer_event(void* self, void* event) {
    KFileWidget_TimerEvent((KFileWidget*)self, (QTimerEvent*)event);
}

void k_filewidget_qbase_timer_event(void* self, void* event) {
    KFileWidget_QBaseTimerEvent((KFileWidget*)self, (QTimerEvent*)event);
}

void k_filewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnTimerEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_child_event(void* self, void* event) {
    KFileWidget_ChildEvent((KFileWidget*)self, (QChildEvent*)event);
}

void k_filewidget_qbase_child_event(void* self, void* event) {
    KFileWidget_QBaseChildEvent((KFileWidget*)self, (QChildEvent*)event);
}

void k_filewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnChildEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_custom_event(void* self, void* event) {
    KFileWidget_CustomEvent((KFileWidget*)self, (QEvent*)event);
}

void k_filewidget_qbase_custom_event(void* self, void* event) {
    KFileWidget_QBaseCustomEvent((KFileWidget*)self, (QEvent*)event);
}

void k_filewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnCustomEvent((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_connect_notify(void* self, void* signal) {
    KFileWidget_ConnectNotify((KFileWidget*)self, (QMetaMethod*)signal);
}

void k_filewidget_qbase_connect_notify(void* self, void* signal) {
    KFileWidget_QBaseConnectNotify((KFileWidget*)self, (QMetaMethod*)signal);
}

void k_filewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnConnectNotify((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_disconnect_notify(void* self, void* signal) {
    KFileWidget_DisconnectNotify((KFileWidget*)self, (QMetaMethod*)signal);
}

void k_filewidget_qbase_disconnect_notify(void* self, void* signal) {
    KFileWidget_QBaseDisconnectNotify((KFileWidget*)self, (QMetaMethod*)signal);
}

void k_filewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileWidget_OnDisconnectNotify((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_update_micro_focus(void* self) {
    KFileWidget_UpdateMicroFocus((KFileWidget*)self);
}

void k_filewidget_qbase_update_micro_focus(void* self) {
    KFileWidget_QBaseUpdateMicroFocus((KFileWidget*)self);
}

void k_filewidget_on_update_micro_focus(void* self, void (*callback)()) {
    KFileWidget_OnUpdateMicroFocus((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_create(void* self) {
    KFileWidget_Create((KFileWidget*)self);
}

void k_filewidget_qbase_create(void* self) {
    KFileWidget_QBaseCreate((KFileWidget*)self);
}

void k_filewidget_on_create(void* self, void (*callback)()) {
    KFileWidget_OnCreate((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_destroy(void* self) {
    KFileWidget_Destroy((KFileWidget*)self);
}

void k_filewidget_qbase_destroy(void* self) {
    KFileWidget_QBaseDestroy((KFileWidget*)self);
}

void k_filewidget_on_destroy(void* self, void (*callback)()) {
    KFileWidget_OnDestroy((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_focus_next_child(void* self) {
    return KFileWidget_FocusNextChild((KFileWidget*)self);
}

bool k_filewidget_qbase_focus_next_child(void* self) {
    return KFileWidget_QBaseFocusNextChild((KFileWidget*)self);
}

void k_filewidget_on_focus_next_child(void* self, bool (*callback)()) {
    KFileWidget_OnFocusNextChild((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_focus_previous_child(void* self) {
    return KFileWidget_FocusPreviousChild((KFileWidget*)self);
}

bool k_filewidget_qbase_focus_previous_child(void* self) {
    return KFileWidget_QBaseFocusPreviousChild((KFileWidget*)self);
}

void k_filewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KFileWidget_OnFocusPreviousChild((KFileWidget*)self, (intptr_t)callback);
}

QObject* k_filewidget_sender(void* self) {
    return KFileWidget_Sender((KFileWidget*)self);
}

QObject* k_filewidget_qbase_sender(void* self) {
    return KFileWidget_QBaseSender((KFileWidget*)self);
}

void k_filewidget_on_sender(void* self, QObject* (*callback)()) {
    KFileWidget_OnSender((KFileWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_sender_signal_index(void* self) {
    return KFileWidget_SenderSignalIndex((KFileWidget*)self);
}

int32_t k_filewidget_qbase_sender_signal_index(void* self) {
    return KFileWidget_QBaseSenderSignalIndex((KFileWidget*)self);
}

void k_filewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileWidget_OnSenderSignalIndex((KFileWidget*)self, (intptr_t)callback);
}

int32_t k_filewidget_receivers(void* self, const char* signal) {
    return KFileWidget_Receivers((KFileWidget*)self, signal);
}

int32_t k_filewidget_qbase_receivers(void* self, const char* signal) {
    return KFileWidget_QBaseReceivers((KFileWidget*)self, signal);
}

void k_filewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileWidget_OnReceivers((KFileWidget*)self, (intptr_t)callback);
}

bool k_filewidget_is_signal_connected(void* self, void* signal) {
    return KFileWidget_IsSignalConnected((KFileWidget*)self, (QMetaMethod*)signal);
}

bool k_filewidget_qbase_is_signal_connected(void* self, void* signal) {
    return KFileWidget_QBaseIsSignalConnected((KFileWidget*)self, (QMetaMethod*)signal);
}

void k_filewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileWidget_OnIsSignalConnected((KFileWidget*)self, (intptr_t)callback);
}

double k_filewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFileWidget_GetDecodedMetricF((KFileWidget*)self, metricA, metricB);
}

double k_filewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFileWidget_QBaseGetDecodedMetricF((KFileWidget*)self, metricA, metricB);
}

void k_filewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KFileWidget_OnGetDecodedMetricF((KFileWidget*)self, (intptr_t)callback);
}

void k_filewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_filewidget_delete(void* self) {
    KFileWidget_Delete((KFileWidget*)(self));
}
