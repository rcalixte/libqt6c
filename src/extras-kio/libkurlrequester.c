#include "../extras-kcompletion/libkcombobox.hpp"
#include "../extras-kwidgetsaddons/libkeditlistwidget.hpp"
#include "../extras-kcompletion/libklineedit.hpp"
#include "libkurlcompletion.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqfiledialog.hpp"
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
#include "libkurlrequester.hpp"
#include "libkurlrequester.h"

KUrlRequester* k_urlrequester_new(void* parent) {
    return KUrlRequester_new((QWidget*)parent);
}

KUrlRequester* k_urlrequester_new2() {
    return KUrlRequester_new2();
}

KUrlRequester* k_urlrequester_new3(void* url) {
    return KUrlRequester_new3((QUrl*)url);
}

KUrlRequester* k_urlrequester_new4(void* editWidget, void* parent) {
    return KUrlRequester_new4((QWidget*)editWidget, (QWidget*)parent);
}

KUrlRequester* k_urlrequester_new5(void* url, void* parent) {
    return KUrlRequester_new5((QUrl*)url, (QWidget*)parent);
}

const QMetaObject* k_urlrequester_meta_object(void* self) {
    return KUrlRequester_MetaObject((KUrlRequester*)self);
}

void* k_urlrequester_metacast(void* self, const char* param1) {
    return KUrlRequester_Metacast((KUrlRequester*)self, param1);
}

int32_t k_urlrequester_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlRequester_Metacall((KUrlRequester*)self, param1, param2, param3);
}

void k_urlrequester_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUrlRequester_OnMetacall((KUrlRequester*)self, (intptr_t)callback);
}

int32_t k_urlrequester_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlRequester_QBaseMetacall((KUrlRequester*)self, param1, param2, param3);
}

