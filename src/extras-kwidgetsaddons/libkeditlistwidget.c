#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcombobox.hpp"
#include "../libqlineedit.hpp"
#include "../libqlistview.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkeditlistwidget.hpp"
#include "libkeditlistwidget.h"

KEditListWidget* k_editlistwidget_new(void* parent) {
    return KEditListWidget_new((QWidget*)parent);
}

KEditListWidget* k_editlistwidget_new2() {
    return KEditListWidget_new2();
}

KEditListWidget* k_editlistwidget_new3(void* customEditor) {
    return KEditListWidget_new3((KEditListWidget__CustomEditor*)customEditor);
}

KEditListWidget* k_editlistwidget_new4(void* customEditor, void* parent) {
    return KEditListWidget_new4((KEditListWidget__CustomEditor*)customEditor, (QWidget*)parent);
}

KEditListWidget* k_editlistwidget_new5(void* customEditor, void* parent, bool checkAtEntering) {
    return KEditListWidget_new5((KEditListWidget__CustomEditor*)customEditor, (QWidget*)parent, checkAtEntering);
}

KEditListWidget* k_editlistwidget_new6(void* customEditor, void* parent, bool checkAtEntering, int32_t buttons) {
    return KEditListWidget_new6((KEditListWidget__CustomEditor*)customEditor, (QWidget*)parent, checkAtEntering, buttons);
}

const QMetaObject* k_editlistwidget_meta_object(void* self) {
    return KEditListWidget_MetaObject((KEditListWidget*)self);
}

void* k_editlistwidget_metacast(void* self, const char* param1) {
    return KEditListWidget_Metacast((KEditListWidget*)self, param1);
}

int32_t k_editlistwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEditListWidget_Metacall((KEditListWidget*)self, param1, param2, param3);
}

void k_editlistwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KEditListWidget_OnMetacall((KEditListWidget*)self, (intptr_t)callback);
}

int32_t k_editlistwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEditListWidget_QBaseMetacall((KEditListWidget*)self, param1, param2, param3);
}

