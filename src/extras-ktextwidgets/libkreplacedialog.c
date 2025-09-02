#include "libkfinddialog.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkreplacedialog.hpp"
#include "libkreplacedialog.h"

KReplaceDialog* k_replacedialog_new(void* parent) {
    return KReplaceDialog_new((QWidget*)parent);
}

KReplaceDialog* k_replacedialog_new2() {
    return KReplaceDialog_new2();
}

KReplaceDialog* k_replacedialog_new3(void* parent, int64_t options) {
    return KReplaceDialog_new3((QWidget*)parent, options);
}

KReplaceDialog* k_replacedialog_new4(void* parent, int64_t options, const char* findStrings[]) {
    size_t findStrings_len = libqt_strv_length(findStrings);
    libqt_string* findStrings_qstr = (libqt_string*)malloc(findStrings_len * sizeof(libqt_string));
    if (findStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_new4");
        abort();
    }
    for (size_t i = 0; i < findStrings_len; ++i) {
        findStrings_qstr[i] = qstring(findStrings[i]);
    }
    libqt_list findStrings_list = qlist(findStrings_qstr, findStrings_len);

    KReplaceDialog* _out = KReplaceDialog_new4((QWidget*)parent, options, findStrings_list);
    free(findStrings_qstr);
    return _out;
}

KReplaceDialog* k_replacedialog_new5(void* parent, int64_t options, const char* findStrings[], const char* replaceStrings[]) {
    size_t findStrings_len = libqt_strv_length(findStrings);
    libqt_string* findStrings_qstr = (libqt_string*)malloc(findStrings_len * sizeof(libqt_string));
    if (findStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_new5");
        abort();
    }
    for (size_t i = 0; i < findStrings_len; ++i) {
        findStrings_qstr[i] = qstring(findStrings[i]);
    }
    libqt_list findStrings_list = qlist(findStrings_qstr, findStrings_len);
    size_t replaceStrings_len = libqt_strv_length(replaceStrings);
    libqt_string* replaceStrings_qstr = (libqt_string*)malloc(replaceStrings_len * sizeof(libqt_string));
    if (replaceStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_new5");
        abort();
    }
    for (size_t i = 0; i < replaceStrings_len; ++i) {
        replaceStrings_qstr[i] = qstring(replaceStrings[i]);
    }
    libqt_list replaceStrings_list = qlist(replaceStrings_qstr, replaceStrings_len);

    KReplaceDialog* _out = KReplaceDialog_new5((QWidget*)parent, options, findStrings_list, replaceStrings_list);
    free(findStrings_qstr);
    free(replaceStrings_qstr);
    return _out;
}

KReplaceDialog* k_replacedialog_new6(void* parent, int64_t options, const char* findStrings[], const char* replaceStrings[], bool hasSelection) {
    size_t findStrings_len = libqt_strv_length(findStrings);
    libqt_string* findStrings_qstr = (libqt_string*)malloc(findStrings_len * sizeof(libqt_string));
    if (findStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_new6");
        abort();
    }
    for (size_t i = 0; i < findStrings_len; ++i) {
        findStrings_qstr[i] = qstring(findStrings[i]);
    }
    libqt_list findStrings_list = qlist(findStrings_qstr, findStrings_len);
    size_t replaceStrings_len = libqt_strv_length(replaceStrings);
    libqt_string* replaceStrings_qstr = (libqt_string*)malloc(replaceStrings_len * sizeof(libqt_string));
    if (replaceStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_new6");
        abort();
    }
    for (size_t i = 0; i < replaceStrings_len; ++i) {
        replaceStrings_qstr[i] = qstring(replaceStrings[i]);
    }
    libqt_list replaceStrings_list = qlist(replaceStrings_qstr, replaceStrings_len);

    KReplaceDialog* _out = KReplaceDialog_new6((QWidget*)parent, options, findStrings_list, replaceStrings_list, hasSelection);
    free(findStrings_qstr);
    free(replaceStrings_qstr);
    return _out;
}

const QMetaObject* k_replacedialog_meta_object(void* self) {
    return KReplaceDialog_MetaObject((KReplaceDialog*)self);
}

void* k_replacedialog_metacast(void* self, const char* param1) {
    return KReplaceDialog_Metacast((KReplaceDialog*)self, param1);
}

int32_t k_replacedialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KReplaceDialog_Metacall((KReplaceDialog*)self, param1, param2, param3);
}