const char* k_urlrequester_tr(const char* s) {
    libqt_string _str = KUrlRequester_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_urlrequester_url(void* self) {
    return KUrlRequester_Url((KUrlRequester*)self);
}

QUrl* k_urlrequester_start_dir(void* self) {
    return KUrlRequester_StartDir((KUrlRequester*)self);
}

const char* k_urlrequester_text(void* self) {
    libqt_string _str = KUrlRequester_Text((KUrlRequester*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_mode(void* self, int32_t mode) {
    KUrlRequester_SetMode((KUrlRequester*)self, mode);
}

int32_t k_urlrequester_mode(void* self) {
    return KUrlRequester_Mode((KUrlRequester*)self);
}

void k_urlrequester_set_accept_mode(void* self, int32_t m) {
    KUrlRequester_SetAcceptMode((KUrlRequester*)self, m);
}

int32_t k_urlrequester_accept_mode(void* self) {
    return KUrlRequester_AcceptMode((KUrlRequester*)self);
}

void k_urlrequester_set_name_filters(void* self, const char* filters[]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlrequester_set_name_filters");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    KUrlRequester_SetNameFilters((KUrlRequester*)self, filters_list);
    free(filters_qstr);
}

void k_urlrequester_set_name_filter(void* self, const char* filter) {
    KUrlRequester_SetNameFilter((KUrlRequester*)self, qstring(filter));
}

const char** k_urlrequester_name_filters(void* self) {
    libqt_list _arr = KUrlRequester_NameFilters((KUrlRequester*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlrequester_name_filters");
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

void k_urlrequester_set_mime_type_filters(void* self, const char* mimeTypes[]) {
    size_t mimeTypes_len = libqt_strv_length(mimeTypes);
    libqt_string* mimeTypes_qstr = (libqt_string*)malloc(mimeTypes_len * sizeof(libqt_string));
    if (mimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlrequester_set_mime_type_filters");
        abort();
    }
    for (size_t i = 0; i < mimeTypes_len; ++i) {
        mimeTypes_qstr[i] = qstring(mimeTypes[i]);
    }
    libqt_list mimeTypes_list = qlist(mimeTypes_qstr, mimeTypes_len);
    KUrlRequester_SetMimeTypeFilters((KUrlRequester*)self, mimeTypes_list);
    free(mimeTypes_qstr);
}

const char** k_urlrequester_mime_type_filters(void* self) {
    libqt_list _arr = KUrlRequester_MimeTypeFilters((KUrlRequester*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlrequester_mime_type_filters");
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

QFileDialog* k_urlrequester_file_dialog(void* self) {
    return KUrlRequester_FileDialog((KUrlRequester*)self);
}

void k_urlrequester_on_file_dialog(void* self, QFileDialog* (*callback)()) {
    KUrlRequester_OnFileDialog((KUrlRequester*)self, (intptr_t)callback);
}

QFileDialog* k_urlrequester_qbase_file_dialog(void* self) {
    return KUrlRequester_QBaseFileDialog((KUrlRequester*)self);
}

KLineEdit* k_urlrequester_line_edit(void* self) {
    return KUrlRequester_LineEdit((KUrlRequester*)self);
}

KComboBox* k_urlrequester_combo_box(void* self) {
    return KUrlRequester_ComboBox((KUrlRequester*)self);
}

QPushButton* k_urlrequester_button(void* self) {
    return KUrlRequester_Button((KUrlRequester*)self);
}

KUrlCompletion* k_urlrequester_completion_object(void* self) {
    return KUrlRequester_CompletionObject((KUrlRequester*)self);
}

const KEditListWidget__CustomEditor* k_urlrequester_custom_editor(void* self) {
    return KUrlRequester_CustomEditor((KUrlRequester*)self);
}

const char* k_urlrequester_placeholder_text(void* self) {
    libqt_string _str = KUrlRequester_PlaceholderText((KUrlRequester*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_placeholder_text(void* self, const char* msg) {
    KUrlRequester_SetPlaceholderText((KUrlRequester*)self, qstring(msg));
}

int32_t k_urlrequester_file_dialog_modality(void* self) {
    return KUrlRequester_FileDialogModality((KUrlRequester*)self);
}

void k_urlrequester_set_file_dialog_modality(void* self, int32_t modality) {
    KUrlRequester_SetFileDialogModality((KUrlRequester*)self, modality);
}

void k_urlrequester_set_url(void* self, void* url) {
    KUrlRequester_SetUrl((KUrlRequester*)self, (QUrl*)url);
}

void k_urlrequester_set_start_dir(void* self, void* startDir) {
    KUrlRequester_SetStartDir((KUrlRequester*)self, (QUrl*)startDir);
}

void k_urlrequester_set_text(void* self, const char* text) {
    KUrlRequester_SetText((KUrlRequester*)self, qstring(text));
}

void k_urlrequester_clear(void* self) {
    KUrlRequester_Clear((KUrlRequester*)self);
}

void k_urlrequester_text_changed(void* self, const char* param1) {
    KUrlRequester_TextChanged((KUrlRequester*)self, qstring(param1));
}

void k_urlrequester_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_TextChanged((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_text_edited(void* self, const char* param1) {
    KUrlRequester_TextEdited((KUrlRequester*)self, qstring(param1));
}

void k_urlrequester_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_TextEdited((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_return_pressed(void* self, const char* text) {
    KUrlRequester_ReturnPressed((KUrlRequester*)self, qstring(text));
}

void k_urlrequester_on_return_pressed(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_ReturnPressed((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_open_file_dialog(void* self, void* param1) {
    KUrlRequester_OpenFileDialog((KUrlRequester*)self, (KUrlRequester*)param1);
}

void k_urlrequester_on_open_file_dialog(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_Connect_OpenFileDialog((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_url_selected(void* self, void* param1) {
    KUrlRequester_UrlSelected((KUrlRequester*)self, (QUrl*)param1);
}

void k_urlrequester_on_url_selected(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_Connect_UrlSelected((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_change_event(void* self, void* e) {
    KUrlRequester_ChangeEvent((KUrlRequester*)self, (QEvent*)e);
}

void k_urlrequester_on_change_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnChangeEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_qbase_change_event(void* self, void* e) {
    KUrlRequester_QBaseChangeEvent((KUrlRequester*)self, (QEvent*)e);
}

bool k_urlrequester_event_filter(void* self, void* obj, void* ev) {
    return KUrlRequester_EventFilter((KUrlRequester*)self, (QObject*)obj, (QEvent*)ev);
}

void k_urlrequester_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUrlRequester_OnEventFilter((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_qbase_event_filter(void* self, void* obj, void* ev) {
    return KUrlRequester_QBaseEventFilter((KUrlRequester*)self, (QObject*)obj, (QEvent*)ev);
}

const char* k_urlrequester_tr2(const char* s, const char* c) {
    libqt_string _str = KUrlRequester_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlrequester_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KUrlRequester_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_urlrequester_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_urlrequester_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_urlrequester_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_urlrequester_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_urlrequester_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_urlrequester_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_urlrequester_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_urlrequester_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_urlrequester_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_urlrequester_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_urlrequester_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_urlrequester_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_urlrequester_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_urlrequester_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_urlrequester_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_urlrequester_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_urlrequester_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_urlrequester_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_urlrequester_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_urlrequester_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_urlrequester_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_urlrequester_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_urlrequester_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_urlrequester_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_urlrequester_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_urlrequester_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_urlrequester_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_urlrequester_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_urlrequester_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_urlrequester_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_urlrequester_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_urlrequester_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_urlrequester_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_urlrequester_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_urlrequester_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_urlrequester_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_urlrequester_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_urlrequester_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_urlrequester_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_urlrequester_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_urlrequester_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_urlrequester_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_urlrequester_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_urlrequester_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_urlrequester_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_urlrequester_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_urlrequester_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_urlrequester_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_urlrequester_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_urlrequester_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_urlrequester_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_urlrequester_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_urlrequester_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_urlrequester_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlrequester_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlrequester_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlrequester_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlrequester_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlrequester_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlrequester_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlrequester_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlrequester_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urlrequester_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_urlrequester_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urlrequester_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_urlrequester_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_urlrequester_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_urlrequester_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_urlrequester_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_urlrequester_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_urlrequester_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_urlrequester_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_urlrequester_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_urlrequester_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_urlrequester_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_urlrequester_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_urlrequester_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_urlrequester_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_urlrequester_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_urlrequester_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_urlrequester_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_urlrequester_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_urlrequester_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_urlrequester_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_urlrequester_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_urlrequester_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_urlrequester_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_urlrequester_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_urlrequester_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_urlrequester_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_urlrequester_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_urlrequester_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_urlrequester_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_urlrequester_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_urlrequester_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_urlrequester_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_urlrequester_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_urlrequester_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_urlrequester_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_urlrequester_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlrequester_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_urlrequester_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_urlrequester_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_urlrequester_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_urlrequester_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_urlrequester_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_urlrequester_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_urlrequester_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_urlrequester_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_urlrequester_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_urlrequester_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_urlrequester_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_urlrequester_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_urlrequester_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlrequester_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_urlrequester_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_urlrequester_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_urlrequester_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_urlrequester_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_urlrequester_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_urlrequester_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_urlrequester_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_urlrequester_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_urlrequester_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_urlrequester_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_urlrequester_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_urlrequester_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_urlrequester_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_urlrequester_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_urlrequester_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_urlrequester_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_urlrequester_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_urlrequester_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_urlrequester_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_urlrequester_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_urlrequester_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_urlrequester_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_urlrequester_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_urlrequester_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_urlrequester_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_urlrequester_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_urlrequester_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_urlrequester_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_urlrequester_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_urlrequester_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_urlrequester_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_urlrequester_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_urlrequester_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_urlrequester_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_urlrequester_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_urlrequester_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_urlrequester_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_urlrequester_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_urlrequester_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_urlrequester_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_urlrequester_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_urlrequester_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_urlrequester_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_urlrequester_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_urlrequester_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_urlrequester_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_urlrequester_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_urlrequester_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_urlrequester_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_urlrequester_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_urlrequester_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_urlrequester_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_urlrequester_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_urlrequester_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_urlrequester_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_urlrequester_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_urlrequester_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_urlrequester_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_urlrequester_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_urlrequester_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_urlrequester_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_urlrequester_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urlrequester_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_urlrequester_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_urlrequester_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_urlrequester_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_urlrequester_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_urlrequester_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_urlrequester_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_urlrequester_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_urlrequester_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_urlrequester_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_urlrequester_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_urlrequester_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_urlrequester_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_urlrequester_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_urlrequester_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_urlrequester_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_urlrequester_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_urlrequester_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_urlrequester_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_urlrequester_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_urlrequester_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_urlrequester_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_urlrequester_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_urlrequester_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_urlrequester_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_urlrequester_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_urlrequester_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_urlrequester_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_urlrequester_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_urlrequester_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_urlrequester_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_urlrequester_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_urlrequester_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_urlrequester_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_urlrequester_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_urlrequester_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_urlrequester_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_urlrequester_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_urlrequester_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_urlrequester_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_urlrequester_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_urlrequester_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_urlrequester_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_urlrequester_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_urlrequester_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_urlrequester_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_urlrequester_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_urlrequester_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_urlrequester_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_urlrequester_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_urlrequester_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_urlrequester_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_urlrequester_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_urlrequester_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_urlrequester_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_urlrequester_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_urlrequester_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_urlrequester_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_urlrequester_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_urlrequester_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_urlrequester_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_urlrequester_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_urlrequester_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_urlrequester_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlrequester_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_urlrequester_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlrequester_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_urlrequester_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlrequester_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_urlrequester_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_urlrequester_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_urlrequester_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_urlrequester_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_urlrequester_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urlrequester_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_urlrequester_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_urlrequester_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urlrequester_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_urlrequester_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_urlrequester_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_urlrequester_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_urlrequester_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_urlrequester_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_urlrequester_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_urlrequester_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_urlrequester_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_urlrequester_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_urlrequester_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlrequester_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_urlrequester_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_urlrequester_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_urlrequester_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_urlrequester_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_urlrequester_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_urlrequester_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_urlrequester_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_urlrequester_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_urlrequester_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_urlrequester_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_urlrequester_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_urlrequester_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_urlrequester_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_urlrequester_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_urlrequester_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_urlrequester_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_urlrequester_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_urlrequester_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_urlrequester_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_urlrequester_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_urlrequester_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_urlrequester_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlrequester_dynamic_property_names");
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

QBindingStorage* k_urlrequester_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_urlrequester_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_urlrequester_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_urlrequester_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_urlrequester_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_urlrequester_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_urlrequester_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_urlrequester_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_urlrequester_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_urlrequester_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_urlrequester_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_urlrequester_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_urlrequester_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_urlrequester_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_urlrequester_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_urlrequester_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_urlrequester_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_urlrequester_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_urlrequester_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_urlrequester_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_urlrequester_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_urlrequester_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_urlrequester_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_urlrequester_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_urlrequester_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_urlrequester_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_urlrequester_dev_type(void* self) {
    return KUrlRequester_DevType((KUrlRequester*)self);
}

int32_t k_urlrequester_qbase_dev_type(void* self) {
    return KUrlRequester_QBaseDevType((KUrlRequester*)self);
}

void k_urlrequester_on_dev_type(void* self, int32_t (*callback)()) {
    KUrlRequester_OnDevType((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_set_visible(void* self, bool visible) {
    KUrlRequester_SetVisible((KUrlRequester*)self, visible);
}

void k_urlrequester_qbase_set_visible(void* self, bool visible) {
    KUrlRequester_QBaseSetVisible((KUrlRequester*)self, visible);
}

void k_urlrequester_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KUrlRequester_OnSetVisible((KUrlRequester*)self, (intptr_t)callback);
}

QSize* k_urlrequester_size_hint(void* self) {
    return KUrlRequester_SizeHint((KUrlRequester*)self);
}

QSize* k_urlrequester_qbase_size_hint(void* self) {
    return KUrlRequester_QBaseSizeHint((KUrlRequester*)self);
}

void k_urlrequester_on_size_hint(void* self, QSize* (*callback)()) {
    KUrlRequester_OnSizeHint((KUrlRequester*)self, (intptr_t)callback);
}

QSize* k_urlrequester_minimum_size_hint(void* self) {
    return KUrlRequester_MinimumSizeHint((KUrlRequester*)self);
}

QSize* k_urlrequester_qbase_minimum_size_hint(void* self) {
    return KUrlRequester_QBaseMinimumSizeHint((KUrlRequester*)self);
}

void k_urlrequester_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KUrlRequester_OnMinimumSizeHint((KUrlRequester*)self, (intptr_t)callback);
}

int32_t k_urlrequester_height_for_width(void* self, int param1) {
    return KUrlRequester_HeightForWidth((KUrlRequester*)self, param1);
}

int32_t k_urlrequester_qbase_height_for_width(void* self, int param1) {
    return KUrlRequester_QBaseHeightForWidth((KUrlRequester*)self, param1);
}

void k_urlrequester_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KUrlRequester_OnHeightForWidth((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_has_height_for_width(void* self) {
    return KUrlRequester_HasHeightForWidth((KUrlRequester*)self);
}

bool k_urlrequester_qbase_has_height_for_width(void* self) {
    return KUrlRequester_QBaseHasHeightForWidth((KUrlRequester*)self);
}

void k_urlrequester_on_has_height_for_width(void* self, bool (*callback)()) {
    KUrlRequester_OnHasHeightForWidth((KUrlRequester*)self, (intptr_t)callback);
}

QPaintEngine* k_urlrequester_paint_engine(void* self) {
    return KUrlRequester_PaintEngine((KUrlRequester*)self);
}

QPaintEngine* k_urlrequester_qbase_paint_engine(void* self) {
    return KUrlRequester_QBasePaintEngine((KUrlRequester*)self);
}

void k_urlrequester_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KUrlRequester_OnPaintEngine((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_event(void* self, void* event) {
    return KUrlRequester_Event((KUrlRequester*)self, (QEvent*)event);
}

bool k_urlrequester_qbase_event(void* self, void* event) {
    return KUrlRequester_QBaseEvent((KUrlRequester*)self, (QEvent*)event);
}

void k_urlrequester_on_event(void* self, bool (*callback)(void*, void*)) {
    KUrlRequester_OnEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_mouse_press_event(void* self, void* event) {
    KUrlRequester_MousePressEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_qbase_mouse_press_event(void* self, void* event) {
    KUrlRequester_QBaseMousePressEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnMousePressEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_mouse_release_event(void* self, void* event) {
    KUrlRequester_MouseReleaseEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_qbase_mouse_release_event(void* self, void* event) {
    KUrlRequester_QBaseMouseReleaseEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnMouseReleaseEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_mouse_double_click_event(void* self, void* event) {
    KUrlRequester_MouseDoubleClickEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_qbase_mouse_double_click_event(void* self, void* event) {
    KUrlRequester_QBaseMouseDoubleClickEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnMouseDoubleClickEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_mouse_move_event(void* self, void* event) {
    KUrlRequester_MouseMoveEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_qbase_mouse_move_event(void* self, void* event) {
    KUrlRequester_QBaseMouseMoveEvent((KUrlRequester*)self, (QMouseEvent*)event);
}

void k_urlrequester_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnMouseMoveEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_wheel_event(void* self, void* event) {
    KUrlRequester_WheelEvent((KUrlRequester*)self, (QWheelEvent*)event);
}

void k_urlrequester_qbase_wheel_event(void* self, void* event) {
    KUrlRequester_QBaseWheelEvent((KUrlRequester*)self, (QWheelEvent*)event);
}

void k_urlrequester_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnWheelEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_key_press_event(void* self, void* event) {
    KUrlRequester_KeyPressEvent((KUrlRequester*)self, (QKeyEvent*)event);
}

void k_urlrequester_qbase_key_press_event(void* self, void* event) {
    KUrlRequester_QBaseKeyPressEvent((KUrlRequester*)self, (QKeyEvent*)event);
}

void k_urlrequester_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnKeyPressEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_key_release_event(void* self, void* event) {
    KUrlRequester_KeyReleaseEvent((KUrlRequester*)self, (QKeyEvent*)event);
}

void k_urlrequester_qbase_key_release_event(void* self, void* event) {
    KUrlRequester_QBaseKeyReleaseEvent((KUrlRequester*)self, (QKeyEvent*)event);
}

void k_urlrequester_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnKeyReleaseEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_focus_in_event(void* self, void* event) {
    KUrlRequester_FocusInEvent((KUrlRequester*)self, (QFocusEvent*)event);
}

void k_urlrequester_qbase_focus_in_event(void* self, void* event) {
    KUrlRequester_QBaseFocusInEvent((KUrlRequester*)self, (QFocusEvent*)event);
}

void k_urlrequester_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnFocusInEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_focus_out_event(void* self, void* event) {
    KUrlRequester_FocusOutEvent((KUrlRequester*)self, (QFocusEvent*)event);
}

void k_urlrequester_qbase_focus_out_event(void* self, void* event) {
    KUrlRequester_QBaseFocusOutEvent((KUrlRequester*)self, (QFocusEvent*)event);
}

void k_urlrequester_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnFocusOutEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_enter_event(void* self, void* event) {
    KUrlRequester_EnterEvent((KUrlRequester*)self, (QEnterEvent*)event);
}

void k_urlrequester_qbase_enter_event(void* self, void* event) {
    KUrlRequester_QBaseEnterEvent((KUrlRequester*)self, (QEnterEvent*)event);
}

void k_urlrequester_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnEnterEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_leave_event(void* self, void* event) {
    KUrlRequester_LeaveEvent((KUrlRequester*)self, (QEvent*)event);
}

void k_urlrequester_qbase_leave_event(void* self, void* event) {
    KUrlRequester_QBaseLeaveEvent((KUrlRequester*)self, (QEvent*)event);
}

void k_urlrequester_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnLeaveEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_paint_event(void* self, void* event) {
    KUrlRequester_PaintEvent((KUrlRequester*)self, (QPaintEvent*)event);
}

void k_urlrequester_qbase_paint_event(void* self, void* event) {
    KUrlRequester_QBasePaintEvent((KUrlRequester*)self, (QPaintEvent*)event);
}

void k_urlrequester_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnPaintEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_move_event(void* self, void* event) {
    KUrlRequester_MoveEvent((KUrlRequester*)self, (QMoveEvent*)event);
}

void k_urlrequester_qbase_move_event(void* self, void* event) {
    KUrlRequester_QBaseMoveEvent((KUrlRequester*)self, (QMoveEvent*)event);
}

void k_urlrequester_on_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnMoveEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_resize_event(void* self, void* event) {
    KUrlRequester_ResizeEvent((KUrlRequester*)self, (QResizeEvent*)event);
}

void k_urlrequester_qbase_resize_event(void* self, void* event) {
    KUrlRequester_QBaseResizeEvent((KUrlRequester*)self, (QResizeEvent*)event);
}

void k_urlrequester_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnResizeEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_close_event(void* self, void* event) {
    KUrlRequester_CloseEvent((KUrlRequester*)self, (QCloseEvent*)event);
}

void k_urlrequester_qbase_close_event(void* self, void* event) {
    KUrlRequester_QBaseCloseEvent((KUrlRequester*)self, (QCloseEvent*)event);
}

void k_urlrequester_on_close_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnCloseEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_context_menu_event(void* self, void* event) {
    KUrlRequester_ContextMenuEvent((KUrlRequester*)self, (QContextMenuEvent*)event);
}

void k_urlrequester_qbase_context_menu_event(void* self, void* event) {
    KUrlRequester_QBaseContextMenuEvent((KUrlRequester*)self, (QContextMenuEvent*)event);
}

void k_urlrequester_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnContextMenuEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_tablet_event(void* self, void* event) {
    KUrlRequester_TabletEvent((KUrlRequester*)self, (QTabletEvent*)event);
}

void k_urlrequester_qbase_tablet_event(void* self, void* event) {
    KUrlRequester_QBaseTabletEvent((KUrlRequester*)self, (QTabletEvent*)event);
}

void k_urlrequester_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnTabletEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_action_event(void* self, void* event) {
    KUrlRequester_ActionEvent((KUrlRequester*)self, (QActionEvent*)event);
}

void k_urlrequester_qbase_action_event(void* self, void* event) {
    KUrlRequester_QBaseActionEvent((KUrlRequester*)self, (QActionEvent*)event);
}

void k_urlrequester_on_action_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnActionEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_drag_enter_event(void* self, void* event) {
    KUrlRequester_DragEnterEvent((KUrlRequester*)self, (QDragEnterEvent*)event);
}

void k_urlrequester_qbase_drag_enter_event(void* self, void* event) {
    KUrlRequester_QBaseDragEnterEvent((KUrlRequester*)self, (QDragEnterEvent*)event);
}

void k_urlrequester_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnDragEnterEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_drag_move_event(void* self, void* event) {
    KUrlRequester_DragMoveEvent((KUrlRequester*)self, (QDragMoveEvent*)event);
}

void k_urlrequester_qbase_drag_move_event(void* self, void* event) {
    KUrlRequester_QBaseDragMoveEvent((KUrlRequester*)self, (QDragMoveEvent*)event);
}

void k_urlrequester_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnDragMoveEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_drag_leave_event(void* self, void* event) {
    KUrlRequester_DragLeaveEvent((KUrlRequester*)self, (QDragLeaveEvent*)event);
}

void k_urlrequester_qbase_drag_leave_event(void* self, void* event) {
    KUrlRequester_QBaseDragLeaveEvent((KUrlRequester*)self, (QDragLeaveEvent*)event);
}

void k_urlrequester_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnDragLeaveEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_drop_event(void* self, void* event) {
    KUrlRequester_DropEvent((KUrlRequester*)self, (QDropEvent*)event);
}

void k_urlrequester_qbase_drop_event(void* self, void* event) {
    KUrlRequester_QBaseDropEvent((KUrlRequester*)self, (QDropEvent*)event);
}

void k_urlrequester_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnDropEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_show_event(void* self, void* event) {
    KUrlRequester_ShowEvent((KUrlRequester*)self, (QShowEvent*)event);
}

void k_urlrequester_qbase_show_event(void* self, void* event) {
    KUrlRequester_QBaseShowEvent((KUrlRequester*)self, (QShowEvent*)event);
}

void k_urlrequester_on_show_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnShowEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_hide_event(void* self, void* event) {
    KUrlRequester_HideEvent((KUrlRequester*)self, (QHideEvent*)event);
}

void k_urlrequester_qbase_hide_event(void* self, void* event) {
    KUrlRequester_QBaseHideEvent((KUrlRequester*)self, (QHideEvent*)event);
}

void k_urlrequester_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnHideEvent((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlRequester_NativeEvent((KUrlRequester*)self, qstring(eventType), message, result);
}

bool k_urlrequester_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlRequester_QBaseNativeEvent((KUrlRequester*)self, qstring(eventType), message, result);
}

void k_urlrequester_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KUrlRequester_OnNativeEvent((KUrlRequester*)self, (intptr_t)callback);
}

int32_t k_urlrequester_metric(void* self, int32_t param1) {
    return KUrlRequester_Metric((KUrlRequester*)self, param1);
}

int32_t k_urlrequester_qbase_metric(void* self, int32_t param1) {
    return KUrlRequester_QBaseMetric((KUrlRequester*)self, param1);
}

void k_urlrequester_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KUrlRequester_OnMetric((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_init_painter(void* self, void* painter) {
    KUrlRequester_InitPainter((KUrlRequester*)self, (QPainter*)painter);
}

void k_urlrequester_qbase_init_painter(void* self, void* painter) {
    KUrlRequester_QBaseInitPainter((KUrlRequester*)self, (QPainter*)painter);
}

void k_urlrequester_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnInitPainter((KUrlRequester*)self, (intptr_t)callback);
}

QPaintDevice* k_urlrequester_redirected(void* self, void* offset) {
    return KUrlRequester_Redirected((KUrlRequester*)self, (QPoint*)offset);
}

QPaintDevice* k_urlrequester_qbase_redirected(void* self, void* offset) {
    return KUrlRequester_QBaseRedirected((KUrlRequester*)self, (QPoint*)offset);
}

void k_urlrequester_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KUrlRequester_OnRedirected((KUrlRequester*)self, (intptr_t)callback);
}

QPainter* k_urlrequester_shared_painter(void* self) {
    return KUrlRequester_SharedPainter((KUrlRequester*)self);
}

QPainter* k_urlrequester_qbase_shared_painter(void* self) {
    return KUrlRequester_QBaseSharedPainter((KUrlRequester*)self);
}

void k_urlrequester_on_shared_painter(void* self, QPainter* (*callback)()) {
    KUrlRequester_OnSharedPainter((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_input_method_event(void* self, void* param1) {
    KUrlRequester_InputMethodEvent((KUrlRequester*)self, (QInputMethodEvent*)param1);
}

void k_urlrequester_qbase_input_method_event(void* self, void* param1) {
    KUrlRequester_QBaseInputMethodEvent((KUrlRequester*)self, (QInputMethodEvent*)param1);
}

void k_urlrequester_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnInputMethodEvent((KUrlRequester*)self, (intptr_t)callback);
}

QVariant* k_urlrequester_input_method_query(void* self, int64_t param1) {
    return KUrlRequester_InputMethodQuery((KUrlRequester*)self, param1);
}

QVariant* k_urlrequester_qbase_input_method_query(void* self, int64_t param1) {
    return KUrlRequester_QBaseInputMethodQuery((KUrlRequester*)self, param1);
}

void k_urlrequester_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KUrlRequester_OnInputMethodQuery((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_focus_next_prev_child(void* self, bool next) {
    return KUrlRequester_FocusNextPrevChild((KUrlRequester*)self, next);
}

bool k_urlrequester_qbase_focus_next_prev_child(void* self, bool next) {
    return KUrlRequester_QBaseFocusNextPrevChild((KUrlRequester*)self, next);
}

void k_urlrequester_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KUrlRequester_OnFocusNextPrevChild((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_timer_event(void* self, void* event) {
    KUrlRequester_TimerEvent((KUrlRequester*)self, (QTimerEvent*)event);
}

void k_urlrequester_qbase_timer_event(void* self, void* event) {
    KUrlRequester_QBaseTimerEvent((KUrlRequester*)self, (QTimerEvent*)event);
}

void k_urlrequester_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnTimerEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_child_event(void* self, void* event) {
    KUrlRequester_ChildEvent((KUrlRequester*)self, (QChildEvent*)event);
}

void k_urlrequester_qbase_child_event(void* self, void* event) {
    KUrlRequester_QBaseChildEvent((KUrlRequester*)self, (QChildEvent*)event);
}

void k_urlrequester_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnChildEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_custom_event(void* self, void* event) {
    KUrlRequester_CustomEvent((KUrlRequester*)self, (QEvent*)event);
}

void k_urlrequester_qbase_custom_event(void* self, void* event) {
    KUrlRequester_QBaseCustomEvent((KUrlRequester*)self, (QEvent*)event);
}

void k_urlrequester_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnCustomEvent((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_connect_notify(void* self, void* signal) {
    KUrlRequester_ConnectNotify((KUrlRequester*)self, (QMetaMethod*)signal);
}

void k_urlrequester_qbase_connect_notify(void* self, void* signal) {
    KUrlRequester_QBaseConnectNotify((KUrlRequester*)self, (QMetaMethod*)signal);
}

void k_urlrequester_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnConnectNotify((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_disconnect_notify(void* self, void* signal) {
    KUrlRequester_DisconnectNotify((KUrlRequester*)self, (QMetaMethod*)signal);
}

void k_urlrequester_qbase_disconnect_notify(void* self, void* signal) {
    KUrlRequester_QBaseDisconnectNotify((KUrlRequester*)self, (QMetaMethod*)signal);
}

void k_urlrequester_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_OnDisconnectNotify((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_update_micro_focus(void* self) {
    KUrlRequester_UpdateMicroFocus((KUrlRequester*)self);
}

void k_urlrequester_qbase_update_micro_focus(void* self) {
    KUrlRequester_QBaseUpdateMicroFocus((KUrlRequester*)self);
}

void k_urlrequester_on_update_micro_focus(void* self, void (*callback)()) {
    KUrlRequester_OnUpdateMicroFocus((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_create(void* self) {
    KUrlRequester_Create((KUrlRequester*)self);
}

void k_urlrequester_qbase_create(void* self) {
    KUrlRequester_QBaseCreate((KUrlRequester*)self);
}

void k_urlrequester_on_create(void* self, void (*callback)()) {
    KUrlRequester_OnCreate((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_destroy(void* self) {
    KUrlRequester_Destroy((KUrlRequester*)self);
}

void k_urlrequester_qbase_destroy(void* self) {
    KUrlRequester_QBaseDestroy((KUrlRequester*)self);
}

void k_urlrequester_on_destroy(void* self, void (*callback)()) {
    KUrlRequester_OnDestroy((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_focus_next_child(void* self) {
    return KUrlRequester_FocusNextChild((KUrlRequester*)self);
}

bool k_urlrequester_qbase_focus_next_child(void* self) {
    return KUrlRequester_QBaseFocusNextChild((KUrlRequester*)self);
}

void k_urlrequester_on_focus_next_child(void* self, bool (*callback)()) {
    KUrlRequester_OnFocusNextChild((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_focus_previous_child(void* self) {
    return KUrlRequester_FocusPreviousChild((KUrlRequester*)self);
}

bool k_urlrequester_qbase_focus_previous_child(void* self) {
    return KUrlRequester_QBaseFocusPreviousChild((KUrlRequester*)self);
}

void k_urlrequester_on_focus_previous_child(void* self, bool (*callback)()) {
    KUrlRequester_OnFocusPreviousChild((KUrlRequester*)self, (intptr_t)callback);
}

QObject* k_urlrequester_sender(void* self) {
    return KUrlRequester_Sender((KUrlRequester*)self);
}

QObject* k_urlrequester_qbase_sender(void* self) {
    return KUrlRequester_QBaseSender((KUrlRequester*)self);
}

void k_urlrequester_on_sender(void* self, QObject* (*callback)()) {
    KUrlRequester_OnSender((KUrlRequester*)self, (intptr_t)callback);
}

int32_t k_urlrequester_sender_signal_index(void* self) {
    return KUrlRequester_SenderSignalIndex((KUrlRequester*)self);
}

int32_t k_urlrequester_qbase_sender_signal_index(void* self) {
    return KUrlRequester_QBaseSenderSignalIndex((KUrlRequester*)self);
}

void k_urlrequester_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUrlRequester_OnSenderSignalIndex((KUrlRequester*)self, (intptr_t)callback);
}

int32_t k_urlrequester_receivers(void* self, const char* signal) {
    return KUrlRequester_Receivers((KUrlRequester*)self, signal);
}

int32_t k_urlrequester_qbase_receivers(void* self, const char* signal) {
    return KUrlRequester_QBaseReceivers((KUrlRequester*)self, signal);
}

void k_urlrequester_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUrlRequester_OnReceivers((KUrlRequester*)self, (intptr_t)callback);
}

bool k_urlrequester_is_signal_connected(void* self, void* signal) {
    return KUrlRequester_IsSignalConnected((KUrlRequester*)self, (QMetaMethod*)signal);
}

bool k_urlrequester_qbase_is_signal_connected(void* self, void* signal) {
    return KUrlRequester_QBaseIsSignalConnected((KUrlRequester*)self, (QMetaMethod*)signal);
}

void k_urlrequester_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUrlRequester_OnIsSignalConnected((KUrlRequester*)self, (intptr_t)callback);
}

double k_urlrequester_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlRequester_GetDecodedMetricF((KUrlRequester*)self, metricA, metricB);
}

double k_urlrequester_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlRequester_QBaseGetDecodedMetricF((KUrlRequester*)self, metricA, metricB);
}

void k_urlrequester_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KUrlRequester_OnGetDecodedMetricF((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlrequester_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_urlrequester_delete(void* self) {
    KUrlRequester_Delete((KUrlRequester*)(self));
}

KUrlComboRequester* k_urlcomborequester_new(void* parent) {
    return KUrlComboRequester_new((QWidget*)parent);
}

KUrlComboRequester* k_urlcomborequester_new2() {
    return KUrlComboRequester_new2();
}

const QMetaObject* k_urlcomborequester_meta_object(void* self) {
    return KUrlComboRequester_MetaObject((KUrlComboRequester*)self);
}

void* k_urlcomborequester_metacast(void* self, const char* param1) {
    return KUrlComboRequester_Metacast((KUrlComboRequester*)self, param1);
}

int32_t k_urlcomborequester_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlComboRequester_Metacall((KUrlComboRequester*)self, param1, param2, param3);
}

void k_urlcomborequester_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUrlComboRequester_OnMetacall((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlComboRequester_QBaseMetacall((KUrlComboRequester*)self, param1, param2, param3);
}

const char* k_urlcomborequester_tr(const char* s) {
    libqt_string _str = KUrlComboRequester_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcomborequester_tr2(const char* s, const char* c) {
    libqt_string _str = KUrlComboRequester_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcomborequester_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KUrlComboRequester_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_urlcomborequester_url(void* self) {
    return KUrlRequester_Url((KUrlRequester*)self);
}

QUrl* k_urlcomborequester_start_dir(void* self) {
    return KUrlRequester_StartDir((KUrlRequester*)self);
}

const char* k_urlcomborequester_text(void* self) {
    libqt_string _str = KUrlRequester_Text((KUrlRequester*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_mode(void* self, int32_t mode) {
    KUrlRequester_SetMode((KUrlRequester*)self, mode);
}

int32_t k_urlcomborequester_mode(void* self) {
    return KUrlRequester_Mode((KUrlRequester*)self);
}

void k_urlcomborequester_set_accept_mode(void* self, int32_t m) {
    KUrlRequester_SetAcceptMode((KUrlRequester*)self, m);
}

int32_t k_urlcomborequester_accept_mode(void* self) {
    return KUrlRequester_AcceptMode((KUrlRequester*)self);
}

void k_urlcomborequester_set_name_filters(void* self, const char* filters[]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcomborequester_set_name_filters");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    KUrlRequester_SetNameFilters((KUrlRequester*)self, filters_list);
    free(filters_qstr);
}

void k_urlcomborequester_set_name_filter(void* self, const char* filter) {
    KUrlRequester_SetNameFilter((KUrlRequester*)self, qstring(filter));
}

const char** k_urlcomborequester_name_filters(void* self) {
    libqt_list _arr = KUrlRequester_NameFilters((KUrlRequester*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcomborequester_name_filters");
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

void k_urlcomborequester_set_mime_type_filters(void* self, const char* mimeTypes[]) {
    size_t mimeTypes_len = libqt_strv_length(mimeTypes);
    libqt_string* mimeTypes_qstr = (libqt_string*)malloc(mimeTypes_len * sizeof(libqt_string));
    if (mimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcomborequester_set_mime_type_filters");
        abort();
    }
    for (size_t i = 0; i < mimeTypes_len; ++i) {
        mimeTypes_qstr[i] = qstring(mimeTypes[i]);
    }
    libqt_list mimeTypes_list = qlist(mimeTypes_qstr, mimeTypes_len);
    KUrlRequester_SetMimeTypeFilters((KUrlRequester*)self, mimeTypes_list);
    free(mimeTypes_qstr);
}

const char** k_urlcomborequester_mime_type_filters(void* self) {
    libqt_list _arr = KUrlRequester_MimeTypeFilters((KUrlRequester*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcomborequester_mime_type_filters");
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

KLineEdit* k_urlcomborequester_line_edit(void* self) {
    return KUrlRequester_LineEdit((KUrlRequester*)self);
}

KComboBox* k_urlcomborequester_combo_box(void* self) {
    return KUrlRequester_ComboBox((KUrlRequester*)self);
}

QPushButton* k_urlcomborequester_button(void* self) {
    return KUrlRequester_Button((KUrlRequester*)self);
}

KUrlCompletion* k_urlcomborequester_completion_object(void* self) {
    return KUrlRequester_CompletionObject((KUrlRequester*)self);
}

const KEditListWidget__CustomEditor* k_urlcomborequester_custom_editor(void* self) {
    return KUrlRequester_CustomEditor((KUrlRequester*)self);
}

const char* k_urlcomborequester_placeholder_text(void* self) {
    libqt_string _str = KUrlRequester_PlaceholderText((KUrlRequester*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_placeholder_text(void* self, const char* msg) {
    KUrlRequester_SetPlaceholderText((KUrlRequester*)self, qstring(msg));
}

int32_t k_urlcomborequester_file_dialog_modality(void* self) {
    return KUrlRequester_FileDialogModality((KUrlRequester*)self);
}

void k_urlcomborequester_set_file_dialog_modality(void* self, int32_t modality) {
    KUrlRequester_SetFileDialogModality((KUrlRequester*)self, modality);
}

void k_urlcomborequester_set_url(void* self, void* url) {
    KUrlRequester_SetUrl((KUrlRequester*)self, (QUrl*)url);
}

void k_urlcomborequester_set_start_dir(void* self, void* startDir) {
    KUrlRequester_SetStartDir((KUrlRequester*)self, (QUrl*)startDir);
}

void k_urlcomborequester_set_text(void* self, const char* text) {
    KUrlRequester_SetText((KUrlRequester*)self, qstring(text));
}

void k_urlcomborequester_clear(void* self) {
    KUrlRequester_Clear((KUrlRequester*)self);
}

void k_urlcomborequester_text_changed(void* self, const char* param1) {
    KUrlRequester_TextChanged((KUrlRequester*)self, qstring(param1));
}

void k_urlcomborequester_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_TextChanged((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_text_edited(void* self, const char* param1) {
    KUrlRequester_TextEdited((KUrlRequester*)self, qstring(param1));
}

void k_urlcomborequester_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_TextEdited((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_return_pressed(void* self, const char* text) {
    KUrlRequester_ReturnPressed((KUrlRequester*)self, qstring(text));
}

void k_urlcomborequester_on_return_pressed(void* self, void (*callback)(void*, const char*)) {
    KUrlRequester_Connect_ReturnPressed((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_open_file_dialog(void* self, void* param1) {
    KUrlRequester_OpenFileDialog((KUrlRequester*)self, (KUrlRequester*)param1);
}

void k_urlcomborequester_on_open_file_dialog(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_Connect_OpenFileDialog((KUrlRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_url_selected(void* self, void* param1) {
    KUrlRequester_UrlSelected((KUrlRequester*)self, (QUrl*)param1);
}

void k_urlcomborequester_on_url_selected(void* self, void (*callback)(void*, void*)) {
    KUrlRequester_Connect_UrlSelected((KUrlRequester*)self, (intptr_t)callback);
}

uintptr_t k_urlcomborequester_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_urlcomborequester_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_urlcomborequester_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_urlcomborequester_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_urlcomborequester_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_urlcomborequester_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_urlcomborequester_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_urlcomborequester_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_urlcomborequester_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_urlcomborequester_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_urlcomborequester_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_urlcomborequester_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_urlcomborequester_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_urlcomborequester_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_urlcomborequester_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_urlcomborequester_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_urlcomborequester_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_urlcomborequester_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_urlcomborequester_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_urlcomborequester_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_urlcomborequester_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_urlcomborequester_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_urlcomborequester_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_urlcomborequester_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_urlcomborequester_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_urlcomborequester_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_urlcomborequester_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_urlcomborequester_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_urlcomborequester_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_urlcomborequester_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_urlcomborequester_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_urlcomborequester_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_urlcomborequester_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_urlcomborequester_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_urlcomborequester_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_urlcomborequester_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_urlcomborequester_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_urlcomborequester_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_urlcomborequester_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_urlcomborequester_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_urlcomborequester_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_urlcomborequester_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_urlcomborequester_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_urlcomborequester_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_urlcomborequester_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_urlcomborequester_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_urlcomborequester_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_urlcomborequester_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_urlcomborequester_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_urlcomborequester_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_urlcomborequester_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_urlcomborequester_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_urlcomborequester_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_urlcomborequester_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlcomborequester_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlcomborequester_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlcomborequester_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlcomborequester_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlcomborequester_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlcomborequester_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urlcomborequester_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urlcomborequester_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urlcomborequester_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_urlcomborequester_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urlcomborequester_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_urlcomborequester_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_urlcomborequester_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_urlcomborequester_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_urlcomborequester_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_urlcomborequester_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_urlcomborequester_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_urlcomborequester_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_urlcomborequester_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_urlcomborequester_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_urlcomborequester_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_urlcomborequester_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_urlcomborequester_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_urlcomborequester_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_urlcomborequester_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_urlcomborequester_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_urlcomborequester_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_urlcomborequester_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_urlcomborequester_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_urlcomborequester_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_urlcomborequester_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_urlcomborequester_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_urlcomborequester_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_urlcomborequester_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_urlcomborequester_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_urlcomborequester_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_urlcomborequester_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_urlcomborequester_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_urlcomborequester_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_urlcomborequester_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_urlcomborequester_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_urlcomborequester_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_urlcomborequester_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_urlcomborequester_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_urlcomborequester_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_urlcomborequester_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcomborequester_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_urlcomborequester_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_urlcomborequester_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_urlcomborequester_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_urlcomborequester_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_urlcomborequester_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_urlcomborequester_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_urlcomborequester_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_urlcomborequester_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_urlcomborequester_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_urlcomborequester_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_urlcomborequester_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_urlcomborequester_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_urlcomborequester_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcomborequester_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_urlcomborequester_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_urlcomborequester_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_urlcomborequester_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_urlcomborequester_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_urlcomborequester_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_urlcomborequester_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_urlcomborequester_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_urlcomborequester_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_urlcomborequester_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_urlcomborequester_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_urlcomborequester_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_urlcomborequester_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_urlcomborequester_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_urlcomborequester_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_urlcomborequester_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_urlcomborequester_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_urlcomborequester_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_urlcomborequester_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_urlcomborequester_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_urlcomborequester_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_urlcomborequester_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_urlcomborequester_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_urlcomborequester_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_urlcomborequester_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_urlcomborequester_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_urlcomborequester_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_urlcomborequester_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_urlcomborequester_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_urlcomborequester_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_urlcomborequester_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_urlcomborequester_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_urlcomborequester_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_urlcomborequester_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_urlcomborequester_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_urlcomborequester_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_urlcomborequester_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_urlcomborequester_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_urlcomborequester_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_urlcomborequester_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_urlcomborequester_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_urlcomborequester_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_urlcomborequester_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_urlcomborequester_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_urlcomborequester_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_urlcomborequester_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_urlcomborequester_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_urlcomborequester_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_urlcomborequester_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_urlcomborequester_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_urlcomborequester_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_urlcomborequester_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_urlcomborequester_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_urlcomborequester_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_urlcomborequester_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_urlcomborequester_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_urlcomborequester_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_urlcomborequester_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_urlcomborequester_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_urlcomborequester_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_urlcomborequester_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_urlcomborequester_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_urlcomborequester_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urlcomborequester_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_urlcomborequester_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_urlcomborequester_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_urlcomborequester_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_urlcomborequester_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_urlcomborequester_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_urlcomborequester_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_urlcomborequester_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_urlcomborequester_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_urlcomborequester_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_urlcomborequester_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_urlcomborequester_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_urlcomborequester_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_urlcomborequester_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_urlcomborequester_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_urlcomborequester_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_urlcomborequester_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_urlcomborequester_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_urlcomborequester_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_urlcomborequester_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_urlcomborequester_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_urlcomborequester_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_urlcomborequester_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_urlcomborequester_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_urlcomborequester_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_urlcomborequester_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_urlcomborequester_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_urlcomborequester_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_urlcomborequester_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_urlcomborequester_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_urlcomborequester_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_urlcomborequester_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_urlcomborequester_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_urlcomborequester_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_urlcomborequester_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_urlcomborequester_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_urlcomborequester_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_urlcomborequester_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_urlcomborequester_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_urlcomborequester_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_urlcomborequester_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_urlcomborequester_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_urlcomborequester_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_urlcomborequester_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_urlcomborequester_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_urlcomborequester_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_urlcomborequester_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_urlcomborequester_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_urlcomborequester_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_urlcomborequester_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_urlcomborequester_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_urlcomborequester_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_urlcomborequester_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_urlcomborequester_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_urlcomborequester_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_urlcomborequester_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_urlcomborequester_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_urlcomborequester_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_urlcomborequester_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_urlcomborequester_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_urlcomborequester_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_urlcomborequester_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_urlcomborequester_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_urlcomborequester_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlcomborequester_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_urlcomborequester_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlcomborequester_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_urlcomborequester_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_urlcomborequester_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_urlcomborequester_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_urlcomborequester_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_urlcomborequester_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_urlcomborequester_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_urlcomborequester_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urlcomborequester_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_urlcomborequester_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_urlcomborequester_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urlcomborequester_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_urlcomborequester_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_urlcomborequester_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_urlcomborequester_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_urlcomborequester_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_urlcomborequester_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_urlcomborequester_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_urlcomborequester_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_urlcomborequester_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_urlcomborequester_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_urlcomborequester_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcomborequester_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_urlcomborequester_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_urlcomborequester_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_urlcomborequester_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_urlcomborequester_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_urlcomborequester_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_urlcomborequester_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_urlcomborequester_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_urlcomborequester_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_urlcomborequester_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_urlcomborequester_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_urlcomborequester_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_urlcomborequester_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_urlcomborequester_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_urlcomborequester_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_urlcomborequester_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_urlcomborequester_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_urlcomborequester_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_urlcomborequester_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_urlcomborequester_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_urlcomborequester_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_urlcomborequester_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_urlcomborequester_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcomborequester_dynamic_property_names");
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

QBindingStorage* k_urlcomborequester_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_urlcomborequester_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_urlcomborequester_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_urlcomborequester_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_urlcomborequester_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_urlcomborequester_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_urlcomborequester_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_urlcomborequester_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_urlcomborequester_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_urlcomborequester_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_urlcomborequester_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_urlcomborequester_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_urlcomborequester_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_urlcomborequester_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_urlcomborequester_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_urlcomborequester_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_urlcomborequester_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_urlcomborequester_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_urlcomborequester_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_urlcomborequester_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_urlcomborequester_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_urlcomborequester_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_urlcomborequester_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_urlcomborequester_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_urlcomborequester_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_urlcomborequester_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QFileDialog* k_urlcomborequester_file_dialog(void* self) {
    return KUrlComboRequester_FileDialog((KUrlComboRequester*)self);
}

QFileDialog* k_urlcomborequester_qbase_file_dialog(void* self) {
    return KUrlComboRequester_QBaseFileDialog((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_file_dialog(void* self, QFileDialog* (*callback)()) {
    KUrlComboRequester_OnFileDialog((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_change_event(void* self, void* e) {
    KUrlComboRequester_ChangeEvent((KUrlComboRequester*)self, (QEvent*)e);
}

void k_urlcomborequester_qbase_change_event(void* self, void* e) {
    KUrlComboRequester_QBaseChangeEvent((KUrlComboRequester*)self, (QEvent*)e);
}

void k_urlcomborequester_on_change_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnChangeEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_event_filter(void* self, void* obj, void* ev) {
    return KUrlComboRequester_EventFilter((KUrlComboRequester*)self, (QObject*)obj, (QEvent*)ev);
}

bool k_urlcomborequester_qbase_event_filter(void* self, void* obj, void* ev) {
    return KUrlComboRequester_QBaseEventFilter((KUrlComboRequester*)self, (QObject*)obj, (QEvent*)ev);
}

void k_urlcomborequester_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUrlComboRequester_OnEventFilter((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_dev_type(void* self) {
    return KUrlComboRequester_DevType((KUrlComboRequester*)self);
}

int32_t k_urlcomborequester_qbase_dev_type(void* self) {
    return KUrlComboRequester_QBaseDevType((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_dev_type(void* self, int32_t (*callback)()) {
    KUrlComboRequester_OnDevType((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_set_visible(void* self, bool visible) {
    KUrlComboRequester_SetVisible((KUrlComboRequester*)self, visible);
}

void k_urlcomborequester_qbase_set_visible(void* self, bool visible) {
    KUrlComboRequester_QBaseSetVisible((KUrlComboRequester*)self, visible);
}

void k_urlcomborequester_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KUrlComboRequester_OnSetVisible((KUrlComboRequester*)self, (intptr_t)callback);
}

QSize* k_urlcomborequester_size_hint(void* self) {
    return KUrlComboRequester_SizeHint((KUrlComboRequester*)self);
}

QSize* k_urlcomborequester_qbase_size_hint(void* self) {
    return KUrlComboRequester_QBaseSizeHint((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_size_hint(void* self, QSize* (*callback)()) {
    KUrlComboRequester_OnSizeHint((KUrlComboRequester*)self, (intptr_t)callback);
}

QSize* k_urlcomborequester_minimum_size_hint(void* self) {
    return KUrlComboRequester_MinimumSizeHint((KUrlComboRequester*)self);
}

QSize* k_urlcomborequester_qbase_minimum_size_hint(void* self) {
    return KUrlComboRequester_QBaseMinimumSizeHint((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KUrlComboRequester_OnMinimumSizeHint((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_height_for_width(void* self, int param1) {
    return KUrlComboRequester_HeightForWidth((KUrlComboRequester*)self, param1);
}

int32_t k_urlcomborequester_qbase_height_for_width(void* self, int param1) {
    return KUrlComboRequester_QBaseHeightForWidth((KUrlComboRequester*)self, param1);
}

void k_urlcomborequester_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KUrlComboRequester_OnHeightForWidth((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_has_height_for_width(void* self) {
    return KUrlComboRequester_HasHeightForWidth((KUrlComboRequester*)self);
}

bool k_urlcomborequester_qbase_has_height_for_width(void* self) {
    return KUrlComboRequester_QBaseHasHeightForWidth((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_has_height_for_width(void* self, bool (*callback)()) {
    KUrlComboRequester_OnHasHeightForWidth((KUrlComboRequester*)self, (intptr_t)callback);
}

QPaintEngine* k_urlcomborequester_paint_engine(void* self) {
    return KUrlComboRequester_PaintEngine((KUrlComboRequester*)self);
}

QPaintEngine* k_urlcomborequester_qbase_paint_engine(void* self) {
    return KUrlComboRequester_QBasePaintEngine((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KUrlComboRequester_OnPaintEngine((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_event(void* self, void* event) {
    return KUrlComboRequester_Event((KUrlComboRequester*)self, (QEvent*)event);
}

bool k_urlcomborequester_qbase_event(void* self, void* event) {
    return KUrlComboRequester_QBaseEvent((KUrlComboRequester*)self, (QEvent*)event);
}

void k_urlcomborequester_on_event(void* self, bool (*callback)(void*, void*)) {
    KUrlComboRequester_OnEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_mouse_press_event(void* self, void* event) {
    KUrlComboRequester_MousePressEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_qbase_mouse_press_event(void* self, void* event) {
    KUrlComboRequester_QBaseMousePressEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnMousePressEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_mouse_release_event(void* self, void* event) {
    KUrlComboRequester_MouseReleaseEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_qbase_mouse_release_event(void* self, void* event) {
    KUrlComboRequester_QBaseMouseReleaseEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnMouseReleaseEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_mouse_double_click_event(void* self, void* event) {
    KUrlComboRequester_MouseDoubleClickEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_qbase_mouse_double_click_event(void* self, void* event) {
    KUrlComboRequester_QBaseMouseDoubleClickEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnMouseDoubleClickEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_mouse_move_event(void* self, void* event) {
    KUrlComboRequester_MouseMoveEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_qbase_mouse_move_event(void* self, void* event) {
    KUrlComboRequester_QBaseMouseMoveEvent((KUrlComboRequester*)self, (QMouseEvent*)event);
}

void k_urlcomborequester_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnMouseMoveEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_wheel_event(void* self, void* event) {
    KUrlComboRequester_WheelEvent((KUrlComboRequester*)self, (QWheelEvent*)event);
}

void k_urlcomborequester_qbase_wheel_event(void* self, void* event) {
    KUrlComboRequester_QBaseWheelEvent((KUrlComboRequester*)self, (QWheelEvent*)event);
}

void k_urlcomborequester_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnWheelEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_key_press_event(void* self, void* event) {
    KUrlComboRequester_KeyPressEvent((KUrlComboRequester*)self, (QKeyEvent*)event);
}

void k_urlcomborequester_qbase_key_press_event(void* self, void* event) {
    KUrlComboRequester_QBaseKeyPressEvent((KUrlComboRequester*)self, (QKeyEvent*)event);
}

void k_urlcomborequester_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnKeyPressEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_key_release_event(void* self, void* event) {
    KUrlComboRequester_KeyReleaseEvent((KUrlComboRequester*)self, (QKeyEvent*)event);
}

void k_urlcomborequester_qbase_key_release_event(void* self, void* event) {
    KUrlComboRequester_QBaseKeyReleaseEvent((KUrlComboRequester*)self, (QKeyEvent*)event);
}

void k_urlcomborequester_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnKeyReleaseEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_focus_in_event(void* self, void* event) {
    KUrlComboRequester_FocusInEvent((KUrlComboRequester*)self, (QFocusEvent*)event);
}

void k_urlcomborequester_qbase_focus_in_event(void* self, void* event) {
    KUrlComboRequester_QBaseFocusInEvent((KUrlComboRequester*)self, (QFocusEvent*)event);
}

void k_urlcomborequester_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnFocusInEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_focus_out_event(void* self, void* event) {
    KUrlComboRequester_FocusOutEvent((KUrlComboRequester*)self, (QFocusEvent*)event);
}

void k_urlcomborequester_qbase_focus_out_event(void* self, void* event) {
    KUrlComboRequester_QBaseFocusOutEvent((KUrlComboRequester*)self, (QFocusEvent*)event);
}

void k_urlcomborequester_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnFocusOutEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_enter_event(void* self, void* event) {
    KUrlComboRequester_EnterEvent((KUrlComboRequester*)self, (QEnterEvent*)event);
}

void k_urlcomborequester_qbase_enter_event(void* self, void* event) {
    KUrlComboRequester_QBaseEnterEvent((KUrlComboRequester*)self, (QEnterEvent*)event);
}

void k_urlcomborequester_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnEnterEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_leave_event(void* self, void* event) {
    KUrlComboRequester_LeaveEvent((KUrlComboRequester*)self, (QEvent*)event);
}

void k_urlcomborequester_qbase_leave_event(void* self, void* event) {
    KUrlComboRequester_QBaseLeaveEvent((KUrlComboRequester*)self, (QEvent*)event);
}

void k_urlcomborequester_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnLeaveEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_paint_event(void* self, void* event) {
    KUrlComboRequester_PaintEvent((KUrlComboRequester*)self, (QPaintEvent*)event);
}

void k_urlcomborequester_qbase_paint_event(void* self, void* event) {
    KUrlComboRequester_QBasePaintEvent((KUrlComboRequester*)self, (QPaintEvent*)event);
}

void k_urlcomborequester_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnPaintEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_move_event(void* self, void* event) {
    KUrlComboRequester_MoveEvent((KUrlComboRequester*)self, (QMoveEvent*)event);
}

void k_urlcomborequester_qbase_move_event(void* self, void* event) {
    KUrlComboRequester_QBaseMoveEvent((KUrlComboRequester*)self, (QMoveEvent*)event);
}

void k_urlcomborequester_on_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnMoveEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_resize_event(void* self, void* event) {
    KUrlComboRequester_ResizeEvent((KUrlComboRequester*)self, (QResizeEvent*)event);
}

void k_urlcomborequester_qbase_resize_event(void* self, void* event) {
    KUrlComboRequester_QBaseResizeEvent((KUrlComboRequester*)self, (QResizeEvent*)event);
}

void k_urlcomborequester_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnResizeEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_close_event(void* self, void* event) {
    KUrlComboRequester_CloseEvent((KUrlComboRequester*)self, (QCloseEvent*)event);
}

void k_urlcomborequester_qbase_close_event(void* self, void* event) {
    KUrlComboRequester_QBaseCloseEvent((KUrlComboRequester*)self, (QCloseEvent*)event);
}

void k_urlcomborequester_on_close_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnCloseEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_context_menu_event(void* self, void* event) {
    KUrlComboRequester_ContextMenuEvent((KUrlComboRequester*)self, (QContextMenuEvent*)event);
}

void k_urlcomborequester_qbase_context_menu_event(void* self, void* event) {
    KUrlComboRequester_QBaseContextMenuEvent((KUrlComboRequester*)self, (QContextMenuEvent*)event);
}

void k_urlcomborequester_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnContextMenuEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_tablet_event(void* self, void* event) {
    KUrlComboRequester_TabletEvent((KUrlComboRequester*)self, (QTabletEvent*)event);
}

void k_urlcomborequester_qbase_tablet_event(void* self, void* event) {
    KUrlComboRequester_QBaseTabletEvent((KUrlComboRequester*)self, (QTabletEvent*)event);
}

void k_urlcomborequester_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnTabletEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_action_event(void* self, void* event) {
    KUrlComboRequester_ActionEvent((KUrlComboRequester*)self, (QActionEvent*)event);
}

void k_urlcomborequester_qbase_action_event(void* self, void* event) {
    KUrlComboRequester_QBaseActionEvent((KUrlComboRequester*)self, (QActionEvent*)event);
}

void k_urlcomborequester_on_action_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnActionEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_drag_enter_event(void* self, void* event) {
    KUrlComboRequester_DragEnterEvent((KUrlComboRequester*)self, (QDragEnterEvent*)event);
}

void k_urlcomborequester_qbase_drag_enter_event(void* self, void* event) {
    KUrlComboRequester_QBaseDragEnterEvent((KUrlComboRequester*)self, (QDragEnterEvent*)event);
}

void k_urlcomborequester_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnDragEnterEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_drag_move_event(void* self, void* event) {
    KUrlComboRequester_DragMoveEvent((KUrlComboRequester*)self, (QDragMoveEvent*)event);
}

void k_urlcomborequester_qbase_drag_move_event(void* self, void* event) {
    KUrlComboRequester_QBaseDragMoveEvent((KUrlComboRequester*)self, (QDragMoveEvent*)event);
}

void k_urlcomborequester_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnDragMoveEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_drag_leave_event(void* self, void* event) {
    KUrlComboRequester_DragLeaveEvent((KUrlComboRequester*)self, (QDragLeaveEvent*)event);
}

void k_urlcomborequester_qbase_drag_leave_event(void* self, void* event) {
    KUrlComboRequester_QBaseDragLeaveEvent((KUrlComboRequester*)self, (QDragLeaveEvent*)event);
}

void k_urlcomborequester_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnDragLeaveEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_drop_event(void* self, void* event) {
    KUrlComboRequester_DropEvent((KUrlComboRequester*)self, (QDropEvent*)event);
}

void k_urlcomborequester_qbase_drop_event(void* self, void* event) {
    KUrlComboRequester_QBaseDropEvent((KUrlComboRequester*)self, (QDropEvent*)event);
}

void k_urlcomborequester_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnDropEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_show_event(void* self, void* event) {
    KUrlComboRequester_ShowEvent((KUrlComboRequester*)self, (QShowEvent*)event);
}

void k_urlcomborequester_qbase_show_event(void* self, void* event) {
    KUrlComboRequester_QBaseShowEvent((KUrlComboRequester*)self, (QShowEvent*)event);
}

void k_urlcomborequester_on_show_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnShowEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_hide_event(void* self, void* event) {
    KUrlComboRequester_HideEvent((KUrlComboRequester*)self, (QHideEvent*)event);
}

void k_urlcomborequester_qbase_hide_event(void* self, void* event) {
    KUrlComboRequester_QBaseHideEvent((KUrlComboRequester*)self, (QHideEvent*)event);
}

void k_urlcomborequester_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnHideEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlComboRequester_NativeEvent((KUrlComboRequester*)self, qstring(eventType), message, result);
}

bool k_urlcomborequester_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlComboRequester_QBaseNativeEvent((KUrlComboRequester*)self, qstring(eventType), message, result);
}

void k_urlcomborequester_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KUrlComboRequester_OnNativeEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_metric(void* self, int32_t param1) {
    return KUrlComboRequester_Metric((KUrlComboRequester*)self, param1);
}

int32_t k_urlcomborequester_qbase_metric(void* self, int32_t param1) {
    return KUrlComboRequester_QBaseMetric((KUrlComboRequester*)self, param1);
}

void k_urlcomborequester_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KUrlComboRequester_OnMetric((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_init_painter(void* self, void* painter) {
    KUrlComboRequester_InitPainter((KUrlComboRequester*)self, (QPainter*)painter);
}

void k_urlcomborequester_qbase_init_painter(void* self, void* painter) {
    KUrlComboRequester_QBaseInitPainter((KUrlComboRequester*)self, (QPainter*)painter);
}

void k_urlcomborequester_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnInitPainter((KUrlComboRequester*)self, (intptr_t)callback);
}

QPaintDevice* k_urlcomborequester_redirected(void* self, void* offset) {
    return KUrlComboRequester_Redirected((KUrlComboRequester*)self, (QPoint*)offset);
}

QPaintDevice* k_urlcomborequester_qbase_redirected(void* self, void* offset) {
    return KUrlComboRequester_QBaseRedirected((KUrlComboRequester*)self, (QPoint*)offset);
}

void k_urlcomborequester_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KUrlComboRequester_OnRedirected((KUrlComboRequester*)self, (intptr_t)callback);
}

QPainter* k_urlcomborequester_shared_painter(void* self) {
    return KUrlComboRequester_SharedPainter((KUrlComboRequester*)self);
}

QPainter* k_urlcomborequester_qbase_shared_painter(void* self) {
    return KUrlComboRequester_QBaseSharedPainter((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_shared_painter(void* self, QPainter* (*callback)()) {
    KUrlComboRequester_OnSharedPainter((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_input_method_event(void* self, void* param1) {
    KUrlComboRequester_InputMethodEvent((KUrlComboRequester*)self, (QInputMethodEvent*)param1);
}

void k_urlcomborequester_qbase_input_method_event(void* self, void* param1) {
    KUrlComboRequester_QBaseInputMethodEvent((KUrlComboRequester*)self, (QInputMethodEvent*)param1);
}

void k_urlcomborequester_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnInputMethodEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

QVariant* k_urlcomborequester_input_method_query(void* self, int64_t param1) {
    return KUrlComboRequester_InputMethodQuery((KUrlComboRequester*)self, param1);
}

QVariant* k_urlcomborequester_qbase_input_method_query(void* self, int64_t param1) {
    return KUrlComboRequester_QBaseInputMethodQuery((KUrlComboRequester*)self, param1);
}

void k_urlcomborequester_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KUrlComboRequester_OnInputMethodQuery((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_focus_next_prev_child(void* self, bool next) {
    return KUrlComboRequester_FocusNextPrevChild((KUrlComboRequester*)self, next);
}

bool k_urlcomborequester_qbase_focus_next_prev_child(void* self, bool next) {
    return KUrlComboRequester_QBaseFocusNextPrevChild((KUrlComboRequester*)self, next);
}

void k_urlcomborequester_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KUrlComboRequester_OnFocusNextPrevChild((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_timer_event(void* self, void* event) {
    KUrlComboRequester_TimerEvent((KUrlComboRequester*)self, (QTimerEvent*)event);
}

void k_urlcomborequester_qbase_timer_event(void* self, void* event) {
    KUrlComboRequester_QBaseTimerEvent((KUrlComboRequester*)self, (QTimerEvent*)event);
}

void k_urlcomborequester_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnTimerEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_child_event(void* self, void* event) {
    KUrlComboRequester_ChildEvent((KUrlComboRequester*)self, (QChildEvent*)event);
}

void k_urlcomborequester_qbase_child_event(void* self, void* event) {
    KUrlComboRequester_QBaseChildEvent((KUrlComboRequester*)self, (QChildEvent*)event);
}

void k_urlcomborequester_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnChildEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_custom_event(void* self, void* event) {
    KUrlComboRequester_CustomEvent((KUrlComboRequester*)self, (QEvent*)event);
}

void k_urlcomborequester_qbase_custom_event(void* self, void* event) {
    KUrlComboRequester_QBaseCustomEvent((KUrlComboRequester*)self, (QEvent*)event);
}

void k_urlcomborequester_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnCustomEvent((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_connect_notify(void* self, void* signal) {
    KUrlComboRequester_ConnectNotify((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

void k_urlcomborequester_qbase_connect_notify(void* self, void* signal) {
    KUrlComboRequester_QBaseConnectNotify((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

void k_urlcomborequester_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnConnectNotify((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_disconnect_notify(void* self, void* signal) {
    KUrlComboRequester_DisconnectNotify((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

void k_urlcomborequester_qbase_disconnect_notify(void* self, void* signal) {
    KUrlComboRequester_QBaseDisconnectNotify((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

void k_urlcomborequester_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlComboRequester_OnDisconnectNotify((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_update_micro_focus(void* self) {
    KUrlComboRequester_UpdateMicroFocus((KUrlComboRequester*)self);
}

void k_urlcomborequester_qbase_update_micro_focus(void* self) {
    KUrlComboRequester_QBaseUpdateMicroFocus((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_update_micro_focus(void* self, void (*callback)()) {
    KUrlComboRequester_OnUpdateMicroFocus((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_create(void* self) {
    KUrlComboRequester_Create((KUrlComboRequester*)self);
}

void k_urlcomborequester_qbase_create(void* self) {
    KUrlComboRequester_QBaseCreate((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_create(void* self, void (*callback)()) {
    KUrlComboRequester_OnCreate((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_destroy(void* self) {
    KUrlComboRequester_Destroy((KUrlComboRequester*)self);
}

void k_urlcomborequester_qbase_destroy(void* self) {
    KUrlComboRequester_QBaseDestroy((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_destroy(void* self, void (*callback)()) {
    KUrlComboRequester_OnDestroy((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_focus_next_child(void* self) {
    return KUrlComboRequester_FocusNextChild((KUrlComboRequester*)self);
}

bool k_urlcomborequester_qbase_focus_next_child(void* self) {
    return KUrlComboRequester_QBaseFocusNextChild((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_focus_next_child(void* self, bool (*callback)()) {
    KUrlComboRequester_OnFocusNextChild((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_focus_previous_child(void* self) {
    return KUrlComboRequester_FocusPreviousChild((KUrlComboRequester*)self);
}

bool k_urlcomborequester_qbase_focus_previous_child(void* self) {
    return KUrlComboRequester_QBaseFocusPreviousChild((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_focus_previous_child(void* self, bool (*callback)()) {
    KUrlComboRequester_OnFocusPreviousChild((KUrlComboRequester*)self, (intptr_t)callback);
}

QObject* k_urlcomborequester_sender(void* self) {
    return KUrlComboRequester_Sender((KUrlComboRequester*)self);
}

QObject* k_urlcomborequester_qbase_sender(void* self) {
    return KUrlComboRequester_QBaseSender((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_sender(void* self, QObject* (*callback)()) {
    KUrlComboRequester_OnSender((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_sender_signal_index(void* self) {
    return KUrlComboRequester_SenderSignalIndex((KUrlComboRequester*)self);
}

int32_t k_urlcomborequester_qbase_sender_signal_index(void* self) {
    return KUrlComboRequester_QBaseSenderSignalIndex((KUrlComboRequester*)self);
}

void k_urlcomborequester_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUrlComboRequester_OnSenderSignalIndex((KUrlComboRequester*)self, (intptr_t)callback);
}

int32_t k_urlcomborequester_receivers(void* self, const char* signal) {
    return KUrlComboRequester_Receivers((KUrlComboRequester*)self, signal);
}

int32_t k_urlcomborequester_qbase_receivers(void* self, const char* signal) {
    return KUrlComboRequester_QBaseReceivers((KUrlComboRequester*)self, signal);
}

void k_urlcomborequester_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUrlComboRequester_OnReceivers((KUrlComboRequester*)self, (intptr_t)callback);
}

bool k_urlcomborequester_is_signal_connected(void* self, void* signal) {
    return KUrlComboRequester_IsSignalConnected((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

bool k_urlcomborequester_qbase_is_signal_connected(void* self, void* signal) {
    return KUrlComboRequester_QBaseIsSignalConnected((KUrlComboRequester*)self, (QMetaMethod*)signal);
}

void k_urlcomborequester_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUrlComboRequester_OnIsSignalConnected((KUrlComboRequester*)self, (intptr_t)callback);
}

double k_urlcomborequester_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlComboRequester_GetDecodedMetricF((KUrlComboRequester*)self, metricA, metricB);
}

double k_urlcomborequester_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlComboRequester_QBaseGetDecodedMetricF((KUrlComboRequester*)self, metricA, metricB);
}

void k_urlcomborequester_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KUrlComboRequester_OnGetDecodedMetricF((KUrlComboRequester*)self, (intptr_t)callback);
}

void k_urlcomborequester_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_urlcomborequester_delete(void* self) {
    KUrlComboRequester_Delete((KUrlComboRequester*)(self));
}