const char* k_editlistwidget_tr(const char* s) {
    libqt_string _str = KEditListWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QListView* k_editlistwidget_list_view(void* self) {
    return KEditListWidget_ListView((KEditListWidget*)self);
}

QLineEdit* k_editlistwidget_line_edit(void* self) {
    return KEditListWidget_LineEdit((KEditListWidget*)self);
}

QPushButton* k_editlistwidget_add_button(void* self) {
    return KEditListWidget_AddButton((KEditListWidget*)self);
}

QPushButton* k_editlistwidget_remove_button(void* self) {
    return KEditListWidget_RemoveButton((KEditListWidget*)self);
}

QPushButton* k_editlistwidget_up_button(void* self) {
    return KEditListWidget_UpButton((KEditListWidget*)self);
}

QPushButton* k_editlistwidget_down_button(void* self) {
    return KEditListWidget_DownButton((KEditListWidget*)self);
}

int32_t k_editlistwidget_count(void* self) {
    return KEditListWidget_Count((KEditListWidget*)self);
}

void k_editlistwidget_insert_string_list(void* self, const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_editlistwidget_insert_string_list");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    KEditListWidget_InsertStringList((KEditListWidget*)self, list_list);
    free(list_qstr);
}

void k_editlistwidget_insert_item(void* self, const char* text) {
    KEditListWidget_InsertItem((KEditListWidget*)self, qstring(text));
}

void k_editlistwidget_clear(void* self) {
    KEditListWidget_Clear((KEditListWidget*)self);
}

const char* k_editlistwidget_text(void* self, int index) {
    libqt_string _str = KEditListWidget_Text((KEditListWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_editlistwidget_current_item(void* self) {
    return KEditListWidget_CurrentItem((KEditListWidget*)self);
}

const char* k_editlistwidget_current_text(void* self) {
    libqt_string _str = KEditListWidget_CurrentText((KEditListWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_editlistwidget_items(void* self) {
    libqt_list _arr = KEditListWidget_Items((KEditListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_editlistwidget_items");
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

void k_editlistwidget_set_items(void* self, const char* items[]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_editlistwidget_set_items");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KEditListWidget_SetItems((KEditListWidget*)self, items_list);
    free(items_qstr);
}

int32_t k_editlistwidget_buttons(void* self) {
    return KEditListWidget_Buttons((KEditListWidget*)self);
}

void k_editlistwidget_set_buttons(void* self, int32_t buttons) {
    KEditListWidget_SetButtons((KEditListWidget*)self, buttons);
}

void k_editlistwidget_set_check_at_entering(void* self, bool check) {
    KEditListWidget_SetCheckAtEntering((KEditListWidget*)self, check);
}

bool k_editlistwidget_check_at_entering(void* self) {
    return KEditListWidget_CheckAtEntering((KEditListWidget*)self);
}

void k_editlistwidget_set_custom_editor(void* self, void* editor) {
    KEditListWidget_SetCustomEditor((KEditListWidget*)self, (KEditListWidget__CustomEditor*)editor);
}

bool k_editlistwidget_event_filter(void* self, void* o, void* e) {
    return KEditListWidget_EventFilter((KEditListWidget*)self, (QObject*)o, (QEvent*)e);
}

void k_editlistwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KEditListWidget_OnEventFilter((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_qbase_event_filter(void* self, void* o, void* e) {
    return KEditListWidget_QBaseEventFilter((KEditListWidget*)self, (QObject*)o, (QEvent*)e);
}

void k_editlistwidget_changed(void* self) {
    KEditListWidget_Changed((KEditListWidget*)self);
}

void k_editlistwidget_on_changed(void* self, void (*callback)(void*)) {
    KEditListWidget_Connect_Changed((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_added(void* self, const char* text) {
    KEditListWidget_Added((KEditListWidget*)self, qstring(text));
}

void k_editlistwidget_on_added(void* self, void (*callback)(void*, const char*)) {
    KEditListWidget_Connect_Added((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_removed(void* self, const char* text) {
    KEditListWidget_Removed((KEditListWidget*)self, qstring(text));
}

void k_editlistwidget_on_removed(void* self, void (*callback)(void*, const char*)) {
    KEditListWidget_Connect_Removed((KEditListWidget*)self, (intptr_t)callback);
}

const char* k_editlistwidget_tr2(const char* s, const char* c) {
    libqt_string _str = KEditListWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_editlistwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KEditListWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_insert_string_list2(void* self, const char* list[], int index) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_editlistwidget_insert_string_list2");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    KEditListWidget_InsertStringList2((KEditListWidget*)self, list_list, index);
    free(list_qstr);
}

void k_editlistwidget_insert_item2(void* self, const char* text, int index) {
    KEditListWidget_InsertItem2((KEditListWidget*)self, qstring(text), index);
}

uintptr_t k_editlistwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_editlistwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_editlistwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_editlistwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_editlistwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_editlistwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_editlistwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_editlistwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_editlistwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_editlistwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_editlistwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_editlistwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_editlistwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_editlistwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_editlistwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_editlistwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_editlistwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_editlistwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_editlistwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_editlistwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_editlistwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_editlistwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_editlistwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_editlistwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_editlistwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_editlistwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_editlistwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_editlistwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_editlistwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_editlistwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_editlistwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_editlistwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_editlistwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_editlistwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_editlistwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_editlistwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_editlistwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_editlistwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_editlistwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_editlistwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_editlistwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_editlistwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_editlistwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_editlistwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_editlistwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_editlistwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_editlistwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_editlistwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_editlistwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_editlistwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_editlistwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_editlistwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_editlistwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_editlistwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_editlistwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_editlistwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_editlistwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_editlistwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_editlistwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_editlistwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_editlistwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_editlistwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_editlistwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_editlistwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_editlistwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_editlistwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_editlistwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_editlistwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_editlistwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_editlistwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_editlistwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_editlistwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_editlistwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_editlistwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_editlistwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_editlistwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_editlistwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_editlistwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_editlistwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_editlistwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_editlistwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_editlistwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_editlistwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_editlistwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_editlistwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_editlistwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_editlistwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_editlistwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_editlistwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_editlistwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_editlistwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_editlistwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_editlistwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_editlistwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_editlistwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_editlistwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_editlistwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_editlistwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_editlistwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_editlistwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_editlistwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_editlistwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_editlistwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_editlistwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_editlistwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_editlistwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_editlistwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_editlistwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_editlistwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_editlistwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_editlistwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_editlistwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_editlistwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_editlistwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_editlistwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_editlistwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_editlistwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_editlistwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_editlistwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_editlistwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_editlistwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_editlistwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_editlistwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_editlistwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_editlistwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_editlistwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_editlistwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_editlistwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_editlistwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_editlistwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_editlistwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_editlistwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_editlistwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_editlistwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_editlistwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_editlistwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_editlistwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_editlistwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_editlistwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_editlistwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_editlistwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_editlistwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_editlistwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_editlistwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_editlistwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_editlistwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_editlistwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_editlistwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_editlistwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_editlistwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_editlistwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_editlistwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_editlistwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_editlistwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_editlistwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_editlistwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_editlistwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_editlistwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_editlistwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_editlistwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_editlistwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_editlistwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_editlistwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_editlistwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_editlistwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_editlistwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_editlistwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_editlistwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_editlistwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_editlistwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_editlistwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_editlistwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_editlistwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_editlistwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_editlistwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_editlistwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_editlistwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_editlistwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_editlistwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_editlistwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_editlistwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_editlistwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_editlistwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_editlistwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_editlistwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_editlistwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_editlistwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_editlistwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_editlistwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_editlistwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_editlistwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_editlistwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_editlistwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_editlistwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_editlistwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_editlistwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_editlistwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_editlistwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_editlistwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_editlistwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_editlistwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_editlistwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_editlistwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_editlistwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_editlistwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_editlistwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_editlistwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_editlistwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_editlistwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_editlistwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_editlistwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_editlistwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_editlistwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_editlistwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_editlistwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_editlistwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_editlistwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_editlistwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_editlistwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_editlistwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_editlistwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_editlistwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_editlistwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_editlistwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_editlistwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_editlistwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_editlistwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_editlistwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_editlistwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_editlistwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_editlistwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_editlistwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_editlistwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_editlistwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_editlistwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_editlistwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_editlistwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_editlistwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_editlistwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_editlistwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_editlistwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_editlistwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_editlistwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_editlistwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_editlistwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_editlistwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_editlistwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_editlistwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_editlistwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_editlistwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_editlistwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_editlistwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_editlistwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_editlistwidget_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_editlistwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_editlistwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_editlistwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_editlistwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_editlistwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_editlistwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_editlistwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_editlistwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_editlistwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_editlistwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_editlistwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_editlistwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_editlistwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_editlistwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_editlistwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_editlistwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_editlistwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_editlistwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_editlistwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_editlistwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_editlistwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_editlistwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_editlistwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_editlistwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_editlistwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_editlistwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_editlistwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_editlistwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_editlistwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_editlistwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_editlistwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_editlistwidget_dynamic_property_names");
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

QBindingStorage* k_editlistwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_editlistwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_editlistwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_editlistwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_editlistwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_editlistwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_editlistwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_editlistwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_editlistwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_editlistwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_editlistwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_editlistwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_editlistwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_editlistwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_editlistwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_editlistwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_editlistwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_editlistwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_editlistwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_editlistwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_editlistwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_editlistwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_editlistwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_editlistwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_editlistwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_editlistwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_editlistwidget_dev_type(void* self) {
    return KEditListWidget_DevType((KEditListWidget*)self);
}

int32_t k_editlistwidget_qbase_dev_type(void* self) {
    return KEditListWidget_QBaseDevType((KEditListWidget*)self);
}

void k_editlistwidget_on_dev_type(void* self, int32_t (*callback)()) {
    KEditListWidget_OnDevType((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_set_visible(void* self, bool visible) {
    KEditListWidget_SetVisible((KEditListWidget*)self, visible);
}

void k_editlistwidget_qbase_set_visible(void* self, bool visible) {
    KEditListWidget_QBaseSetVisible((KEditListWidget*)self, visible);
}

void k_editlistwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KEditListWidget_OnSetVisible((KEditListWidget*)self, (intptr_t)callback);
}

QSize* k_editlistwidget_size_hint(void* self) {
    return KEditListWidget_SizeHint((KEditListWidget*)self);
}

QSize* k_editlistwidget_qbase_size_hint(void* self) {
    return KEditListWidget_QBaseSizeHint((KEditListWidget*)self);
}

void k_editlistwidget_on_size_hint(void* self, QSize* (*callback)()) {
    KEditListWidget_OnSizeHint((KEditListWidget*)self, (intptr_t)callback);
}

QSize* k_editlistwidget_minimum_size_hint(void* self) {
    return KEditListWidget_MinimumSizeHint((KEditListWidget*)self);
}

QSize* k_editlistwidget_qbase_minimum_size_hint(void* self) {
    return KEditListWidget_QBaseMinimumSizeHint((KEditListWidget*)self);
}

void k_editlistwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KEditListWidget_OnMinimumSizeHint((KEditListWidget*)self, (intptr_t)callback);
}

int32_t k_editlistwidget_height_for_width(void* self, int param1) {
    return KEditListWidget_HeightForWidth((KEditListWidget*)self, param1);
}

int32_t k_editlistwidget_qbase_height_for_width(void* self, int param1) {
    return KEditListWidget_QBaseHeightForWidth((KEditListWidget*)self, param1);
}

void k_editlistwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KEditListWidget_OnHeightForWidth((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_has_height_for_width(void* self) {
    return KEditListWidget_HasHeightForWidth((KEditListWidget*)self);
}

bool k_editlistwidget_qbase_has_height_for_width(void* self) {
    return KEditListWidget_QBaseHasHeightForWidth((KEditListWidget*)self);
}

void k_editlistwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KEditListWidget_OnHasHeightForWidth((KEditListWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_editlistwidget_paint_engine(void* self) {
    return KEditListWidget_PaintEngine((KEditListWidget*)self);
}

QPaintEngine* k_editlistwidget_qbase_paint_engine(void* self) {
    return KEditListWidget_QBasePaintEngine((KEditListWidget*)self);
}

void k_editlistwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KEditListWidget_OnPaintEngine((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_event(void* self, void* event) {
    return KEditListWidget_Event((KEditListWidget*)self, (QEvent*)event);
}

bool k_editlistwidget_qbase_event(void* self, void* event) {
    return KEditListWidget_QBaseEvent((KEditListWidget*)self, (QEvent*)event);
}

void k_editlistwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KEditListWidget_OnEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_mouse_press_event(void* self, void* event) {
    KEditListWidget_MousePressEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_qbase_mouse_press_event(void* self, void* event) {
    KEditListWidget_QBaseMousePressEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnMousePressEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_mouse_release_event(void* self, void* event) {
    KEditListWidget_MouseReleaseEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_qbase_mouse_release_event(void* self, void* event) {
    KEditListWidget_QBaseMouseReleaseEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnMouseReleaseEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_mouse_double_click_event(void* self, void* event) {
    KEditListWidget_MouseDoubleClickEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_qbase_mouse_double_click_event(void* self, void* event) {
    KEditListWidget_QBaseMouseDoubleClickEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnMouseDoubleClickEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_mouse_move_event(void* self, void* event) {
    KEditListWidget_MouseMoveEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_qbase_mouse_move_event(void* self, void* event) {
    KEditListWidget_QBaseMouseMoveEvent((KEditListWidget*)self, (QMouseEvent*)event);
}

void k_editlistwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnMouseMoveEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_wheel_event(void* self, void* event) {
    KEditListWidget_WheelEvent((KEditListWidget*)self, (QWheelEvent*)event);
}

void k_editlistwidget_qbase_wheel_event(void* self, void* event) {
    KEditListWidget_QBaseWheelEvent((KEditListWidget*)self, (QWheelEvent*)event);
}

void k_editlistwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnWheelEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_key_press_event(void* self, void* event) {
    KEditListWidget_KeyPressEvent((KEditListWidget*)self, (QKeyEvent*)event);
}

void k_editlistwidget_qbase_key_press_event(void* self, void* event) {
    KEditListWidget_QBaseKeyPressEvent((KEditListWidget*)self, (QKeyEvent*)event);
}

void k_editlistwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnKeyPressEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_key_release_event(void* self, void* event) {
    KEditListWidget_KeyReleaseEvent((KEditListWidget*)self, (QKeyEvent*)event);
}

void k_editlistwidget_qbase_key_release_event(void* self, void* event) {
    KEditListWidget_QBaseKeyReleaseEvent((KEditListWidget*)self, (QKeyEvent*)event);
}

void k_editlistwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnKeyReleaseEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_focus_in_event(void* self, void* event) {
    KEditListWidget_FocusInEvent((KEditListWidget*)self, (QFocusEvent*)event);
}

void k_editlistwidget_qbase_focus_in_event(void* self, void* event) {
    KEditListWidget_QBaseFocusInEvent((KEditListWidget*)self, (QFocusEvent*)event);
}

void k_editlistwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnFocusInEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_focus_out_event(void* self, void* event) {
    KEditListWidget_FocusOutEvent((KEditListWidget*)self, (QFocusEvent*)event);
}

void k_editlistwidget_qbase_focus_out_event(void* self, void* event) {
    KEditListWidget_QBaseFocusOutEvent((KEditListWidget*)self, (QFocusEvent*)event);
}

void k_editlistwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnFocusOutEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_enter_event(void* self, void* event) {
    KEditListWidget_EnterEvent((KEditListWidget*)self, (QEnterEvent*)event);
}

void k_editlistwidget_qbase_enter_event(void* self, void* event) {
    KEditListWidget_QBaseEnterEvent((KEditListWidget*)self, (QEnterEvent*)event);
}

void k_editlistwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnEnterEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_leave_event(void* self, void* event) {
    KEditListWidget_LeaveEvent((KEditListWidget*)self, (QEvent*)event);
}

void k_editlistwidget_qbase_leave_event(void* self, void* event) {
    KEditListWidget_QBaseLeaveEvent((KEditListWidget*)self, (QEvent*)event);
}

void k_editlistwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnLeaveEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_paint_event(void* self, void* event) {
    KEditListWidget_PaintEvent((KEditListWidget*)self, (QPaintEvent*)event);
}

void k_editlistwidget_qbase_paint_event(void* self, void* event) {
    KEditListWidget_QBasePaintEvent((KEditListWidget*)self, (QPaintEvent*)event);
}

void k_editlistwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnPaintEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_move_event(void* self, void* event) {
    KEditListWidget_MoveEvent((KEditListWidget*)self, (QMoveEvent*)event);
}

void k_editlistwidget_qbase_move_event(void* self, void* event) {
    KEditListWidget_QBaseMoveEvent((KEditListWidget*)self, (QMoveEvent*)event);
}

void k_editlistwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnMoveEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_resize_event(void* self, void* event) {
    KEditListWidget_ResizeEvent((KEditListWidget*)self, (QResizeEvent*)event);
}

void k_editlistwidget_qbase_resize_event(void* self, void* event) {
    KEditListWidget_QBaseResizeEvent((KEditListWidget*)self, (QResizeEvent*)event);
}

void k_editlistwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnResizeEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_close_event(void* self, void* event) {
    KEditListWidget_CloseEvent((KEditListWidget*)self, (QCloseEvent*)event);
}

void k_editlistwidget_qbase_close_event(void* self, void* event) {
    KEditListWidget_QBaseCloseEvent((KEditListWidget*)self, (QCloseEvent*)event);
}

void k_editlistwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnCloseEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_context_menu_event(void* self, void* event) {
    KEditListWidget_ContextMenuEvent((KEditListWidget*)self, (QContextMenuEvent*)event);
}

void k_editlistwidget_qbase_context_menu_event(void* self, void* event) {
    KEditListWidget_QBaseContextMenuEvent((KEditListWidget*)self, (QContextMenuEvent*)event);
}

void k_editlistwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnContextMenuEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_tablet_event(void* self, void* event) {
    KEditListWidget_TabletEvent((KEditListWidget*)self, (QTabletEvent*)event);
}

void k_editlistwidget_qbase_tablet_event(void* self, void* event) {
    KEditListWidget_QBaseTabletEvent((KEditListWidget*)self, (QTabletEvent*)event);
}

void k_editlistwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnTabletEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_action_event(void* self, void* event) {
    KEditListWidget_ActionEvent((KEditListWidget*)self, (QActionEvent*)event);
}

void k_editlistwidget_qbase_action_event(void* self, void* event) {
    KEditListWidget_QBaseActionEvent((KEditListWidget*)self, (QActionEvent*)event);
}

void k_editlistwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnActionEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_drag_enter_event(void* self, void* event) {
    KEditListWidget_DragEnterEvent((KEditListWidget*)self, (QDragEnterEvent*)event);
}

void k_editlistwidget_qbase_drag_enter_event(void* self, void* event) {
    KEditListWidget_QBaseDragEnterEvent((KEditListWidget*)self, (QDragEnterEvent*)event);
}

void k_editlistwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnDragEnterEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_drag_move_event(void* self, void* event) {
    KEditListWidget_DragMoveEvent((KEditListWidget*)self, (QDragMoveEvent*)event);
}

void k_editlistwidget_qbase_drag_move_event(void* self, void* event) {
    KEditListWidget_QBaseDragMoveEvent((KEditListWidget*)self, (QDragMoveEvent*)event);
}

void k_editlistwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnDragMoveEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_drag_leave_event(void* self, void* event) {
    KEditListWidget_DragLeaveEvent((KEditListWidget*)self, (QDragLeaveEvent*)event);
}

void k_editlistwidget_qbase_drag_leave_event(void* self, void* event) {
    KEditListWidget_QBaseDragLeaveEvent((KEditListWidget*)self, (QDragLeaveEvent*)event);
}

void k_editlistwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnDragLeaveEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_drop_event(void* self, void* event) {
    KEditListWidget_DropEvent((KEditListWidget*)self, (QDropEvent*)event);
}

void k_editlistwidget_qbase_drop_event(void* self, void* event) {
    KEditListWidget_QBaseDropEvent((KEditListWidget*)self, (QDropEvent*)event);
}

void k_editlistwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnDropEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_show_event(void* self, void* event) {
    KEditListWidget_ShowEvent((KEditListWidget*)self, (QShowEvent*)event);
}

void k_editlistwidget_qbase_show_event(void* self, void* event) {
    KEditListWidget_QBaseShowEvent((KEditListWidget*)self, (QShowEvent*)event);
}

void k_editlistwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnShowEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_hide_event(void* self, void* event) {
    KEditListWidget_HideEvent((KEditListWidget*)self, (QHideEvent*)event);
}

void k_editlistwidget_qbase_hide_event(void* self, void* event) {
    KEditListWidget_QBaseHideEvent((KEditListWidget*)self, (QHideEvent*)event);
}

void k_editlistwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnHideEvent((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KEditListWidget_NativeEvent((KEditListWidget*)self, qstring(eventType), message, result);
}

bool k_editlistwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KEditListWidget_QBaseNativeEvent((KEditListWidget*)self, qstring(eventType), message, result);
}

void k_editlistwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KEditListWidget_OnNativeEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_change_event(void* self, void* param1) {
    KEditListWidget_ChangeEvent((KEditListWidget*)self, (QEvent*)param1);
}

void k_editlistwidget_qbase_change_event(void* self, void* param1) {
    KEditListWidget_QBaseChangeEvent((KEditListWidget*)self, (QEvent*)param1);
}

void k_editlistwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnChangeEvent((KEditListWidget*)self, (intptr_t)callback);
}

int32_t k_editlistwidget_metric(void* self, int32_t param1) {
    return KEditListWidget_Metric((KEditListWidget*)self, param1);
}

int32_t k_editlistwidget_qbase_metric(void* self, int32_t param1) {
    return KEditListWidget_QBaseMetric((KEditListWidget*)self, param1);
}

void k_editlistwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KEditListWidget_OnMetric((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_init_painter(void* self, void* painter) {
    KEditListWidget_InitPainter((KEditListWidget*)self, (QPainter*)painter);
}

void k_editlistwidget_qbase_init_painter(void* self, void* painter) {
    KEditListWidget_QBaseInitPainter((KEditListWidget*)self, (QPainter*)painter);
}

void k_editlistwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnInitPainter((KEditListWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_editlistwidget_redirected(void* self, void* offset) {
    return KEditListWidget_Redirected((KEditListWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_editlistwidget_qbase_redirected(void* self, void* offset) {
    return KEditListWidget_QBaseRedirected((KEditListWidget*)self, (QPoint*)offset);
}

void k_editlistwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KEditListWidget_OnRedirected((KEditListWidget*)self, (intptr_t)callback);
}

QPainter* k_editlistwidget_shared_painter(void* self) {
    return KEditListWidget_SharedPainter((KEditListWidget*)self);
}

QPainter* k_editlistwidget_qbase_shared_painter(void* self) {
    return KEditListWidget_QBaseSharedPainter((KEditListWidget*)self);
}

void k_editlistwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KEditListWidget_OnSharedPainter((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_input_method_event(void* self, void* param1) {
    KEditListWidget_InputMethodEvent((KEditListWidget*)self, (QInputMethodEvent*)param1);
}

void k_editlistwidget_qbase_input_method_event(void* self, void* param1) {
    KEditListWidget_QBaseInputMethodEvent((KEditListWidget*)self, (QInputMethodEvent*)param1);
}

void k_editlistwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnInputMethodEvent((KEditListWidget*)self, (intptr_t)callback);
}

QVariant* k_editlistwidget_input_method_query(void* self, int64_t param1) {
    return KEditListWidget_InputMethodQuery((KEditListWidget*)self, param1);
}

QVariant* k_editlistwidget_qbase_input_method_query(void* self, int64_t param1) {
    return KEditListWidget_QBaseInputMethodQuery((KEditListWidget*)self, param1);
}

void k_editlistwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KEditListWidget_OnInputMethodQuery((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_focus_next_prev_child(void* self, bool next) {
    return KEditListWidget_FocusNextPrevChild((KEditListWidget*)self, next);
}

bool k_editlistwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KEditListWidget_QBaseFocusNextPrevChild((KEditListWidget*)self, next);
}

void k_editlistwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KEditListWidget_OnFocusNextPrevChild((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_timer_event(void* self, void* event) {
    KEditListWidget_TimerEvent((KEditListWidget*)self, (QTimerEvent*)event);
}

void k_editlistwidget_qbase_timer_event(void* self, void* event) {
    KEditListWidget_QBaseTimerEvent((KEditListWidget*)self, (QTimerEvent*)event);
}

void k_editlistwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnTimerEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_child_event(void* self, void* event) {
    KEditListWidget_ChildEvent((KEditListWidget*)self, (QChildEvent*)event);
}

void k_editlistwidget_qbase_child_event(void* self, void* event) {
    KEditListWidget_QBaseChildEvent((KEditListWidget*)self, (QChildEvent*)event);
}

void k_editlistwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnChildEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_custom_event(void* self, void* event) {
    KEditListWidget_CustomEvent((KEditListWidget*)self, (QEvent*)event);
}

void k_editlistwidget_qbase_custom_event(void* self, void* event) {
    KEditListWidget_QBaseCustomEvent((KEditListWidget*)self, (QEvent*)event);
}

void k_editlistwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnCustomEvent((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_connect_notify(void* self, void* signal) {
    KEditListWidget_ConnectNotify((KEditListWidget*)self, (QMetaMethod*)signal);
}

void k_editlistwidget_qbase_connect_notify(void* self, void* signal) {
    KEditListWidget_QBaseConnectNotify((KEditListWidget*)self, (QMetaMethod*)signal);
}

void k_editlistwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnConnectNotify((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_disconnect_notify(void* self, void* signal) {
    KEditListWidget_DisconnectNotify((KEditListWidget*)self, (QMetaMethod*)signal);
}

void k_editlistwidget_qbase_disconnect_notify(void* self, void* signal) {
    KEditListWidget_QBaseDisconnectNotify((KEditListWidget*)self, (QMetaMethod*)signal);
}

void k_editlistwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KEditListWidget_OnDisconnectNotify((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_update_micro_focus(void* self) {
    KEditListWidget_UpdateMicroFocus((KEditListWidget*)self);
}

void k_editlistwidget_qbase_update_micro_focus(void* self) {
    KEditListWidget_QBaseUpdateMicroFocus((KEditListWidget*)self);
}

void k_editlistwidget_on_update_micro_focus(void* self, void (*callback)()) {
    KEditListWidget_OnUpdateMicroFocus((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_create(void* self) {
    KEditListWidget_Create((KEditListWidget*)self);
}

void k_editlistwidget_qbase_create(void* self) {
    KEditListWidget_QBaseCreate((KEditListWidget*)self);
}

void k_editlistwidget_on_create(void* self, void (*callback)()) {
    KEditListWidget_OnCreate((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_destroy(void* self) {
    KEditListWidget_Destroy((KEditListWidget*)self);
}

void k_editlistwidget_qbase_destroy(void* self) {
    KEditListWidget_QBaseDestroy((KEditListWidget*)self);
}

void k_editlistwidget_on_destroy(void* self, void (*callback)()) {
    KEditListWidget_OnDestroy((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_focus_next_child(void* self) {
    return KEditListWidget_FocusNextChild((KEditListWidget*)self);
}

bool k_editlistwidget_qbase_focus_next_child(void* self) {
    return KEditListWidget_QBaseFocusNextChild((KEditListWidget*)self);
}

void k_editlistwidget_on_focus_next_child(void* self, bool (*callback)()) {
    KEditListWidget_OnFocusNextChild((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_focus_previous_child(void* self) {
    return KEditListWidget_FocusPreviousChild((KEditListWidget*)self);
}

bool k_editlistwidget_qbase_focus_previous_child(void* self) {
    return KEditListWidget_QBaseFocusPreviousChild((KEditListWidget*)self);
}

void k_editlistwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KEditListWidget_OnFocusPreviousChild((KEditListWidget*)self, (intptr_t)callback);
}

QObject* k_editlistwidget_sender(void* self) {
    return KEditListWidget_Sender((KEditListWidget*)self);
}

QObject* k_editlistwidget_qbase_sender(void* self) {
    return KEditListWidget_QBaseSender((KEditListWidget*)self);
}

void k_editlistwidget_on_sender(void* self, QObject* (*callback)()) {
    KEditListWidget_OnSender((KEditListWidget*)self, (intptr_t)callback);
}

int32_t k_editlistwidget_sender_signal_index(void* self) {
    return KEditListWidget_SenderSignalIndex((KEditListWidget*)self);
}

int32_t k_editlistwidget_qbase_sender_signal_index(void* self) {
    return KEditListWidget_QBaseSenderSignalIndex((KEditListWidget*)self);
}

void k_editlistwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KEditListWidget_OnSenderSignalIndex((KEditListWidget*)self, (intptr_t)callback);
}

int32_t k_editlistwidget_receivers(void* self, const char* signal) {
    return KEditListWidget_Receivers((KEditListWidget*)self, signal);
}

int32_t k_editlistwidget_qbase_receivers(void* self, const char* signal) {
    return KEditListWidget_QBaseReceivers((KEditListWidget*)self, signal);
}

void k_editlistwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KEditListWidget_OnReceivers((KEditListWidget*)self, (intptr_t)callback);
}

bool k_editlistwidget_is_signal_connected(void* self, void* signal) {
    return KEditListWidget_IsSignalConnected((KEditListWidget*)self, (QMetaMethod*)signal);
}

bool k_editlistwidget_qbase_is_signal_connected(void* self, void* signal) {
    return KEditListWidget_QBaseIsSignalConnected((KEditListWidget*)self, (QMetaMethod*)signal);
}

void k_editlistwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KEditListWidget_OnIsSignalConnected((KEditListWidget*)self, (intptr_t)callback);
}

double k_editlistwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KEditListWidget_GetDecodedMetricF((KEditListWidget*)self, metricA, metricB);
}

double k_editlistwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KEditListWidget_QBaseGetDecodedMetricF((KEditListWidget*)self, metricA, metricB);
}

void k_editlistwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KEditListWidget_OnGetDecodedMetricF((KEditListWidget*)self, (intptr_t)callback);
}

void k_editlistwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_editlistwidget_delete(void* self) {
    KEditListWidget_Delete((KEditListWidget*)(self));
}

KEditListWidget__CustomEditor* k_editlistwidget__customeditor_new() {
    return KEditListWidget__CustomEditor_new();
}

KEditListWidget__CustomEditor* k_editlistwidget__customeditor_new2(void* repWidget, void* edit) {
    return KEditListWidget__CustomEditor_new2((QWidget*)repWidget, (QLineEdit*)edit);
}

KEditListWidget__CustomEditor* k_editlistwidget__customeditor_new3(void* combo) {
    return KEditListWidget__CustomEditor_new3((QComboBox*)combo);
}

void k_editlistwidget__customeditor_set_representation_widget(void* self, void* repWidget) {
    KEditListWidget__CustomEditor_SetRepresentationWidget((KEditListWidget__CustomEditor*)self, (QWidget*)repWidget);
}

void k_editlistwidget__customeditor_set_line_edit(void* self, void* edit) {
    KEditListWidget__CustomEditor_SetLineEdit((KEditListWidget__CustomEditor*)self, (QLineEdit*)edit);
}

QWidget* k_editlistwidget__customeditor_representation_widget(void* self) {
    return KEditListWidget__CustomEditor_RepresentationWidget((KEditListWidget__CustomEditor*)self);
}

void k_editlistwidget__customeditor_on_representation_widget(void* self, QWidget* (*callback)()) {
    KEditListWidget__CustomEditor_OnRepresentationWidget((KEditListWidget__CustomEditor*)self, (intptr_t)callback);
}

QWidget* k_editlistwidget__customeditor_qbase_representation_widget(void* self) {
    return KEditListWidget__CustomEditor_QBaseRepresentationWidget((KEditListWidget__CustomEditor*)self);
}

QLineEdit* k_editlistwidget__customeditor_line_edit(void* self) {
    return KEditListWidget__CustomEditor_LineEdit((KEditListWidget__CustomEditor*)self);
}

void k_editlistwidget__customeditor_on_line_edit(void* self, QLineEdit* (*callback)()) {
    KEditListWidget__CustomEditor_OnLineEdit((KEditListWidget__CustomEditor*)self, (intptr_t)callback);
}

QLineEdit* k_editlistwidget__customeditor_qbase_line_edit(void* self) {
    return KEditListWidget__CustomEditor_QBaseLineEdit((KEditListWidget__CustomEditor*)self);
}

void k_editlistwidget__customeditor_delete(void* self) {
    KEditListWidget__CustomEditor_Delete((KEditListWidget__CustomEditor*)(self));
}