void k_replacedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KReplaceDialog_OnMetacall((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KReplaceDialog_QBaseMetacall((KReplaceDialog*)self, param1, param2, param3);
}

const char* k_replacedialog_tr(const char* s) {
    libqt_string _str = KReplaceDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_replacement_history(void* self, const char* history[]) {
    size_t history_len = libqt_strv_length(history);
    libqt_string* history_qstr = (libqt_string*)malloc(history_len * sizeof(libqt_string));
    if (history_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_set_replacement_history");
        abort();
    }
    for (size_t i = 0; i < history_len; ++i) {
        history_qstr[i] = qstring(history[i]);
    }
    libqt_list history_list = qlist(history_qstr, history_len);
    KReplaceDialog_SetReplacementHistory((KReplaceDialog*)self, history_list);
    free(history_qstr);
}

const char** k_replacedialog_replacement_history(void* self) {
    libqt_list _arr = KReplaceDialog_ReplacementHistory((KReplaceDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_replacement_history");
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

void k_replacedialog_set_options(void* self, int64_t options) {
    KReplaceDialog_SetOptions((KReplaceDialog*)self, options);
}

int64_t k_replacedialog_options(void* self) {
    return KReplaceDialog_Options((KReplaceDialog*)self);
}

const char* k_replacedialog_replacement(void* self) {
    libqt_string _str = KReplaceDialog_Replacement((KReplaceDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_replacedialog_replace_extension(void* self) {
    return KReplaceDialog_ReplaceExtension((KReplaceDialog*)self);
}

void k_replacedialog_show_event(void* self, void* param1) {
    KReplaceDialog_ShowEvent((KReplaceDialog*)self, (QShowEvent*)param1);
}

void k_replacedialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnShowEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_qbase_show_event(void* self, void* param1) {
    KReplaceDialog_QBaseShowEvent((KReplaceDialog*)self, (QShowEvent*)param1);
}

const char* k_replacedialog_tr2(const char* s, const char* c) {
    libqt_string _str = KReplaceDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_replacedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KReplaceDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_find_history(void* self, const char* history[]) {
    size_t history_len = libqt_strv_length(history);
    libqt_string* history_qstr = (libqt_string*)malloc(history_len * sizeof(libqt_string));
    if (history_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_set_find_history");
        abort();
    }
    for (size_t i = 0; i < history_len; ++i) {
        history_qstr[i] = qstring(history[i]);
    }
    libqt_list history_list = qlist(history_qstr, history_len);
    KFindDialog_SetFindHistory((KFindDialog*)self, history_list);
    free(history_qstr);
}

const char** k_replacedialog_find_history(void* self) {
    libqt_list _arr = KFindDialog_FindHistory((KFindDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_find_history");
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

void k_replacedialog_set_has_selection(void* self, bool hasSelection) {
    KFindDialog_SetHasSelection((KFindDialog*)self, hasSelection);
}

void k_replacedialog_set_has_cursor(void* self, bool hasCursor) {
    KFindDialog_SetHasCursor((KFindDialog*)self, hasCursor);
}

void k_replacedialog_set_supports_backwards_find(void* self, bool supports) {
    KFindDialog_SetSupportsBackwardsFind((KFindDialog*)self, supports);
}

void k_replacedialog_set_supports_case_sensitive_find(void* self, bool supports) {
    KFindDialog_SetSupportsCaseSensitiveFind((KFindDialog*)self, supports);
}

void k_replacedialog_set_supports_whole_words_find(void* self, bool supports) {
    KFindDialog_SetSupportsWholeWordsFind((KFindDialog*)self, supports);
}

void k_replacedialog_set_supports_regular_expression_find(void* self, bool supports) {
    KFindDialog_SetSupportsRegularExpressionFind((KFindDialog*)self, supports);
}

const char* k_replacedialog_pattern(void* self) {
    libqt_string _str = KFindDialog_Pattern((KFindDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_pattern(void* self, const char* pattern) {
    KFindDialog_SetPattern((KFindDialog*)self, qstring(pattern));
}

QWidget* k_replacedialog_find_extension(void* self) {
    return KFindDialog_FindExtension((KFindDialog*)self);
}

void k_replacedialog_options_changed(void* self) {
    KFindDialog_OptionsChanged((KFindDialog*)self);
}

void k_replacedialog_on_options_changed(void* self, void (*callback)(void*)) {
    KFindDialog_Connect_OptionsChanged((KFindDialog*)self, (intptr_t)callback);
}

void k_replacedialog_ok_clicked(void* self) {
    KFindDialog_OkClicked((KFindDialog*)self);
}

void k_replacedialog_on_ok_clicked(void* self, void (*callback)(void*)) {
    KFindDialog_Connect_OkClicked((KFindDialog*)self, (intptr_t)callback);
}

void k_replacedialog_cancel_clicked(void* self) {
    KFindDialog_CancelClicked((KFindDialog*)self);
}

void k_replacedialog_on_cancel_clicked(void* self, void (*callback)(void*)) {
    KFindDialog_Connect_CancelClicked((KFindDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_replacedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_replacedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_replacedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_replacedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_replacedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_replacedialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_replacedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_replacedialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_replacedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_replacedialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_replacedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_replacedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_replacedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_replacedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_replacedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_replacedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_replacedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_replacedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_replacedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_replacedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_replacedialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_replacedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_replacedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_replacedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_replacedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_replacedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_replacedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_replacedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_replacedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_replacedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_replacedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_replacedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_replacedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_replacedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_replacedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_replacedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_replacedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_replacedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_replacedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_replacedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_replacedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_replacedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_replacedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_replacedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_replacedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_replacedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_replacedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_replacedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_replacedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_replacedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_replacedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_replacedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_replacedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_replacedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_replacedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_replacedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_replacedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_replacedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_replacedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_replacedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_replacedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_replacedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_replacedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_replacedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_replacedialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_replacedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_replacedialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_replacedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_replacedialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_replacedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_replacedialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_replacedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_replacedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_replacedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_replacedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_replacedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_replacedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_replacedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_replacedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_replacedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_replacedialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_replacedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_replacedialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_replacedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_replacedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_replacedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_replacedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_replacedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_replacedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_replacedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_replacedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_replacedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_replacedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_replacedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_replacedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_replacedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_replacedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_replacedialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_replacedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_replacedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_replacedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_replacedialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_replacedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_replacedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_replacedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_replacedialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_replacedialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_replacedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_replacedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_replacedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_replacedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_replacedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_replacedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_replacedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_replacedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_replacedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_replacedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_replacedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_replacedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_replacedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_replacedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_replacedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_replacedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_replacedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_replacedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_replacedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_replacedialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_replacedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_replacedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_replacedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_replacedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_replacedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_replacedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_replacedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_replacedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_replacedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_replacedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_replacedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_replacedialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_replacedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_replacedialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_replacedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_replacedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_replacedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_replacedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_replacedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_replacedialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_replacedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_replacedialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_replacedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_replacedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_replacedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_replacedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_replacedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_replacedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_replacedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_replacedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_replacedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_replacedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_replacedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_replacedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_replacedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_replacedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_replacedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_replacedialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_replacedialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_replacedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_replacedialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_replacedialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_replacedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_replacedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_replacedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_replacedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_replacedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_replacedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_replacedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_replacedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_replacedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_replacedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_replacedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_replacedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_replacedialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_replacedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_replacedialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_replacedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_replacedialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_replacedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_replacedialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_replacedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_replacedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_replacedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_replacedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_replacedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_replacedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_replacedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_replacedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_replacedialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_replacedialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_replacedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_replacedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_replacedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_replacedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_replacedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_replacedialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_replacedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_replacedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_replacedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_replacedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_replacedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_replacedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_replacedialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_replacedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_replacedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_replacedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_replacedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_replacedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_replacedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_replacedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_replacedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_replacedialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_replacedialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_replacedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_replacedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_replacedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_replacedialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_replacedialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_replacedialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_replacedialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_replacedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_replacedialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_replacedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_replacedialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_replacedialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_replacedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_replacedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_replacedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_replacedialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_replacedialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_replacedialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_replacedialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_replacedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_replacedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_replacedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_replacedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_replacedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_replacedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_replacedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_replacedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_replacedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_replacedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_replacedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_replacedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_replacedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_replacedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_replacedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_replacedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_replacedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_replacedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_replacedialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_replacedialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_replacedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_replacedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_replacedialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_replacedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_replacedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_replacedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_replacedialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_replacedialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_replacedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_replacedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_replacedialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_replacedialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_replacedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_replacedialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_replacedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_replacedialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_replacedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_replacedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_replacedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_replacedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_replacedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_replacedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_replacedialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_replacedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_replacedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_replacedialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_replacedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_replacedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_replacedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_replacedialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_replacedialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_replacedialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_replacedialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_replacedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_replacedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_replacedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_replacedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_replacedialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_replacedialog_dynamic_property_names");
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

QBindingStorage* k_replacedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_replacedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_replacedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_replacedialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_replacedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_replacedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_replacedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_replacedialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_replacedialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_replacedialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_replacedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_replacedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_replacedialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_replacedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_replacedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_replacedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_replacedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_replacedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_replacedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_replacedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_replacedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_replacedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_replacedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_replacedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_replacedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_replacedialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_replacedialog_set_visible(void* self, bool visible) {
    KReplaceDialog_SetVisible((KReplaceDialog*)self, visible);
}

void k_replacedialog_qbase_set_visible(void* self, bool visible) {
    KReplaceDialog_QBaseSetVisible((KReplaceDialog*)self, visible);
}

void k_replacedialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KReplaceDialog_OnSetVisible((KReplaceDialog*)self, (intptr_t)callback);
}

QSize* k_replacedialog_size_hint(void* self) {
    return KReplaceDialog_SizeHint((KReplaceDialog*)self);
}

QSize* k_replacedialog_qbase_size_hint(void* self) {
    return KReplaceDialog_QBaseSizeHint((KReplaceDialog*)self);
}

void k_replacedialog_on_size_hint(void* self, QSize* (*callback)()) {
    KReplaceDialog_OnSizeHint((KReplaceDialog*)self, (intptr_t)callback);
}

QSize* k_replacedialog_minimum_size_hint(void* self) {
    return KReplaceDialog_MinimumSizeHint((KReplaceDialog*)self);
}

QSize* k_replacedialog_qbase_minimum_size_hint(void* self) {
    return KReplaceDialog_QBaseMinimumSizeHint((KReplaceDialog*)self);
}

void k_replacedialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KReplaceDialog_OnMinimumSizeHint((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_open(void* self) {
    KReplaceDialog_Open((KReplaceDialog*)self);
}

void k_replacedialog_qbase_open(void* self) {
    KReplaceDialog_QBaseOpen((KReplaceDialog*)self);
}

void k_replacedialog_on_open(void* self, void (*callback)()) {
    KReplaceDialog_OnOpen((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_exec(void* self) {
    return KReplaceDialog_Exec((KReplaceDialog*)self);
}

int32_t k_replacedialog_qbase_exec(void* self) {
    return KReplaceDialog_QBaseExec((KReplaceDialog*)self);
}

void k_replacedialog_on_exec(void* self, int32_t (*callback)()) {
    KReplaceDialog_OnExec((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_done(void* self, int param1) {
    KReplaceDialog_Done((KReplaceDialog*)self, param1);
}

void k_replacedialog_qbase_done(void* self, int param1) {
    KReplaceDialog_QBaseDone((KReplaceDialog*)self, param1);
}

void k_replacedialog_on_done(void* self, void (*callback)(void*, int)) {
    KReplaceDialog_OnDone((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_accept(void* self) {
    KReplaceDialog_Accept((KReplaceDialog*)self);
}

void k_replacedialog_qbase_accept(void* self) {
    KReplaceDialog_QBaseAccept((KReplaceDialog*)self);
}

void k_replacedialog_on_accept(void* self, void (*callback)()) {
    KReplaceDialog_OnAccept((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_reject(void* self) {
    KReplaceDialog_Reject((KReplaceDialog*)self);
}

void k_replacedialog_qbase_reject(void* self) {
    KReplaceDialog_QBaseReject((KReplaceDialog*)self);
}

void k_replacedialog_on_reject(void* self, void (*callback)()) {
    KReplaceDialog_OnReject((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_key_press_event(void* self, void* param1) {
    KReplaceDialog_KeyPressEvent((KReplaceDialog*)self, (QKeyEvent*)param1);
}

void k_replacedialog_qbase_key_press_event(void* self, void* param1) {
    KReplaceDialog_QBaseKeyPressEvent((KReplaceDialog*)self, (QKeyEvent*)param1);
}

void k_replacedialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnKeyPressEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_close_event(void* self, void* param1) {
    KReplaceDialog_CloseEvent((KReplaceDialog*)self, (QCloseEvent*)param1);
}

void k_replacedialog_qbase_close_event(void* self, void* param1) {
    KReplaceDialog_QBaseCloseEvent((KReplaceDialog*)self, (QCloseEvent*)param1);
}

void k_replacedialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnCloseEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_resize_event(void* self, void* param1) {
    KReplaceDialog_ResizeEvent((KReplaceDialog*)self, (QResizeEvent*)param1);
}

void k_replacedialog_qbase_resize_event(void* self, void* param1) {
    KReplaceDialog_QBaseResizeEvent((KReplaceDialog*)self, (QResizeEvent*)param1);
}

void k_replacedialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnResizeEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_context_menu_event(void* self, void* param1) {
    KReplaceDialog_ContextMenuEvent((KReplaceDialog*)self, (QContextMenuEvent*)param1);
}

void k_replacedialog_qbase_context_menu_event(void* self, void* param1) {
    KReplaceDialog_QBaseContextMenuEvent((KReplaceDialog*)self, (QContextMenuEvent*)param1);
}

void k_replacedialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnContextMenuEvent((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_event_filter(void* self, void* param1, void* param2) {
    return KReplaceDialog_EventFilter((KReplaceDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_replacedialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KReplaceDialog_QBaseEventFilter((KReplaceDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_replacedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KReplaceDialog_OnEventFilter((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_dev_type(void* self) {
    return KReplaceDialog_DevType((KReplaceDialog*)self);
}

int32_t k_replacedialog_qbase_dev_type(void* self) {
    return KReplaceDialog_QBaseDevType((KReplaceDialog*)self);
}

void k_replacedialog_on_dev_type(void* self, int32_t (*callback)()) {
    KReplaceDialog_OnDevType((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_height_for_width(void* self, int param1) {
    return KReplaceDialog_HeightForWidth((KReplaceDialog*)self, param1);
}

int32_t k_replacedialog_qbase_height_for_width(void* self, int param1) {
    return KReplaceDialog_QBaseHeightForWidth((KReplaceDialog*)self, param1);
}

void k_replacedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KReplaceDialog_OnHeightForWidth((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_has_height_for_width(void* self) {
    return KReplaceDialog_HasHeightForWidth((KReplaceDialog*)self);
}

bool k_replacedialog_qbase_has_height_for_width(void* self) {
    return KReplaceDialog_QBaseHasHeightForWidth((KReplaceDialog*)self);
}

void k_replacedialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KReplaceDialog_OnHasHeightForWidth((KReplaceDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_replacedialog_paint_engine(void* self) {
    return KReplaceDialog_PaintEngine((KReplaceDialog*)self);
}

QPaintEngine* k_replacedialog_qbase_paint_engine(void* self) {
    return KReplaceDialog_QBasePaintEngine((KReplaceDialog*)self);
}

void k_replacedialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KReplaceDialog_OnPaintEngine((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_event(void* self, void* event) {
    return KReplaceDialog_Event((KReplaceDialog*)self, (QEvent*)event);
}

bool k_replacedialog_qbase_event(void* self, void* event) {
    return KReplaceDialog_QBaseEvent((KReplaceDialog*)self, (QEvent*)event);
}

void k_replacedialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KReplaceDialog_OnEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_mouse_press_event(void* self, void* event) {
    KReplaceDialog_MousePressEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_qbase_mouse_press_event(void* self, void* event) {
    KReplaceDialog_QBaseMousePressEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnMousePressEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_mouse_release_event(void* self, void* event) {
    KReplaceDialog_MouseReleaseEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_qbase_mouse_release_event(void* self, void* event) {
    KReplaceDialog_QBaseMouseReleaseEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnMouseReleaseEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_mouse_double_click_event(void* self, void* event) {
    KReplaceDialog_MouseDoubleClickEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_qbase_mouse_double_click_event(void* self, void* event) {
    KReplaceDialog_QBaseMouseDoubleClickEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnMouseDoubleClickEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_mouse_move_event(void* self, void* event) {
    KReplaceDialog_MouseMoveEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_qbase_mouse_move_event(void* self, void* event) {
    KReplaceDialog_QBaseMouseMoveEvent((KReplaceDialog*)self, (QMouseEvent*)event);
}

void k_replacedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnMouseMoveEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_wheel_event(void* self, void* event) {
    KReplaceDialog_WheelEvent((KReplaceDialog*)self, (QWheelEvent*)event);
}

void k_replacedialog_qbase_wheel_event(void* self, void* event) {
    KReplaceDialog_QBaseWheelEvent((KReplaceDialog*)self, (QWheelEvent*)event);
}

void k_replacedialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnWheelEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_key_release_event(void* self, void* event) {
    KReplaceDialog_KeyReleaseEvent((KReplaceDialog*)self, (QKeyEvent*)event);
}

void k_replacedialog_qbase_key_release_event(void* self, void* event) {
    KReplaceDialog_QBaseKeyReleaseEvent((KReplaceDialog*)self, (QKeyEvent*)event);
}

void k_replacedialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnKeyReleaseEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_focus_in_event(void* self, void* event) {
    KReplaceDialog_FocusInEvent((KReplaceDialog*)self, (QFocusEvent*)event);
}

void k_replacedialog_qbase_focus_in_event(void* self, void* event) {
    KReplaceDialog_QBaseFocusInEvent((KReplaceDialog*)self, (QFocusEvent*)event);
}

void k_replacedialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnFocusInEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_focus_out_event(void* self, void* event) {
    KReplaceDialog_FocusOutEvent((KReplaceDialog*)self, (QFocusEvent*)event);
}

void k_replacedialog_qbase_focus_out_event(void* self, void* event) {
    KReplaceDialog_QBaseFocusOutEvent((KReplaceDialog*)self, (QFocusEvent*)event);
}

void k_replacedialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnFocusOutEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_enter_event(void* self, void* event) {
    KReplaceDialog_EnterEvent((KReplaceDialog*)self, (QEnterEvent*)event);
}

void k_replacedialog_qbase_enter_event(void* self, void* event) {
    KReplaceDialog_QBaseEnterEvent((KReplaceDialog*)self, (QEnterEvent*)event);
}

void k_replacedialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnEnterEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_leave_event(void* self, void* event) {
    KReplaceDialog_LeaveEvent((KReplaceDialog*)self, (QEvent*)event);
}

void k_replacedialog_qbase_leave_event(void* self, void* event) {
    KReplaceDialog_QBaseLeaveEvent((KReplaceDialog*)self, (QEvent*)event);
}

void k_replacedialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnLeaveEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_paint_event(void* self, void* event) {
    KReplaceDialog_PaintEvent((KReplaceDialog*)self, (QPaintEvent*)event);
}

void k_replacedialog_qbase_paint_event(void* self, void* event) {
    KReplaceDialog_QBasePaintEvent((KReplaceDialog*)self, (QPaintEvent*)event);
}

void k_replacedialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnPaintEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_move_event(void* self, void* event) {
    KReplaceDialog_MoveEvent((KReplaceDialog*)self, (QMoveEvent*)event);
}

void k_replacedialog_qbase_move_event(void* self, void* event) {
    KReplaceDialog_QBaseMoveEvent((KReplaceDialog*)self, (QMoveEvent*)event);
}

void k_replacedialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnMoveEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_tablet_event(void* self, void* event) {
    KReplaceDialog_TabletEvent((KReplaceDialog*)self, (QTabletEvent*)event);
}

void k_replacedialog_qbase_tablet_event(void* self, void* event) {
    KReplaceDialog_QBaseTabletEvent((KReplaceDialog*)self, (QTabletEvent*)event);
}

void k_replacedialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnTabletEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_action_event(void* self, void* event) {
    KReplaceDialog_ActionEvent((KReplaceDialog*)self, (QActionEvent*)event);
}

void k_replacedialog_qbase_action_event(void* self, void* event) {
    KReplaceDialog_QBaseActionEvent((KReplaceDialog*)self, (QActionEvent*)event);
}

void k_replacedialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnActionEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_drag_enter_event(void* self, void* event) {
    KReplaceDialog_DragEnterEvent((KReplaceDialog*)self, (QDragEnterEvent*)event);
}

void k_replacedialog_qbase_drag_enter_event(void* self, void* event) {
    KReplaceDialog_QBaseDragEnterEvent((KReplaceDialog*)self, (QDragEnterEvent*)event);
}

void k_replacedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnDragEnterEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_drag_move_event(void* self, void* event) {
    KReplaceDialog_DragMoveEvent((KReplaceDialog*)self, (QDragMoveEvent*)event);
}

void k_replacedialog_qbase_drag_move_event(void* self, void* event) {
    KReplaceDialog_QBaseDragMoveEvent((KReplaceDialog*)self, (QDragMoveEvent*)event);
}

void k_replacedialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnDragMoveEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_drag_leave_event(void* self, void* event) {
    KReplaceDialog_DragLeaveEvent((KReplaceDialog*)self, (QDragLeaveEvent*)event);
}

void k_replacedialog_qbase_drag_leave_event(void* self, void* event) {
    KReplaceDialog_QBaseDragLeaveEvent((KReplaceDialog*)self, (QDragLeaveEvent*)event);
}

void k_replacedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnDragLeaveEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_drop_event(void* self, void* event) {
    KReplaceDialog_DropEvent((KReplaceDialog*)self, (QDropEvent*)event);
}

void k_replacedialog_qbase_drop_event(void* self, void* event) {
    KReplaceDialog_QBaseDropEvent((KReplaceDialog*)self, (QDropEvent*)event);
}

void k_replacedialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnDropEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_hide_event(void* self, void* event) {
    KReplaceDialog_HideEvent((KReplaceDialog*)self, (QHideEvent*)event);
}

void k_replacedialog_qbase_hide_event(void* self, void* event) {
    KReplaceDialog_QBaseHideEvent((KReplaceDialog*)self, (QHideEvent*)event);
}

void k_replacedialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnHideEvent((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KReplaceDialog_NativeEvent((KReplaceDialog*)self, qstring(eventType), message, result);
}

bool k_replacedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KReplaceDialog_QBaseNativeEvent((KReplaceDialog*)self, qstring(eventType), message, result);
}

void k_replacedialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KReplaceDialog_OnNativeEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_change_event(void* self, void* param1) {
    KReplaceDialog_ChangeEvent((KReplaceDialog*)self, (QEvent*)param1);
}

void k_replacedialog_qbase_change_event(void* self, void* param1) {
    KReplaceDialog_QBaseChangeEvent((KReplaceDialog*)self, (QEvent*)param1);
}

void k_replacedialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnChangeEvent((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_metric(void* self, int32_t param1) {
    return KReplaceDialog_Metric((KReplaceDialog*)self, param1);
}

int32_t k_replacedialog_qbase_metric(void* self, int32_t param1) {
    return KReplaceDialog_QBaseMetric((KReplaceDialog*)self, param1);
}

void k_replacedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KReplaceDialog_OnMetric((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_init_painter(void* self, void* painter) {
    KReplaceDialog_InitPainter((KReplaceDialog*)self, (QPainter*)painter);
}

void k_replacedialog_qbase_init_painter(void* self, void* painter) {
    KReplaceDialog_QBaseInitPainter((KReplaceDialog*)self, (QPainter*)painter);
}

void k_replacedialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnInitPainter((KReplaceDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_replacedialog_redirected(void* self, void* offset) {
    return KReplaceDialog_Redirected((KReplaceDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_replacedialog_qbase_redirected(void* self, void* offset) {
    return KReplaceDialog_QBaseRedirected((KReplaceDialog*)self, (QPoint*)offset);
}

void k_replacedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KReplaceDialog_OnRedirected((KReplaceDialog*)self, (intptr_t)callback);
}

QPainter* k_replacedialog_shared_painter(void* self) {
    return KReplaceDialog_SharedPainter((KReplaceDialog*)self);
}

QPainter* k_replacedialog_qbase_shared_painter(void* self) {
    return KReplaceDialog_QBaseSharedPainter((KReplaceDialog*)self);
}

void k_replacedialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KReplaceDialog_OnSharedPainter((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_input_method_event(void* self, void* param1) {
    KReplaceDialog_InputMethodEvent((KReplaceDialog*)self, (QInputMethodEvent*)param1);
}

void k_replacedialog_qbase_input_method_event(void* self, void* param1) {
    KReplaceDialog_QBaseInputMethodEvent((KReplaceDialog*)self, (QInputMethodEvent*)param1);
}

void k_replacedialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnInputMethodEvent((KReplaceDialog*)self, (intptr_t)callback);
}

QVariant* k_replacedialog_input_method_query(void* self, int64_t param1) {
    return KReplaceDialog_InputMethodQuery((KReplaceDialog*)self, param1);
}

QVariant* k_replacedialog_qbase_input_method_query(void* self, int64_t param1) {
    return KReplaceDialog_QBaseInputMethodQuery((KReplaceDialog*)self, param1);
}

void k_replacedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KReplaceDialog_OnInputMethodQuery((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_focus_next_prev_child(void* self, bool next) {
    return KReplaceDialog_FocusNextPrevChild((KReplaceDialog*)self, next);
}

bool k_replacedialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KReplaceDialog_QBaseFocusNextPrevChild((KReplaceDialog*)self, next);
}

void k_replacedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KReplaceDialog_OnFocusNextPrevChild((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_timer_event(void* self, void* event) {
    KReplaceDialog_TimerEvent((KReplaceDialog*)self, (QTimerEvent*)event);
}

void k_replacedialog_qbase_timer_event(void* self, void* event) {
    KReplaceDialog_QBaseTimerEvent((KReplaceDialog*)self, (QTimerEvent*)event);
}

void k_replacedialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnTimerEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_child_event(void* self, void* event) {
    KReplaceDialog_ChildEvent((KReplaceDialog*)self, (QChildEvent*)event);
}

void k_replacedialog_qbase_child_event(void* self, void* event) {
    KReplaceDialog_QBaseChildEvent((KReplaceDialog*)self, (QChildEvent*)event);
}

void k_replacedialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnChildEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_custom_event(void* self, void* event) {
    KReplaceDialog_CustomEvent((KReplaceDialog*)self, (QEvent*)event);
}

void k_replacedialog_qbase_custom_event(void* self, void* event) {
    KReplaceDialog_QBaseCustomEvent((KReplaceDialog*)self, (QEvent*)event);
}

void k_replacedialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnCustomEvent((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_connect_notify(void* self, void* signal) {
    KReplaceDialog_ConnectNotify((KReplaceDialog*)self, (QMetaMethod*)signal);
}

void k_replacedialog_qbase_connect_notify(void* self, void* signal) {
    KReplaceDialog_QBaseConnectNotify((KReplaceDialog*)self, (QMetaMethod*)signal);
}

void k_replacedialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnConnectNotify((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_disconnect_notify(void* self, void* signal) {
    KReplaceDialog_DisconnectNotify((KReplaceDialog*)self, (QMetaMethod*)signal);
}

void k_replacedialog_qbase_disconnect_notify(void* self, void* signal) {
    KReplaceDialog_QBaseDisconnectNotify((KReplaceDialog*)self, (QMetaMethod*)signal);
}

void k_replacedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnDisconnectNotify((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_adjust_position(void* self, void* param1) {
    KReplaceDialog_AdjustPosition((KReplaceDialog*)self, (QWidget*)param1);
}

void k_replacedialog_qbase_adjust_position(void* self, void* param1) {
    KReplaceDialog_QBaseAdjustPosition((KReplaceDialog*)self, (QWidget*)param1);
}

void k_replacedialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KReplaceDialog_OnAdjustPosition((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_update_micro_focus(void* self) {
    KReplaceDialog_UpdateMicroFocus((KReplaceDialog*)self);
}

void k_replacedialog_qbase_update_micro_focus(void* self) {
    KReplaceDialog_QBaseUpdateMicroFocus((KReplaceDialog*)self);
}

void k_replacedialog_on_update_micro_focus(void* self, void (*callback)()) {
    KReplaceDialog_OnUpdateMicroFocus((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_create(void* self) {
    KReplaceDialog_Create((KReplaceDialog*)self);
}

void k_replacedialog_qbase_create(void* self) {
    KReplaceDialog_QBaseCreate((KReplaceDialog*)self);
}

void k_replacedialog_on_create(void* self, void (*callback)()) {
    KReplaceDialog_OnCreate((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_destroy(void* self) {
    KReplaceDialog_Destroy((KReplaceDialog*)self);
}

void k_replacedialog_qbase_destroy(void* self) {
    KReplaceDialog_QBaseDestroy((KReplaceDialog*)self);
}

void k_replacedialog_on_destroy(void* self, void (*callback)()) {
    KReplaceDialog_OnDestroy((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_focus_next_child(void* self) {
    return KReplaceDialog_FocusNextChild((KReplaceDialog*)self);
}

bool k_replacedialog_qbase_focus_next_child(void* self) {
    return KReplaceDialog_QBaseFocusNextChild((KReplaceDialog*)self);
}

void k_replacedialog_on_focus_next_child(void* self, bool (*callback)()) {
    KReplaceDialog_OnFocusNextChild((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_focus_previous_child(void* self) {
    return KReplaceDialog_FocusPreviousChild((KReplaceDialog*)self);
}

bool k_replacedialog_qbase_focus_previous_child(void* self) {
    return KReplaceDialog_QBaseFocusPreviousChild((KReplaceDialog*)self);
}

void k_replacedialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KReplaceDialog_OnFocusPreviousChild((KReplaceDialog*)self, (intptr_t)callback);
}

QObject* k_replacedialog_sender(void* self) {
    return KReplaceDialog_Sender((KReplaceDialog*)self);
}

QObject* k_replacedialog_qbase_sender(void* self) {
    return KReplaceDialog_QBaseSender((KReplaceDialog*)self);
}

void k_replacedialog_on_sender(void* self, QObject* (*callback)()) {
    KReplaceDialog_OnSender((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_sender_signal_index(void* self) {
    return KReplaceDialog_SenderSignalIndex((KReplaceDialog*)self);
}

int32_t k_replacedialog_qbase_sender_signal_index(void* self) {
    return KReplaceDialog_QBaseSenderSignalIndex((KReplaceDialog*)self);
}

void k_replacedialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KReplaceDialog_OnSenderSignalIndex((KReplaceDialog*)self, (intptr_t)callback);
}

int32_t k_replacedialog_receivers(void* self, const char* signal) {
    return KReplaceDialog_Receivers((KReplaceDialog*)self, signal);
}

int32_t k_replacedialog_qbase_receivers(void* self, const char* signal) {
    return KReplaceDialog_QBaseReceivers((KReplaceDialog*)self, signal);
}

void k_replacedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KReplaceDialog_OnReceivers((KReplaceDialog*)self, (intptr_t)callback);
}

bool k_replacedialog_is_signal_connected(void* self, void* signal) {
    return KReplaceDialog_IsSignalConnected((KReplaceDialog*)self, (QMetaMethod*)signal);
}

bool k_replacedialog_qbase_is_signal_connected(void* self, void* signal) {
    return KReplaceDialog_QBaseIsSignalConnected((KReplaceDialog*)self, (QMetaMethod*)signal);
}

void k_replacedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KReplaceDialog_OnIsSignalConnected((KReplaceDialog*)self, (intptr_t)callback);
}

double k_replacedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KReplaceDialog_GetDecodedMetricF((KReplaceDialog*)self, metricA, metricB);
}

double k_replacedialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KReplaceDialog_QBaseGetDecodedMetricF((KReplaceDialog*)self, metricA, metricB);
}

void k_replacedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KReplaceDialog_OnGetDecodedMetricF((KReplaceDialog*)self, (intptr_t)callback);
}

void k_replacedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_replacedialog_delete(void* self) {
    KReplaceDialog_Delete((KReplaceDialog*)(self));
}
